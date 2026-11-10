/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033272ac; name: FUN_033272ac
 */


void FUN_033272ac(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  
  uVar7 = *(uint *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x38);
  if (0 < (int)uVar7) {
    uVar9 = 0;
    do {
      if (*(long *)(lVar6 + uVar9 * 8) == param_2) {
        if (-1 < (int)uVar9) {
          return;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  lVar16 = (long)(int)uVar7;
  iVar15 = uVar7 + 1;
  if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) <= (int)uVar7) {
    lVar6 = FUN_03327fa4(PTR_PTR_0434a080,iVar15);
    uVar7 = *(uint *)(param_1 + 0x40);
    *(long *)(param_1 + 0x38) = lVar6;
  }
  *(long *)(lVar6 + (long)(int)uVar7 * 8) = param_2;
  lVar6 = *(long *)(param_1 + 0x38);
  *(int *)(param_1 + 0x40) = iVar15;
  plVar17 = (long *)**(undefined8 **)(lVar6 + lVar16 * 8);
  if (plVar17 != (long *)0x0) {
    do {
      plVar5 = DAT_0444b438;
      nn::os::LockMutex((MutexType *)&DAT_0444b348);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar7 = *(uint *)(plVar17 + 1);
      if ((int)uVar7 < 1) {
        lVar16 = *plVar17;
      }
      else {
        lVar16 = *plVar17;
        lVar11 = (long)(int)uVar7;
        lVar6 = lVar11 + -1 << 0x20;
        lVar14 = (lVar11 + -1) * 0x10;
        uVar13 = uVar7;
        do {
          uVar13 = uVar13 - 1;
          if (*(long **)(lVar16 + lVar14) == plVar5) {
            if (-1 < (int)uVar13) {
              *(undefined1 *)(lVar16 + (lVar6 >> 0x1c) + 8) = 3;
              uVar9 = (ulong)(int)plVar17[1];
              *(undefined1 *)(plVar17 + 10) = 0;
              if (0 < (int)plVar17[1]) {
                uVar10 = uVar9 & 3;
                if (uVar9 - 1 < 3) {
                  bVar8 = 0;
                  lVar6 = 0;
                }
                else {
                  bVar8 = 0;
                  lVar6 = 0;
                  pbVar12 = (byte *)(*plVar17 + 0x28);
                  do {
                    if (bVar8 <= pbVar12[-0x20]) {
                      bVar8 = pbVar12[-0x20];
                    }
                    *(byte *)(plVar17 + 10) = bVar8;
                    if (bVar8 <= pbVar12[-0x10]) {
                      bVar8 = pbVar12[-0x10];
                    }
                    *(byte *)(plVar17 + 10) = bVar8;
                    if (bVar8 <= *pbVar12) {
                      bVar8 = *pbVar12;
                    }
                    *(byte *)(plVar17 + 10) = bVar8;
                    pbVar1 = pbVar12 + 0x10;
                    pbVar12 = pbVar12 + 0x40;
                    lVar6 = lVar6 + 4;
                    if (bVar8 <= *pbVar1) {
                      bVar8 = *pbVar1;
                    }
                    *(byte *)(plVar17 + 10) = bVar8;
                  } while (uVar9 - uVar10 != lVar6);
                }
                if (uVar10 != 0) {
                  pbVar12 = (byte *)(*plVar17 + lVar6 * 0x10 + 8);
                  do {
                    if (bVar8 <= *pbVar12) {
                      bVar8 = *pbVar12;
                    }
                    uVar10 = uVar10 - 1;
                    *(byte *)(plVar17 + 10) = bVar8;
                    pbVar12 = pbVar12 + 0x10;
                  } while (uVar10 != 0);
                }
              }
              goto LAB_03327438;
            }
            break;
          }
          lVar11 = lVar11 + -1;
          lVar6 = lVar6 + -0x100000000;
          lVar14 = lVar14 + -0x10;
        } while (0 < lVar11);
      }
      iVar15 = uVar7 + 1;
      if ((int)(*(uint *)((long)plVar17 + 0xc) & 0x3fffffff) <= (int)uVar7) {
        lVar16 = FUN_0332802c(PTR_PTR_0434a080,iVar15);
        uVar7 = *(uint *)(plVar17 + 1);
        *plVar17 = lVar16;
      }
      *(long **)(lVar16 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4)) =
           plVar5;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(lVar16 + (long)(int)uVar7 * 0x10 + 8) = 3;
      bVar8 = *(byte *)(plVar17 + 10);
      *(int *)(plVar17 + 1) = iVar15;
      if (bVar8 < 4) {
        bVar8 = 3;
      }
      *(byte *)(plVar17 + 10) = bVar8;
LAB_03327438:
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      nn::os::UnlockMutex((MutexType *)&DAT_0444b348);
      plVar17 = (long *)plVar17[0xc];
    } while (plVar17 != (long *)0x0);
    lVar6 = *(long *)(param_1 + 0x38);
    iVar15 = *(int *)(param_1 + 0x40);
  }
  FUN_03327ef0(param_1 + 0x48,**(undefined8 **)(lVar6 + (long)(iVar15 + -1) * 8));
  return;
}


