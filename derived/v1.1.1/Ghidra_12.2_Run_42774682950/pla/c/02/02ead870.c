/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ead870; name: FUN_02ead870
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_02ead870(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
            byte param_11)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int *piVar10;
  void *__dest;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  
  if (param_1 == (int *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    return 0x1f;
  }
  *param_5 = 0;
  *param_6 = 0;
  if (0xb < param_2) {
    if (*param_1 == 0x46464952) {
      if ((param_1[2] == 0x45564157) || (param_1[2] == 0x414d5758)) {
        uVar11 = (ulong)param_2 - 0xc;
        if ((uVar11 & 0xfffffff8) != 0) {
          piVar2 = (int *)((long)param_1 + (ulong)param_2);
          bVar9 = false;
          bVar8 = false;
          piVar12 = param_1 + 3;
          do {
            iVar4 = *piVar12;
            uVar5 = piVar12[1];
            if (iVar4 != 0x61746164 && (int)uVar11 - 8U < uVar5) {
              return 8;
            }
            puVar1 = (uint *)(piVar12 + 2);
            if (iVar4 < 0x5453494c) {
              if (iVar4 == 0x20746d66) {
                if (!bVar9) {
                  *(uint **)(param_3 + 2) = puVar1;
                  *param_3 = uVar5;
                  if (((param_11 & 1) == 0) &&
                     ((uVar6 = piVar12[7], 0x200 < (uVar6 & 0xf00) ||
                      ((uVar6 & 0xff) != (uint)*(ushort *)((long)piVar12 + 10))))) {
                    uVar7 = uVar6 - (uVar6 >> 1 & 0x55555555);
                    uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
                    piVar12[7] = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 |
                                 uVar6 << 0xc | 0x100;
                  }
                  bVar9 = true;
                }
              }
              else if (iVar4 == 0x20657563) {
                if (!bVar9) {
                  return 7;
                }
                if ((param_4 != (uint *)0x0) && (!bVar8)) {
                  uVar6 = *puVar1;
                  if (uVar6 != 0) {
                    *param_4 = uVar6;
                    piVar10 = (int *)(*DAT_0442d138)(5,(ulong)uVar6 << 4);
                    *(int **)(param_4 + 2) = piVar10;
                    if (piVar10 == (int *)0x0) {
                      *param_4 = 0;
                      return 0x34;
                    }
                    if (*param_4 != 0) {
                      iVar4 = piVar12[4];
                      *piVar10 = piVar12[3];
                      *(int *)(*(long *)(param_4 + 2) + 4) = iVar4;
                      *(undefined8 *)(*(long *)(param_4 + 2) + 8) = 0;
                      if (1 < *param_4) {
                        iVar4 = piVar12[10];
                        *(int *)(*(long *)(param_4 + 2) + 0x10) = piVar12[9];
                        *(int *)(*(long *)(param_4 + 2) + 0x14) = iVar4;
                        *(undefined8 *)(*(long *)(param_4 + 2) + 0x18) = 0;
                        if (2 < *param_4) {
                          lVar13 = 0;
                          piVar12 = piVar12 + 0x10;
                          uVar11 = 2;
                          do {
                            uVar11 = uVar11 + 1;
                            piVar10 = piVar12 + -1;
                            iVar4 = *piVar12;
                            piVar12 = piVar12 + 6;
                            *(int *)(*(long *)(param_4 + 2) + lVar13 + 0x20) = *piVar10;
                            *(int *)(*(long *)(param_4 + 2) + lVar13 + 0x24) = iVar4;
                            lVar3 = *(long *)(param_4 + 2) + lVar13;
                            lVar13 = lVar13 + 0x10;
                            *(undefined8 *)(lVar3 + 0x28) = 0;
                          } while (uVar11 < *param_4);
                        }
                      }
                    }
                  }
                  bVar8 = true;
                }
              }
              else if ((iVar4 == 0x20646b61) && (param_9 != (uint *)0x0)) {
                *param_9 = uVar5;
                *(uint **)(param_9 + 2) = puVar1;
              }
joined_r0x02eade14:
              piVar12 = (int *)((long)puVar1 + (ulong)uVar5);
              if ((((uVar5 & 1) != 0) &&
                  (piVar12 = (int *)((long)puVar1 + (ulong)uVar5), (char)*piVar12 == '\0')) &&
                 (piVar12 = (int *)((long)piVar12 + 1), piVar2 < piVar12)) {
                return 7;
              }
            }
            else {
              if (0x6b656572 < iVar4) {
                if (iVar4 == 0x6c62616c) {
                  if (((param_4 != (uint *)0x0) && (bVar8)) && (*param_4 != 0)) {
                    lVar13 = 0;
                    do {
                      if (*(uint *)(*(long *)(param_4 + 2) + lVar13) == *puVar1) {
                        __dest = (void *)(*DAT_0442d138)(5,uVar5 - 3);
                        if (__dest != (void *)0x0) {
                          memcpy(__dest,piVar12 + 3,(ulong)(uVar5 - 4));
                          *(undefined1 *)((long)__dest + (ulong)(uVar5 - 4)) = 0;
                          *(void **)(*(long *)(param_4 + 2) + lVar13 + 8) = __dest;
                        }
                        break;
                      }
                      lVar13 = lVar13 + 0x10;
                    } while ((ulong)*param_4 * 0x10 != lVar13);
                  }
                }
                else if (iVar4 == 0x6c706d73) {
                  if (piVar12[9] != 0) {
                    uVar6 = piVar12[10];
                    *param_5 = *(undefined4 *)((long)piVar12 + (ulong)uVar6 + 0x34);
                    *param_6 = *(undefined4 *)((long)piVar12 + (ulong)uVar6 + 0x38);
                  }
                }
                else if ((iVar4 == 0x6b656573) && (param_10 != (uint *)0x0)) {
                  *(uint **)(param_10 + 2) = puVar1;
                  *param_10 = uVar5;
                }
                goto joined_r0x02eade14;
              }
              if (iVar4 == 0x61746164) {
                if (bVar9) {
                  *param_7 = uVar5;
                  *param_8 = (int)puVar1 - (int)param_1;
                  return 1;
                }
                return 7;
              }
              if (iVar4 != 0x5453494c) goto joined_r0x02eade14;
              piVar12 = piVar12 + 3;
            }
            uVar11 = (long)piVar2 - (long)piVar12;
          } while ((uVar11 & 0xfffffff8) != 0);
        }
        return 8;
      }
    }
    else if (*param_1 == 0x5367674f) {
      return 1;
    }
  }
  return 7;
}


