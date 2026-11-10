/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021a0a0; name: FUN_0021a0a0
 */


void FUN_0021a0a0(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  uint uVar19;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    uVar18 = param_3 + 5;
    iVar9 = 0;
    uVar16 = uVar18;
    if (param_2 != 0) goto LAB_0021a420;
LAB_0021a5e8:
    uVar19 = *(uint *)((long)param_1 + 0x1734);
    if ((uVar18 == uVar16) || ((int)param_1[0x19] == 4)) {
      uVar13 = param_4 + 2U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar13 << (ulong)(uVar19 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar19 < 0xe) {
        iVar9 = uVar19 + 3;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        *(short *)(param_1 + 0x2e6) =
             (short)(uVar13 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar9 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar9;
      FUN_0021b320(param_1,&DAT_039ceea2,&DAT_039cf322);
      FUN_00219c30(param_1);
    }
    else {
      uVar13 = param_4 + 4U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar13 << (ulong)(uVar19 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar19 < 0xe) {
        uVar19 = uVar19 + 3;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar13 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar19 = *(int *)((long)param_1 + 0x1734) - 0xd;
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
      }
      uVar1 = *(uint *)(param_1 + 0x16f);
      uVar13 = (int)param_1[0x16c] + 0xff00U & 0xffff;
      uVar11 = uVar11 | uVar13 << (ulong)(uVar19 & 0x1f);
      *(uint *)((long)param_1 + 0x1734) = uVar19;
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar19 < 0xc) {
        uVar19 = uVar19 + 5;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar13 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
        uVar19 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      uVar13 = uVar1 & 0xffff;
      uVar11 = uVar11 | uVar13 << (ulong)(uVar19 & 0x1f);
      *(uint *)((long)param_1 + 0x1734) = uVar19;
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar19 < 0xc) {
        uVar19 = uVar19 + 5;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar13 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
        uVar19 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      *(uint *)((long)param_1 + 0x1734) = uVar19;
      uVar13 = iVar9 + 0xfffdU & 0xffff;
      uVar11 = uVar11 | uVar13 << (ulong)(uVar19 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar19 < 0xd) {
        uVar19 = uVar19 + 4;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar19 = *(int *)((long)param_1 + 0x1734) - 0xc;
        uVar11 = uVar13 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
      }
      uVar18 = (ulong)(iVar9 + 1);
      *(uint *)((long)param_1 + 0x1734) = uVar19;
      pbVar15 = &DAT_039cf4d4;
      do {
        while( true ) {
          uVar2 = *(ushort *)((long)param_1 + (ulong)*pbVar15 * 4 + 0xabe);
          uVar11 = uVar11 | (uint)uVar2 << (ulong)(uVar19 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar11;
          if ((int)uVar19 < 0xe) break;
          lVar14 = param_1[5];
          param_1[5] = lVar14 + 1;
          *(char *)(param_1[2] + lVar14) = (char)uVar11;
          lVar14 = param_1[5];
          param_1[5] = lVar14 + 1;
          *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
          uVar19 = *(int *)((long)param_1 + 0x1734) - 0xd;
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
          uVar11 = (uint)uVar2;
          *(ushort *)(param_1 + 0x2e6) = uVar2;
          uVar18 = uVar18 - 1;
          pbVar15 = pbVar15 + 1;
          *(uint *)((long)param_1 + 0x1734) = uVar19;
          if (uVar18 == 0) goto LAB_0021a924;
        }
        uVar19 = uVar19 + 3;
        uVar18 = uVar18 - 1;
        pbVar15 = pbVar15 + 1;
        *(uint *)((long)param_1 + 0x1734) = uVar19;
      } while (uVar18 != 0);
LAB_0021a924:
      FUN_0021b700(param_1,(long)param_1 + 0xd4);
      FUN_0021b700(param_1,param_1 + 0x139,uVar1);
      FUN_0021b320(param_1,(long)param_1 + 0xd4,param_1 + 0x139);
      FUN_00219c30(param_1);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((((*(short *)((long)param_1 + 0xd4) == 0) && ((short)param_1[0x1b] == 0)) &&
               (*(short *)((long)param_1 + 0xdc) == 0)) &&
              (((short)param_1[0x1c] == 0 && (*(short *)((long)param_1 + 0xe4) == 0)))) &&
             ((short)param_1[0x1d] == 0)) &&
            (((*(short *)((long)param_1 + 0xec) == 0 && (*(short *)((long)param_1 + 0x10c) == 0)) &&
             (((short)param_1[0x22] == 0 &&
              (((*(short *)((long)param_1 + 0x114) == 0 && ((short)param_1[0x23] == 0)) &&
               (*(short *)((long)param_1 + 0x11c) == 0)))))))) &&
           (((short)param_1[0x24] == 0 && (*(short *)((long)param_1 + 0x124) == 0)))) &&
          (((short)param_1[0x25] == 0 &&
           (((*(short *)((long)param_1 + 300) == 0 && ((short)param_1[0x26] == 0)) &&
            ((*(short *)((long)param_1 + 0x134) == 0 &&
             ((((short)param_1[0x27] == 0 && (*(short *)((long)param_1 + 0x144) == 0)) &&
              ((short)param_1[0x29] == 0)))))))))) &&
         ((*(short *)((long)param_1 + 0x14c) == 0 && ((short)param_1[0x2a] == 0)))) {
        if (((short)param_1[0x1f] == 0) &&
           ((*(short *)((long)param_1 + 0xfc) == 0 && ((short)param_1[0x21] == 0)))) {
          lVar14 = 0;
          do {
            if ((*(short *)((long)param_1 + lVar14 + 0x154) != 0) ||
               (*(short *)((long)param_1 + lVar14 + 0x158) != 0)) goto LAB_0021a980;
            lVar14 = lVar14 + 8;
          } while (lVar14 != 0x380);
          uVar12 = 0;
        }
        else {
LAB_0021a980:
          uVar12 = 1;
        }
      }
      else {
        uVar12 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar12;
    }
    FUN_0021a9b0(param_1,param_1 + 0x16b);
    FUN_0021a9b0(param_1,param_1 + 0x16e);
    lVar14 = param_1[0x16c];
    uVar19 = (int)lVar14 + 1;
    uVar2 = *(ushort *)((long)param_1 + 0xd6);
    uVar18 = (ulong)uVar2;
    *(undefined2 *)((long)param_1 + (long)(int)uVar19 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar14) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      uVar13 = 0x8a;
      if (uVar2 != 0) {
        uVar13 = 7;
      }
      uVar16 = (ulong)uVar19;
      puVar17 = (ushort *)((long)param_1 + 0xda);
      uVar7 = 0xffffffff;
      uVar19 = (uint)*puVar17;
      iVar4 = 1;
      uVar6 = uVar7;
      if (1 < uVar13) goto LAB_0021a274;
      do {
        uVar6 = uVar18;
        uVar13 = (uint)uVar6;
        if (iVar4 < iVar9) {
          plVar5 = (long *)((long)param_1 + uVar6 * 4 + 0xabc);
          sVar3 = *(short *)((long)param_1 + uVar6 * 4 + 0xabc) + (short)iVar4;
        }
        else if (uVar13 == 0) {
          if (iVar4 < 0xb) {
            sVar3 = (short)param_1[0x160] + 1;
            plVar5 = param_1 + 0x160;
          }
          else {
            sVar3 = *(short *)((long)param_1 + 0xb04) + 1;
            plVar5 = (long *)((long)param_1 + 0xb04);
          }
        }
        else {
          if (uVar13 != (uint)uVar7) {
            *(short *)((long)param_1 + uVar6 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar6 * 4 + 0xabc) + 1;
          }
          sVar3 = *(short *)((long)param_1 + 0xafc) + 1;
          plVar5 = (long *)((long)param_1 + 0xafc);
        }
        uVar11 = 6;
        if (uVar13 != uVar19) {
          uVar11 = 7;
        }
        *(short *)plVar5 = sVar3;
        iVar10 = 3;
        if (uVar13 != uVar19) {
          iVar10 = 4;
        }
        iVar4 = 0;
        uVar13 = 0x8a;
        if (uVar19 != 0) {
          uVar13 = uVar11;
        }
        iVar9 = 3;
        if (uVar19 != 0) {
          iVar9 = iVar10;
        }
        do {
          uVar16 = uVar16 - 1;
          puVar17 = puVar17 + 2;
          uVar18 = (ulong)uVar19;
          if (uVar16 == 0) goto LAB_0021a2d8;
          uVar19 = (uint)*puVar17;
          iVar4 = iVar4 + 1;
          uVar7 = uVar6;
          if ((int)uVar13 <= iVar4) break;
LAB_0021a274:
          uVar7 = uVar6;
        } while ((uint)uVar18 == uVar19);
      } while( true );
    }
