#include "hw_conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void hw_conv::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void hw_conv::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void hw_conv::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[2];
}

void hw_conv::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void hw_conv::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sin_V_data_V_0_vld_out.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read()));
}

void hw_conv::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, sin_V_data_V_0_vld_out.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())));
}

void hw_conv::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, sin_V_data_V_0_vld_out.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state4_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state5_io.read())));
}

void hw_conv::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, sin_V_data_V_0_vld_out.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read()));
}

void hw_conv::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void hw_conv::thread_ap_block_state4_io() {
    ap_block_state4_io = (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sout_V_data_V_1_ack_in.read()));
}

void hw_conv::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void hw_conv::thread_ap_block_state5_io() {
    ap_block_state5_io = (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, sout_V_data_V_1_ack_in.read()));
}

void hw_conv::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void hw_conv::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_logic_0, sout_V_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, sout_V_dest_V_1_ack_in.read()));
}

void hw_conv::thread_ap_condition_pp0_exit_iter1_state3() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
        ap_condition_pp0_exit_iter1_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter1_state3 = ap_const_logic_0;
    }
}

void hw_conv::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void hw_conv::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void hw_conv::thread_ap_phi_mux_loc_phi_fu_5268_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_21914.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ap_phi_mux_loc_phi_fu_5268_p4 = loc_2_reg_21926.read();
    } else {
        ap_phi_mux_loc_phi_fu_5268_p4 = loc_reg_5264.read();
    }
}

void hw_conv::thread_ap_predicate_op1570_read_state2() {
    ap_predicate_op1570_read_state2 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_5290_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_fu_5302_p3.read()));
}

void hw_conv::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void hw_conv::thread_exitcond1_fu_5290_p2() {
    exitcond1_fu_5290_p2 = (!i_reg_5276.read().is_01() || !ap_const_lv19_40201.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_5276.read() == ap_const_lv19_40201);
}

void hw_conv::thread_i_1_fu_5296_p2() {
    i_1_fu_5296_p2 = (!i_reg_5276.read().is_01() || !ap_const_lv19_1.is_01())? sc_lv<19>(): (sc_biguint<19>(i_reg_5276.read()) + sc_biguint<19>(ap_const_lv19_1));
}

void hw_conv::thread_loc_1_fu_5319_p2() {
    loc_1_fu_5319_p2 = (!ap_phi_mux_loc_phi_fu_5268_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_loc_phi_fu_5268_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void hw_conv::thread_loc_2_fu_5337_p3() {
    loc_2_fu_5337_p3 = (!tmp_1_fu_5325_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_1_fu_5325_p2.read()[0].to_bool())? loc_1_fu_5319_p2.read(): tmp_2_fu_5331_p2.read());
}

void hw_conv::thread_result_2_8_fu_15739_p2() {
    result_2_8_fu_15739_p2 = (!tmp7_fu_15717_p2.read().is_01() || !tmp1022_cast_fu_15735_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp7_fu_15717_p2.read()) + sc_biguint<12>(tmp1022_cast_fu_15735_p1.read()));
}

void hw_conv::thread_sin_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_5290_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_fu_5302_p3.read()))) {
        sin_TDATA_blk_n = sin_V_data_V_0_state.read()[0];
    } else {
        sin_TDATA_blk_n = ap_const_logic_1;
    }
}

void hw_conv::thread_sin_TREADY() {
    sin_TREADY = sin_V_dest_V_0_state.read()[1];
}

void hw_conv::thread_sin_V_data_V_0_ack_in() {
    sin_V_data_V_0_ack_in = sin_V_data_V_0_state.read()[1];
}

void hw_conv::thread_sin_V_data_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sin_V_data_V_0_ack_out = ap_const_logic_1;
    } else {
        sin_V_data_V_0_ack_out = ap_const_logic_0;
    }
}

void hw_conv::thread_sin_V_data_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, sin_V_data_V_0_sel.read())) {
        sin_V_data_V_0_data_out = sin_V_data_V_0_payload_B.read();
    } else {
        sin_V_data_V_0_data_out = sin_V_data_V_0_payload_A.read();
    }
}

