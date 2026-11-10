/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fff47c; name: FUN_02fff47c
 */


void FUN_02fff47c(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  MutexType *pMVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  
  *param_1 = 0;
  lVar13 = param_1[2];
  if (*(int *)(param_1 + 6) != 0) {
    uVar3 = *(int *)((long)param_1 + 0x34) + 1;
    if ((*(byte *)(lVar13 + 0x54) & 0xf) == 0) {
      uVar12 = 0;
      pbVar11 = (byte *)(lVar13 + 0x114);
      do {
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar1;
        if (uVar3 <= uVar1) goto LAB_02fff4b0;
        bVar4 = *pbVar11;
        pbVar11 = pbVar11 + 0xc0;
      } while ((bVar4 & 0xf) == 0);
    }
    else {
      uVar12 = 0;
    }
    do {
      FUN_02fffa78(param_1,*(undefined4 *)(lVar13 + uVar12 * 0xc0 + 0x50));
      pbVar11 = (byte *)(lVar13 + 0x54 + (ulong)((int)uVar12 + 1) * 0xc0);
      do {
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar1;
        if (uVar3 <= uVar1) goto LAB_02fff4b0;
        bVar4 = *pbVar11;
        pbVar11 = pbVar11 + 0xc0;
      } while ((bVar4 & 0xf) == 0);
    } while( true );
  }
LAB_02fff4b0:
  FUN_03002e5c(param_1 + 0x15);
  lVar17 = param_1[0x21];
  lVar13 = tpidr_el0;
  if (lVar17 != 0) {
    lVar15 = *(long *)(lVar17 + 8);
    lVar10 = *(long *)(lVar13 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar17,0x410);
    while (lVar15 != 0) {
      lVar10 = *(long *)(lVar15 + 8);
      lVar17 = *(long *)(lVar13 + 0x38d490);
      if (lVar17 == 0) {
        lVar17 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar17;
      }
      plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,0x410);
      lVar15 = lVar10;
    }
  }
  pMVar14 = (MutexType *)param_1[0x20];
  if (pMVar14 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar14);
    lVar17 = *(long *)(lVar13 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar17;
    }
    plVar8 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
    (**(code **)(*plVar8 + 0x18))(plVar8,pMVar14,0x20);
  }
  puVar7 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x1e],((ulong)*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) << 5);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,param_1[0x1c],*(int *)((long)param_1 + 0xec) << 2);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x1a],*(uint *)((long)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x18],((ulong)*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) << 4);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  FUN_03002e5c(param_1 + 0x15);
  if (0 < *(int *)((long)param_1 + 0xbc)) {
    lVar13 = 0;
    uVar12 = (ulong)(*(int *)((long)param_1 + 0xbc) + 1);
    do {
      if (*(short *)(param_1[0x16] + lVar13) != -1) {
        *(undefined2 *)(param_1[0x16] + lVar13) = 0xffff;
      }
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar12 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x16],(long)(*(int *)((long)param_1 + 0xbc) * 0x10 + 0x10));
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff00000000;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar16 = (long *)param_1[0x13];
    plVar18 = plVar16 + (long)*(int *)(param_1 + 0x14) + -1;
    plVar8 = (long *)*plVar18;
    if (plVar8 != (long *)0x0) goto LAB_02fff608;
LAB_02fff5f8:
    if (plVar18 != plVar16) {
      while( true ) {
        plVar18 = plVar18 + -1;
        plVar8 = (long *)*plVar18;
        if (plVar8 == (long *)0x0) break;
LAB_02fff608:
        if (plVar8[1] == 0) break;
        plVar2 = plVar8 + 2;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 + -1 != 0) break;
        (**(code **)(*plVar8 + 0x18))();
        if (plVar18 == plVar16) goto LAB_02fff63c;
      }
      goto LAB_02fff5f8;
    }
  }
LAB_02fff63c:
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x13],((ulong)*(uint *)((long)param_1 + 0xa4) & 0x3fffffff) << 3);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0x11],((ulong)*(uint *)((long)param_1 + 0x94) & 0x3fffffff) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0xf],((ulong)*(uint *)((long)param_1 + 0x84) & 0x3fffffff) << 3);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0xd],((ulong)*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[0xb],((ulong)*(uint *)((long)param_1 + 100) & 0x3fffffff) * 0x18);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,param_1[9],*(int *)((long)param_1 + 0x54) << 2);
  }
  iVar9 = *(int *)(param_1 + 3);
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      if (((*(byte *)(param_1[2] + lVar13 * 0xc0 + 0x54) & 0xf) != 0) &&
         (plVar8 = *(long **)(param_1[2] + lVar13 * 0xc0 + 0x78), plVar8 != (long *)0x0)) {
        if (plVar8[1] != 0) {
          plVar16 = plVar8 + 2;
          do {
            lVar17 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
        iVar9 = *(int *)(param_1 + 3);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar9);
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,param_1[4],(long)*(int *)(param_1 + 5));
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) * 0xc0);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


