/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012709a0; name: FUN_012709a0
 */


void FUN_012709a0(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x908) = 0;
  local_40 = 0xd4db1b37552d8648;
  pcStack_38 = "list_cursor";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  lVar1 = thunk_FUN_00d2f008(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_028077c0(lVar1,1);
  FUN_00d42438(param_1,1,1);
  FUN_00d428b0(param_1,0);
  return;
}


