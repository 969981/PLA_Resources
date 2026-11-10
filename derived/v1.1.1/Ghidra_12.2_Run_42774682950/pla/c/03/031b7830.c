/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b7830; name: FUN_031b7830
 */


ulong FUN_031b7830(long param_1,undefined8 *param_2,long *param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  undefined8 *puVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  uint uVar27;
  uint *puVar28;
  int *piVar29;
  float *pfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 *local_d8;
  undefined4 local_d0 [2];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_68;
  
  puVar9 = (uint *)*param_3;
  uVar27 = *puVar9;
  uVar11 = (ulong)uVar27;
  lVar12 = (long)(int)param_3[1] + -1;
  *(int *)(param_3 + 1) = (int)lVar12;
  *(undefined8 *)puVar9 = *(undefined8 *)(puVar9 + lVar12 * 2);
  iVar22 = (int)param_3[1];
  uVar13 = 1;
  if (2 < iVar22) {
    uVar10 = 1;
    if (*(int *)(*param_3 + 0x14) < *(int *)(*param_3 + 0xc)) {
      uVar10 = 2;
    }
    uVar13 = (ulong)uVar10;
  }
  if ((int)uVar13 < iVar22) {
    uVar8 = 0;
    do {
      uVar17 = uVar13 & 0xffffffff;
      lVar12 = *param_3;
      iVar16 = (int)uVar13;
      if (*(int *)(lVar12 + (long)(int)uVar8 * 8 + 4) <= *(int *)(lVar12 + (long)iVar16 * 8 + 4))
      break;
      lVar24 = (long)(int)uVar8 * 8;
      uVar26 = *(undefined8 *)(lVar12 + lVar24);
      *(undefined8 *)(lVar12 + lVar24) = *(undefined8 *)(lVar12 + (long)iVar16 * 8);
      *(undefined8 *)(lVar12 + (long)iVar16 * 8) = uVar26;
      uVar13 = (long)(iVar16 << 1) | 1;
      lVar12 = (long)(iVar16 << 1) + 2;
      if ((int)lVar12 < (int)param_3[1]) {
        uVar10 = (uint)uVar13;
        if (*(int *)(*param_3 + lVar12 * 8 + 4) < *(int *)(*param_3 + uVar13 * 8 + 4)) {
          uVar10 = uVar10 + 1;
        }
        uVar13 = (ulong)uVar10;
      }
      uVar8 = uVar17;
    } while ((int)uVar13 < iVar22);
  }
  *(uint *)((long)param_8 + 0x74) = uVar27;
  uVar27 = uVar27 >> 0x16;
  if ((*param_8 != 0) && (*(uint *)(param_8 + 0xd) != uVar27)) {
    param_8[1] = *(long *)(*(long *)(*param_8 + 0x38) + (ulong)uVar27 * 0xf0 + 0x10);
    *(uint *)(param_8 + 0xd) = uVar27;
  }
  *(uint *)(param_8 + 0xd) = uVar27;
  uVar13 = uVar11 & 0x3fffff;
  lVar12 = param_8[1];
  lVar24 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x18) + uVar13 * 8);
  param_8[6] = lVar24;
  lVar25 = *(long *)(lVar12 + 0x20);
  if ((*(int *)(lVar25 + 0x78) == 0) ||
     (iVar22 = *(int *)(*(long *)(lVar25 + 0x70) + uVar13 * 4), iVar22 == -1)) {
    iVar22 = 0;
    param_8[7] = 0xffffffff;
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar25 + 0x80) + (long)iVar22 * 8);
    param_8[7] = lVar25;
    iVar22 = (int)((ulong)lVar25 >> 0x20);
  }
  iVar22 = iVar22 + (int)((ulong)lVar24 >> 0x20);
  uVar34 = *(undefined8 *)(lVar12 + 0x40);
  uVar35 = *(undefined8 *)(lVar12 + 0x50);
  puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x38) + uVar13 * 0x10);
  uVar26 = *puVar5;
  uVar36 = *(undefined8 *)(lVar12 + 0x60);
  uVar37 = *(undefined8 *)(lVar12 + 0x70);
  fVar31 = (float)uVar26;
  fVar32 = (float)((ulong)uVar26 >> 0x20);
  fVar33 = (float)puVar5[1];
  param_8[9] = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar12 + 0x68) >> 0x20) * fVar33 +
                        (float)((ulong)*(undefined8 *)(lVar12 + 0x48) >> 0x20) * fVar31 +
                        (float)((ulong)*(undefined8 *)(lVar12 + 0x58) >> 0x20) * fVar32,
                        (float)*(undefined8 *)(lVar12 + 0x78) +
                        (float)*(undefined8 *)(lVar12 + 0x68) * fVar33 +
                        (float)*(undefined8 *)(lVar12 + 0x48) * fVar31 +
                        (float)*(undefined8 *)(lVar12 + 0x58) * fVar32);
  param_8[8] = CONCAT44((float)((ulong)uVar37 >> 0x20) +
                        (float)((ulong)uVar36 >> 0x20) * fVar33 +
                        (float)((ulong)uVar34 >> 0x20) * fVar31 +
                        (float)((ulong)uVar35 >> 0x20) * fVar32,
                        (float)uVar37 +
                        (float)uVar36 * fVar33 + (float)uVar34 * fVar31 + (float)uVar35 * fVar32);
  if ((int)(*(uint *)((long)param_8 + 0x9c) & 0x3fffffff) < iVar22) {
    lVar12 = FUN_0315c8fc(PTR_PTR_0434a080,iVar22,param_8[0x12],(int)param_8[0x13]);
    param_8[0x12] = lVar12;
  }
  if ((int)param_8[0x13] != iVar22) {
    *(int *)(param_8 + 0x13) = iVar22;
  }
  lVar12 = *(long *)(param_8[1] + 0x20);
  lVar24 = *(long *)(lVar12 + 0x90);
  iVar22 = *(int *)(lVar12 + 0x60);
  if (*(long *)(lVar12 + 0x28) != 0) {
    uVar27 = *(uint *)((long)param_8 + 0x34);
    uVar10 = uVar27 * 2;
    if (0 < (int)uVar10) {
      puVar15 = (undefined4 *)(*(long *)(lVar12 + 0x28) + (long)(int)param_8[6] * 8);
      puVar18 = (undefined4 *)param_8[0x12];
      if (2 < uVar10 - 1) {
        iVar16 = (uVar10 & 2) + uVar27 * -2;
        puVar14 = puVar18;
        puVar19 = puVar15;
        do {
          *puVar14 = *puVar19;
          puVar14[1] = puVar19[1];
          puVar14[2] = puVar19[2];
          puVar15 = puVar19 + 4;
          puVar18 = puVar14 + 4;
          iVar16 = iVar16 + 4;
          puVar14[3] = puVar19[3];
          puVar14 = puVar18;
          puVar19 = puVar15;
        } while (iVar16 != 0);
      }
      if ((uVar10 & 2) != 0) {
        iVar16 = (uVar27 & 1) * -2;
        do {
          bVar6 = iVar16 != -1;
          iVar16 = iVar16 + 1;
          *puVar18 = *puVar15;
          puVar18 = puVar18 + 1;
          puVar15 = puVar15 + 1;
        } while (bVar6);
      }
    }
  }
  if ((lVar24 != 0) && (uVar27 = *(uint *)((long)param_8 + 0x3c), 0 < (int)uVar27)) {
    uVar10 = uVar27 * 2;
    if (0 < (int)uVar10) {
      puVar18 = (undefined4 *)(param_8[0x12] + (long)*(int *)((long)param_8 + 0x34) * 8);
      puVar15 = (undefined4 *)
                (lVar24 + (long)((int)param_8[7] - *(int *)(*(long *)(param_8[1] + 0x20) + 0x30)) *
                          8);
      if (2 < uVar10 - 1) {
        iVar16 = (uVar10 & 2) + uVar27 * -2;
        puVar14 = puVar15;
        puVar19 = puVar18;
        do {
          *puVar19 = *puVar14;
          puVar19[1] = puVar14[1];
          puVar19[2] = puVar14[2];
          puVar15 = puVar14 + 4;
          puVar18 = puVar19 + 4;
          iVar16 = iVar16 + 4;
          puVar19[3] = puVar14[3];
          puVar14 = puVar15;
          puVar19 = puVar18;
        } while (iVar16 != 0);
      }
      if ((uVar10 & 2) != 0) {
        iVar16 = (uVar27 & 1) * -2;
        do {
          bVar6 = iVar16 != -1;
          iVar16 = iVar16 + 1;
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        } while (bVar6);
      }
    }
  }
  lVar12 = param_8[0x12];
  param_8[0xc] = lVar12 + -8;
  uVar27 = *(int *)((long)param_8 + 0x3c) + *(int *)((long)param_8 + 0x34);
  if (0 < (int)uVar27) {
    uVar13 = (ulong)uVar27;
    lVar24 = 0;
    while( true ) {
      uVar13 = uVar13 - 1;
      lVar12 = lVar12 + lVar24;
      if ((*(byte *)(lVar12 + 2) >> 6 & 1) == 0) {
        *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) & 0x3fffff | iVar22 << 0x16;
      }
      if (uVar13 == 0) break;
      lVar12 = param_8[0x12];
      lVar24 = lVar24 + 8;
    }
  }
  piVar29 = (int *)param_8[0xb];
  uVar26 = FUN_031b3624(piVar29,uVar11);
  *(undefined8 *)(piVar29 + 0x12) = uVar26;
  *(undefined8 *)(piVar29 + 0x14) = uVar26;
  piVar29[0x10] = ((int)uVar26 - *piVar29) * 0x1000 >> 0x10;
  uVar38 = **(undefined4 **)(param_7 + 0x48);
  uVar27 = *(uint *)(param_1 + 0x34);
  uVar10 = *(uint *)(param_1 + 0x3c);
  lVar12 = tpidr_el0;
  iVar22 = (uVar10 + uVar27) * 4;
  if (uVar10 + uVar27 == 0) {
    puVar9 = (uint *)0x0;
    iVar16 = 0;
    goto LAB_031b7c88;
  }
  lVar24 = *(long *)(lVar12 + 0x38d490);
  if (lVar24 == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar24;
  }
  lVar24 = *(long *)(lVar24 + 8);
  uVar13 = (ulong)(int)(iVar22 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar24 + 0x10) < uVar13) {
LAB_031b7dc8:
    puVar9 = (uint *)FUN_032ce670();
  }
  else {
    puVar9 = *(uint **)(lVar24 + 0x18);
    uVar13 = (long)puVar9 + uVar13;
    if (*(ulong *)(lVar24 + 0x20) < uVar13) goto LAB_031b7dc8;
    *(ulong *)(lVar24 + 0x18) = uVar13;
  }
  uVar27 = *(uint *)(param_1 + 0x34);
  uVar10 = *(uint *)(param_1 + 0x3c);
  iVar16 = uVar10 + uVar27;
