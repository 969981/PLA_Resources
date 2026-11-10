/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f1568; name: FUN_011f1568
 */


void FUN_011f1568(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_041fb730;
  param_1[9] = &PTR_LAB_041fb838;
  param_1[10] = &PTR_LAB_041fb880;
  FUN_011f1674(param_1 + 0xae);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379690), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  lVar2 = FUN_0286bb0c();
  param_1[0xe5] = 0;
  param_1[0xe4] = lVar2;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0x1e < *(uint *)(lVar2 + 0x54)) {
    *(undefined4 *)(lVar2 + 0x54) = 0x1e;
  }
  return;
}


