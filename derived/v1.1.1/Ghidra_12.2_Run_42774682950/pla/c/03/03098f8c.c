/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03098f8c; name: FUN_03098f8c
 */


void FUN_03098f8c(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  
  lVar15 = tpidr_el0;
  lVar10 = *(long *)(lVar15 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar10;
    lVar18 = *(long *)(lVar10 + 0x10);
  }
  else {
    lVar18 = *(long *)(lVar10 + 0x10);
  }
  if (lVar18 != 0) {
    puVar11 = *(undefined8 **)(lVar18 + 8);
    uVar14 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar14, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtSolver";
      uVar17 = nn::os::GetSystemTick();
      puVar11[1] = uVar17;
      lVar10 = *(long *)(lVar15 + 0x38d490);
    }
  }
  if ((lVar10 == 0) && (*(long *)(param_2 + 8) == 0)) {
    uVar17 = FUN_0333d16c(0,1);
    *(undefined8 *)(lVar15 + 0x38d490) = uVar17;
  }
  plVar19 = *(long **)(param_1 + 0x38);
  puVar1 = (uint *)(plVar19 + 0x22);
  uVar2 = *(uint *)(plVar19 + 0x22);
  uVar14 = (ulong)uVar2 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar12 = *puVar1;
  if (uVar12 == uVar2) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar2 + 0x200 & 0xfffffe00 | puVar1[uVar14 + 1];
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      puVar16 = puVar1 + uVar14 + 1;
      goto LAB_030990a8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar14 = (ulong)(uVar12 & 0x1ff);
    DataMemoryBarrier(2,3);
    uVar2 = *puVar1;
    if (uVar2 == uVar12) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar12 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar19 + uVar14 * 4 + 0x114);
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar12 = uVar2;
  } while( true );
  puVar16 = (uint *)((long)plVar19 + uVar14 * 4 + 0x114);
LAB_030990a8:
  *puVar16 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar16 = *(uint **)(*plVar19 + uVar14 * 8);
  uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
  FUN_030c3454(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x178),*(undefined8 *)(param_1 + 0x38),
               puVar16,uVar17);
  lVar15 = *(long *)(puVar16 + 2);
  iVar3 = *(int *)(lVar15 + 0x5a0);
  iVar4 = *(int *)(lVar15 + 0x5a8);
  iVar7 = FUN_030c43d8(*(undefined8 *)(lVar15 + 0x4b0),
                       *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x178) + 0x48) + 0x78,3);
  iVar3 = iVar4 * iVar3 * iVar7 + 2;
  lVar15 = param_1 + 0x48;
  FUN_0333bd70(lVar15,iVar3,iVar3 * 2);
  uVar12 = *(uint *)(param_1 + 0x6c);
  uVar13 = *(uint *)(param_1 + 0x68);
  uVar2 = uVar13 + 1;
  if ((int)uVar13 < (int)(uVar12 & 0x3fffffff)) {
    lVar10 = *(long *)(param_1 + 0x60);
    uVar12 = uVar13;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    if (0x3ffffffe < (int)uVar13) {
      FUN_032bd0a8(uVar2);
      uVar12 = *(uint *)(param_1 + 0x6c);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar8 = uVar2;
    if ((int)uVar2 <= (int)uVar12) {
      uVar8 = uVar12;
    }
    lVar10 = FUN_032bd1d4(PTR_PTR_0434a080,uVar8,0x18,uVar9,uVar13);
    uVar12 = *(uint *)(param_1 + 0x68);
    *(long *)(param_1 + 0x60) = lVar10;
  }
  puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar12 * 0x18);
  *(uint *)(param_1 + 0x68) = uVar2;
  *(undefined2 *)(puVar11 + 1) = 1;
  *puVar11 = 0;
  *(undefined1 *)((long)puVar11 + 10) = 0x40;
  puVar11[2] = 0;
  FUN_030c39c4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x178),*(undefined8 *)(param_1 + 0x38),
               puVar16,uVar17,lVar15,0xffff,uVar13 & 0xffff);
  uVar17 = FUN_0333bfa4(lVar15,*(undefined8 *)(param_1 + 0x28),uVar13 & 0xffff);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x40))
            (*(long **)(param_1 + 0x28),uVar17,*(undefined8 *)(param_1 + 0x40));
  FUN_0333bff4(lVar15,*(undefined8 *)(param_1 + 0x28),0);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x50))
            (*(long **)(param_1 + 0x28),(undefined8 *)(param_1 + 0x40),1,0,8);
  uVar12 = *puVar16;
  uVar2 = *(uint *)(plVar19 + 0x22);
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar19 + (long)(int)uVar12 * 4 + 0x114) = uVar2 & 0x1ff;
  uVar13 = *puVar1;
  if (uVar13 == uVar2) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar2 & 0xfffffe00 | uVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
LAB_03099280:
      if (lVar18 != 0) {
        puVar11 = *(undefined8 **)(lVar18 + 8);
        uVar14 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= *(ulong *)(lVar18 + 0x10)) &&
           (*(ulong *)(lVar18 + 8) = uVar14, puVar11 != (undefined8 *)0x0)) {
          *puVar11 = &DAT_0390f40e;
          uVar17 = nn::os::GetSystemTick();
          puVar11[1] = uVar17;
        }
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar19 + (long)(int)uVar12 * 4 + 0x114) = uVar13 & 0x1ff;
    uVar2 = *puVar1;
    if (uVar2 == uVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar13 & 0xfffffe00 | uVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_03099280;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar13 = uVar2;
  } while( true );
}


