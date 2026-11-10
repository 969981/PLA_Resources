/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046a150; name: FUN_0046a150
 */


/* WARNING: Removing unreachable block (ram,0x0046a3bc) */
/* WARNING: Removing unreachable block (ram,0x0046a418) */

bool FUN_0046a150(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 local_b0;
  long local_a8;
  int *local_a0;
  long local_90;
  undefined8 local_88;
  int local_68;
  int local_64;
  
  lVar15 = *(long *)(param_1 + 0xb8);
  uVar18 = *param_5;
  iVar4 = FUN_00407950(param_7);
  if (0 < iVar4) {
    iVar4 = 0;
    uVar16 = 0;
    local_b0 = 0;
    local_90 = 0;
    local_88 = 0;
    do {
      lVar9 = FUN_00407970(param_7,iVar4);
      uVar17 = *(uint *)(lVar9 + 0x98);
      if ((uVar17 >> 1 & 1) == 0) {
        uVar2 = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
          if ((uVar17 & 0x60) == 0) goto LAB_0046a238;
        }
        else if ((uVar17 >> 6 & 1) == 0) {
          if (*(long *)(lVar9 + 0xa8) == 0) goto LAB_0046a238;
        }
        else if ((*(uint *)(lVar9 + 0x9c) & (uVar2 ^ 0xffffffff)) != 0) {
LAB_0046a238:
          uVar10 = FUN_0044e490(lVar15);
          uVar11 = FUN_00466c00(lVar9);
          iVar5 = FUN_0044e250(uVar10,uVar11);
          if (iVar5 == 0) {
            uVar17 = 0x20;
LAB_0046a280:
            uVar17 = (*(uint *)(lVar9 + 0x84) >> 1 & 0x100 | uVar17) ^ 0x100;
            iVar5 = FUN_0046a8e0(param_1,lVar9,0);
            if (iVar5 != 0) {
              uVar17 = uVar17 | 0x40;
            }
            uVar10 = FUN_00466c00(lVar9);
            iVar5 = *(int *)(param_1 + 0xac);
            iVar6 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
            if (iVar5 != iVar6 + -1) {
              iVar5 = iVar5 + 1;
            }
            uVar11 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar5);
            iVar6 = FUN_00457410(uVar11,*(undefined8 *)(lVar9 + 0x88));
            if (((uVar17 >> 5 & 1) == 0) || (iVar6 != 0)) {
              iVar5 = iVar5 + 1;
              iVar6 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
              if (iVar5 < iVar6) {
                do {
                  uVar11 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar5);
                  uVar12 = FUN_0044e530();
                  iVar6 = FUN_0044e250(uVar12,uVar10);
                  if ((iVar6 == 0) &&
                     (iVar6 = FUN_00457410(uVar11,*(undefined8 *)(lVar9 + 0x88)), iVar6 == 0)) {
                    uVar17 = uVar17 | 0xc;
                    local_88 = uVar11;
                    goto LAB_0046a308;
                  }
                  iVar5 = iVar5 + 1;
                  iVar6 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
                } while (iVar5 < iVar6);
              }
              if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) ||
                 (iVar5 = FUN_00407950(*(undefined8 *)(param_1 + 0x10)), iVar5 < 1))
              goto LAB_0046a1d8;
              iVar5 = 0;
              do {
                uVar11 = FUN_00407970(*(undefined8 *)(param_1 + 0x10),iVar5);
                uVar12 = FUN_0044e530();
                iVar6 = FUN_0044e250(uVar12,uVar10);
                if ((iVar6 == 0) &&
                   (iVar6 = FUN_00457410(uVar11,*(undefined8 *)(lVar9 + 0x88)), iVar6 == 0)) {
                  uVar17 = uVar17 | 4;
                  local_88 = uVar11;
                  goto LAB_0046a308;
                }
                iVar5 = iVar5 + 1;
                iVar6 = FUN_00407950(*(undefined8 *)(param_1 + 0x10));
              } while (iVar5 < iVar6);
            }
            else {
              uVar17 = uVar17 | 0x1c;
              local_88 = uVar11;
            }
            if ((uVar17 >> 2 & 1) != 0) {
LAB_0046a308:
              uVar3 = *(uint *)(lVar9 + 0x98);
              if ((uVar3 >> 4 & 1) == 0) {
                if ((*(byte *)(lVar15 + 0xe0) >> 4 & 1) == 0) {
                  uVar3 = uVar3 >> 3;
                }
                else {
                  uVar3 = uVar3 >> 2;
                }
                if ((uVar3 & 1) == 0) {
                  uVar3 = *(uint *)(lVar9 + 0x9c);
                  iVar5 = FUN_00407950(*(undefined8 *)(lVar15 + 0x108));
                  if (0 < iVar5) {
                    iVar5 = 0;
                    do {
                      puVar13 = (undefined8 *)FUN_00407970(*(undefined8 *)(lVar15 + 0x108),iVar5);
                      uVar10 = FUN_00466c00(lVar9);
                      if (puVar13[2] == 0) {
                        if ((uVar17 >> 5 & 1) != 0) {
LAB_0046a4e8:
                          if ((*(undefined8 **)(lVar9 + 0x90) == (undefined8 *)0x0) ||
                             ((local_a0 = (int *)*puVar13, local_a0 == (int *)0x0 ||
                              (piVar14 = (int *)**(undefined8 **)(lVar9 + 0x90),
                              piVar14 == (int *)0x0)))) {
LAB_0046a654:
                            uVar3 = *(uint *)(puVar13 + 3) & uVar3;
                            uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
                            goto joined_r0x0046a678;
                          }
                          if (*local_a0 == 1) {
                            local_a8 = *(long *)(local_a0 + 4);
                            if (local_a8 != 0) {
                              if (*piVar14 != 1) {
                                local_a0 = piVar14;
                                goto LAB_0046a5f8;
                              }
                              if ((*(long *)(piVar14 + 4) != 0) &&
                                 (iVar6 = FUN_0044e250(local_a8), iVar6 == 0)) goto LAB_0046a654;
                            }
                          }
                          else if (*piVar14 == 1) {
                            local_a8 = *(long *)(piVar14 + 4);
                            if (local_a8 != 0) {
LAB_0046a5f8:
                              uVar10 = *(undefined8 *)(local_a0 + 2);
                              iVar6 = FUN_00407950(uVar10);
                              if (0 < iVar6) {
                                iVar6 = 0;
                                do {
                                  piVar14 = (int *)FUN_00407970(uVar10,iVar6);
                                  if ((*piVar14 == 4) &&
                                     (iVar7 = FUN_0044e250(local_a8,*(undefined8 *)(piVar14 + 2)),
                                     iVar7 == 0)) goto LAB_0046a654;
                                  iVar6 = iVar6 + 1;
                                  iVar7 = FUN_00407950(uVar10);
                                } while (iVar6 < iVar7);
                              }
                            }
                          }
                          else {
                            iVar6 = FUN_00407950(*(undefined8 *)(local_a0 + 2));
                            if (0 < iVar6) {
                              iVar6 = 0;
                              do {
                                uVar10 = FUN_00407970(*(undefined8 *)(local_a0 + 2),iVar6);
                                iVar7 = FUN_00407950(*(undefined8 *)(piVar14 + 2));
                                if (0 < iVar7) {
                                  iVar7 = 0;
                                  do {
                                    uVar11 = FUN_00407970(*(undefined8 *)(piVar14 + 2),iVar7);
                                    iVar8 = FUN_0044e150(uVar10,uVar11);
                                    if (iVar8 == 0) goto LAB_0046a654;
                                    iVar7 = iVar7 + 1;
                                    iVar8 = FUN_00407950(*(undefined8 *)(piVar14 + 2));
                                  } while (iVar7 < iVar8);
                                }
                                iVar6 = iVar6 + 1;
                                iVar7 = FUN_00407950(*(undefined8 *)(local_a0 + 2));
                              } while (iVar6 < iVar7);
                            }
                          }
                        }
                      }
                      else {
                        iVar6 = FUN_00407950();
                        if (0 < iVar6) {
                          iVar6 = 0;
                          do {
                            piVar14 = (int *)FUN_00407970(puVar13[2],iVar6);
                            if ((*piVar14 == 4) &&
                               (iVar7 = FUN_0044e250(*(undefined8 *)(piVar14 + 2),uVar10),
                               iVar7 == 0)) goto LAB_0046a4e8;
                            iVar6 = iVar6 + 1;
                            iVar7 = FUN_00407950(puVar13[2]);
                          } while (iVar6 < iVar7);
                        }
                      }
                      iVar5 = iVar5 + 1;
                      iVar6 = FUN_00407950(*(undefined8 *)(lVar15 + 0x108));
                    } while (iVar5 < iVar6);
                  }
                  if (((*(long **)(lVar9 + 0x90) == (long *)0x0) || (**(long **)(lVar9 + 0x90) == 0)
                      ) && ((uVar17 >> 5 & 1) != 0)) {
                    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
joined_r0x0046a678:
                    if (uVar1 == 0) goto LAB_0046a1d8;
                    uVar2 = uVar3 | uVar2;
                    uVar17 = uVar17 | 0x80;
                  }
                }
              }
              if (((int)uVar18 <= (int)uVar17) && (uVar17 != 0)) {
                if ((local_90 != 0) && (uVar17 == uVar18)) {
                  uVar10 = FUN_00466be0(local_90);
                  uVar11 = FUN_00466be0(lVar9);
                  iVar5 = FUN_00447ed0(&local_64,&local_68,uVar10,uVar11);
                  if (iVar5 == 0) goto LAB_0046a268;
                  if ((local_64 < 1) && (local_68 < 1)) {
                    goto LAB_0046a1d8;
                  }
                }
                local_b0 = local_88;
                uVar18 = uVar17;
                uVar16 = uVar2;
                local_90 = lVar9;
              }
            }
          }
          else {
            if ((*(byte *)(lVar9 + 0x98) >> 5 & 1) != 0) {
              uVar17 = 0;
              goto LAB_0046a280;
            }
LAB_0046a268:
          }
        }
      }
