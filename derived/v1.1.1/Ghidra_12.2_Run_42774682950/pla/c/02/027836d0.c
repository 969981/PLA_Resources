/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027836d0; name: FUN_027836d0
 */


void FUN_027836d0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar2 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar2;
  if (lVar2 != 0) {
    FUN_027874f8();
  }
  FUN_0276d37c(lVar3,param_2);
  if (*(long *)(*param_1 + 0x68) == 0) {
    return;
  }
  FUN_013b6898(*(long *)(*param_1 + 0x68),&DAT_03a7e048);
  return;
}


