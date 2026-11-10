/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ab954; name: FUN_011ab954
 */


bool FUN_011ab954(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar8 = *(long **)(lVar10 + 0xd0);
  if (plVar8 != (long *)0x0) {
    plVar11 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar8[0xb];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar8 + 10;
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11,*(undefined4 *)(param_1 + 0x5e0));
  fVar12 = *(float *)(param_1 + 0x5ec) + *(float *)(param_1 + 0x5e8);
  uVar2 = *(uint *)(param_1 + 0x5e4);
  *(float *)(param_1 + 0x5e8) = fVar12;
  bVar4 = uVar2 <= (uint)(int)fVar12;
  if (bVar4) {
    *(float *)(param_1 + 0x5e8) = (float)uVar2;
  }
  iVar6 = FUN_02c5fb2c(uVar9);
  FUN_02c5fee8(uVar9,(int)*(float *)(param_1 + 0x5e8));
  iVar7 = FUN_02c5fb2c(uVar9);
  if (iVar6 != iVar7) {
    FUN_011a9804(param_1,*(undefined4 *)(param_1 + 0x5e0));
    FUN_011ab8ec(param_1,uVar9);
  }
  FUN_02857690(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x5e0) * 0x500);
  plVar8 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar8 + -1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return !bVar4;
}