LAB_031b7c88:
  puVar21 = puVar9;
  if (0 < (int)uVar27) {
    uVar23 = uVar27 & 3;
    iVar3 = *(int *)(param_1 + 0x30);
    if (uVar27 - 1 < 3) {
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      do {
        puVar20 = puVar21;
        uVar1 = iVar3 + (int)lVar24;
        puVar21 = puVar9 + lVar24;
        lVar24 = lVar24 + 4;
        *puVar21 = uVar1;
        puVar21[1] = uVar1 + 1;
        puVar21[2] = uVar1 + 2;
        puVar21[3] = uVar1 + 3;
        puVar21 = puVar21 + 4;
      } while (uVar27 - uVar23 != (int)lVar24);
      puVar21 = puVar20 + 4;
    }
    if (uVar23 != 0) {
      uVar27 = (int)lVar24 + iVar3;
      puVar20 = puVar21;
      do {
        puVar21 = puVar20 + 1;
        *puVar20 = uVar27;
        uVar23 = uVar23 - 1;
        uVar27 = uVar27 + 1;
        puVar20 = puVar21;
      } while (uVar23 != 0);
    }
  }
  if (0 < (int)uVar10) {
    iVar3 = *(int *)(param_1 + 0x38);
    uVar27 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      puVar20 = puVar21;
      do {
        puVar28 = puVar20;
        uVar23 = iVar3 + (int)lVar24;
        puVar20 = puVar21 + lVar24;
        lVar24 = lVar24 + 4;
        *puVar20 = uVar23;
        puVar20[1] = uVar23 + 1;
        puVar20[2] = uVar23 + 2;
        puVar20[3] = uVar23 + 3;
        puVar20 = puVar20 + 4;
      } while (uVar10 - uVar27 != (int)lVar24);
      puVar21 = puVar28 + 4;
    }
    if (uVar27 != 0) {
      uVar10 = (int)lVar24 + iVar3;
      do {
        *puVar21 = uVar10;
        uVar27 = uVar27 - 1;
        uVar10 = uVar10 + 1;
        puVar21 = puVar21 + 1;
      } while (uVar27 != 0);
    }
  }
  if (0 < iVar16) {
    puVar21 = puVar9;
    do {
      if (*(int *)(param_4 + 0x18) <= *(int *)(param_4 + 0x1c)) break;
      lVar24 = param_8[0xb];
      lVar25 = param_8[0xc];
      uVar27 = *puVar21;
      param_8[0xc] = lVar25 + 8;
      if (*(int *)(lVar25 + 0xc) == -1) {
        uVar26 = 0;
      }
      else {
        uVar26 = FUN_031b3624(lVar24);
      }
      *(undefined8 *)(lVar24 + 0x48) = uVar26;
      uVar10 = *(uint *)(param_8[0xc] + 4) >> 0x16;
      if (*param_8 == 0) {
        param_8[2] = param_8[1];
      }
      else if (*(uint *)((long)param_8 + 0x6c) != uVar10) {
        param_8[2] = *(long *)(*(long *)(*param_8 + 0x38) + (ulong)uVar10 * 0xf0 + 0x10);
        *(uint *)((long)param_8 + 0x6c) = uVar10;
      }
      *(uint *)((long)param_8 + 0x6c) = uVar10;
      plVar7 = (long *)param_2[5];
      uVar10 = *(uint *)(*(long *)(param_1 + 0x60) + 4);
      uVar13 = (ulong)uVar10;
      if (plVar7 == (long *)0x0) {
LAB_031b7f6c:
        local_f0[0] = uVar27;
        fVar31 = (float)FUN_031b71e4(uVar38,param_1,uVar11,uVar13,local_f0);
        if ((fVar31 <= *(float *)(param_7 + 0x38)) &&
           ((pfVar30 = *(float **)(param_7 + 0x48),
            (*(byte *)(*(long *)(param_4 + 0x48) + 0xe) & 3) == 0 || (fVar31 < *pfVar30)))) {
          *pfVar30 = fVar31;
          if ((*(byte *)((long)pfVar30 + 0xe) & 3) == 0) {
            fVar31 = (float)FUN_031b81b8(param_6,uVar13);
            pfVar30[1] = fVar31;
            if (fVar31 < *(float *)(param_7 + 0x34)) {
              *(float *)(param_7 + 0x34) = fVar31;
              *(uint *)(param_7 + 0x30) = uVar10;
            }
          }
          *(short *)(*(long *)(param_5 + 0x48) + 0xc) = (short)*(undefined4 *)(param_5 + 0x40);
          fVar31 = **(float **)(param_7 + 0x48) +
                   *(float *)(param_7 + 0x3c) * (*(float **)(param_7 + 0x48))[1];
          if (fVar31 <= *(float *)(param_7 + 0x38)) {
            uVar4 = *(ushort *)(*(long *)(param_4 + 0x48) + 0xe);
            *(ushort *)(*(long *)(param_4 + 0x48) + 0xe) = uVar4 & 0xfffc | 1;
            if ((uVar4 & 1) == 0) {
              uVar27 = *(uint *)(param_3 + 1);
              if (*(int *)((long)param_3 + 0xc) <= (int)uVar27) break;
              lVar24 = (long)(int)uVar27;
              *(uint *)(param_3 + 1) = uVar27 + 1;
              puVar20 = (uint *)(*param_3 + lVar24 * 8);
              *puVar20 = uVar10;
              puVar20[1] = (uint)fVar31;
              lVar25 = *param_3;
              puVar15 = (undefined4 *)(lVar25 + lVar24 * 8);
              uVar2 = *puVar15;
              iVar3 = puVar15[1];
              if (0 < (int)uVar27) {
                do {
                  uVar23 = uVar27 - 1;
                  uVar10 = uVar27;
                  if (-1 < (int)uVar23) {
                    uVar10 = uVar23;
                  }
                  if (*(int *)(lVar25 + (long)((int)uVar10 >> 1) * 8 + 4) <= iVar3) {
                    lVar24 = (long)(int)uVar27;
                    break;
                  }
                  lVar24 = (long)((ulong)uVar10 << 0x20) >> 0x21;
                  *(undefined8 *)(lVar25 + (long)(int)uVar27 * 8) =
                       *(undefined8 *)(lVar25 + lVar24 * 8);
                  lVar25 = *param_3;
                  uVar27 = (int)uVar10 >> 1;
                } while (1 < (int)uVar23);
              }
              *(undefined4 *)(lVar25 + lVar24 * 8) = uVar2;
              *(int *)(*param_3 + lVar24 * 8 + 4) = iVar3;
            }
            else {
              FUN_031b8234(param_3,uVar13);
            }
          }
        }
      }
      else {
        local_d0[0] = *(undefined4 *)((long)param_2 + 0x74);
        uStack_b8 = param_2[9];
        local_c0 = param_2[8];
        lVar24 = param_2[2];
        local_68 = *(undefined8 *)
                    (*(long *)(*(long *)(lVar24 + 0x20) + 0x18) + (uVar13 & 0x3fffff) * 8);
        puVar5 = (undefined8 *)
                 (*(long *)(*(long *)(lVar24 + 0x20) + 0x38) + (uVar13 & 0x3fffff) * 0x10);
        uVar26 = *puVar5;
        fVar31 = (float)uVar26;
        fVar32 = (float)((ulong)uVar26 >> 0x20);
        local_a8 = &local_68;
        fVar33 = (float)puVar5[1];
        local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x60) >> 0x20) * fVar33 +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x40) >> 0x20) * fVar31 +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x50) >> 0x20) * fVar32,
                            (float)*(undefined8 *)(lVar24 + 0x70) +
                            (float)*(undefined8 *)(lVar24 + 0x60) * fVar33 +
                            (float)*(undefined8 *)(lVar24 + 0x40) * fVar31 +
                            (float)*(undefined8 *)(lVar24 + 0x50) * fVar32);
        uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0x78) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 0x20) * fVar33 +
                             (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20) * fVar31 +
                             (float)((ulong)*(undefined8 *)(lVar24 + 0x58) >> 0x20) * fVar32,
                             (float)*(undefined8 *)(lVar24 + 0x78) +
                             (float)*(undefined8 *)(lVar24 + 0x68) * fVar33 +
                             (float)*(undefined8 *)(lVar24 + 0x48) * fVar31 +
                             (float)*(undefined8 *)(lVar24 + 0x58) * fVar32);
        local_88 = param_2[0xc];
        local_90 = uVar27 | *(int *)(param_2 + 0xd) << 0x16;
        local_e8 = *param_2;
        local_d8 = local_d0;
        local_e0 = param_2 + 10;
        local_c8 = param_2 + 6;
        local_b0 = uVar10;
        uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_e8);
        if ((uVar8 & 1) != 0) goto LAB_031b7f6c;
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 < puVar9 + iVar16);
  }
  *(ushort *)(*(long *)(param_4 + 0x50) + 0xe) =
       *(ushort *)(*(long *)(param_4 + 0x50) + 0xe) & 0xfffc | 2;
  lVar24 = *(long *)(lVar12 + 0x38d490);
  if (lVar24 == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar24;
  }
  lVar12 = *(long *)(lVar24 + 8);
  uVar13 = (ulong)(int)(iVar22 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar12 + 0x10) < uVar13) || (*(long *)(lVar12 + 0x18) != (long)puVar9 + uVar13))
     || (*(uint **)(lVar12 + 0x28) == puVar9)) {
    FUN_032cedf0(lVar12,puVar9);
  }
  else {
    *(uint **)(lVar12 + 0x18) = puVar9;
  }
  return uVar11;
}