void hw_conv::thread_sin_V_data_V_0_load_A() {
    sin_V_data_V_0_load_A = (sin_V_data_V_0_state_cmp_full.read() & ~sin_V_data_V_0_sel_wr.read());
}

void hw_conv::thread_sin_V_data_V_0_load_B() {
    sin_V_data_V_0_load_B = (sin_V_data_V_0_sel_wr.read() & sin_V_data_V_0_state_cmp_full.read());
}

void hw_conv::thread_sin_V_data_V_0_sel() {
    sin_V_data_V_0_sel = sin_V_data_V_0_sel_rd.read();
}

void hw_conv::thread_sin_V_data_V_0_state_cmp_full() {
    sin_V_data_V_0_state_cmp_full =  (sc_logic) ((!sin_V_data_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(sin_V_data_V_0_state.read() != ap_const_lv2_1))[0];
}

void hw_conv::thread_sin_V_data_V_0_vld_in() {
    sin_V_data_V_0_vld_in = sin_TVALID.read();
}

void hw_conv::thread_sin_V_data_V_0_vld_out() {
    sin_V_data_V_0_vld_out = sin_V_data_V_0_state.read()[0];
}

void hw_conv::thread_sin_V_dest_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1570_read_state2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sin_V_dest_V_0_ack_out = ap_const_logic_1;
    } else {
        sin_V_dest_V_0_ack_out = ap_const_logic_0;
    }
}

void hw_conv::thread_sin_V_dest_V_0_vld_in() {
    sin_V_dest_V_0_vld_in = sin_TVALID.read();
}

void hw_conv::thread_sout_TDATA() {
    sout_TDATA = sout_V_data_V_1_data_out.read();
}

void hw_conv::thread_sout_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter2_reg.read())))) {
        sout_TDATA_blk_n = sout_V_data_V_1_state.read()[1];
    } else {
        sout_TDATA_blk_n = ap_const_logic_1;
    }
}

void hw_conv::thread_sout_TDEST() {
    sout_TDEST = sout_V_dest_V_1_data_out.read();
}

void hw_conv::thread_sout_TID() {
    sout_TID = sout_V_id_V_1_data_out.read();
}

void hw_conv::thread_sout_TKEEP() {
    sout_TKEEP = sout_V_keep_V_1_data_out.read();
}

void hw_conv::thread_sout_TLAST() {
    sout_TLAST = sout_V_last_V_1_data_out.read();
}

void hw_conv::thread_sout_TSTRB() {
    sout_TSTRB = sout_V_strb_V_1_data_out.read();
}

void hw_conv::thread_sout_TUSER() {
    sout_TUSER = sout_V_user_V_1_data_out.read();
}

void hw_conv::thread_sout_TVALID() {
    sout_TVALID = sout_V_dest_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_data_V_1_ack_in() {
    sout_V_data_V_1_ack_in = sout_V_data_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_data_V_1_ack_out() {
    sout_V_data_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_data_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, sout_V_data_V_1_sel.read())) {
        sout_V_data_V_1_data_out = sout_V_data_V_1_payload_B.read();
    } else {
        sout_V_data_V_1_data_out = sout_V_data_V_1_payload_A.read();
    }
}

void hw_conv::thread_sout_V_data_V_1_load_A() {
    sout_V_data_V_1_load_A = (sout_V_data_V_1_state_cmp_full.read() & ~sout_V_data_V_1_sel_wr.read());
}

void hw_conv::thread_sout_V_data_V_1_load_B() {
    sout_V_data_V_1_load_B = (sout_V_data_V_1_sel_wr.read() & sout_V_data_V_1_state_cmp_full.read());
}

