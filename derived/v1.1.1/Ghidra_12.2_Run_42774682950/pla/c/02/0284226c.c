/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284226c; name: FUN_0284226c
 */


byte FUN_0284226c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar1 = false;
    lVar7 = *(long *)(param_1 + 0x40);
  }
  else {
    bVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x1e1) != '\0';
    lVar7 = *(long *)(param_1 + 0x40);
  }
  if (lVar7 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar7 + 0x1e1) != '\0';
  }
  if (((*PTR_DAT_04387e48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04387e48), iVar6 != 0))
  {
    FUN_00100250(&LAB_02842974,PTR_DAT_04387e50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387e48);
  }
  DAT_043eb558 = *(long *)PTR_DAT_04387e50;
  if (*(long *)(DAT_043eb558 + 0x58) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(*(long *)(DAT_043eb558 + 0x58) + 0x1e1) != '\0';
  }
  if (((*PTR_DAT_04387e48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04387e48), iVar6 != 0))
  {
    FUN_00100250(&LAB_02842974,PTR_DAT_04387e50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387e48);
  }
  DAT_043eb558 = *(long *)PTR_DAT_04387e50;
  lVar7 = *(long *)(*(long *)PTR_DAT_04387e50 + 0x88);
  bVar4 = false;
  if (lVar7 != 0) {
    bVar4 = *(char *)(lVar7 + 0x1e1) != '\0';
  }
  bVar5 = false;
  if (*(long *)(param_1 + 0x80) != 0) {
    bVar5 = *(char *)(*(long *)(param_1 + 0x80) + 0x1e1) != '\0';
  }
  return bVar1 & bVar2 & bVar3 & bVar4 & bVar5;
}


