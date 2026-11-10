/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031abe84; name: FUN_031abe84
 */


/* WARNING: Removing unreachable block (ram,0x031abfc0) */

void FUN_031abe84(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  uint local_70 [2];
  undefined4 local_68 [2];
  
  puVar8 = PTR_PTR_0434a080;
  if (*(char *)(param_1 + 100) != '\x04') {
    if (param_3 == 0) {
      if (param_2 == 0) {
        return;
      }
      iVar17 = *(int *)(param_1 + 0x58);
    }
    else {
      uVar9 = (ulong)*(int *)(param_1 + 0x40);
      if (0 < *(int *)(param_1 + 0x40)) {
        pcVar1 = (char *)(param_1 + 100);
        do {
          uVar9 = uVar9 - 1;
          local_68[0] = *(undefined4 *)(*(long *)(param_1 + 0x38) + uVar9 * 0x20 + 0x10);
          uVar10 = FUN_031ac1ec(param_3,local_68);
          if ((uVar10 & 1) != 0) {
            uVar10 = (long)*(int *)(param_1 + 0x40) - 1;
            *(int *)(param_1 + 0x40) = (int)uVar10;
            if (uVar9 != (uVar10 & 0xffffffff)) {
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar10 * 0x20);
              puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 0x20);
              *puVar4 = *puVar3;
              puVar4[1] = puVar3[1];
              uVar19 = puVar3[3];
              puVar4[2] = puVar3[2];
              puVar4[3] = uVar19;
            }
            iVar17 = *(int *)(param_1 + 0x78);
            uVar13 = *(uint *)(param_1 + 0x7c);
            uVar14 = iVar17 + 1;
            if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
              lVar18 = *(long *)(param_1 + 0x70);
            }
            else {
              uVar19 = *(undefined8 *)(param_1 + 0x70);
              if (0x3ffffffe < iVar17) {
                FUN_032bd0a8(uVar14);
                uVar13 = *(uint *)(param_1 + 0x7c);
              }
              uVar13 = (uVar13 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar13) {
                uVar13 = 0x3fffffff;
              }
              uVar7 = uVar14;
              if ((int)uVar14 <= (int)uVar13) {
                uVar7 = uVar13;
              }
              lVar18 = FUN_032bd1d4(puVar8,uVar7,4,uVar19,iVar17,(uint *)(param_1 + 0x7c));
              *(long *)(param_1 + 0x70) = lVar18;
              iVar17 = *(int *)(param_1 + 0x78);
            }
            *(int *)(lVar18 + (long)iVar17 * 4) = (int)uVar9;
            *(uint *)(param_1 + 0x78) = uVar14;
          }
          if (*(int *)(param_1 + 0x40) == 0) {
            cVar12 = *pcVar1;
            do {
              while( true ) {
                while (cVar12 != '\0') {
                  if (cVar12 != '\x01') goto LAB_031ac06c;
                  cVar12 = *pcVar1;
                  if (cVar12 == '\x01') {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                    if (bVar6) {
                      *pcVar1 = '\x03';
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      FUN_031c215c(*(undefined8 *)(param_1 + 0x68),1);
                      plVar11 = *(long **)(param_1 + 0x68);
                      *(undefined8 *)(param_1 + 0x68) = 0;
                      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
                        plVar2 = plVar11 + 2;
                        do {
                          lVar18 = *plVar2;
                          cVar12 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar6) {
                            *plVar2 = lVar18 + -1;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                        if (lVar18 + -1 == 0) {
                          (**(code **)(*plVar11 + 0x18))();
                        }
                      }
                      goto LAB_031ac06c;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                }
                cVar12 = *pcVar1;
                if (cVar12 == '\0') break;
                ClearExclusiveLocal();
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar6) {
                *pcVar1 = '\x02';
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
LAB_031ac06c:
        } while (0 < (long)uVar9);
      }
      lVar18 = (long)*(int *)(param_1 + 0x60);
      iVar17 = *(int *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x60) < iVar17) {
        uVar14 = 0xffffffff;
        do {
          uVar13 = *(uint *)(*(long *)(param_1 + 0x50) + lVar18 * 4) >> 0x16;
          if (uVar14 != uVar13) {
            local_70[0] = uVar13;
            uVar9 = FUN_031ac1ec(param_3,local_70);
            if ((uVar9 & 1) != 0) {
              FUN_031ac25c(param_1,param_4);
              return;
            }
            iVar17 = *(int *)(param_1 + 0x58);
            uVar14 = uVar13;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar17);
      }
      if (param_2 == 0) {
        return;
      }
    }
    lVar18 = (long)*(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x60) < iVar17) {
      lVar15 = *(long *)(param_1 + 0x50);
      iVar16 = -1;
      do {
        if (iVar16 != *(int *)(lVar15 + lVar18 * 4)) {
          uVar9 = FUN_03157db8(param_2);
          if ((uVar9 & 1) != 0) {
            FUN_031ac25c(param_1,param_4);
            return;
          }
          lVar15 = *(long *)(param_1 + 0x50);
          iVar17 = *(int *)(param_1 + 0x58);
          iVar16 = *(int *)(lVar15 + lVar18 * 4);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar17);
    }
  }
  return;
}


