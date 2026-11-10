/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01297324; name: FUN_01297324
 */


void FUN_01297324(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_043bfd50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043bfd50), iVar1 != 0)) {
    DAT_043bfd00 = 0x1643a17215ad0d85;
    DAT_043bfd08 = "pane_L_tab_00_T_text_00";
    DAT_043bfd20 = 0xf7922ed15080373d;
    DAT_043bfd28 = 0xb38ba88a9caab66e;
    DAT_043bfd10 = 0x17;
    DAT_043bfd18 = 0;
    DAT_043bfd30 = "pane_L_tab_01_T_text_00";
    DAT_043bfd38 = 0x17;
    DAT_043bfd40 = 0;
    DAT_043bfd48 = 0xf7922dd15080358a;
    FUN_00100250(&LAB_012983d0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043bfd50);
  }
  FUN_012989c0(param_1,DAT_043bfd20,&DAT_043bfd00);
  FUN_012989c0(param_1,DAT_043bfd48,&DAT_043bfd28);
  return;
}


