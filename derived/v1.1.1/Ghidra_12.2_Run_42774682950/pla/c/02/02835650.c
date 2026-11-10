/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02835650; name: FUN_02835650
 */


void FUN_02835650(byte *param_1)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  
  uVar9 = (ulong)*param_1;
  if (0x26 < uVar9) {
    return;
  }
  if (uVar9 - 0x22 < 5) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    pcVar11 = *(char **)(PTR_DAT_0437a0d8 + 8);
    plVar12 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar12 == (long *)0x0) {
      cVar2 = *pcVar11;
      pbVar3 = PTR_DAT_04379c28;
    }
    else {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      cVar2 = *pcVar11;
      pbVar3 = PTR_DAT_04379c28;
    }
  }
  else {
    pcVar11 = (&PTR_DAT_0426f028)[uVar9];
    if (*pcVar11 == '\0') {
      FUN_02835864();
      return;
    }
    lVar10 = 1;
    do {
      pcVar1 = pcVar11 + lVar10;
      lVar10 = lVar10 + 1;
    } while (*pcVar1 != '\0');
    plVar12 = (long *)0x0;
    cVar2 = *pcVar11;
    pbVar3 = PTR_DAT_04379c28;
  }
  PTR_DAT_04379c28 = pbVar3;
  if (cVar2 == '\0') {
    FUN_02835864();
  }
  else {
    if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar5 = PTR_DAT_04379c38;
    puVar4 = PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = *(undefined8 *)PTR_DAT_04379c30;
    uVar7 = FUN_02911ed0();
    if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000,uVar7);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar10 = *(long *)puVar4;
    *(long *)puVar5 = lVar10;
    plVar8 = *(long **)(*(long *)(lVar10 + 0x158) + 0x60);
    (**(code **)(*plVar8 + 0x98))(plVar8,&DAT_03932c38,pcVar11,uVar7);
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02835728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}


