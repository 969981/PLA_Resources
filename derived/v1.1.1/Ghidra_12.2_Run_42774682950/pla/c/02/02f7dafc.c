/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7dafc; name: FUN_02f7dafc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f7dafc(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar20;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 local_a0;
  ushort local_98 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  ulong uStack_78;
  float *local_70;
  ushort local_68;
  
  puVar9 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar8 = param_2[1];
    lVar14 = 0;
    if (*param_1 != 0) {
      lVar14 = *param_1 + (long)param_1;
    }
    pfVar12 = (float *)(lVar14 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar23._0_4_ = *pfVar12 - *(float *)(param_3 + 8);
    auVar23._4_4_ = pfVar12[1] - *(float *)((long)param_3 + 0x44);
    auVar23._8_4_ = pfVar12[2] - *(float *)(param_3 + 9);
    auVar23._12_4_ = pfVar12[3] - *(float *)((long)param_3 + 0x4c);
    auVar30._0_4_ = pfVar12[4] + *(float *)(param_3 + 8);
    auVar30._4_4_ = pfVar12[5] + *(float *)((long)param_3 + 0x44);
    auVar30._8_4_ = pfVar12[6] + *(float *)(param_3 + 9);
    auVar30._12_4_ = *(float *)((long)param_3 + 0x4c) + 0.0;
    auVar25 = *(undefined1 (*) [16])(param_3 + 6);
    auVar23 = NEON_fmax(auVar23,auVar25,4);
    auVar23 = NEON_fmin(auVar30,auVar23,4);
    fVar22 = auVar25._0_4_ - auVar23._0_4_;
    fVar27 = auVar25._4_4_ - auVar23._4_4_;
    fVar28 = auVar25._8_4_ - auVar23._8_4_;
    fVar29 = auVar25._12_4_ - auVar23._12_4_;
    auVar25._0_4_ = fVar22 * fVar22;
    auVar25._4_4_ = fVar27 * fVar27;
    auVar25._8_4_ = fVar28 * fVar28;
    auVar25._12_4_ = fVar29 * fVar29;
    auVar23 = NEON_ext(auVar25,auVar25,8,1);
    if (auVar25._0_4_ + auVar25._4_4_ + auVar23._0_4_ <= (float)param_3[10]) {
      uVar4 = *(ushort *)(pfVar12 + 7);
joined_r0x02f7dba4:
      do {
        if ((ulong)uVar4 == 0) {
          FUN_02f7d4d4(*param_3,*(undefined2 *)((long)pfVar12 + 0x1e),param_3 + 10);
        }
        else {
          local_98[0] = uVar4;
          lVar14 = 0;
          if (*param_1 != 0) {
            lVar14 = *param_1 + (long)param_1;
          }
          pfVar11 = (float *)(lVar14 + (ulong)uVar4 * 0x20);
          local_68 = *(ushort *)((long)pfVar12 + 0x1e);
          local_70 = (float *)(lVar14 + (ulong)*(ushort *)((long)pfVar12 + 0x1e) * 0x20);
          uStack_78 = (ulong)(uint)local_70[6];
          local_80 = local_70[4];
          fStack_7c = local_70[5];
          fStack_88 = local_70[2];
          fStack_84 = local_70[3];
          local_90 = *local_70;
          fStack_8c = local_70[1];
          pauVar1 = (undefined1 (*) [12])(param_3 + 6);
          fVar19 = (float)param_3[7];
          fVar21 = (float)((ulong)param_3[7] >> 0x20);
          fVar27 = (float)*(undefined8 *)*pauVar1;
          fVar29 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          fVar22 = (float)param_3[8];
          auVar24._0_4_ = *pfVar11 - fVar22;
          fVar28 = (float)((ulong)param_3[8] >> 0x20);
          auVar24._4_4_ = pfVar11[1] - fVar28;
          fVar18 = (float)param_3[9];
          auVar24._8_4_ = pfVar11[2] - fVar18;
          fVar20 = (float)((ulong)param_3[9] >> 0x20);
          auVar24._12_4_ = pfVar11[3] - fVar20;
          auVar15._0_4_ = pfVar11[4] + fVar22;
          auVar15._4_4_ = pfVar11[5] + fVar28;
          auVar15._8_4_ = pfVar11[6] + fVar18;
          auVar15._12_4_ = fVar20 + 0.0;
          auVar31._0_4_ = local_70[4] + fVar22;
          auVar31._4_4_ = local_70[5] + fVar28;
          auVar31._8_4_ = local_70[6] + fVar18;
          auVar31._12_4_ = fVar20 + 0.0;
          auVar5._12_4_ = fVar21;
          auVar5._0_12_ = *pauVar1;
          auVar25 = NEON_fmax(auVar24,auVar5,4);
          auVar25 = NEON_fmin(auVar15,auVar25,4);
          auVar26._0_4_ = *local_70 - fVar22;
          auVar26._4_4_ = local_70[1] - fVar28;
          auVar26._8_4_ = local_70[2] - fVar18;
          auVar26._12_4_ = local_70[3] - fVar20;
          fVar22 = fVar27 - auVar25._0_4_;
          fVar28 = fVar29 - auVar25._4_4_;
          fVar18 = fVar19 - auVar25._8_4_;
          fVar20 = fVar21 - auVar25._12_4_;
          auVar6._12_4_ = fVar21;
          auVar6._0_12_ = *pauVar1;
          auVar25 = NEON_fmax(auVar26,auVar6,4);
          auVar16._0_4_ = fVar22 * fVar22;
          auVar16._4_4_ = fVar28 * fVar28;
          auVar16._8_4_ = fVar18 * fVar18;
          auVar16._12_4_ = fVar20 * fVar20;
          auVar23 = NEON_ext(auVar16,auVar16,8,1);
          auVar25 = NEON_fmin(auVar31,auVar25,4);
          fVar28 = auVar16._0_4_ + auVar16._4_4_ + auVar23._0_4_;
          fVar27 = fVar27 - auVar25._0_4_;
          fVar29 = fVar29 - auVar25._4_4_;
          fVar19 = fVar19 - auVar25._8_4_;
          fVar21 = fVar21 - auVar25._12_4_;
          auVar17._0_4_ = fVar27 * fVar27;
          auVar17._4_4_ = fVar29 * fVar29;
          auVar17._8_4_ = fVar19 * fVar19;
          auVar17._12_4_ = fVar21 * fVar21;
          auVar25 = NEON_ext(auVar17,auVar17,8,1);
          fVar22 = auVar17._0_4_ + auVar17._4_4_ + auVar25._0_4_;
          bVar3 = fVar28 <= (float)param_3[10] | (fVar22 <= (float)param_3[10]) << 1;
          if ((bVar3 == 1) || (pfVar11 = local_70, bVar3 == 2)) {
            uVar4 = *(ushort *)(pfVar11 + 7);
            pfVar12 = pfVar11;
            goto joined_r0x02f7dba4;
          }
          if (bVar3 == 3) {
            *(uint *)(param_3 + 0xb) = (uint)(fVar22 < fVar28);
            iVar13 = (int)param_2[1];
            uVar10 = *(uint *)((long)param_2 + 0xc);
            uVar2 = iVar13 + 1;
            if (iVar13 < (int)(uVar10 & 0x3fffffff)) {
              lVar14 = *param_2;
            }
            else {
              lVar14 = *param_2;
              if (0x3ffffffe < iVar13) {
                FUN_032bd0a8(uVar2);
                uVar10 = *(uint *)((long)param_2 + 0xc);
              }
              uVar10 = (uVar10 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar10) {
                uVar10 = 0x3fffffff;
              }
              uVar7 = uVar2;
              if ((int)uVar2 <= (int)uVar10) {
                uVar7 = uVar10;
              }
              lVar14 = FUN_032bd1d4(puVar9,uVar7,2,lVar14,iVar13,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar14;
              iVar13 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar2;
            *(ushort *)(lVar14 + (long)iVar13 * 2) = local_98[(ulong)(fVar22 >= fVar28) * 0x18];
            pfVar12 = *(float **)(local_98 + ((ulong)(fVar22 < fVar28) * 6 + -1) * 4);
            uVar4 = *(ushort *)(pfVar12 + 7);
            goto joined_r0x02f7dba4;
          }
        }
        if ((int)param_2[1] <= (int)lVar8) {
          return;
        }
        iVar13 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar13;
        lVar14 = 0;
        if (*param_1 != 0) {
          lVar14 = *param_1 + (long)param_1;
        }
        pfVar12 = (float *)(lVar14 + (ulong)*(ushort *)(*param_2 + (long)iVar13 * 2) * 0x20);
        uVar4 = *(ushort *)(pfVar12 + 7);
      } while( true );
    }
  }
  return;
}


