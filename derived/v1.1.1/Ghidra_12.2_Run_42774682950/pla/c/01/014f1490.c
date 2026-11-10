/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f1490; name: FUN_014f1490
 */


void FUN_014f1490(long param_1,int param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  
  FUN_014f0d54();
  puVar4 = PTR_DAT_0437a0d0;
  if (param_2 == 0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    plVar3 = (long *)PTR_DAT_0437a0d8;
    if (*(long *)(param_3 + 0xe0) != *(long *)PTR_DAT_0437a0d8) {
      FUN_0283b430(*(undefined8 *)(param_1 + 8));
    }
    plVar1 = (long *)(param_3 + 0x100);
    bVar2 = *puVar4;
  }
  else {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    plVar3 = (long *)PTR_DAT_0437a0d8;
    if (*(long *)(param_3 + 0x100) != *(long *)PTR_DAT_0437a0d8) {
      FUN_0283b430(*(undefined8 *)(param_1 + 8));
    }
    plVar1 = (long *)(param_3 + 0xe0);
    bVar2 = *puVar4;
  }
  if (((bVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (*plVar1 == *plVar3) {
    return;
  }
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),plVar1);
  return;
}


