/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f49600; name: FUN_02f49600
 */


undefined8 FUN_02f49600(long *param_1,uint *param_2,int param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  double *pdVar28;
  long *plVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  int local_7c;
  uint *local_78;
  
  local_7c = param_3;
  local_78 = param_2;
  iVar6 = (**(code **)(*param_1 + 0x88))();
  uVar10 = DAT_0440a148;
  if (iVar6 != 6) {
    lVar14 = param_1[2];
    uVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_02e96d3c(uVar10,(int)lVar14,6,uVar8);
    return 0x5b;
  }
  bVar4 = (byte)param_2[1];
  *(byte *)(param_1 + 0x23) =
       bVar4 & 2 | bVar4 >> 2 & 1 | bVar4 >> 1 & 4 | *(byte *)(param_1 + 0x23) & 0xf8;
  iVar6 = *(int *)((long)param_2 + 5);
  local_78 = (uint *)((long)param_2 + 9);
  puVar19 = local_78;
  if (iVar6 != 0) {
    iVar20 = 0;
    do {
      uVar23 = *local_78;
      puVar19 = (uint *)((long)local_78 + 0xe);
      uVar16 = (uint)(byte)local_78[1];
      iVar7 = *(int *)((long)local_78 + 5);
      uVar8 = *(undefined4 *)((long)local_78 + 9);
      uVar26 = *(byte *)((long)local_78 + 0xd) & 1 | (uint)(uVar16 == 1) << 1 |
               (*(byte *)((long)local_78 + 0xd) >> 3 & 1) << 10;
      uVar25 = uVar23 & 0xf;
      if (uVar25 == 1) {
        if (uVar16 == 0) {
          uVar26 = uVar26 | 0xc;
        }
        else {
          if (1 < uVar16 - 1) {
            return 2;
          }
          uVar26 = uVar26 | 4;
        }
LAB_02f49a90:
        piVar12 = (int *)param_1[0x19];
        uVar25 = *(uint *)(param_1 + 0x1a);
        uVar27 = (ulong)uVar25;
        piVar15 = piVar12;
        local_78 = puVar19;
        if ((uVar25 != 0) && (*piVar12 != iVar7)) {
          lVar14 = uVar27 * 0x10;
          piVar22 = piVar12;
          do {
            lVar14 = lVar14 + -0x10;
            if (lVar14 == 0) goto LAB_02f49ab8;
            piVar15 = piVar22 + 4;
            piVar1 = piVar22 + 4;
            piVar22 = piVar15;
          } while (*piVar1 != iVar7);
        }
        if (piVar15 == piVar12 + uVar27 * 4) {
LAB_02f49ab8:
          piVar15 = piVar12;
          if ((uVar25 != 0) && (*piVar12 != iVar7)) {
            lVar14 = uVar27 * 0x10;
            piVar22 = piVar12;
            do {
              lVar14 = lVar14 + -0x10;
              if (lVar14 == 0) goto LAB_02f49ad4;
              piVar15 = piVar22 + 4;
              piVar1 = piVar22 + 4;
              piVar22 = piVar15;
            } while (*piVar1 != iVar7);
          }
          if (piVar15 == piVar12 + uVar27 * 4) {
LAB_02f49ad4:
            uVar16 = *(uint *)((long)param_1 + 0xd4);
            if (uVar16 <= uVar25) {
              iVar2 = uVar16 + (uVar16 >> 1);
              if (uVar16 == 0) {
                iVar2 = 1;
              }
              uVar16 = iVar2 + uVar16;
              piVar12 = (int *)(*DAT_0442d148)(0,piVar12,(ulong)uVar16 << 4);
              if (piVar12 == (int *)0x0) {
                return 2;
              }
              param_1[0x19] = (long)piVar12;
              *(uint *)((long)param_1 + 0xd4) = uVar16;
            }
            if (uVar16 <= uVar25) {
              return 2;
            }
            uVar25 = *(uint *)(param_1 + 0x1a);
            *(uint *)(param_1 + 0x1a) = uVar25 + 1;
            if (piVar12 + (ulong)uVar25 * 4 == (int *)0x0) {
              return 2;
            }
            piVar15 = piVar12 + (ulong)uVar25 * 4;
            piVar12[(ulong)uVar25 * 4] = iVar7;
          }
          plVar29 = (long *)(piVar15 + 2);
          puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x28);
          if (puVar11 == (undefined8 *)0x0) {
            *plVar29 = 0;
            FUN_02f4a558(param_1 + 0x19,iVar7);
LAB_02f49bc8:
            lVar14 = *plVar29;
          }
          else {
            *(undefined4 *)(puVar11 + 3) = 0xffffffff;
            *puVar11 = 0xffffffff00000000;
            puVar11[2] = 0;
            *(undefined4 *)(puVar11 + 1) = 0;
            *(ushort *)((long)puVar11 + 0xc) = *(ushort *)((long)puVar11 + 0xc) & 0xf800;
            *(undefined4 *)(puVar11 + 4) = 0;
            *plVar29 = (long)puVar11;
            if (((*(ushort *)((long)puVar11 + 0xc) & 0x7c) == 4) && (puVar11[2] != 0)) {
              FUN_02f59e60(0);
              puVar11[2] = 0;
            }
            puVar11[1] = CONCAT44(uVar26,uVar8);
            puVar11[2] = 0;
            *(uint *)(puVar11 + 3) = uVar23;
            *puVar11 = CONCAT44(iVar7,iVar7);
            *(ushort *)((long)puVar11 + 0xc) = (ushort)uVar26 | 0x80;
            lVar14 = *plVar29;
            if (*(short *)(lVar14 + 0x1a) != 0x10) {
              *(int *)(lVar14 + 0x20) = (int)param_1[0x20];
              goto LAB_02f49bc8;
            }
          }
          if (lVar14 == 0) {
            return 2;
          }
        }
      }
      else {
        if (uVar25 != 2) {
          if (uVar25 != 0) {
            return 2;
          }
          goto LAB_02f49a90;
        }
        puVar19 = (uint *)((long)local_78 + 0xe);
        local_78 = (uint *)((long)local_78 + (ulong)*puVar19 + 0x12);
        local_7c = local_7c - *puVar19;
        iVar7 = FUN_02f4a3bc(param_1,iVar7);
        if (iVar7 != 1) {
          return 2;
        }
      }
      iVar20 = iVar20 + 1;
      puVar19 = local_78;
    } while (iVar20 != iVar6);
  }
  local_78 = puVar19 + 1;
  uVar25 = *puVar19;
  uVar27 = (ulong)uVar25;
  if (uVar25 != 0) {
    puVar9 = (uint *)(*DAT_0442d140)(0,uVar27 * 0x30,8);
    if (puVar9 == (uint *)0x0) {
      return 0x34;
    }
    *puVar9 = puVar19[1];
    puVar9[1] = puVar19[2];
    local_78 = puVar19 + 0xd;
    puVar9[2] = puVar19[3];
    *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar19 + 4);
    *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar19 + 6);
    *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar19 + 8);
    *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar19 + 10);
    uVar26 = puVar19[0xc];
    if (uVar25 != 1) {
      lVar14 = uVar27 - 1;
      puVar19 = puVar9 + 0x16;
      do {
        puVar19[-10] = uVar26;
        lVar14 = lVar14 + -1;
        puVar19[-9] = *local_78;
        puVar19[-8] = local_78[1];
        *(undefined8 *)(puVar19 + -6) = *(undefined8 *)(local_78 + 2);
        *(undefined8 *)(puVar19 + -4) = *(undefined8 *)(local_78 + 4);
        *(undefined8 *)(puVar19 + -2) = *(undefined8 *)(local_78 + 6);
        puVar18 = local_78 + 10;
        *(undefined8 *)puVar19 = *(undefined8 *)(local_78 + 8);
        local_78 = local_78 + 0xb;
        uVar26 = *puVar18;
        puVar19 = puVar19 + 0xc;
      } while (lVar14 != 0);
    }
    if (param_1[0x1e] != 0) {
      *(undefined4 *)(param_1 + 0x1f) = 0;
      FUN_02f59e60(0);
      param_1[0x1e] = 0;
      *(undefined4 *)((long)param_1 + 0xfc) = 0;
    }
    *(uint *)(param_1 + 0x1d) = uVar26;
    lVar14 = (*DAT_0442d138)(0,uVar27 * 0x1c);
    param_1[0x1e] = lVar14;
    if (lVar14 == 0) {
      (*DAT_0442d158)(0,puVar9);
      return 2;
    }
    *(uint *)((long)param_1 + 0xfc) = uVar25;
    pdVar28 = (double *)(puVar9 + 6);
    do {
      dVar30 = (pdVar28[1] + pdVar28[2]) - *pdVar28;
      if (((0.0 < pdVar28[2]) && (0.0 < dVar30)) || (*(uint *)(pdVar28 + -2) != 0)) {
        uVar26 = *(uint *)(param_1 + 0x1f);
        uVar25 = *(uint *)((long)param_1 + 0xfc);
        if (uVar25 <= uVar26) {
          iVar6 = uVar25 + (uVar25 >> 1);
          if (uVar25 == 0) {
            iVar6 = 1;
          }
          uVar25 = iVar6 + uVar25;
          lVar14 = (*DAT_0442d148)(0,param_1[0x1e],(ulong)uVar25 * 0x1c);
          if (lVar14 == 0) goto LAB_02f49910;
          param_1[0x1e] = lVar14;
          *(uint *)((long)param_1 + 0xfc) = uVar25;
        }
        if (uVar26 < uVar25) {
          uVar17 = (ulong)*(uint *)(param_1 + 0x1f);
          lVar14 = param_1[0x1e];
          *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) + 1;
          puVar19 = (uint *)(lVar14 + uVar17 * 0x1c);
          if (puVar19 != (uint *)0x0) {
            *puVar19 = *(uint *)(pdVar28 + -3);
            lVar21 = lVar14 + uVar17 * 0x1c;
            *(uint *)(lVar21 + 4) = *(uint *)((long)pdVar28 + -0x14);
            *(uint *)(lVar21 + 8) = *(uint *)(pdVar28 + -2);
            dVar31 = (double)NEON_ucvtf((ulong)DAT_042ab258);
            dVar31 = dVar31 * 0.001;
            dVar32 = dVar31 * (*pdVar28 + pdVar28[-1]);
            dVar34 = 0.5;
            if (dVar32 <= 0.0) {
              dVar34 = -0.5;
            }
            dVar30 = dVar31 * dVar30;
            dVar33 = 0.5;
            if (dVar30 <= 0.0) {
              dVar33 = -0.5;
            }
            *(int *)(lVar21 + 0xc) = (int)(dVar34 + dVar32);
            *(int *)(lVar21 + 0x10) = (int)(dVar33 + dVar30);
            dVar30 = 0.5;
            if (pdVar28[2] * dVar31 <= 0.0) {
              dVar30 = -0.5;
            }
            iVar6 = (int)(dVar30 + pdVar28[2] * dVar31);
            *(int *)(lVar21 + 0x14) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)(lVar14 + uVar17 * 0x1c + 0x18) = 0;
            }
            else {
              dVar30 = 0.5;
              if (*pdVar28 * dVar31 <= 0.0) {
                dVar30 = -0.5;
              }
              iVar20 = (int)(dVar30 + *pdVar28 * dVar31);
              iVar7 = 0;
              if (iVar6 != 0) {
                iVar7 = iVar20 / iVar6;
              }
              iVar20 = iVar20 - iVar7 * iVar6;
              piVar15 = (int *)(lVar14 + uVar17 * 0x1c + 0x18);
              *piVar15 = iVar20;
              if (iVar20 < 0) {
                *piVar15 = iVar20 + iVar6;
              }
            }
          }
        }
      }
