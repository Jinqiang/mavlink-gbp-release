/** @file
 *	@brief MAVLink comm protocol testsuite generated from gumstix_mastermind.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef GUMSTIX_MASTERMIND_TESTSUITE_H
#define GUMSTIX_MASTERMIND_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_gumstix_mastermind(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_gumstix_mastermind(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_to_gum(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_to_gum_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,{ 241.0, 242.0, 243.0, 244.0 },19731,19835,{ 19939, 19940, 19941, 19942 },185
    };
	mavlink_to_gum_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.x_m = packet_in.x_m;
        	packet1.y_m = packet_in.y_m;
        	packet1.z_m = packet_in.z_m;
        	packet1.c_m = packet_in.c_m;
        	packet1.x_ref = packet_in.x_ref;
        	packet1.y_ref = packet_in.y_ref;
        	packet1.z_ref = packet_in.z_ref;
        	packet1.c_ref = packet_in.c_ref;
        	packet1.code = packet_in.code;
        	packet1.index = packet_in.index;
        	packet1.flag_visited = packet_in.flag_visited;
        
        	mav_array_memcpy(packet1.aux_float, packet_in.aux_float, sizeof(float)*4);
        	mav_array_memcpy(packet1.int_float, packet_in.int_float, sizeof(uint16_t)*4);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_to_gum_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_to_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_to_gum_pack(system_id, component_id, &msg , packet1.code , packet1.x_m , packet1.y_m , packet1.z_m , packet1.c_m , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.flag_visited , packet1.index , packet1.aux_float , packet1.int_float );
	mavlink_msg_to_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_to_gum_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.code , packet1.x_m , packet1.y_m , packet1.z_m , packet1.c_m , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.flag_visited , packet1.index , packet1.aux_float , packet1.int_float );
	mavlink_msg_to_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_to_gum_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_to_gum_send(MAVLINK_COMM_1 , packet1.code , packet1.x_m , packet1.y_m , packet1.z_m , packet1.c_m , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.flag_visited , packet1.index , packet1.aux_float , packet1.int_float );
	mavlink_msg_to_gum_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_from_gum(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_from_gum_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,465.0,493.0,521.0,549.0,577.0,605.0,{ 633.0, 634.0, 635.0, 636.0 },22643,{ 22747, 22748, 22749, 22750 }
    };
	mavlink_from_gum_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.x = packet_in.x;
        	packet1.y = packet_in.y;
        	packet1.z = packet_in.z;
        	packet1.ug = packet_in.ug;
        	packet1.vg = packet_in.vg;
        	packet1.wg = packet_in.wg;
        	packet1.acx = packet_in.acx;
        	packet1.acy = packet_in.acy;
        	packet1.acz = packet_in.acz;
        	packet1.a = packet_in.a;
        	packet1.b = packet_in.b;
        	packet1.c = packet_in.c;
        	packet1.x_ref = packet_in.x_ref;
        	packet1.y_ref = packet_in.y_ref;
        	packet1.z_ref = packet_in.z_ref;
        	packet1.c_ref = packet_in.c_ref;
        	packet1.u_ref = packet_in.u_ref;
        	packet1.v_ref = packet_in.v_ref;
        	packet1.w_ref = packet_in.w_ref;
        	packet1.ax_ref = packet_in.ax_ref;
        	packet1.ay_ref = packet_in.ay_ref;
        	packet1.az_ref = packet_in.az_ref;
        	packet1.code = packet_in.code;
        
        	mav_array_memcpy(packet1.aux_float, packet_in.aux_float, sizeof(float)*4);
        	mav_array_memcpy(packet1.aux_int, packet_in.aux_int, sizeof(uint16_t)*4);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_from_gum_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_from_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_from_gum_pack(system_id, component_id, &msg , packet1.code , packet1.x , packet1.y , packet1.z , packet1.ug , packet1.vg , packet1.wg , packet1.acx , packet1.acy , packet1.acz , packet1.a , packet1.b , packet1.c , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.u_ref , packet1.v_ref , packet1.w_ref , packet1.ax_ref , packet1.ay_ref , packet1.az_ref , packet1.aux_float , packet1.aux_int );
	mavlink_msg_from_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_from_gum_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.code , packet1.x , packet1.y , packet1.z , packet1.ug , packet1.vg , packet1.wg , packet1.acx , packet1.acy , packet1.acz , packet1.a , packet1.b , packet1.c , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.u_ref , packet1.v_ref , packet1.w_ref , packet1.ax_ref , packet1.ay_ref , packet1.az_ref , packet1.aux_float , packet1.aux_int );
	mavlink_msg_from_gum_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_from_gum_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_from_gum_send(MAVLINK_COMM_1 , packet1.code , packet1.x , packet1.y , packet1.z , packet1.ug , packet1.vg , packet1.wg , packet1.acx , packet1.acy , packet1.acz , packet1.a , packet1.b , packet1.c , packet1.x_ref , packet1.y_ref , packet1.z_ref , packet1.c_ref , packet1.u_ref , packet1.v_ref , packet1.w_ref , packet1.ax_ref , packet1.ay_ref , packet1.az_ref , packet1.aux_float , packet1.aux_int );
	mavlink_msg_from_gum_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gumstix_mastermind(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_to_gum(system_id, component_id, last_msg);
	mavlink_test_from_gum(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GUMSTIX_MASTERMIND_TESTSUITE_H
