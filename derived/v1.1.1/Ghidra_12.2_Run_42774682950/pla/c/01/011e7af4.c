/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e7af4; name: FUN_011e7af4
 */


void FUN_011e7af4(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_043be9d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043be9d8), iVar1 != 0)) {
    DAT_043be988 = 0xaf677d95f42c7e8a;
    DAT_043be990 = 0x73129179107f4232;
    DAT_043be998 = "pane_T_title_00";
    DAT_043be9a0 = 0xf;
    DAT_043be9a8 = 0;
    DAT_043be9b0 = 0xb3debdacc77e4f7d;
    DAT_043be9b8 = 0x5e97d135b4fe049e;
    DAT_043be9c0 = "pane_T_msg_guide_00";
    DAT_043be9c8 = 0x13;
    DAT_043be9d0 = 0;
    FUN_00100250(&LAB_011e8640,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043be9d8);
  }
  FUN_011e83bc(param_1,0,DAT_043be988,&DAT_043be990);
  FUN_011e83bc(param_1,0,DAT_043be9b0,&DAT_043be9b8);
  return;
}