LAB_02f49910:
      pdVar28 = pdVar28 + 6;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    (*DAT_0442d158)(0,puVar9);
  }
  plVar29 = param_1 + 0x1b;
  lVar14 = *plVar29;
  if (lVar14 != 0) {
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar21 = (ulong)*(uint *)(param_1 + 0x1c) << 5;
      lVar13 = *(long *)(lVar14 + 8);
      puVar11 = (undefined8 *)(lVar14 + 0x10);
      while( true ) {
        if (lVar13 != 0) {
          FUN_02f59e60(0);
          puVar11[-1] = 0;
        }
        lVar21 = lVar21 + -0x20;
        *puVar11 = 0;
        if (lVar21 == 0) break;
        lVar13 = puVar11[3];
        puVar11 = puVar11 + 4;
      }
      lVar14 = *plVar29;
    }
    FUN_02f59e60(0,lVar14);
    *plVar29 = 0;
    param_1[0x1c] = 0;
  }
  puVar19 = local_78 + 1;
  uVar25 = *local_78;
  local_78 = puVar19;
  if (uVar25 != 0) {
    lVar14 = (*DAT_0442d138)(0,(ulong)uVar25 << 5);
    *plVar29 = lVar14;
    if (lVar14 == 0) {
      return 2;
    }
    uVar26 = 0;
    *(uint *)((long)param_1 + 0xe4) = uVar25;
    uVar23 = uVar25;
    do {
      uVar16 = *(uint *)(param_1 + 0x1c);
      if (uVar16 < uVar23) {
        if (uVar23 <= uVar16) goto LAB_02f4a258;
LAB_02f49cdc:
        uVar23 = *(uint *)(param_1 + 0x1c);
        puVar9 = (uint *)(param_1[0x1b] + (ulong)uVar23 * 0x20);
        *(uint *)(param_1 + 0x1c) = uVar23 + 1;
        if (puVar9 != (uint *)0x0) {
          lVar14 = param_1[0x1b] + (ulong)uVar23 * 0x20;
          *(undefined8 *)(lVar14 + 8) = 0;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined4 *)(lVar14 + 0x18) = 1;
          puVar19 = local_78;
        }
      }
      else {
        iVar6 = uVar23 + (uVar23 >> 1);
        if (uVar23 == 0) {
          iVar6 = 1;
        }
        uVar23 = uVar23 + iVar6;
        lVar14 = (*DAT_0442d148)(0,*plVar29,(ulong)uVar23 << 5);
        if (lVar14 != 0) {
          param_1[0x1b] = lVar14;
          *(uint *)((long)param_1 + 0xe4) = uVar23;
          if (uVar16 < uVar23) goto LAB_02f49cdc;
        }
LAB_02f4a258:
        puVar9 = (uint *)0x0;
      }
      uVar3 = *puVar19;
      uVar23 = puVar19[1];
      uVar16 = puVar19[2];
      puVar19 = puVar19 + 3;
      local_78 = puVar19;
      if (uVar16 != 0) {
        if (*(long *)(puVar9 + 2) != 0) {
          FUN_02f59e60(0);
          puVar9[2] = 0;
          puVar9[3] = 0;
        }
        *puVar9 = uVar3;
        puVar9[1] = uVar23;
        puVar9[6] = 1;
        puVar9[4] = uVar16 + 2;
        puVar9[5] = 0;
        lVar14 = (*DAT_0442d138)(0,(uVar16 + 2) * 0x14);
        puVar18 = puVar9 + 2;
        *(long *)puVar18 = lVar14;
        if (lVar14 == 0) {
          puVar9[4] = 0;
          return 2;
        }
        puVar9[5] = 0;
        memcpy((void *)(lVar14 + 0xc),puVar19,(ulong)(uVar16 * 0xc));
        *(undefined4 *)(*(long *)(puVar9 + 2) + 8) = 9;
        **(undefined4 **)(puVar9 + 2) = 0xff7fffff;
        *(undefined4 *)(*(long *)(puVar9 + 2) + 4) = *(undefined4 *)(*(long *)(puVar9 + 2) + 0x10);
        *(undefined4 *)(*(long *)(puVar9 + 2) + (ulong)(puVar9[4] - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*(long *)(puVar9 + 2) + (ulong)(puVar9[4] - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*(long *)(puVar9 + 2) + (ulong)(puVar9[4] - 1) * 0xc + 4) =
             *(undefined4 *)(*(long *)(puVar9 + 2) + (ulong)(puVar9[4] - 2) * 0xc + 4);
        FUN_02e9b180(puVar18);
        if ((puVar9[4] & 0xfffffffd) != 0) {
          dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
          dVar30 = dVar30 * (double)*(float *)(*(long *)(puVar9 + 2) + 0xc);
          dVar31 = 0.5;
          if (dVar30 <= 0.0) {
            dVar31 = -0.5;
          }
          *(float *)(*(long *)(puVar9 + 2) + 0xc) = (float)(int)(dVar31 + dVar30);
          if ((3 < puVar9[4]) || (puVar9[4] == 1)) {
            dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
            dVar30 = dVar30 * (double)*(float *)(*(long *)(puVar9 + 2) + 0x18);
            dVar31 = 0.5;
            if (dVar30 <= 0.0) {
              dVar31 = -0.5;
            }
            *(float *)(*(long *)(puVar9 + 2) + 0x18) = (float)(int)(dVar31 + dVar30);
            if ((4 < puVar9[4]) || (puVar9[4] == 1)) {
              dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
              dVar30 = dVar30 * (double)*(float *)(*(long *)(puVar9 + 2) + 0x24);
              dVar31 = 0.5;
              if (dVar30 <= 0.0) {
                dVar31 = -0.5;
              }
              *(float *)(*(long *)(puVar9 + 2) + 0x24) = (float)(int)(dVar31 + dVar30);
              if ((3 < puVar9[4] - 2) && (puVar9[4] != 0)) {
                lVar14 = 0x30;
                uVar27 = 3;
                do {
                  uVar27 = uVar27 + 1;
                  dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
                  dVar30 = dVar30 * (double)*(float *)(*(long *)(puVar9 + 2) + lVar14);
                  dVar31 = 0.5;
                  if (dVar30 <= 0.0) {
                    dVar31 = -0.5;
                  }
                  *(float *)(*(long *)(puVar9 + 2) + lVar14) = (float)(int)(dVar31 + dVar30);
                  uVar23 = 0;
                  if (puVar9[4] != 0) {
                    uVar23 = puVar9[4] - 2;
                  }
                  lVar14 = lVar14 + 0xc;
                } while (uVar27 < uVar23);
              }
            }
          }
        }
        FUN_02e9b180(puVar18);
        local_78 = local_78 + (ulong)uVar16 * 3;
      }
      uVar26 = uVar26 + 1;
      if (uVar26 == uVar25) break;
      uVar23 = *(uint *)((long)param_1 + 0xe4);
      puVar19 = local_78;
    } while( true );
  }
  uVar10 = FUN_02ed7ba4(param_1,&local_78,&local_7c,param_5 & 1);
  if ((int)uVar10 != 1) {
    return uVar10;
  }
  if ((param_5 & 1) != 0) {
    return uVar10;
  }
  puVar19 = (uint *)((long)local_78 + 1);
  bVar4 = (byte)*local_78;
  if (*(uint *)((long)param_1 + 0x104) != (uint)bVar4) {
    local_78 = puVar19;
    if (param_1[0x22] != 0) {
      FUN_02f491a0();
      param_1[0x22] = 0;
    }
    if (bVar4 == 3) {
      puVar11 = (undefined8 *)(*DAT_0442d138)(2,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        param_1[0x22] = 0;
        *(undefined4 *)((long)param_1 + 0x104) = 3;
        return 0x34;
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(byte *)(puVar11 + 4) = *(byte *)(puVar11 + 4) & 0xe0 | 8;
      puVar11[2] = 0;
      puVar11[3] = 0;
      param_1[0x22] = (long)puVar11;
    }
    *(uint *)((long)param_1 + 0x104) = (uint)bVar4;
    puVar19 = local_78;
  }
  if (bVar4 == 3) {
    puVar24 = (undefined4 *)param_1[0x22];
    puVar24[2] = (uint)(byte)*puVar19;
    *puVar24 = *(undefined4 *)((long)puVar19 + 1);
    local_78 = (uint *)((long)puVar19 + 9);
    puVar24[1] = *(undefined4 *)((long)puVar19 + 5);
    if (*(long *)(puVar24 + 4) != 0) {
      puVar24[6] = 0;
      FUN_02f59e60(0);
      *(undefined8 *)(puVar24 + 4) = 0;
      puVar24[7] = 0;
    }
    puVar9 = local_78 + 1;
    uVar25 = *local_78;
    uVar27 = (ulong)uVar25;
    if (uVar25 != 0) {
      local_78 = puVar9;
      lVar14 = (*DAT_0442d138)(0,uVar27 << 2);
      *(long *)(puVar24 + 4) = lVar14;
      if (lVar14 == 0) {
        return 2;
      }
      puVar24[7] = uVar25;
      do {
        uVar25 = uVar25 - 1;
        uVar23 = puVar24[6];
        uVar26 = (uint)uVar27;
        if (uVar23 < uVar26) {
LAB_02f4a02c:
          if (uVar26 <= uVar23) goto LAB_02f4a3ac;
          puVar19 = (uint *)(*(long *)(puVar24 + 4) + (ulong)(uint)puVar24[6] * 4);
          puVar24[6] = puVar24[6] + 1;
        }
        else {
          iVar6 = uVar26 + (uVar26 >> 1);
          if (uVar26 == 0) {
            iVar6 = 1;
          }
          uVar26 = iVar6 + uVar26;
          lVar14 = (*DAT_0442d148)(0,*(undefined8 *)(puVar24 + 4),(ulong)uVar26 << 2);
          if (lVar14 != 0) {
            *(long *)(puVar24 + 4) = lVar14;
            puVar24[7] = uVar26;
            goto LAB_02f4a02c;
          }
LAB_02f4a3ac:
          puVar19 = (uint *)0x0;
        }
        puVar9 = local_78 + 1;
        *puVar19 = *local_78;
        if (uVar25 == 0) break;
        uVar27 = (ulong)(uint)puVar24[7];
        local_78 = puVar9;
      } while( true );
    }
    lVar14 = param_1[0x22];
    *(uint *)(lVar14 + 0x28) = *puVar9;
    *(uint *)(lVar14 + 0x2c) = puVar9[1];
    uVar27 = (ulong)DAT_042ab258;
    auVar5 = SEXT816((long)(uVar27 * (long)(int)puVar9[2])) * SEXT816(0x20c49ba5e353f7cf);
    *(int *)(lVar14 + 0x30) = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
    *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) & 0xe0 | (byte)puVar9[3] & 0x1f;
    *(uint *)(lVar14 + 0x24) = puVar9[4];
    *(uint *)(lVar14 + 0x34) = puVar9[5];
    *(uint *)(lVar14 + 0x38) = puVar9[6];
    puVar19 = puVar9 + 8;
    auVar5 = SEXT816((long)((long)(int)puVar9[7] * uVar27)) * SEXT816(0x20c49ba5e353f7cf);
    *(int *)(lVar14 + 0x3c) = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
  }
  else {
    uVar27 = (ulong)DAT_042ab258;
  }
  dVar30 = (double)uVar27 * 0.001 * (double)(DAT_0442c068 * (float)(int)*puVar19);
  dVar31 = 0.5;
  if (dVar30 <= 0.0) {
    dVar31 = -0.5;
  }
  *(int *)(param_1 + 0x20) = (int)(dVar31 + dVar30);
  uVar25 = *(uint *)(param_1 + 0x1a);
  if (uVar25 != 0) {
    lVar14 = param_1[0x19];
    if (*(short *)(*(long *)(lVar14 + 8) + 0x1a) == 0x10) {
      lVar21 = lVar14;
    }
    else {
      *(int *)(*(long *)(lVar14 + 8) + 0x20) = (int)param_1[0x20];
      uVar25 = *(uint *)(param_1 + 0x1a);
      lVar21 = param_1[0x19];
    }
    lVar14 = lVar14 + 0x10;
    if (lVar14 != lVar21 + (ulong)uVar25 * 0x10) {
      do {
        if (*(short *)(*(long *)(lVar14 + 8) + 0x1a) != 0x10) {
          *(int *)(*(long *)(lVar14 + 8) + 0x20) = (int)param_1[0x20];
          lVar21 = param_1[0x19];
          uVar25 = *(uint *)(param_1 + 0x1a);
        }
        lVar14 = lVar14 + 0x10;
      } while (lVar14 != lVar21 + (ulong)uVar25 * 0x10);
    }
  }
  return 1;
}


