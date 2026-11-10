/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fffa78; name: FUN_02fffa78
 */


/* WARNING: Removing unreachable block (ram,0x02fffcd4) */
/* WARNING: Removing unreachable block (ram,0x02fffd98) */

void FUN_02fffa78(long param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  
  uVar17 = param_2 & 0xffffff;
  lVar18 = uVar17 * 8;
  plVar7 = *(long **)(*(long *)(param_1 + 0x98) + lVar18);
  *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar18) = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar11 = *(long *)(param_1 + 0x78);
  lVar9 = *(long *)(lVar11 + uVar17 * 8);
  if (lVar9 != 0) {
    lVar11 = tpidr_el0;
    lVar12 = *(long *)(lVar11 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar12;
    }
    plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0x30);
    lVar11 = *(long *)(param_1 + 0x78);
  }
  *(undefined8 *)(lVar11 + lVar18) = 0;
  lVar18 = *(long *)(*(long *)(param_1 + 0x88) + lVar18);
  uVar16 = (uint)uVar17;
  if (lVar18 == 0) {
    iVar8 = *(int *)(param_1 + 0xbc);
  }
  else {
    lVar9 = tpidr_el0;
    lVar11 = *(long *)(lVar9 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar18,0xc0);
    *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar17 * 8) = 0;
    iVar8 = *(int *)(param_1 + 0xbc);
  }
  if (-1 < iVar8) {
    psVar15 = *(short **)(param_1 + 0xb0);
    uVar13 = 0;
    psVar14 = psVar15;
    do {
      if (*psVar14 != -1) break;
      uVar13 = uVar13 + 1;
      psVar14 = psVar14 + 8;
    } while ((long)iVar8 + 1U != uVar13);
    if ((int)uVar13 <= iVar8) {
      uVar13 = uVar13 & 0xffffffff;
      lVar18 = (uVar17 >> 5) * 4;
      do {
        lVar9 = *(long *)((long)psVar15 + ((long)(uVar13 << 0x20) >> 0x1c) + 8);
        if (uVar16 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = *(long *)(lVar9 + 8);
          *(uint *)(lVar9 + lVar18) =
               *(uint *)(lVar9 + lVar18) & ~(1 << (ulong)((uint)param_2 & 0x1f));
          iVar8 = *(int *)(param_1 + 0xbc);
        }
        lVar12 = (long)(int)uVar13;
        lVar11 = lVar12 + -1;
        lVar9 = lVar12 << 0x20;
        lVar12 = lVar12 * 0x10;
        do {
          lVar9 = lVar9 + 0x100000000;
          lVar12 = lVar12 + 0x10;
          lVar11 = lVar11 + 1;
          if (iVar8 <= lVar11) break;
        } while (*(short *)(*(long *)(param_1 + 0xb0) + lVar12) == -1);
        uVar13 = lVar9 >> 0x20;
        if (iVar8 < (int)((ulong)lVar9 >> 0x20)) break;
        psVar15 = *(short **)(param_1 + 0xb0);
      } while( true );
    }
  }
  if (*(int *)(param_1 + 0x18) <= (int)uVar16) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar18 + uVar17 * 0xc0 + 0x54) & 0xf) == 0) {
    return;
  }
  plVar7 = *(long **)(lVar18 + uVar17 * 0xc0 + 0x78);
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar1 = plVar7 + 2;
      do {
        lVar18 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    lVar18 = *(long *)(param_1 + 0x10);
  }
  lVar18 = lVar18 + uVar17 * 0xc0;
  *(undefined1 *)(lVar18 + 0x88) = 0;
  *(uint *)(lVar18 + 0x50) = *(uint *)(lVar18 + 0x50) | 0xffffff;
  *(undefined4 *)(lVar18 + 0x54) = 0;
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar10 = uVar4 & 0xffffff;
  puVar2 = (uint *)(param_1 + 0x2c);
  if (uVar10 == 0xffffff) {
    uVar10 = 0xffffffff;
  }
  *(uint *)(*(long *)(param_1 + 0x10) + uVar17 * 0xc0) = uVar10;
  uVar10 = *puVar2;
  if (uVar10 == uVar4) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar4 & 0xff000000 | uVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02fffce4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      uVar4 = 0xffffffff;
      if ((uVar10 & 0xffffff) != 0xffffff) {
        uVar4 = uVar10 & 0xffffff;
      }
      *(uint *)(*(long *)(param_1 + 0x10) + uVar17 * 0xc0) = uVar4;
      uVar4 = *puVar2;
      if (uVar4 == uVar10) break;
      ClearExclusiveLocal();
      uVar10 = uVar4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar10 & 0xff000000 | uVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
    uVar10 = uVar4;
  } while (cVar5 != '\0');
LAB_02fffce4:
  piVar3 = (int *)(param_1 + 0x30);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = *piVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}