void hw_conv::thread_sout_V_data_V_1_sel() {
    sout_V_data_V_1_sel = sout_V_data_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_data_V_1_state_cmp_full() {
    sout_V_data_V_1_state_cmp_full =  (sc_logic) ((!sout_V_data_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(sout_V_data_V_1_state.read() != ap_const_lv2_1))[0];
}

void hw_conv::thread_sout_V_data_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_data_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_data_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_data_V_1_vld_out() {
    sout_V_data_V_1_vld_out = sout_V_data_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_dest_V_1_ack_in() {
    sout_V_dest_V_1_ack_in = sout_V_dest_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_dest_V_1_ack_out() {
    sout_V_dest_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_dest_V_1_data_out() {
    sout_V_dest_V_1_data_out = ap_const_lv1_0;
}

void hw_conv::thread_sout_V_dest_V_1_sel() {
    sout_V_dest_V_1_sel = sout_V_dest_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_dest_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_dest_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_dest_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_dest_V_1_vld_out() {
    sout_V_dest_V_1_vld_out = sout_V_dest_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_id_V_1_ack_in() {
    sout_V_id_V_1_ack_in = sout_V_id_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_id_V_1_ack_out() {
    sout_V_id_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_id_V_1_data_out() {
    sout_V_id_V_1_data_out = ap_const_lv1_0;
}

void hw_conv::thread_sout_V_id_V_1_sel() {
    sout_V_id_V_1_sel = sout_V_id_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_id_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_id_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_id_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_id_V_1_vld_out() {
    sout_V_id_V_1_vld_out = sout_V_id_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_keep_V_1_ack_in() {
    sout_V_keep_V_1_ack_in = sout_V_keep_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_keep_V_1_ack_out() {
    sout_V_keep_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_keep_V_1_data_out() {
    sout_V_keep_V_1_data_out = ap_const_lv1_1;
}

void hw_conv::thread_sout_V_keep_V_1_sel() {
    sout_V_keep_V_1_sel = sout_V_keep_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_keep_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_keep_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_keep_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_keep_V_1_vld_out() {
    sout_V_keep_V_1_vld_out = sout_V_keep_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_last_V_1_ack_in() {
    sout_V_last_V_1_ack_in = sout_V_last_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_last_V_1_ack_out() {
    sout_V_last_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, sout_V_last_V_1_sel.read())) {
        sout_V_last_V_1_data_out = sout_V_last_V_1_payload_B.read();
    } else {
        sout_V_last_V_1_data_out = sout_V_last_V_1_payload_A.read();
    }
}

void hw_conv::thread_sout_V_last_V_1_load_A() {
    sout_V_last_V_1_load_A = (sout_V_last_V_1_state_cmp_full.read() & ~sout_V_last_V_1_sel_wr.read());
}

void hw_conv::thread_sout_V_last_V_1_load_B() {
    sout_V_last_V_1_load_B = (sout_V_last_V_1_sel_wr.read() & sout_V_last_V_1_state_cmp_full.read());
}

void hw_conv::thread_sout_V_last_V_1_sel() {
    sout_V_last_V_1_sel = sout_V_last_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_last_V_1_state_cmp_full() {
    sout_V_last_V_1_state_cmp_full =  (sc_logic) ((!sout_V_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(sout_V_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void hw_conv::thread_sout_V_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_last_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_last_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_last_V_1_vld_out() {
    sout_V_last_V_1_vld_out = sout_V_last_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_strb_V_1_ack_in() {
    sout_V_strb_V_1_ack_in = sout_V_strb_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_strb_V_1_ack_out() {
    sout_V_strb_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_strb_V_1_data_out() {
    sout_V_strb_V_1_data_out = ap_const_lv1_0;
}

void hw_conv::thread_sout_V_strb_V_1_sel() {
    sout_V_strb_V_1_sel = sout_V_strb_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_strb_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_strb_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_strb_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_strb_V_1_vld_out() {
    sout_V_strb_V_1_vld_out = sout_V_strb_V_1_state.read()[0];
}

void hw_conv::thread_sout_V_user_V_1_ack_in() {
    sout_V_user_V_1_ack_in = sout_V_user_V_1_state.read()[1];
}

void hw_conv::thread_sout_V_user_V_1_ack_out() {
    sout_V_user_V_1_ack_out = sout_TREADY.read();
}

void hw_conv::thread_sout_V_user_V_1_data_out() {
    sout_V_user_V_1_data_out = ap_const_lv1_0;
}

void hw_conv::thread_sout_V_user_V_1_sel() {
    sout_V_user_V_1_sel = sout_V_user_V_1_sel_rd.read();
}

void hw_conv::thread_sout_V_user_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_21931_pp0_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sout_V_user_V_1_vld_in = ap_const_logic_1;
    } else {
        sout_V_user_V_1_vld_in = ap_const_logic_0;
    }
}

void hw_conv::thread_sout_V_user_V_1_vld_out() {
    sout_V_user_V_1_vld_out = sout_V_user_V_1_state.read()[0];
}

void hw_conv::thread_tmp1020_cast_fu_15711_p1() {
    tmp1020_cast_fu_15711_p1 = esl_zext<12,11>(tmp5_reg_21940.read());
}

void hw_conv::thread_tmp1021_cast_fu_15714_p1() {
    tmp1021_cast_fu_15714_p1 = esl_zext<12,10>(tmp6_reg_21945.read());
}

void hw_conv::thread_tmp1022_cast_fu_15735_p1() {
    tmp1022_cast_fu_15735_p1 = esl_zext<12,11>(tmp4_fu_15729_p2.read());
}

void hw_conv::thread_tmp1023_cast_fu_15723_p1() {
    tmp1023_cast_fu_15723_p1 = esl_zext<11,10>(tmp8_reg_21950.read());
}

void hw_conv::thread_tmp1024_cast_fu_15726_p1() {
    tmp1024_cast_fu_15726_p1 = esl_zext<11,10>(tmp3_reg_21955.read());
}

void hw_conv::thread_tmp1025_cast_fu_15701_p1() {
    tmp1025_cast_fu_15701_p1 = esl_zext<10,9>(tmp9_fu_15695_p2.read());
}

void hw_conv::thread_tmp3_fu_15705_p2() {
    tmp3_fu_15705_p2 = (!tmp_15_2_cast_fu_15618_p1.read().is_01() || !tmp1025_cast_fu_15701_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_15_2_cast_fu_15618_p1.read()) + sc_biguint<10>(tmp1025_cast_fu_15701_p1.read()));
}

void hw_conv::thread_tmp4_fu_15729_p2() {
    tmp4_fu_15729_p2 = (!tmp1023_cast_fu_15723_p1.read().is_01() || !tmp1024_cast_fu_15726_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp1023_cast_fu_15723_p1.read()) + sc_biguint<11>(tmp1024_cast_fu_15726_p1.read()));
}

void hw_conv::thread_tmp5_fu_15677_p2() {
    tmp5_fu_15677_p2 = (!tmp_18_4_cast_fu_15642_p1.read().is_01() || !tmp_18_3_cast_fu_15630_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_18_4_cast_fu_15642_p1.read()) + sc_biguint<11>(tmp_18_3_cast_fu_15630_p1.read()));
}

void hw_conv::thread_tmp6_fu_15683_p2() {
    tmp6_fu_15683_p2 = (!tmp_18_7_cast_fu_15669_p1.read().is_01() || !tmp_18_5_cast_fu_15654_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_7_cast_fu_15669_p1.read()) + sc_biguint<10>(tmp_18_5_cast_fu_15654_p1.read()));
}

void hw_conv::thread_tmp7_fu_15717_p2() {
    tmp7_fu_15717_p2 = (!tmp1020_cast_fu_15711_p1.read().is_01() || !tmp1021_cast_fu_15714_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp1020_cast_fu_15711_p1.read()) + sc_biguint<12>(tmp1021_cast_fu_15714_p1.read()));
}

void hw_conv::thread_tmp8_fu_15689_p2() {
    tmp8_fu_15689_p2 = (!tmp_cast_fu_15602_p1.read().is_01() || !tmp_18_1_cast_fu_15614_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_cast_fu_15602_p1.read()) + sc_biguint<10>(tmp_18_1_cast_fu_15614_p1.read()));
}

void hw_conv::thread_tmp9_fu_15695_p2() {
    tmp9_fu_15695_p2 = (!tmp_15_8_cast_fu_15673_p1.read().is_01() || !tmp_15_6_cast_fu_15658_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_15_8_cast_fu_15673_p1.read()) + sc_biguint<9>(tmp_15_6_cast_fu_15658_p1.read()));
}

void hw_conv::thread_tmp_15_2_cast_fu_15618_p1() {
    tmp_15_2_cast_fu_15618_p1 = esl_zext<10,8>(lbuf_0_508_fu_1124.read());
}

void hw_conv::thread_tmp_15_6_cast_fu_15658_p1() {
    tmp_15_6_cast_fu_15658_p1 = esl_zext<9,8>(kbuf_2_0_fu_1116.read());
}

void hw_conv::thread_tmp_15_8_cast_fu_15673_p1() {
    tmp_15_8_cast_fu_15673_p1 = esl_zext<9,8>(kbuf_2_1_fu_5212.read());
}

void hw_conv::thread_tmp_18_1_cast_fu_15614_p1() {
    tmp_18_1_cast_fu_15614_p1 = esl_zext<10,9>(tmp_18_1_fu_15606_p3.read());
}

void hw_conv::thread_tmp_18_1_fu_15606_p3() {
    tmp_18_1_fu_15606_p3 = esl_concat<8,1>(kbuf_0_1_fu_6926_p511.read(), ap_const_lv1_0);
}

void hw_conv::thread_tmp_18_3_cast_fu_15630_p1() {
    tmp_18_3_cast_fu_15630_p1 = esl_zext<11,9>(tmp_18_3_fu_15622_p3.read());
}

void hw_conv::thread_tmp_18_3_fu_15622_p3() {
    tmp_18_3_fu_15622_p3 = esl_concat<8,1>(kbuf_1_0_fu_1128.read(), ap_const_lv1_0);
}

void hw_conv::thread_tmp_18_4_cast_fu_15642_p1() {
    tmp_18_4_cast_fu_15642_p1 = esl_zext<11,10>(tmp_18_4_fu_15634_p3.read());
}

void hw_conv::thread_tmp_18_4_fu_15634_p3() {
    tmp_18_4_fu_15634_p3 = esl_concat<8,2>(kbuf_1_1_fu_1132.read(), ap_const_lv2_0);
}

void hw_conv::thread_tmp_18_5_cast_fu_15654_p1() {
    tmp_18_5_cast_fu_15654_p1 = esl_zext<10,9>(tmp_18_5_fu_15646_p3.read());
}

void hw_conv::thread_tmp_18_5_fu_15646_p3() {
    tmp_18_5_fu_15646_p3 = esl_concat<8,1>(kbuf_1_2_fu_12025_p511.read(), ap_const_lv1_0);
}

void hw_conv::thread_tmp_18_7_cast_fu_15669_p1() {
    tmp_18_7_cast_fu_15669_p1 = esl_zext<10,9>(tmp_18_7_fu_15662_p3.read());
}

void hw_conv::thread_tmp_18_7_fu_15662_p3() {
    tmp_18_7_fu_15662_p3 = esl_concat<8,1>(kbuf_2_1_1_reg_21908.read(), ap_const_lv1_0);
}

void hw_conv::thread_tmp_1_fu_5325_p2() {
    tmp_1_fu_5325_p2 = (!loc_1_fu_5319_p2.read().is_01() || !ap_const_lv9_1FD.is_01())? sc_lv<1>(): (sc_biguint<9>(loc_1_fu_5319_p2.read()) < sc_biguint<9>(ap_const_lv9_1FD));
}

void hw_conv::thread_tmp_2_fu_5331_p2() {
    tmp_2_fu_5331_p2 = (!ap_phi_mux_loc_phi_fu_5268_p4.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_loc_phi_fu_5268_p4.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void hw_conv::thread_tmp_3_fu_5345_p2() {
    tmp_3_fu_5345_p2 = (!i_reg_5276.read().is_01() || !ap_const_lv19_200.is_01())? sc_lv<1>(): (sc_biguint<19>(i_reg_5276.read()) > sc_biguint<19>(ap_const_lv19_200));
}

void hw_conv::thread_tmp_4_fu_5302_p3() {
    tmp_4_fu_5302_p3 = i_reg_5276.read().range(18, 18);
}

void hw_conv::thread_tmp_cast_fu_15602_p1() {
    tmp_cast_fu_15602_p1 = esl_zext<10,8>(kbuf_0_0_fu_1120.read());
}

void hw_conv::thread_tmp_last_V_fu_5351_p2() {
    tmp_last_V_fu_5351_p2 = (!i_reg_5276.read().is_01() || !ap_const_lv19_40200.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_5276.read() == ap_const_lv19_40200);
}

}

