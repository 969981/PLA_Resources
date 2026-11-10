/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02957720; name: FUN_02957720
 */


ulong FUN_02957720(long param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  
  piVar9 = *(int **)(param_1 + 8);
  if (piVar9 != (int *)0x0) {
    uVar13 = (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9));
    uVar16 = (ulong)*(uint *)((long)piVar9 + uVar13);
    uVar12 = *(uint *)((long)((long)piVar9 + uVar13) + uVar16);
    if (10 < uVar12) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (uVar12 != 0) {
      param_3 = param_3 & 0xff;
      iVar4 = (uint)(5 < param_3) << 1;
      iVar20 = (uint)(param_3 < 0x1e) << 2;
      if (0xb < param_3) {
        iVar4 = 1;
      }
      if (param_3 < 0x18) {
        iVar20 = 3;
      }
      uVar17 = 0;
      if (0x11 < param_3) {
        iVar4 = iVar20;
      }
      do {
        if (*(char *)(param_1 + uVar17 + 0x10) == '\0') {
          puVar10 = (uint *)((long)piVar9 + uVar17 * 4 + uVar16 + uVar13 + 4);
          piVar9 = (int *)((long)puVar10 + (ulong)*puVar10);
          puVar14 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar3 = *puVar14;
          if (uVar3 < 5) {
            if (param_2 == 0) goto code_r0x029578a4;
          }
          else {
            uVar12 = 0;
            if ((ulong)puVar14[2] != 0) {
              uVar12 = (uint)*(byte *)((long)piVar9 + (ulong)puVar14[2]);
            }
            if (uVar12 == param_2) {
code_r0x029578a4:
              switch(param_2) {
              case 0:
              case 7:
              case 0xd:
                if ((uVar3 < 7) || ((ulong)puVar14[3] == 0)) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (ulong)*(uint *)((long)piVar9 + (ulong)puVar14[3]);
                }
                if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1c8) + 8) == uVar13) {
                  return uVar17;
                }
                break;
              case 1:
                if (uVar3 < 7) {
                  if (iVar4 == 0) goto LAB_02957958;
                }
                else {
                  iVar20 = 0;
                  if ((ulong)puVar14[3] != 0) {
                    iVar20 = *(int *)((long)piVar9 + (ulong)puVar14[3]);
                  }
                  if (iVar20 == iVar4) {
LAB_02957958:
                    if (uVar3 < 7) {
                      uVar13 = 0;
                      uVar12 = 0;
                    }
                    else {
                      uVar13 = 0;
                      if ((ulong)puVar14[3] != 0) {
                        uVar13 = (ulong)*(uint *)((long)piVar9 + (ulong)puVar14[3]);
                      }
                      if ((uVar3 < 9) || ((ulong)puVar14[4] == 0)) {
                        uVar12 = 0;
                      }
                      else {
                        uVar12 = *(uint *)((long)piVar9 + (ulong)puVar14[4]);
                      }
                    }
                    lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 8);
                    pbVar18 = (byte *)(lVar15 + uVar13 * 0x38 + 0x38);
                    if (*pbVar18 == 0) {
                      if (uVar12 == 0) {
                        return uVar17;
                      }
                    }
                    else {
                      uVar16 = 0;
                      uVar6 = 0;
                      do {
                        lVar21 = *(long *)(lVar15 + uVar13 * 0x38 + 8 + uVar16 * 8);
                        lVar11 = *(long *)(lVar21 + 0x60);
                        uVar7 = FUN_02c6cf3c(*(undefined8 *)(lVar11 + 0x98));
                        uVar8 = 0;
                        if (((uVar7 & 1) == 0) &&
                           ((*(ushort *)(*(long *)(*(long *)(lVar11 + 0x98) + 0x10) + 4) >> 2 & 1)
                            == 0)) {
                          uVar8 = (uint)(*(short *)(lVar21 + 0x74) != 0);
                        }
                        uVar6 = uVar6 + uVar8;
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < *pbVar18);
                      if (uVar12 == (uVar6 & 0xff)) {
                        return uVar17;
                      }
                    }
                  }
                }
                break;
              case 2:
              case 3:
              case 4:
              case 8:
              case 9:
              case 10:
                if ((uVar3 < 7) || ((ulong)puVar14[3] == 0)) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = *(int *)((long)piVar9 + (ulong)puVar14[3]);
                }
                if (iVar20 == iVar4) {
                  return uVar17;
                }
                break;
              case 5:
                if (uVar3 < 7) {
                  uVar12 = 0;
                  iVar20 = 0;
                  lVar15 = 0;
                  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
                }
                else {
                  uVar12 = 0;
                  if ((ulong)puVar14[3] != 0) {
                    uVar12 = *(uint *)((long)piVar9 + (ulong)puVar14[3]);
                  }
                  if ((uVar3 < 9) || ((ulong)puVar14[4] == 0)) {
                    iVar20 = 0;
                  }
                  else {
                    iVar20 = *(int *)((long)piVar9 + (ulong)puVar14[4]);
                  }
                  uVar6 = uVar12 & 0xff;
                  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
                  lVar15 = 3;
                  if (0x17 < uVar6) {
                    lVar15 = (ulong)(uVar6 < 0x1e) << 2;
                  }
                  lVar21 = 1;
                  if (0x11 < uVar6) {
                    lVar21 = lVar15;
                  }
                  lVar1 = 2;
                  if (0xb < uVar6) {
                    lVar1 = lVar21;
                  }
                  lVar15 = 0;
                  if (5 < uVar6) {
                    lVar15 = lVar1;
                  }
                }
                bVar2 = *(byte *)(lVar11 + lVar15 * 0x38 + 0x38);
                if ((ulong)bVar2 != 0) {
                  uVar13 = 0;
                  do {
                    if ((uint)*(byte *)(*(long *)(lVar11 + lVar15 * 0x38 + 8 + uVar13 * 8) + 0x7d)
                        == (uVar12 & 0xff)) {
                      if (((uint)uVar13 & 0xff) != 6) {
                        if (((uint)uVar13 & 0xff) < (uint)bVar2) {
                          uVar19 = *(undefined8 *)(lVar11 + lVar15 * 0x38 + uVar13 * 8 + 8);
                        }
                        else {
                          uVar19 = 0;
                        }
                        iVar5 = FUN_029506a8(uVar19,0xe);
                        uVar6 = iVar5 * iVar20;
                        uVar12 = uVar6 / 100;
                        if (0x31 < uVar6 % 100) {
                          uVar12 = uVar6 / 100 + 1;
                        }
                        uVar6 = FUN_029506a8(uVar19,0xd);
                        if (uVar6 <= uVar12) {
                          return uVar17;
                        }
                      }
                      break;
                    }
                    uVar13 = uVar13 + 1;
                  } while (bVar2 != uVar13);
                }
                break;
              case 6:
                if (uVar3 < 7) {
                  uVar12 = 0;
LAB_02957bd0:
                  iVar20 = 0;
                }
                else {
                  uVar12 = 0;
                  if ((ulong)puVar14[3] != 0) {
                    uVar12 = *(uint *)((long)piVar9 + (ulong)puVar14[3]);
                  }
                  if ((uVar3 < 9) || ((ulong)puVar14[4] == 0)) goto LAB_02957bd0;
                  iVar20 = *(int *)((long)piVar9 + (ulong)puVar14[4]);
                }
                if ((uVar12 == param_3) && (iVar20 == param_4)) {
                  return uVar17;
                }
                break;
              case 0xb:
                if (uVar3 < 7) {
                  if (iVar4 == 0) goto LAB_02957a40;
                }
                else {
                  iVar20 = 0;
                  if ((ulong)puVar14[3] != 0) {
                    iVar20 = *(int *)((long)piVar9 + (ulong)puVar14[3]);
                  }
                  if (iVar20 == iVar4) {
LAB_02957a40:
                    if ((uVar3 < 9) || ((ulong)puVar14[4] == 0)) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = *(uint *)((long)piVar9 + (ulong)puVar14[4]);
                    }
                    if ((uVar12 & 0xff) == (param_5 & 0xff)) {
                      return uVar17;
                    }
                  }
                }
                break;
              case 0xc:
                return uVar17;
              case 0xe:
                if ((uVar3 < 7) || ((ulong)puVar14[3] == 0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = *(uint *)((long)piVar9 + (ulong)puVar14[3]);
                }
                if (uVar12 == param_3) {
                  return uVar17;
                }
              }
            }
          }
        }
        uVar12 = (int)uVar17 + 1U & 0xff;
        uVar17 = (ulong)uVar12;
        piVar9 = *(int **)(param_1 + 8);
        uVar13 = (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9));
        uVar16 = (ulong)*(uint *)((long)piVar9 + uVar13);
        if (*(uint *)((long)((long)piVar9 + uVar13) + uVar16) <= uVar12) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


