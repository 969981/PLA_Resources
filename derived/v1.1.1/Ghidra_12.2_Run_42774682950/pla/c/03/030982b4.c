/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030982b4; name: FUN_030982b4
 */


/* WARNING: Removing unreachable block (ram,0x03098370) */

void FUN_030982b4(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar17 = *(long *)(param_2 + 8);
  if (lVar17 == 0) {
    lVar17 = tpidr_el0;
    if (*(long *)(lVar17 + 0x38d490) == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar21;
      lVar17 = *(long *)(lVar21 + 0x10);
    }
    else {
      lVar17 = *(long *)(*(long *)(lVar17 + 0x38d490) + 0x10);
    }
    if (lVar17 != 0) goto LAB_03098300;
    bVar19 = true;
  }
  else {
LAB_03098300:
    puVar10 = *(undefined8 **)(lVar17 + 8);
    uVar9 = (long)puVar10 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(lVar17 + 0x10) < uVar9) ||
       (*(ulong *)(lVar17 + 8) = uVar9, puVar10 == (undefined8 *)0x0)) {
      bVar19 = false;
    }
    else {
      *puVar10 = "TtAddActiveBodyPairs";
      uVar8 = nn::os::GetSystemTick();
      bVar19 = false;
      puVar10[1] = uVar8;
    }
  }
  plVar18 = *(long **)(param_1 + 0x30);
  puVar1 = (uint *)(plVar18 + 0x22);
  uVar3 = *(uint *)(plVar18 + 0x22);
  uVar9 = (ulong)uVar3 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar11 = *puVar1;
  if (uVar11 == uVar3) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar3 + 0x200 & 0xfffffe00 | puVar1[uVar9 + 1];
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') {
      puVar20 = puVar1 + uVar9 + 1;
LAB_030983d0:
      *puVar20 = 0x1ff;
      DataMemoryBarrier(2,3);
      puVar20 = *(uint **)(*plVar18 + uVar9 * 8);
      plVar16 = *(long **)(puVar20 + 0x132);
      lVar21 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
      *(undefined4 *)(*plVar16 + 0x14) = 0;
      if ((((0 < *(int *)(lVar21 + 0x108)) &&
           (FUN_0305ad80(plVar16,*(undefined8 *)(lVar21 + 0x100),
                         *(long *)(*(long *)(param_1 + 0x28) + 0x178) + 0x20,
                         *(long *)(puVar20 + 2) + 0x140), 1 < *(int *)(lVar21 + 0x108))) &&
          (FUN_0305ad80(plVar16,*(long *)(lVar21 + 0x100) + 0x500,
                        *(long *)(*(long *)(param_1 + 0x28) + 0x178) + 0x20,
                        *(long *)(puVar20 + 2) + 0x140), 2 < *(int *)(lVar21 + 0x108))) &&
         ((FUN_0305ad80(plVar16,*(long *)(lVar21 + 0x100) + 0xa00,
                        *(long *)(*(long *)(param_1 + 0x28) + 0x178) + 0x20,
                        *(long *)(puVar20 + 2) + 0x140), 3 < *(int *)(lVar21 + 0x108) &&
          (FUN_0305ad80(plVar16,*(long *)(lVar21 + 0x100) + 0xf00,
                        *(long *)(*(long *)(param_1 + 0x28) + 0x178) + 0x20,
                        *(long *)(puVar20 + 2) + 0x140), 4 < *(int *)(lVar21 + 0x108))))) {
        lVar22 = 4;
        lVar23 = 0x1400;
        do {
          FUN_0305ad80(plVar16,*(long *)(lVar21 + 0x100) + lVar23,
                       *(long *)(*(long *)(param_1 + 0x28) + 0x178) + 0x20,
                       *(long *)(puVar20 + 2) + 0x140);
          lVar22 = lVar22 + 1;
          lVar23 = lVar23 + 0x500;
        } while (lVar22 < *(int *)(lVar21 + 0x108));
      }
      puVar10 = (undefined8 *)*plVar16;
      *(undefined1 *)((long)plVar16 + 0x134) = 0;
      if (*(int *)((long)puVar10 + 0x14) == 0) {
        iVar4 = *(int *)(puVar10 + 2);
        uVar9 = (ulong)iVar4;
        iVar12 = 0;
        if (iVar4 != 0) {
          piVar14 = (int *)*puVar10;
          piVar2 = piVar14 + uVar9;
          iVar5 = *piVar14;
          iVar12 = iVar4;
          piVar15 = piVar14;
          while( true ) {
            if (-1 < iVar5) {
              uVar9 = (ulong)(iVar12 - 1);
              for (iVar4 = piVar15[iVar5]; -1 < iVar4; iVar4 = piVar15[iVar4]) {
                *piVar14 = iVar4;
                piVar15 = (int *)*puVar10;
              }
            }
            iVar12 = (int)uVar9;
            piVar14 = piVar14 + 1;
            if (piVar14 == piVar2) break;
            iVar5 = *piVar14;
          }
        }
        *(undefined4 *)((long)puVar10 + 0x14) = 1;
        *(int *)(puVar10 + 3) = iVar12;
      }
      if (!bVar19) {
        puVar10 = *(undefined8 **)(lVar17 + 8);
        uVar9 = (long)puVar10 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= *(ulong *)(lVar17 + 0x10)) &&
           (*(ulong *)(lVar17 + 8) = uVar9, puVar10 != (undefined8 *)0x0)) {
          *puVar10 = &DAT_0390f40e;
          uVar8 = nn::os::GetSystemTick();
          puVar10[1] = uVar8;
        }
      }
      uVar11 = *puVar20;
      uVar3 = *(uint *)(plVar18 + 0x22);
      DataMemoryBarrier(2,3);
      *(uint *)((long)plVar18 + (long)(int)uVar11 * 4 + 0x114) = uVar3 & 0x1ff;
      uVar13 = *puVar1;
      if (uVar13 == uVar3) {
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar19) {
          *puVar1 = uVar3 & 0xfffffe00 | uVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        DataMemoryBarrier(2,3);
        *(uint *)((long)plVar18 + (long)(int)uVar11 * 4 + 0x114) = uVar13 & 0x1ff;
        uVar3 = *puVar1;
        if (uVar3 == uVar13) {
          cVar6 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar19) {
            *puVar1 = uVar13 & 0xfffffe00 | uVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar13 = uVar3;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar9 = (ulong)(uVar11 & 0x1ff);
    DataMemoryBarrier(2,3);
    uVar3 = *puVar1;
    if (uVar3 == uVar11) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar11 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar18 + uVar9 * 4 + 0x114);
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar11 = uVar3;
  } while( true );
  puVar20 = (uint *)((long)plVar18 + uVar9 * 4 + 0x114);
  goto LAB_030983d0;
}


