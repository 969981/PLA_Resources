/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d26a4; name: FUN_029d26a4
 */


bool FUN_029d26a4(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_740 [1044];
  float local_32c;
  float local_328;
  
  iVar2 = *(int *)(param_2 + 0x3a0);
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
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
  FUN_009463f0(auStack_740,plVar11 + 0xc);
  FUN_00945e04(auStack_740);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
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
  FUN_009463f0(auStack_740,plVar11 + 0xc);
  FUN_00945e04(auStack_740);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  lVar5 = DAT_043ecde0;
  uVar6 = *(ulong *)(DAT_043ecde0 + 8);
  uVar8 = *(ulong *)(DAT_043ecde0 + 0x10);
  do {
    uVar10 = uVar6 ^ uVar8;
    iVar7 = (int)uVar8;
    uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar9 = (int)uVar6 + iVar7 & 0x7f;
    uVar6 = uVar10 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar10 << 0x10;
  } while (99 < uVar9);
  *(ulong *)(DAT_043ecde0 + 8) = uVar6;
  *(ulong *)(lVar5 + 0x10) = uVar8;
  return uVar9 < (uint)(int)(local_328 * (float)iVar2 + local_32c);
}


