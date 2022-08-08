# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name rows \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rows \
    op interface \
    ports { rows_dout { I 32 vector } rows_empty_n { I 1 bit } rows_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name cols \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_cols \
    op interface \
    ports { cols_dout { I 32 vector } cols_empty_n { I 1 bit } cols_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name rows_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_rows_out \
    op interface \
    ports { rows_out_din { O 32 vector } rows_out_full_n { I 1 bit } rows_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name ImgRgb_Datsrc_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgRgb_Datsrc_rows_V_out \
    op interface \
    ports { ImgRgb_Datsrc_rows_V_out_din { O 32 vector } ImgRgb_Datsrc_rows_V_out_full_n { I 1 bit } ImgRgb_Datsrc_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name cols_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_cols_out \
    op interface \
    ports { cols_out_din { O 32 vector } cols_out_full_n { I 1 bit } cols_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name ImgRgb_Datsrc_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgRgb_Datsrc_cols_V_out \
    op interface \
    ports { ImgRgb_Datsrc_cols_V_out_din { O 32 vector } ImgRgb_Datsrc_cols_V_out_full_n { I 1 bit } ImgRgb_Datsrc_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name ImgGry_Datsrc_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Datsrc_rows_V_out \
    op interface \
    ports { ImgGry_Datsrc_rows_V_out_din { O 32 vector } ImgGry_Datsrc_rows_V_out_full_n { I 1 bit } ImgGry_Datsrc_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name ImgGry_Datsrc_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Datsrc_cols_V_out \
    op interface \
    ports { ImgGry_Datsrc_cols_V_out_din { O 32 vector } ImgGry_Datsrc_cols_V_out_full_n { I 1 bit } ImgGry_Datsrc_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name ImgGry_Datcop_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Datcop_rows_V_out \
    op interface \
    ports { ImgGry_Datcop_rows_V_out_din { O 9 vector } ImgGry_Datcop_rows_V_out_full_n { I 1 bit } ImgGry_Datcop_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name ImgGry_Datcop_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Datcop_cols_V_out \
    op interface \
    ports { ImgGry_Datcop_cols_V_out_din { O 10 vector } ImgGry_Datcop_cols_V_out_full_n { I 1 bit } ImgGry_Datcop_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name ImgGry_Threh_sp_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Threh_sp_rows_V_out \
    op interface \
    ports { ImgGry_Threh_sp_rows_V_out_din { O 9 vector } ImgGry_Threh_sp_rows_V_out_full_n { I 1 bit } ImgGry_Threh_sp_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name ImgGry_Threh_sp_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Threh_sp_cols_V_out \
    op interface \
    ports { ImgGry_Threh_sp_cols_V_out_din { O 10 vector } ImgGry_Threh_sp_cols_V_out_full_n { I 1 bit } ImgGry_Threh_sp_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name ImgGry_Threh_cz_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Threh_cz_rows_V_out \
    op interface \
    ports { ImgGry_Threh_cz_rows_V_out_din { O 9 vector } ImgGry_Threh_cz_rows_V_out_full_n { I 1 bit } ImgGry_Threh_cz_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name ImgGry_Threh_cz_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Threh_cz_cols_V_out \
    op interface \
    ports { ImgGry_Threh_cz_cols_V_out_din { O 10 vector } ImgGry_Threh_cz_cols_V_out_full_n { I 1 bit } ImgGry_Threh_cz_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name ImgGry_Ovlaycz_rows_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Ovlaycz_rows_V_out \
    op interface \
    ports { ImgGry_Ovlaycz_rows_V_out_din { O 9 vector } ImgGry_Ovlaycz_rows_V_out_full_n { I 1 bit } ImgGry_Ovlaycz_rows_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name ImgGry_Ovlaycz_cols_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ImgGry_Ovlaycz_cols_V_out \
    op interface \
    ports { ImgGry_Ovlaycz_cols_V_out_din { O 10 vector } ImgGry_Ovlaycz_cols_V_out_full_n { I 1 bit } ImgGry_Ovlaycz_cols_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


