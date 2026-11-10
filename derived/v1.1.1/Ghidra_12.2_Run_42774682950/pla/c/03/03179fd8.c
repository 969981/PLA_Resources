/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03179fd8; name: FUN_03179fd8
 */


void FUN_03179fd8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  uVar3 = *(uint *)(param_2 + 0x40);
  if (0 < (int)uVar3) {
    lVar9 = param_1 + 0x20;
    FUN_03183ae8(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38),lVar9);
    if ((uVar3 != 1) &&
       (FUN_03183ae8(*(long *)(param_1 + 0x38) + 0xf0,*(long *)(param_2 + 0x38) + 0xf0,lVar9),
       uVar3 != 2)) {
      lVar15 = (ulong)uVar3 - 2;
      lVar17 = 0x1e0;
      do {
        FUN_03183ae8(*(long *)(param_1 + 0x38) + lVar17,*(long *)(param_2 + 0x38) + lVar17,lVar9);
        lVar15 = lVar15 + -1;
        lVar17 = lVar17 + 0xf0;
      } while (lVar15 != 0);
    }
  }
  uVar3 = *(uint *)(param_2 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < (int)uVar3) {
    uVar13 = FUN_0317a650(PTR_PTR_0434a080,uVar3,*(undefined8 *)(param_1 + 0x48),
                          *(undefined4 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x48) = uVar13;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if ((int)uVar4 < (int)uVar3) {
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar4 * 0x18);
    uVar2 = uVar3 - uVar4 & 3;
    *(uint *)(param_1 + 0x50) = uVar3;
    if (2 < uVar3 + ~uVar4) {
      iVar14 = (uVar4 + uVar2) - uVar3;
      puVar12 = puVar11;
      do {
        puVar11 = puVar12 + 0xc;
        *puVar12 = 0;
        puVar12[1] = 0;
        iVar14 = iVar14 + 4;
        *(undefined1 *)(puVar12 + 2) = 1;
        puVar12[3] = 0;
        puVar12[4] = 0;
        *(undefined1 *)(puVar12 + 5) = 1;
        puVar12[6] = 0;
        puVar12[7] = 0;
        *(undefined1 *)(puVar12 + 8) = 1;
        puVar12[9] = 0;
        puVar12[10] = 0;
        *(undefined1 *)(puVar12 + 0xb) = 1;
        puVar12 = puVar11;
      } while (iVar14 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 1;
      puVar11 = puVar11 + 3;
    }
  }
  else if ((int)uVar3 < (int)uVar4) {
    lVar17 = *(long *)(param_1 + 0x48);
    plVar7 = (long *)(lVar17 + (long)(int)uVar4 * 0x18);
    *(uint *)(param_1 + 0x50) = uVar3;
    lVar9 = tpidr_el0;
    do {
      lVar15 = plVar7[-2];
      plVar7 = plVar7 + -3;
      if (lVar15 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar15 + 8));
        lVar10 = *(long *)(lVar9 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar10;
        }
        plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,0x38);
      }
      plVar8 = (long *)*plVar7;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar15 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (plVar7 != (long *)(lVar17 + (long)(int)uVar3 * 0x18));
  }
  if (0 < (int)uVar3) {
    uVar16 = 0;
    do {
      lVar9 = uVar16 * 0x18;
      lVar17 = *(long *)(param_1 + 0x48);
      uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar9);
      *(undefined8 *)(*(long *)(param_2 + 0x48) + lVar9) = 0;
      plVar7 = *(long **)(lVar17 + lVar9);
      *(undefined8 *)(lVar17 + lVar9) = uVar13;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar9 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      lVar9 = uVar16 * 0x18;
      uVar16 = uVar16 + 1;
      *(undefined1 *)(lVar17 + lVar9 + 0x10) = 1;
    } while (uVar16 != uVar3);
  }
  return;
}


