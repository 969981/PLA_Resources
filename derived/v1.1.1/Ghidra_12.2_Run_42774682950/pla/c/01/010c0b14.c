/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c0b14; name: FUN_010c0b14
 */


long FUN_010c0b14(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar8;
  long lVar7;
  long lVar9;
  
  lVar6 = FUN_002443dc(param_2,&DAT_03917c20);
  puVar3 = PTR_DAT_0437b228;
  if (lVar6 == 0) {
    if (((*PTR_DAT_0437b228 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    lVar6 = *(long *)PTR_DAT_0437b230;
    *(long *)PTR_DAT_0437b238 = lVar6;
    uVar2 = *(int *)(param_1 + 0x168) - 2;
    if (uVar2 < 8) {
      lVar7 = *(long *)(&DAT_03a78be8 + (long)(int)uVar2 * 8);
    }
    else {
      lVar7 = 0;
    }
    plVar8 = (long *)(lVar6 + lVar7 * 0x28 + 0xf0);
    lVar6 = 3;
    goto LAB_010c0bc8;
  }
  uVar2 = *(uint *)(lVar6 + 4);
  if (((*PTR_DAT_0437b228 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  puVar4 = PTR_DAT_0437b238;
  plVar8 = (long *)PTR_DAT_0437b230;
  *(undefined8 *)PTR_DAT_0437b238 = *(undefined8 *)PTR_DAT_0437b230;
  iVar5 = *(int *)(lVar6 + (ulong)uVar2);
  if (iVar5 == 0x1c) {
    lVar6 = 0;
    bVar1 = *puVar3;
  }
  else if (iVar5 < 0x2a) {
    if (iVar5 != 0x20) goto LAB_010c0c20;
    lVar6 = 1;
    bVar1 = *puVar3;
  }
  else if (iVar5 == 0x2a) {
LAB_010c0c20:
    lVar6 = 2;
    bVar1 = *puVar3;
  }
  else if (iVar5 == 0x36) {
    lVar6 = 3;
    bVar1 = *puVar3;
  }
  else {
    if (iVar5 != 100) goto LAB_010c0c20;
    lVar6 = 4;
    bVar1 = *puVar3;
  }
  if (((bVar1 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b228), plVar8 = (long *)PTR_DAT_0437b230, iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
    plVar8 = (long *)PTR_DAT_0437b230;
  }
  lVar7 = *plVar8;
  *(long *)puVar4 = lVar7;
  uVar2 = *(int *)(param_1 + 0x168) - 2;
  if (uVar2 < 8) {
    lVar9 = *(long *)(&DAT_03a78be8 + (long)(int)uVar2 * 8);
  }
  else {
    lVar9 = 0;
  }
  plVar8 = (long *)(lVar7 + lVar9 * 0x28 + lVar6 * 8 + 0xd8);
LAB_010c0bc8:
  lVar9 = *plVar8;
  lVar7 = FUN_0024eda0(param_2);
  if (lVar7 == 0) {
    FUN_0024eda8(param_2,lVar9 + 0x68);
  }
  *(long *)(param_1 + 0x160) = lVar9 + 0x68;
  return lVar6;
}