LAB_0021a2d8:
    lVar14 = param_1[0x16f];
    uVar19 = (int)lVar14 + 1;
    uVar2 = *(ushort *)((long)param_1 + 0x9ca);
    uVar18 = (ulong)uVar2;
    *(undefined2 *)((long)param_1 + (long)(int)uVar19 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar14) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      uVar13 = 0x8a;
      if (uVar2 != 0) {
        uVar13 = 7;
      }
      uVar16 = (ulong)uVar19;
      puVar17 = (ushort *)((long)param_1 + 0x9ce);
      uVar7 = 0xffffffff;
      uVar19 = (uint)*puVar17;
      iVar4 = 1;
      uVar6 = uVar7;
      if (1 < uVar13) goto LAB_0021a390;
      do {
        uVar6 = uVar18;
        uVar13 = (uint)uVar6;
        if (iVar4 < iVar9) {
          plVar5 = (long *)((long)param_1 + uVar6 * 4 + 0xabc);
          sVar3 = *(short *)((long)param_1 + uVar6 * 4 + 0xabc) + (short)iVar4;
        }
        else if (uVar13 == 0) {
          if (iVar4 < 0xb) {
            sVar3 = (short)param_1[0x160] + 1;
            plVar5 = param_1 + 0x160;
          }
          else {
            sVar3 = *(short *)((long)param_1 + 0xb04) + 1;
            plVar5 = (long *)((long)param_1 + 0xb04);
          }
        }
        else {
          if (uVar13 != (uint)uVar7) {
            *(short *)((long)param_1 + uVar6 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar6 * 4 + 0xabc) + 1;
          }
          sVar3 = *(short *)((long)param_1 + 0xafc) + 1;
          plVar5 = (long *)((long)param_1 + 0xafc);
        }
        uVar11 = 6;
        if (uVar13 != uVar19) {
          uVar11 = 7;
        }
        *(short *)plVar5 = sVar3;
        iVar10 = 3;
        if (uVar13 != uVar19) {
          iVar10 = 4;
        }
        iVar4 = 0;
        uVar13 = 0x8a;
        if (uVar19 != 0) {
          uVar13 = uVar11;
        }
        iVar9 = 3;
        if (uVar19 != 0) {
          iVar9 = iVar10;
        }
        do {
          uVar16 = uVar16 - 1;
          puVar17 = puVar17 + 2;
          uVar18 = (ulong)uVar19;
          if (uVar16 == 0) goto LAB_0021a3f4;
          uVar19 = (uint)*puVar17;
          iVar4 = iVar4 + 1;
          uVar7 = uVar6;
          if ((int)uVar13 <= iVar4) break;
LAB_0021a390:
          uVar7 = uVar6;
        } while ((uint)uVar18 == uVar19);
      } while( true );
    }
