/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9d1a0; name: FUN_02e9d1a0
 */


undefined4 FUN_02e9d1a0(long *param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  long *plVar7;
  float *pfVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  ushort uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float afStack_90 [2];
  undefined8 local_88;
  size_t local_80;
  ulong local_78;
  
  FUN_02e9dfec();
  if ((*(ushort *)((long)param_1 + 0x134) & 7) == 2) {
    if (((*(uint *)(param_1[2] + 0x40) < 2) ||
        (lVar13 = *(long *)(*(long *)(param_1[2] + 0x38) + 8), lVar13 == 0)) &&
       (lVar13 = DAT_0440a410, DAT_0440a410 == 0)) {
      FUN_02e43d1c();
      lVar13 = DAT_0440a410;
    }
    uVar30 = *(uint *)(lVar13 + 0xb0);
    uVar28 = *(uint *)(param_1 + 0x29);
    uVar27 = (ulong)uVar28;
    if (uVar28 <= uVar30) {
      if (*(uint *)((long)param_1 + 0x14c) < uVar30) {
        uVar9 = *(uint *)((long)param_1 + 0x14c) + (uVar30 - uVar28);
        lVar26 = (*DAT_0442d148)(0,param_1[0x28],(ulong)uVar9 * 0x68);
        if (lVar26 == 0) {
          return 0;
        }
        param_1[0x28] = lVar26;
        *(uint *)((long)param_1 + 0x14c) = uVar9;
      }
      if (uVar28 < uVar30) {
        if (param_1[0x28] + uVar27 * 0x68 != 0) {
          lVar26 = param_1[0x28] + uVar27 * 0x68;
          *(undefined8 *)(lVar26 + 0x2c) = 0x3f80000000000000;
          *(undefined8 *)(lVar26 + 0x24) = 0;
          *(undefined8 *)(lVar26 + 0x3c) = 0;
          *(undefined8 *)(lVar26 + 0x44) = 0;
          *(undefined4 *)(lVar26 + 0x4c) = 0xffffffff;
          *(undefined8 *)(lVar26 + 0x50) = 0;
          *(undefined8 *)(lVar26 + 0x58) = 0x3f8000003f800000;
          *(undefined8 *)(lVar26 + 0x34) = 0x3f8000003f800000;
          *(undefined8 *)(lVar26 + 0x60) = 0;
        }
        if (uVar27 + 1 != (ulong)uVar30) {
          lVar32 = ~uVar27 + (ulong)uVar30;
          lVar26 = uVar27 * 0x68 + 0xcc;
          do {
            lVar29 = param_1[0x28] + lVar26;
            if (lVar29 != 100) {
              *(undefined8 *)(lVar29 + -0x40) = 0;
              *(undefined8 *)(lVar29 + -0x38) = 0x3f80000000000000;
              *(undefined8 *)(lVar29 + -0x20) = 0;
              *(undefined4 *)(lVar29 + -0x18) = 0xffffffff;
              *(undefined8 *)(lVar29 + -0x14) = 0;
              *(undefined8 *)(lVar29 + -0xc) = 0x3f8000003f800000;
              *(undefined8 *)(lVar29 + -4) = 0;
              *(undefined8 *)(lVar29 + -0x30) = 0x3f8000003f800000;
              *(undefined8 *)(lVar29 + -0x28) = 0;
            }
            lVar32 = lVar32 + -1;
            lVar26 = lVar26 + 0x68;
          } while (lVar32 != 0);
        }
      }
    }
    *(uint *)(param_1 + 0x29) = uVar30;
    lVar26 = DAT_0440a140;
    uVar30 = *(uint *)(lVar13 + 0xb0);
    if (uVar30 != 0) {
      plVar14 = *(long **)(lVar13 + 0xa8);
      puVar16 = (undefined8 *)param_1[0x28];
      uVar28 = *(uint *)(DAT_0440a140 + 0x38);
      plVar17 = plVar14;
joined_r0x02e9d9e4:
      if (uVar28 != 0) {
        lVar32 = *plVar14;
        uVar9 = 0;
        if (uVar28 != 0) {
          uVar9 = (uint)lVar32 / uVar28;
        }
        for (plVar20 = *(long **)(*(long *)(lVar26 + 0x30) +
                                 (ulong)((uint)lVar32 - uVar9 * uVar28) * 8); plVar20 != (long *)0x0
            ; plVar20 = (long *)*plVar20) {
          if (plVar20[1] == lVar32) {
            if ((2 < *(uint *)(plVar20[2] + 0x40)) &&
               (lVar29 = *(long *)(*(long *)(plVar20[2] + 0x38) + 0x10), lVar29 != 0)) {
              plVar17 = *(long **)(**(long **)(param_1[2] + 0x38) + 0x28);
              uVar30 = *(uint *)(**(long **)(param_1[2] + 0x38) + 0x30);
              if ((uVar30 != 0) && (*plVar17 != lVar32)) {
                lVar23 = (ulong)uVar30 * 0x18;
                plVar20 = plVar17;
                goto LAB_02e9db08;
              }
              plVar7 = plVar17;
              goto LAB_02e9dacc;
            }
            break;
          }
        }
      }
      goto LAB_02e9da44;
    }
    goto LAB_02e9d36c;
  }
  if ((*(ushort *)((long)param_1 + 0x134) >> 7 & 1) != 0) {
    uVar12 = *(ushort *)(param_1 + 0x30);
    if ((uVar12 >> 3 & 1) == 0) {
      uVar6 = *(ushort *)(**(long **)(param_1[2] + 0x38) + 0x38);
      uVar27 = (ulong)uVar6;
      if (uVar6 != 0) {
        lVar13 = (*DAT_0442d138)(0,(uVar27 + (ulong)(uint)uVar6 * 4) * 8);
        param_1[0x2a] = lVar13;
        if (lVar13 == 0) {
          return 0;
        }
        *(uint *)((long)param_1 + 0x15c) = (uint)uVar6;
        puVar16 = *(undefined8 **)(**(long **)(param_1[2] + 0x38) + 0x20);
        uVar25 = uVar27;
        do {
          uVar25 = uVar25 - 1;
          uVar28 = *(uint *)(param_1 + 0x2b);
          uVar30 = (uint)uVar27;
          if (uVar28 < uVar30) {
            if (uVar30 <= uVar28) goto LAB_02e9d924;
LAB_02e9d6c8:
            puVar19 = (undefined8 *)(param_1[0x2a] + (ulong)*(uint *)(param_1 + 0x2b) * 0x28);
            *(uint *)(param_1 + 0x2b) = *(uint *)(param_1 + 0x2b) + 1;
          }
          else {
            iVar4 = uVar30 + (uVar30 >> 1);
            if (uVar30 == 0) {
              iVar4 = 1;
            }
            uVar30 = uVar30 + iVar4;
            lVar13 = (*DAT_0442d148)(0,param_1[0x2a],(ulong)uVar30 * 0x28);
            if (lVar13 != 0) {
              param_1[0x2a] = lVar13;
              *(uint *)((long)param_1 + 0x15c) = uVar30;
              if (uVar28 < uVar30) goto LAB_02e9d6c8;
            }
LAB_02e9d924:
            puVar19 = (undefined8 *)0x0;
          }
          *puVar19 = *puVar16;
          uVar15 = puVar16[1];
          uVar22 = puVar16[2];
          uVar11 = puVar16[4];
          puVar19[3] = puVar16[3];
          puVar19[4] = uVar11;
          puVar19[1] = uVar15;
          puVar19[2] = uVar22;
          if (uVar25 == 0) goto LAB_02e9d708;
          uVar27 = (ulong)*(uint *)((long)param_1 + 0x15c);
          puVar16 = puVar16 + 5;
        } while( true );
      }
      goto LAB_02e9d70c;
    }
    goto LAB_02e9d300;
  }
  lVar13 = param_1[2];
  uVar30 = *(uint *)(lVar13 + 0x40);
  if (uVar30 < 6) {
    if (uVar30 != 0) {
      plVar14 = *(long **)(lVar13 + 0x38);
      goto LAB_02e9d1f8;
    }
    lVar13 = 0;
LAB_02e9d1fc:
    uVar30 = *(uint *)(lVar13 + 0x48);
    uVar28 = *(uint *)(param_1 + 0x29);
    uVar27 = (ulong)uVar28;
    if (uVar28 <= uVar30) {
      if (*(uint *)((long)param_1 + 0x14c) < uVar30) {
        uVar9 = *(uint *)((long)param_1 + 0x14c) + (uVar30 - uVar28);
        lVar26 = (*DAT_0442d148)(0,param_1[0x28],(ulong)uVar9 * 0x68);
        if (lVar26 == 0) {
          return 0;
        }
        param_1[0x28] = lVar26;
        *(uint *)((long)param_1 + 0x14c) = uVar9;
      }
      if (uVar28 < uVar30) {
        if (param_1[0x28] + uVar27 * 0x68 != 0) {
          lVar26 = param_1[0x28] + uVar27 * 0x68;
          *(undefined8 *)(lVar26 + 0x2c) = 0x3f80000000000000;
          *(undefined8 *)(lVar26 + 0x24) = 0;
          *(undefined8 *)(lVar26 + 0x3c) = 0;
          *(undefined8 *)(lVar26 + 0x44) = 0;
          *(undefined4 *)(lVar26 + 0x4c) = 0xffffffff;
          *(undefined8 *)(lVar26 + 0x50) = 0;
          *(undefined8 *)(lVar26 + 0x58) = 0x3f8000003f800000;
          *(undefined8 *)(lVar26 + 0x34) = 0x3f8000003f800000;
          *(undefined8 *)(lVar26 + 0x60) = 0;
        }
        if (uVar27 + 1 != (ulong)uVar30) {
          lVar32 = ~uVar27 + (ulong)uVar30;
          lVar26 = uVar27 * 0x68 + 0xcc;
          do {
            lVar29 = param_1[0x28] + lVar26;
            if (lVar29 != 100) {
              *(undefined8 *)(lVar29 + -0x40) = 0;
              *(undefined8 *)(lVar29 + -0x38) = 0x3f80000000000000;
              *(undefined8 *)(lVar29 + -0x20) = 0;
              *(undefined4 *)(lVar29 + -0x18) = 0xffffffff;
              *(undefined8 *)(lVar29 + -0x14) = 0;
              *(undefined8 *)(lVar29 + -0xc) = 0x3f8000003f800000;
              *(undefined8 *)(lVar29 + -4) = 0;
              *(undefined8 *)(lVar29 + -0x30) = 0x3f8000003f800000;
              *(undefined8 *)(lVar29 + -0x28) = 0;
            }
            lVar32 = lVar32 + -1;
            lVar26 = lVar26 + 0x68;
          } while (lVar32 != 0);
        }
      }
    }
    *(uint *)(param_1 + 0x29) = uVar30;
    if (*(int *)(lVar13 + 0x48) == 0) goto LAB_02e9d36c;
    fVar41 = 1e+10;
    puVar16 = *(undefined8 **)(lVar13 + 0x40);
    uVar27 = 0;
    puVar19 = (undefined8 *)param_1[0x28];
    do {
      uVar15 = puVar16[1];
      uVar27 = uVar27 + 1;
      uVar22 = puVar16[2];
      uVar33 = *(undefined4 *)((long)puVar16 + 0x24);
      *puVar19 = *puVar16;
      puVar19[1] = uVar15;
      puVar19[2] = uVar22;
      fVar41 = (float)NEON_fminnm(uVar33,fVar41);
      uVar15 = puVar16[3];
      uVar22 = puVar16[4];
      uVar11 = puVar16[6];
      puVar19[5] = puVar16[5];
      puVar19[6] = uVar11;
      puVar19[3] = uVar15;
      puVar19[4] = uVar22;
      uVar15 = puVar16[7];
      uVar22 = puVar16[8];
      puVar31 = puVar16 + 9;
      uVar11 = puVar16[10];
      puVar16 = puVar16 + 0xd;
      puVar19[9] = *puVar31;
      puVar19[10] = uVar11;
      puVar19[7] = uVar15;
      puVar19[8] = uVar22;
      puVar19 = puVar19 + 0xd;
    } while (uVar27 < *(uint *)(lVar13 + 0x48));
  }
  else {
    plVar14 = *(long **)(lVar13 + 0x38);
    if (((uVar30 == 6) || (plVar14[5] == 0)) || (plVar14[6] == 0)) {
LAB_02e9d1f8:
      lVar13 = *plVar14;
      goto LAB_02e9d1fc;
    }
    if ((param_1[0x2e] == 0) || (lVar13 = *(long *)(param_1[0x2e] + 8), lVar13 == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ushort *)(lVar13 + 0x134);
      uVar12 = (ushort)(1 < (ushort)((uVar12 & 7) - 1)) & uVar12 >> 9;
    }
    fVar41 = (float)FUN_02ef7798(plVar14[5],param_1 + 0x28,uVar12,
                                 *(ushort *)((long)param_1 + 0xee) & 1);
  }
  goto LAB_02e9d378;
  while( true ) {
    plVar7 = plVar20 + 3;
    plVar21 = plVar20 + 3;
    plVar20 = plVar7;
    if (*plVar21 == lVar32) break;
LAB_02e9db08:
    lVar23 = lVar23 + -0x18;
    if (lVar23 == 0) goto LAB_02e9d9f0;
  }
LAB_02e9dacc:
  if ((plVar7 == plVar17 + (ulong)uVar30 * 3) || ((int)plVar7[2] == 0)) {
LAB_02e9d9f0:
    fVar41 = 0.0;
    fVar35 = 0.0;
    fVar42 = 0.0;
    fVar34 = 0.0;
  }
  else {
    pfVar24 = (float *)plVar7[1];
    fVar35 = *pfVar24;
    fVar42 = pfVar24[1];
    fVar41 = pfVar24[2];
    fVar34 = pfVar24[3];
  }
  *puVar16 = *(undefined8 *)(lVar29 + 0x60);
  uVar11 = *(undefined8 *)(lVar29 + 0x78);
  uVar15 = *(undefined8 *)(lVar29 + 0x68);
  uVar22 = *(undefined8 *)(lVar29 + 0x70);
  *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(lVar29 + 0x80);
  puVar16[2] = uVar22;
  puVar16[3] = uVar11;
  puVar16[1] = uVar15;
  *(float *)(puVar16 + 8) = fVar42 * 100.0;
  *(float *)((long)puVar16 + 0x3c) = fVar35 * 100.0;
  *(float *)((long)puVar16 + 0x44) = fVar41;
  *(float *)(puVar16 + 9) = fVar34;
  *(undefined4 *)((long)puVar16 + 0x4c) = 0xffffffff;
  puVar16[10] = lVar32;
  plVar17 = *(long **)(lVar13 + 0xa8);
  uVar30 = *(uint *)(lVar13 + 0xb0);
LAB_02e9da44:
  fVar41 = 1e+10;
  plVar14 = plVar14 + 1;
  puVar16 = puVar16 + 0xd;
  if (plVar14 == plVar17 + uVar30) goto LAB_02e9d378;
  uVar28 = *(uint *)(lVar26 + 0x38);
  goto joined_r0x02e9d9e4;
  while( true ) {
    plVar20 = plVar7 + 3;
    plVar1 = plVar7 + 3;
    plVar7 = plVar20;
    if (*plVar1 == lVar32) break;
LAB_02e9dedc:
    lVar29 = lVar29 + -0x18;
    if (lVar29 == 0) goto LAB_02e9d560;
  }
LAB_02e9d554:
  if ((plVar20 == plVar21 + (ulong)uVar9 * 3) || (uVar9 = *(uint *)(plVar20 + 2), uVar9 == 0)) {
LAB_02e9d560:
    if (uVar28 == 0) {
LAB_02e9d658:
      goto LAB_02e9d640;
    }
    memset(pfVar24,0,local_80);
LAB_02e9d574:
    puVar19 = (undefined8 *)param_1[0x2a];
    uVar27 = 0;
    lVar29 = local_88;
    puVar31 = puVar16;
    while( true ) {
      puVar16 = puVar31 + 0xd;
      uVar33 = *(undefined4 *)((long)puVar19 + 0x24);
      *puVar31 = *puVar19;
      uVar15 = puVar19[2];
      uVar22 = puVar19[3];
      uVar5 = *(undefined4 *)(puVar19 + 4);
      puVar31[1] = puVar19[1];
      pfVar8 = pfVar24 + uVar27 * 4;
      *(undefined4 *)(puVar31 + 4) = uVar5;
      puVar31[2] = uVar15;
      puVar31[3] = uVar22;
      *(float *)(puVar31 + 8) = pfVar8[1] * 100.0;
      *(float *)((long)puVar31 + 0x3c) = *pfVar8 * 100.0;
      *(float *)((long)puVar31 + 0x44) = pfVar8[2];
      *(float *)(puVar31 + 9) = pfVar8[3];
      *(undefined4 *)((long)puVar31 + 0x4c) = uVar33;
      puVar31[10] = lVar32;
      fVar34 = (float)FUN_02e743d8(*(undefined4 *)(**(long **)(param_1[2] + 0x38) + 0x50),lVar26);
      if (fVar41 <= fVar34) {
        fVar34 = fVar41;
      }
      fVar41 = fVar34;
      if (lVar29 == 0) break;
      puVar19 = puVar19 + 5;
      uVar27 = (ulong)((int)uVar27 + 1);
      lVar29 = lVar29 + -0x28;
      lVar32 = *(long *)(*(long *)(lVar26 + 8) + 0x48);
      puVar31 = puVar16;
    }
    plVar17 = *(long **)(lVar13 + 0xa8);
    uVar30 = *(uint *)(lVar13 + 0xb0);
  }
  else {
    if (uVar9 <= uVar28) {
      uVar28 = uVar9;
    }
    if (uVar28 != 0) {
      uVar25 = (ulong)uVar28;
      uVar27 = uVar25 & 3;
      if (uVar25 - 1 < 3) {
        lVar23 = 0;
      }
      else {
        lVar29 = 0;
        lVar23 = 0;
        do {
          puVar19 = (undefined8 *)((long)pfVar24 + lVar29);
          uVar15 = ((undefined8 *)(plVar20[1] + lVar29))[1];
          lVar23 = lVar23 + 4;
          *puVar19 = *(undefined8 *)(plVar20[1] + lVar29);
          puVar19[1] = uVar15;
          uVar15 = *(undefined8 *)(plVar20[1] + lVar29 + 0x18);
          puVar19[2] = *(undefined8 *)(plVar20[1] + lVar29 + 0x10);
          puVar19[3] = uVar15;
          uVar15 = *(undefined8 *)(plVar20[1] + lVar29 + 0x28);
          puVar19[4] = *(undefined8 *)(plVar20[1] + lVar29 + 0x20);
          puVar19[5] = uVar15;
          lVar3 = plVar20[1] + lVar29;
          lVar29 = lVar29 + 0x40;
          uVar15 = *(undefined8 *)(lVar3 + 0x38);
          puVar19[6] = *(undefined8 *)(lVar3 + 0x30);
          puVar19[7] = uVar15;
        } while (uVar25 - uVar27 != lVar23);
      }
      if ((uVar28 & 3) != 0) {
        lVar23 = lVar23 << 4;
        do {
          puVar19 = (undefined8 *)(plVar20[1] + lVar23);
          puVar31 = (undefined8 *)((long)pfVar24 + lVar23);
          uVar15 = puVar19[1];
          uVar27 = uVar27 - 1;
          lVar23 = lVar23 + 0x10;
          *puVar31 = *puVar19;
          puVar31[1] = uVar15;
        } while (uVar27 != 0);
      }
    }
    if (uVar9 < (uint)local_78) {
      uVar27 = (ulong)uVar28;
      pfVar8 = pfVar24 + (ulong)uVar28 * 4;
      do {
        puVar19 = (undefined8 *)(plVar20[1] + (ulong)(uVar28 - 1) * 0x10);
        uVar27 = uVar27 + 1;
        uVar15 = puVar19[1];
        *(undefined8 *)pfVar8 = *puVar19;
        *(undefined8 *)(pfVar8 + 2) = uVar15;
        pfVar8 = pfVar8 + 4;
      } while (uVar27 < local_78);
    }
    if ((int)local_78 != 0) goto LAB_02e9d574;
  }
  uVar27 = local_78;
LAB_02e9d640:
  plVar14 = plVar14 + 1;
  if (plVar14 == plVar17 + uVar30) goto LAB_02e9d378;
  goto LAB_02e9d4d8;
LAB_02e9d708:
  uVar12 = *(ushort *)(param_1 + 0x30);
LAB_02e9d70c:
  *(ushort *)(param_1 + 0x30) = uVar12 | 8;
LAB_02e9d300:
  uVar30 = *(uint *)(param_1 + 0x2b);
  uVar27 = (ulong)uVar30;
  if (((*(uint *)(param_1[2] + 0x40) < 2) ||
      (lVar13 = *(long *)(*(long *)(param_1[2] + 0x38) + 8), lVar13 == 0)) &&
     (lVar13 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    lVar13 = DAT_0440a410;
  }
  uVar30 = *(int *)(lVar13 + 0xb0) * uVar30;
  uVar28 = *(uint *)(param_1 + 0x29);
  uVar25 = (ulong)uVar28;
  if (uVar28 <= uVar30) {
    if (*(uint *)((long)param_1 + 0x14c) < uVar30) {
      uVar9 = *(uint *)((long)param_1 + 0x14c) + (uVar30 - uVar28);
      lVar26 = (*DAT_0442d148)(0,param_1[0x28],(ulong)uVar9 * 0x68);
      if (lVar26 == 0) {
        return 0;
      }
      param_1[0x28] = lVar26;
      *(uint *)((long)param_1 + 0x14c) = uVar9;
    }
    if (uVar28 < uVar30) {
      if (param_1[0x28] + uVar25 * 0x68 != 0) {
        lVar26 = param_1[0x28] + uVar25 * 0x68;
        *(undefined8 *)(lVar26 + 0x2c) = 0x3f80000000000000;
        *(undefined8 *)(lVar26 + 0x24) = 0;
        *(undefined8 *)(lVar26 + 0x3c) = 0;
        *(undefined8 *)(lVar26 + 0x44) = 0;
        *(undefined4 *)(lVar26 + 0x4c) = 0xffffffff;
        *(undefined8 *)(lVar26 + 0x50) = 0;
        *(undefined8 *)(lVar26 + 0x58) = 0x3f8000003f800000;
        *(undefined8 *)(lVar26 + 0x34) = 0x3f8000003f800000;
        *(undefined8 *)(lVar26 + 0x60) = 0;
      }
      if (uVar25 + 1 != (ulong)uVar30) {
        lVar32 = ~uVar25 + (ulong)uVar30;
        lVar26 = uVar25 * 0x68 + 0xcc;
        do {
          lVar29 = param_1[0x28] + lVar26;
          if (lVar29 != 100) {
            *(undefined8 *)(lVar29 + -0x40) = 0;
            *(undefined8 *)(lVar29 + -0x38) = 0x3f80000000000000;
            *(undefined8 *)(lVar29 + -0x20) = 0;
            *(undefined4 *)(lVar29 + -0x18) = 0xffffffff;
            *(undefined8 *)(lVar29 + -0x14) = 0;
            *(undefined8 *)(lVar29 + -0xc) = 0x3f8000003f800000;
            *(undefined8 *)(lVar29 + -4) = 0;
            *(undefined8 *)(lVar29 + -0x30) = 0x3f8000003f800000;
            *(undefined8 *)(lVar29 + -0x28) = 0;
          }
          lVar32 = lVar32 + -1;
          lVar26 = lVar26 + 0x68;
        } while (lVar32 != 0);
      }
    }
  }
  *(uint *)(param_1 + 0x29) = uVar30;
  pfVar24 = afStack_90 + uVar27 * -4;
  uVar30 = *(uint *)(lVar13 + 0xb0);
  if (uVar30 != 0) {
    plVar17 = *(long **)(lVar13 + 0xa8);
    local_80 = uVar27 << 4;
    local_78 = uVar27;
    fVar41 = 1e+10;
    puVar16 = (undefined8 *)param_1[0x28];
    local_88 = uVar27 * 0x28 + -0x28;
    plVar14 = plVar17;
LAB_02e9d4d8:
    uVar28 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar28 != 0) {
      uVar9 = 0;
      uVar18 = (uint)*plVar14;
      if (uVar28 != 0) {
        uVar9 = uVar18 / uVar28;
      }
      for (plVar20 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)(uVar18 - uVar9 * uVar28) * 8); plVar20 != (long *)0x0;
          plVar20 = (long *)*plVar20) {
        if (plVar20[1] == *plVar14) {
          if ((2 < *(uint *)(plVar20[2] + 0x40)) &&
             (lVar26 = *(long *)(*(long *)(plVar20[2] + 0x38) + 0x10), lVar26 != 0)) {
            lVar32 = *(long *)(*(long *)(lVar26 + 8) + 0x48);
            plVar21 = *(long **)(**(long **)(param_1[2] + 0x38) + 0x28);
            uVar9 = *(uint *)(**(long **)(param_1[2] + 0x38) + 0x30);
            uVar28 = (uint)uVar27;
            plVar20 = plVar21;
            if ((uVar9 == 0) || (*plVar21 == lVar32)) goto LAB_02e9d554;
            lVar29 = (ulong)uVar9 * 0x18;
            plVar7 = plVar21;
            goto LAB_02e9dedc;
          }
          break;
        }
      }
    }
    goto LAB_02e9d658;
  }
