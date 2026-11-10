/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0149e1cc; name: FUN_0149e1cc
 */


void FUN_0149e1cc(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_04213348;
  param_1[9] = &PTR_LAB_04213450;
  param_1[10] = &PTR_LAB_04213498;
  FUN_0149e298(param_1 + 0xae);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379690), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  lVar2 = FUN_0286bacc();
  param_1[0xe4] = lVar2;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


