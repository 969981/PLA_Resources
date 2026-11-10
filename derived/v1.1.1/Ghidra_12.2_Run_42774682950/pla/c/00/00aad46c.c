/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad46c; name: FUN_00aad46c
 */


byte FUN_00aad46c(long *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  bVar6 = (**(code **)(*param_1 + 0x78))();
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  plVar8 = *(long **)(lVar9 + 0xb0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(uint *)(*(long *)(*(long *)(*(long *)(plVar8[0x1c] + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar6 < 6) {
    lVar9 = 0;
  }
  else if (bVar6 < 0xc) {
    lVar9 = 2;
  }
  else if (bVar6 < 0x12) {
    lVar9 = 1;
  }
  else if (bVar6 < 0x18) {
    lVar9 = 3;
  }
  else {
    lVar9 = (ulong)(bVar6 < 0x1e) << 2;
  }
  if (uVar2 < 3) {
    bVar5 = (&PTR_DAT_041d1db8)[(int)uVar2][lVar9] == '\0';
  }
  else {
    bVar5 = false;
  }
  plVar1 = plVar8 + 10;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((param_2 == 0) && (bVar5 == true)) {
    bVar6 = 0;
  }
  else {
    bVar6 = param_2 != 1 | bVar5;
  }
  return bVar6;
}