LAB_02e9d36c:
  fVar41 = 1e+10;
LAB_02e9d378:
  if (((ushort)((*(ushort *)((long)param_1 + 0x134) & 7) - 1) < 2) &&
     (lVar13 = param_1[0x2c], lVar13 != 0)) {
    if ((param_1[0x1e] == 0) ||
       (((iVar4 = *(int *)(lVar13 + 0x30),
         *(byte *)(param_1[0x1e] + 0x2d) = (byte)((uint)iVar4 >> 0x1f), -1 < iVar4 ||
         (piVar10 = (int *)param_1[0x1e], (*(byte *)(piVar10 + 10) >> 1 & 1) == 0)) ||
        (*piVar10 != 0)))) {
      iVar4 = (int)param_1[0x29];
    }
    else {
      lVar26 = param_1[0x2d];
      do {
        if (*(long *)(lVar26 + 0x70) != 0) {
          lVar26 = *(long *)(lVar26 + 0x70) + 0x38;
          goto LAB_02e9db2c;
        }
        lVar26 = *(long *)(lVar26 + 0x80);
      } while (lVar26 != 0);
      lVar26 = 0;
LAB_02e9db2c:
      FUN_02edc9e8(DAT_0440a158,piVar10,lVar26);
      iVar4 = (int)param_1[0x29];
    }
    if (iVar4 == 0) {
      fVar41 = 1e+10;
      lVar13 = param_1[0x27];
      lVar26 = DAT_0440a120;
      goto joined_r0x02e9d394;
    }
    fVar41 = 1e+10;
    pfVar24 = (float *)param_1[0x28];
    do {
      uVar30 = *(uint *)(DAT_0440a140 + 0x38);
      if (uVar30 != 0) {
        uVar28 = 0;
        uVar9 = (uint)*(long *)(pfVar24 + 0x14);
        if (uVar30 != 0) {
          uVar28 = uVar9 / uVar30;
        }
        for (plVar14 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                                 (ulong)(uVar9 - uVar28 * uVar30) * 8); plVar14 != (long *)0x0;
            plVar14 = (long *)*plVar14) {
          if (plVar14[1] == *(long *)(pfVar24 + 0x14)) {
            if ((2 < *(uint *)(plVar14[2] + 0x40)) &&
               (lVar26 = *(long *)(*(long *)(plVar14[2] + 0x38) + 0x10), lVar26 != 0)) {
              fVar35 = *(float *)(lVar13 + 0xc);
              fVar42 = *(float *)(lVar13 + 4);
              fVar34 = *(float *)(lVar13 + 8);
              if ((*(ushort *)((long)param_1 + 0x134) & 7) == 2) {
                local_80 = CONCAT44(local_80._4_4_,fVar35);
                local_78 = CONCAT44(local_78._4_4_,fVar34);
                if (((*(ushort *)((long)param_1 + 0x134) >> 8 & 1) == 0) || (param_1[0x1e] == 0)) {
                  uVar15 = *(undefined8 *)(lVar26 + 0x60);
                  pfVar24[2] = *(float *)(lVar26 + 0x68);
                  *(undefined8 *)pfVar24 = uVar15;
                  uVar15 = *(undefined8 *)(lVar26 + 0x6c);
                  pfVar24[5] = *(float *)(lVar26 + 0x74);
                  *(undefined8 *)(pfVar24 + 3) = uVar15;
                  fVar34 = *(float *)(lVar13 + 4);
                  fVar35 = *(float *)(lVar13 + 8);
                  fVar36 = *(float *)(lVar13 + 0xc);
                  fVar42 = *(float *)(lVar26 + 0x3c) * fVar34 + fVar35 * *(float *)(lVar26 + 0x48) +
                           fVar36 * *(float *)(lVar26 + 0x54);
                  local_78 = CONCAT44(local_78._4_4_,
                                      *(float *)(lVar26 + 0x40) * fVar34 +
                                      fVar35 * *(float *)(lVar26 + 0x4c) +
                                      fVar36 * *(float *)(lVar26 + 0x58));
                  local_80 = CONCAT44(local_80._4_4_,
                                      *(float *)(lVar26 + 0x44) * fVar34 +
                                      fVar35 * *(float *)(lVar26 + 0x50) +
                                      fVar36 * *(float *)(lVar26 + 0x5c));
                }
                else {
                  pfVar8 = (float *)FUN_02e9e348();
                  if (pfVar8 != (float *)0x0) {
                    fVar34 = *(float *)(lVar13 + 4);
                    fVar35 = *(float *)(lVar13 + 8);
                    fVar40 = *(float *)(lVar13 + 0xc);
                    fVar37 = pfVar8[2];
                    fVar39 = pfVar8[3];
                    fVar43 = pfVar8[7];
                    fVar42 = *pfVar8 * fVar34 + fVar35 * fVar39 + fVar40 * pfVar8[6];
                    fVar38 = pfVar8[4];
                    fVar44 = pfVar8[5];
                    local_78 = CONCAT44(local_78._4_4_,
                                        pfVar8[1] * fVar34 + fVar35 * fVar38 + fVar40 * fVar43);
                    fVar36 = pfVar8[8];
                    *pfVar24 = pfVar8[6];
                    pfVar24[1] = fVar43;
                    pfVar24[2] = fVar36;
                    pfVar24[3] = fVar39;
                    local_80 = CONCAT44(local_80._4_4_,
                                        fVar37 * fVar34 + fVar35 * fVar44 + fVar40 * fVar36);
                    pfVar24[4] = fVar38;
                    pfVar24[5] = fVar44;
                  }
                }
                pfVar24[6] = pfVar24[6] + fVar42;
                pfVar24[7] = pfVar24[7] + (float)local_78;
                pfVar24[8] = pfVar24[8] + (float)local_80;
                uVar33 = FUN_02e743d8(*(undefined4 *)(**(long **)(param_1[2] + 0x38) + 0x50),lVar26,
                                      pfVar24);
                fVar41 = (float)NEON_fminnm(uVar33,fVar41);
                pfVar24[10] = pfVar24[0xb];
              }
              else {
                fVar36 = pfVar24[4];
                fVar37 = pfVar24[5];
                fVar38 = *pfVar24;
                fVar39 = pfVar24[1];
                fVar40 = pfVar24[2];
                fVar43 = pfVar24[3];
                pfVar24[8] = fVar40 * fVar35 + fVar34 * fVar37 +
                             fVar42 * (fVar43 * fVar39 - fVar38 * fVar36) + pfVar24[8];
                pfVar24[6] = fVar38 * fVar35 + fVar42 * (fVar40 * fVar36 - fVar39 * fVar37) +
                             fVar34 * fVar43 + pfVar24[6];
                pfVar24[7] = fVar36 * fVar34 + fVar35 * fVar39 + pfVar24[7] +
                             fVar42 * (fVar38 * fVar37 - fVar43 * fVar40);
                fVar34 = (float)FUN_02e743d8(*(undefined4 *)(**(long **)(param_1[2] + 0x38) + 0x50),
                                             lVar26,pfVar24);
                if (fVar41 <= fVar34) {
                  fVar34 = fVar41;
                }
                fVar41 = fVar34;
              }
            }
            break;
          }
        }
      }
      pfVar24 = pfVar24 + 0x1a;
    } while (pfVar24 != (float *)(param_1[0x28] + (ulong)*(uint *)(param_1 + 0x29) * 0x68));
  }
  lVar13 = param_1[0x27];
  lVar26 = DAT_0440a120;
joined_r0x02e9d394:
  DAT_0440a120 = lVar26;
  if (lVar13 == 0) {
    uVar30 = *(uint *)((long)param_1 + 0x124);
    if (uVar30 != 0) {
      pMVar2 = (MutexType *)(lVar26 + 0x150);
      nn::os::LockMutex(pMVar2);
      uVar28 = *(uint *)(lVar26 + 0x178);
      if (uVar28 != 0) {
        uVar9 = 0;
        if (uVar28 != 0) {
          uVar9 = uVar30 / uVar28;
        }
        for (lVar13 = *(long *)(*(long *)(lVar26 + 0x170) + (ulong)(uVar30 - uVar9 * uVar28) * 8);
            lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
          if (*(uint *)(lVar13 + 0x10) == uVar30) {
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar2);
            param_1[0x27] = lVar13;
            goto LAB_02e9d398;
          }
        }
      }
      nn::os::UnlockMutex(pMVar2);
      param_1[0x27] = 0;
    }
  }
  else {
LAB_02e9d398:
    (**(code **)(*param_1 + 0x68))(fVar41,param_1,lVar13);
  }
  return (int)param_1[0x29];
}


