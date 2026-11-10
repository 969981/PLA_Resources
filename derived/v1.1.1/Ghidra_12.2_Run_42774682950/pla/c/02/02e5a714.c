/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5a714; name: FUN_02e5a714
 */


void FUN_02e5a714(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  
  lVar31 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x48);
  uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x40);
  if (uVar10 == 0) {
    lVar32 = 0;
    lVar35 = 0;
  }
  else {
    plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x38);
    lVar32 = *plVar18;
    if (uVar10 < 6) {
      lVar35 = 0;
    }
    else {
      lVar35 = plVar18[5];
    }
  }
  uVar10 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar10 != 0) {
    uVar33 = 0;
    if (uVar10 != 0) {
      uVar33 = (uint)lVar31 / uVar10;
    }
    for (plVar18 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                             (ulong)((uint)lVar31 - uVar33 * uVar10) * 8); plVar18 != (long *)0x0;
        plVar18 = (long *)*plVar18) {
      if (plVar18[1] == lVar31) {
        lVar15 = FUN_02e42e10(plVar18[2]);
        if (lVar32 == 0) {
          return;
        }
        if (lVar35 == 0) {
          return;
        }
        if (lVar15 == 0) {
          return;
        }
        uVar12 = *(ushort *)(lVar32 + 0x38);
        uVar34 = (ulong)uVar12;
        *(undefined4 *)(lVar35 + 0x28) = 0;
        *(undefined4 *)(lVar35 + 0x38) = 0;
        if ((0 < *(int *)(lVar35 + 0xec)) && (*(int *)(param_1 + 0x70) == 0)) {
          return;
        }
        bVar13 = *(int *)(lVar35 + 0xb0) != 0;
        fVar36 = *(float *)(lVar35 + 0xcc);
        lVar29 = *(long *)(lVar35 + 0xc0);
        lVar24 = *(long *)(lVar35 + 0xa8);
        bVar1 = 0.0 < *(float *)(lVar35 + 0xb4);
        uVar26 = uVar34;
        if (!bVar13 || !bVar1) {
          uVar26 = 0;
        }
        bVar14 = *(int *)(lVar35 + 200) != 0;
        uVar10 = (uint)uVar12;
        if (!bVar14 || fVar36 <= 0.0) {
          uVar10 = 0;
        }
        uVar33 = (uint)uVar12;
        if (*(uint *)(lVar35 + 0x2c) < (uint)uVar12) {
          uVar11 = *(uint *)(lVar35 + 0x2c) + uVar33;
          lVar17 = (*DAT_0442d148)(0,*(undefined8 *)(lVar35 + 0x20),(ulong)uVar11 * 0x68);
          if (lVar17 == 0) {
            return;
          }
          *(long *)(lVar35 + 0x20) = lVar17;
          *(uint *)(lVar35 + 0x2c) = uVar11;
          bVar6 = uVar33 == 0;
        }
        else {
          bVar6 = uVar12 == 0;
        }
        uVar10 = uVar10 + (int)uVar26;
        if (!bVar6) {
          lVar17 = *(long *)(lVar35 + 0x20);
          if (lVar17 != 0) {
            *(undefined8 *)(lVar17 + 0x34) = 0x3f8000003f800000;
            *(undefined8 *)(lVar17 + 0x2c) = 0x3f80000000000000;
            *(undefined8 *)(lVar17 + 0x24) = 0;
            *(undefined8 *)(lVar17 + 0x3c) = 0;
            *(undefined8 *)(lVar17 + 0x44) = 0;
            *(undefined4 *)(lVar17 + 0x4c) = 0xffffffff;
            *(undefined8 *)(lVar17 + 0x60) = 0;
            *(undefined8 *)(lVar17 + 0x50) = 0;
            *(undefined8 *)(lVar17 + 0x58) = 0x3f8000003f800000;
          }
          if (uVar12 != 1) {
            lVar16 = uVar34 - 1;
            lVar17 = 0xcc;
            do {
              lVar5 = *(long *)(lVar35 + 0x20) + lVar17;
              lVar16 = lVar16 + -1;
              lVar17 = lVar17 + 0x68;
              *(undefined8 *)(lVar5 + -0x40) = 0;
              *(undefined8 *)(lVar5 + -0x38) = 0x3f80000000000000;
              *(undefined8 *)(lVar5 + -0x30) = 0x3f8000003f800000;
              *(undefined8 *)(lVar5 + -0x28) = 0;
              *(undefined8 *)(lVar5 + -0x20) = 0;
              *(undefined4 *)(lVar5 + -0x18) = 0xffffffff;
              *(undefined8 *)(lVar5 + -0x14) = 0;
              *(undefined8 *)(lVar5 + -0xc) = 0x3f8000003f800000;
              *(undefined8 *)(lVar5 + -4) = 0;
            } while (lVar16 != 0);
          }
        }
        uVar11 = *(uint *)(lVar35 + 0x38);
        uVar26 = (ulong)uVar11;
        *(uint *)(lVar35 + 0x28) = uVar33;
        if (uVar11 <= uVar10) {
          if (*(uint *)(lVar35 + 0x3c) < uVar10) {
            uVar4 = *(uint *)(lVar35 + 0x3c) + (uVar10 - uVar11);
            lVar17 = (*DAT_0442d148)(0,*(undefined8 *)(lVar35 + 0x30),(ulong)uVar4 * 0x68);
            if (lVar17 == 0) {
              return;
            }
            *(long *)(lVar35 + 0x30) = lVar17;
            *(uint *)(lVar35 + 0x3c) = uVar4;
          }
          if (uVar11 < uVar10) {
            if (*(long *)(lVar35 + 0x30) + uVar26 * 0x68 != 0) {
              lVar17 = *(long *)(lVar35 + 0x30) + uVar26 * 0x68;
              *(undefined8 *)(lVar17 + 0x2c) = 0x3f80000000000000;
              *(undefined8 *)(lVar17 + 0x24) = 0;
              *(undefined8 *)(lVar17 + 0x3c) = 0;
              *(undefined8 *)(lVar17 + 0x44) = 0;
              *(undefined4 *)(lVar17 + 0x4c) = 0xffffffff;
              *(undefined8 *)(lVar17 + 0x50) = 0;
              *(undefined8 *)(lVar17 + 0x58) = 0x3f8000003f800000;
              *(undefined8 *)(lVar17 + 0x34) = 0x3f8000003f800000;
              *(undefined8 *)(lVar17 + 0x60) = 0;
            }
            if (uVar26 + 1 != (ulong)uVar10) {
              lVar16 = ~uVar26 + (ulong)uVar10;
              lVar17 = uVar26 * 0x68 + 0xcc;
              do {
                lVar5 = *(long *)(lVar35 + 0x30) + lVar17;
                if (lVar5 != 100) {
                  *(undefined8 *)(lVar5 + -0x40) = 0;
                  *(undefined8 *)(lVar5 + -0x38) = 0x3f80000000000000;
                  *(undefined8 *)(lVar5 + -0x20) = 0;
                  *(undefined4 *)(lVar5 + -0x18) = 0xffffffff;
                  *(undefined8 *)(lVar5 + -0x14) = 0;
                  *(undefined8 *)(lVar5 + -0xc) = 0x3f8000003f800000;
                  *(undefined8 *)(lVar5 + -4) = 0;
                  *(undefined8 *)(lVar5 + -0x30) = 0x3f8000003f800000;
                  *(undefined8 *)(lVar5 + -0x28) = 0;
                }
                lVar16 = lVar16 + -1;
                lVar17 = lVar17 + 0x68;
              } while (lVar16 != 0);
            }
          }
        }
        *(uint *)(lVar35 + 0x38) = uVar10;
        if ((param_2 >> 1 & 1) == 0) {
          fVar41 = (float)FUN_02e58e88(param_1 + 0x58);
          if (uVar33 == 0) goto LAB_02e5a970;
        }
        else {
          if (*(uint *)(param_1 + 0x70) == 0) {
            fVar41 = 0.0;
          }
          else {
            lVar17 = (ulong)*(uint *)(param_1 + 0x70) * 0x158;
            fVar41 = 3.4028235e+38;
            pfVar19 = (float *)(*(long *)(param_1 + 0x68) + 0x84);
            do {
              pfVar3 = pfVar19 + -2;
              lVar17 = lVar17 + -0x158;
              fVar38 = *pfVar19;
              pfVar19 = pfVar19 + 0x56;
              fVar37 = *pfVar3;
              if (*pfVar3 <= fVar38) {
                fVar37 = fVar38;
              }
              fVar41 = (float)NEON_fminnm(fVar37,fVar41);
            } while (lVar17 != 0);
          }
          if (uVar12 == 0) goto LAB_02e5a970;
        }
        bVar14 = bVar14 && 0.0 < fVar36;
        puVar30 = *(undefined8 **)(lVar35 + 0x20);
        puVar27 = *(undefined8 **)(lVar35 + 0x30);
        lVar35 = -4;
        if (lVar24 != -1) {
          lVar35 = lVar24;
        }
        lVar24 = -4;
        if (lVar29 != -1) {
          lVar24 = lVar29;
        }
        if (bVar13 && bVar1) {
          uVar26 = 0;
          do {
            plVar18 = *(long **)(lVar32 + 0x28);
            uVar10 = *(uint *)(lVar32 + 0x30);
            if ((uVar10 == 0) || (*plVar18 == lVar31)) {
              plVar22 = plVar18;
            }
            else {
              lVar29 = (ulong)uVar10 * 0x18;
              plVar23 = plVar18;
              do {
                lVar29 = lVar29 + -0x18;
                if (lVar29 == 0) goto LAB_02e5ad6c;
                plVar22 = plVar23 + 3;
                plVar2 = plVar23 + 3;
                plVar23 = plVar22;
              } while (*plVar2 != lVar31);
            }
            if ((plVar22 == plVar18 + (ulong)uVar10 * 3) || ((int)plVar22[2] == 0)) {
LAB_02e5ad6c:
              fVar37 = 0.0;
              fVar36 = 0.0;
              fVar38 = 0.0;
LAB_02e5ad80:
              fVar40 = 0.0;
            }
            else {
              uVar33 = (int)plVar22[2] - 1;
              uVar10 = (uint)uVar26;
              if (uVar33 <= uVar26) {
                uVar10 = uVar33;
              }
              pfVar19 = (float *)(plVar22[1] + (ulong)uVar10 * 0x10);
              fVar40 = *pfVar19;
              fVar38 = pfVar19[1];
              fVar36 = pfVar19[2];
              fVar37 = pfVar19[3];
              if (fVar40 <= 0.0) goto LAB_02e5ad80;
            }
            if (fVar38 <= fVar41) {
              fVar38 = fVar41;
            }
            puVar21 = (undefined8 *)(*(long *)(lVar32 + 0x20) + uVar26 * 0x28);
            uVar25 = puVar21[3];
            uVar39 = *(undefined4 *)((long)puVar21 + 0x24);
            uVar7 = puVar21[1];
            uVar8 = puVar21[2];
            *(undefined4 *)(puVar30 + 4) = *(undefined4 *)(puVar21 + 4);
            puVar30[2] = uVar8;
            puVar30[3] = uVar25;
            puVar30[1] = uVar7;
            *puVar30 = *puVar21;
            *(float *)(puVar30 + 8) = fVar38 * 100.0;
            *(float *)((long)puVar30 + 0x3c) = fVar40 * 100.0;
            *(float *)((long)puVar30 + 0x44) = fVar36;
            *(float *)(puVar30 + 9) = fVar37;
            *(undefined4 *)((long)puVar30 + 0x4c) = uVar39;
            puVar30[10] = lVar31;
            FUN_02e743d8(*(undefined4 *)(lVar32 + 0x50),lVar15,puVar30);
            uVar7 = puVar30[1];
            *puVar27 = *puVar30;
            puVar27[1] = uVar7;
            uVar7 = puVar30[2];
            uVar8 = puVar30[3];
            uVar25 = puVar30[5];
            puVar27[4] = puVar30[4];
            puVar27[5] = uVar25;
            puVar27[2] = uVar7;
            puVar27[3] = uVar8;
            uVar7 = puVar30[6];
            uVar25 = puVar30[7];
            uVar8 = puVar30[8];
            uVar9 = puVar30[9];
            puVar27[10] = lVar35;
            puVar27[6] = uVar7;
            puVar27[7] = uVar25;
            puVar21 = puVar27 + 0xd;
            puVar27[8] = uVar8;
            puVar27[9] = uVar9;
            if (bVar14) {
              uVar7 = puVar30[1];
              *puVar21 = *puVar30;
              puVar27[0xe] = uVar7;
              uVar7 = puVar30[2];
              uVar8 = puVar30[3];
              uVar25 = puVar30[5];
              puVar27[0x11] = puVar30[4];
              puVar27[0x12] = uVar25;
              puVar27[0xf] = uVar7;
              puVar27[0x10] = uVar8;
              uVar7 = puVar30[6];
              uVar8 = puVar30[7];
              uVar25 = puVar30[9];
              puVar27[0x15] = puVar30[8];
              puVar27[0x16] = uVar25;
              puVar27[0x13] = uVar7;
              puVar27[0x14] = uVar8;
              puVar27[0x17] = lVar24;
              puVar21 = puVar27 + 0x1a;
            }
            uVar26 = uVar26 + 1;
            puVar30 = puVar30 + 0xd;
            puVar27 = puVar21;
          } while (uVar26 != uVar34);
          goto LAB_02e5a970;
        }
        uVar26 = 0;
        do {
          plVar18 = *(long **)(lVar32 + 0x28);
          uVar10 = *(uint *)(lVar32 + 0x30);
          if ((uVar10 == 0) || (*plVar18 == lVar31)) {
            plVar22 = plVar18;
          }
          else {
            lVar35 = (ulong)uVar10 * 0x18;
            plVar23 = plVar18;
            do {
              lVar35 = lVar35 + -0x18;
              if (lVar35 == 0) goto LAB_02e5a8e0;
              plVar22 = plVar23 + 3;
              plVar2 = plVar23 + 3;
              plVar23 = plVar22;
            } while (*plVar2 != lVar31);
          }
          if ((plVar22 == plVar18 + (ulong)uVar10 * 3) || ((int)plVar22[2] == 0)) {
LAB_02e5a8e0:
            fVar37 = 0.0;
            fVar38 = 0.0;
            fVar36 = 0.0;
LAB_02e5a8f4:
            fVar40 = 0.0;
          }
          else {
            uVar33 = (int)plVar22[2] - 1;
            uVar10 = (uint)uVar26;
            if (uVar33 <= uVar26) {
              uVar10 = uVar33;
            }
            pfVar19 = (float *)(plVar22[1] + (ulong)uVar10 * 0x10);
            fVar40 = *pfVar19;
            fVar38 = pfVar19[1];
            fVar36 = pfVar19[2];
            fVar37 = pfVar19[3];
            if (fVar40 <= 0.0) goto LAB_02e5a8f4;
          }
          if (fVar38 <= fVar41) {
            fVar38 = fVar41;
          }
          puVar21 = (undefined8 *)(*(long *)(lVar32 + 0x20) + uVar26 * 0x28);
          uVar39 = *(undefined4 *)((long)puVar21 + 0x24);
          uVar7 = puVar21[1];
          uVar8 = puVar21[2];
          uVar25 = puVar21[3];
          *(undefined4 *)(puVar30 + 4) = *(undefined4 *)(puVar21 + 4);
          puVar30[2] = uVar8;
          puVar30[3] = uVar25;
          puVar30[1] = uVar7;
          *puVar30 = *puVar21;
          *(float *)(puVar30 + 8) = fVar38 * 100.0;
          *(float *)((long)puVar30 + 0x3c) = fVar40 * 100.0;
          *(float *)((long)puVar30 + 0x44) = fVar36;
          *(float *)(puVar30 + 9) = fVar37;
          *(undefined4 *)((long)puVar30 + 0x4c) = uVar39;
          puVar30[10] = lVar31;
          FUN_02e743d8(*(undefined4 *)(lVar32 + 0x50),lVar15,puVar30);
          if (bVar14) {
            uVar7 = puVar30[1];
            *puVar27 = *puVar30;
            puVar27[1] = uVar7;
            uVar7 = puVar30[2];
            uVar8 = puVar30[3];
            uVar25 = puVar30[5];
            puVar27[4] = puVar30[4];
            puVar27[5] = uVar25;
            puVar27[2] = uVar7;
            puVar27[3] = uVar8;
            uVar7 = puVar30[6];
            uVar8 = puVar30[7];
            uVar25 = puVar30[9];
            puVar27[8] = puVar30[8];
            puVar27[9] = uVar25;
            puVar27[6] = uVar7;
            puVar27[7] = uVar8;
            puVar27[10] = lVar24;
            puVar27 = puVar27 + 0xd;
          }
          uVar26 = uVar26 + 1;
          puVar30 = puVar30 + 0xd;
          if (uVar26 == uVar34) {
LAB_02e5a970:
            lVar31 = DAT_0440a160;
            if ((param_2 & 1) == 0) {
              return;
            }
            if (*(uint *)(param_1 + 0x70) == 0) {
              fVar36 = 0.0;
            }
            else {
              lVar32 = (ulong)*(uint *)(param_1 + 0x70) * 0x158;
              fVar36 = 3.4028235e+38;
              puVar20 = (undefined4 *)(*(long *)(param_1 + 0x68) + 0x7c);
              do {
                uVar39 = *puVar20;
                puVar20 = puVar20 + 0x56;
                fVar36 = (float)NEON_fminnm(uVar39,fVar36);
                lVar32 = lVar32 + -0x158;
              } while (lVar32 != 0);
              fVar36 = fVar36 * 100.0;
            }
            local_b0 = *(undefined8 *)(param_1 + 8);
            local_a0 = 0;
            local_a8 = 0;
            local_98 = 0xff;
            local_90 = 0xff;
            local_88 = 0;
            if (*(int *)(DAT_0440a160 + 0xb8) == 0) {
              return;
            }
            puVar20 = *(undefined4 **)(DAT_0440a160 + 0xb0);
            do {
              local_80 = 0x400000000;
              local_78 = 0;
              puVar28 = puVar20 + 1;
              FUN_02ee0d64(fVar36,lVar31,*puVar20,&local_b0,&local_80,1,1);
              puVar20 = puVar28;
            } while (puVar28 !=
                     (undefined4 *)(*(long *)(lVar31 + 0xb0) + (ulong)*(uint *)(lVar31 + 0xb8) * 4))
            ;
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


