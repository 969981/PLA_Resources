/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214800; name: FUN_01214800
 */


void FUN_01214800(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_043bf600 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043bf600), iVar1 != 0)) {
    DAT_043bf5f8 = 0;
    DAT_043bf4e8 = 0xc02119d97bf81f2e;
    DAT_043bf4f0 = 0x3f066864331f0cfd;
    DAT_043bf4f8 = "pane_T_h_parent_00";
    DAT_043bf500 = 0x12;
    DAT_043bf508 = 0;
    DAT_043bf510 = 0x2cca9468e1671a71;
    DAT_043bf518 = 0x30dc575453b4f0d5;
    DAT_043bf520 = "pane_T_h_hp_00";
    DAT_043bf528 = 0xe;
    DAT_043bf530 = 0;
    DAT_043bf538 = 0xff73f075a552b33e;
    DAT_043bf540 = 0xbb4a2321270ddfff;
    DAT_043bf548 = "pane_T_h_atk_00";
    DAT_043bf550 = 0xf;
    DAT_043bf558 = 0;
    DAT_043bf560 = 0xd40c30758cb590cb;
    DAT_043bf578 = 0xf;
    DAT_043bf580 = 0;
    DAT_043bf568 = 0x41602dcd61ff5740;
    DAT_043bf570 = "pane_T_h_def_00";
    DAT_043bf588 = 0x21c9d3b8698b1703;
    DAT_043bf590 = 0xf897dc2df9d65818;
    DAT_043bf598 = "pane_T_h_spatk_00";
    DAT_043bf5a0 = 0x11;
    DAT_043bf5c8 = 0x11;
    DAT_043bf5d0 = 0;
    DAT_043bf5a8 = 0;
    DAT_043bf5b0 = 0x50663b858766c2e;
    DAT_043bf5b8 = 0xce8426cd8992ce9f;
    DAT_043bf5c0 = "pane_T_h_spdef_00";
    DAT_043bf5d8 = 0xff330e75a51b4f43;
    DAT_043bf5e0 = 0xa8cbcb928f32f88;
    DAT_043bf5e8 = "pane_T_h_agi_00";
    DAT_043bf5f0 = 0xf;
    FUN_00100250(0x121b4c0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bf600);
  }
  FUN_0121ac84(param_1,DAT_043bf4e8,&DAT_043bf4f0);
  FUN_0121ac84(param_1,DAT_043bf510,&DAT_043bf518);
  FUN_0121ac84(param_1,DAT_043bf538,&DAT_043bf540);
  FUN_0121ac84(param_1,DAT_043bf560,&DAT_043bf568);
  FUN_0121ac84(param_1,DAT_043bf588,&DAT_043bf590);
  FUN_0121ac84(param_1,DAT_043bf5b0,&DAT_043bf5b8);
  FUN_0121ac84(param_1,DAT_043bf5d8,&DAT_043bf5e0);
  return;
}