LAB_0046a1d8:
      iVar4 = iVar4 + 1;
      iVar5 = FUN_00407950(param_7);
    } while (iVar4 < iVar5);
    if (local_90 != 0) {
      FUN_00466390(*param_2);
      *param_2 = local_90;
      *param_4 = local_b0;
      *param_5 = uVar18;
      *param_6 = uVar16;
      FUN_00466b90(local_90);
      FUN_00466390(*param_3);
      *param_3 = 0;
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) != 0) &&
         (((*(uint *)(local_90 + 0x84) | *(uint *)(*(long *)(param_1 + 0xb8) + 0xe0)) >> 0xc & 1) !=
          0)) {
        iVar4 = FUN_00407950(param_7);
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            lVar15 = FUN_00407970(param_7,iVar4);
            if ((*(long *)(lVar15 + 0xa8) != 0) && (*(long *)(local_90 + 0xa0) != 0)) {
              uVar10 = FUN_00466c00(local_90);
              uVar11 = FUN_00466c00(lVar15);
              iVar5 = FUN_0044e250(uVar10,uVar11);
              if (((iVar5 == 0) &&
                  (((iVar5 = FUN_004688e0(lVar15,local_90,0x5a), iVar5 != 0 &&
                    (iVar5 = FUN_004688e0(lVar15,local_90,0x302), iVar5 != 0)) &&
                   (iVar5 = FUN_00420090(*(undefined8 *)(lVar15 + 0xa8),
                                         *(undefined8 *)(local_90 + 0xa0)), iVar5 < 1)))) &&
                 (iVar5 = FUN_00420090(*(undefined8 *)(lVar15 + 0xa0),
                                       *(undefined8 *)(local_90 + 0xa0)), 0 < iVar5)) {
                iVar4 = FUN_0046a8e0(param_1,lVar15,0);
                if (iVar4 != 0) {
                  *param_5 = *param_5 | 2;
                }
                FUN_00466b90(lVar15);
                *param_3 = lVar15;
                goto LAB_0046a8b8;
              }
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_00407950(param_7);
          } while (iVar4 < iVar5);
        }
        *param_3 = 0;
      }
    }
  }
LAB_0046a8b8:
  return 0x1bf < (int)uVar18;
}