LAB_0021a3f4:
    FUN_0021a9b0(param_1,param_1 + 0x171);
    if (*(short *)((long)param_1 + 0xafa) == 0) {
      if (*(short *)((long)param_1 + 0xac2) == 0) {
        if (*(short *)((long)param_1 + 0xaf6) == 0) {
          if (*(short *)((long)param_1 + 0xac6) == 0) {
            if (*(short *)((long)param_1 + 0xaf2) == 0) {
              if (*(short *)((long)param_1 + 0xaca) == 0) {
                if (*(short *)((long)param_1 + 0xaee) == 0) {
                  if (*(short *)((long)param_1 + 0xace) == 0) {
                    if (*(short *)((long)param_1 + 0xaea) == 0) {
                      if (*(short *)((long)param_1 + 0xad2) == 0) {
                        if (*(short *)((long)param_1 + 0xae6) == 0) {
                          if (*(short *)((long)param_1 + 0xad6) == 0) {
                            if (*(short *)((long)param_1 + 0xae2) == 0) {
                              if (*(short *)((long)param_1 + 0xada) == 0) {
                                if (*(short *)((long)param_1 + 0xade) == 0) {
                                  iVar9 = 2;
                                  if (*(short *)((long)param_1 + 0xabe) != 0) {
                                    iVar9 = 3;
                                  }
                                }
                                else {
                                  iVar9 = 4;
                                }
                              }
                              else {
                                iVar9 = 5;
                              }
                            }
                            else {
                              iVar9 = 6;
                            }
                          }
                          else {
                            iVar9 = 7;
                          }
                        }
                        else {
                          iVar9 = 8;
                        }
                      }
                      else {
                        iVar9 = 9;
                      }
                    }
                    else {
                      iVar9 = 10;
                    }
                  }
                  else {
                    iVar9 = 0xb;
                  }
                }
                else {
                  iVar9 = 0xc;
                }
              }
              else {
                iVar9 = 0xd;
              }
            }
            else {
              iVar9 = 0xe;
            }
          }
          else {
            iVar9 = 0xf;
          }
        }
        else {
          iVar9 = 0x10;
        }
      }
      else {
        iVar9 = 0x11;
      }
    }
    else {
      iVar9 = 0x12;
    }
    lVar14 = param_1[0x2e3] + (ulong)(iVar9 * 3 + 0x11);
    param_1[0x2e3] = lVar14;
    uVar16 = lVar14 + 10U >> 3;
    uVar18 = param_1[0x2e4] + 10U >> 3;
    if (uVar18 <= uVar16) {
      uVar16 = uVar18;
    }
    if (param_2 == 0) goto LAB_0021a5e8;
LAB_0021a420:
    if (uVar16 < param_3 + 4U) goto LAB_0021a5e8;
    FUN_00219d30(param_1,param_2,param_3,param_4);
    FUN_00219c30(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1734) < 9) {
    if (*(int *)((long)param_1 + 0x1734) < 1) goto LAB_0021a4a8;
    uVar8 = (undefined1)param_1[0x2e6];
  }
  else {
    lVar14 = param_1[5];
    param_1[5] = lVar14 + 1;
    *(char *)(param_1[2] + lVar14) = (char)param_1[0x2e6];
    uVar8 = *(undefined1 *)((long)param_1 + 0x1731);
  }
  lVar14 = param_1[5];
  param_1[5] = lVar14 + 1;
  *(undefined1 *)(param_1[2] + lVar14) = uVar8;
LAB_0021a4a8:
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1734) = 0;
  return;
}


