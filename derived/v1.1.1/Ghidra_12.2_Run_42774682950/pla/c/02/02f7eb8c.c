/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7eb8c; name: FUN_02f7eb8c
 */


void FUN_02f7eb8c(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined8 local_a0;
  ushort local_98 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  ulong uStack_78;
  float *local_70;
  ushort local_68;
  
  puVar8 = PTR_PTR_0434a080;
  uVar3 = *(ushort *)((long)param_1 + 0x1c);
  uVar11 = (ulong)uVar3;
  if (uVar11 != 0) {
    lVar7 = param_2[1];
    lVar20 = 0;
    if (*param_1 != 0) {
      lVar20 = *param_1 + (long)param_1;
    }
    plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
    lVar16 = *plVar15;
    lVar17 = 0;
    if (lVar16 != 0) {
      lVar17 = lVar16 + (long)plVar15;
    }
    if ((*(uint *)(lVar17 + ((ulong)(uVar3 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar3 & 0x1f)) != 0) {
      pfVar14 = (float *)(lVar20 + uVar11 * 0x20);
      auVar22._0_4_ = *pfVar14 - *(float *)(param_3 + 8);
      auVar22._4_4_ = pfVar14[1] - *(float *)((long)param_3 + 0x44);
      auVar22._8_4_ = pfVar14[2] - *(float *)(param_3 + 9);
      auVar22._12_4_ = pfVar14[3] - *(float *)((long)param_3 + 0x4c);
      auVar29._0_4_ = *(float *)(param_3 + 8) + pfVar14[4];
      auVar29._4_4_ = *(float *)((long)param_3 + 0x44) + pfVar14[5];
      auVar29._8_4_ = *(float *)(param_3 + 9) + pfVar14[6];
      auVar29._12_4_ = *(float *)((long)param_3 + 0x4c) + 0.0;
      auVar31 = *(undefined1 (*) [16])(param_3 + 6);
      auVar22 = NEON_fmax(auVar22,auVar31,4);
      auVar22 = NEON_fmin(auVar29,auVar22,4);
      fVar21 = auVar31._0_4_ - auVar22._0_4_;
      fVar25 = auVar31._4_4_ - auVar22._4_4_;
      fVar26 = auVar31._8_4_ - auVar22._8_4_;
      fVar27 = auVar31._12_4_ - auVar22._12_4_;
      auVar31._0_4_ = fVar21 * fVar21;
      auVar31._4_4_ = fVar25 * fVar25;
      auVar31._8_4_ = fVar26 * fVar26;
      auVar31._12_4_ = fVar27 * fVar27;
      auVar22 = NEON_ext(auVar31,auVar31,8,1);
      if (auVar31._0_4_ + auVar31._4_4_ + auVar22._0_4_ <= (float)param_3[10]) {
        uVar3 = *(ushort *)(pfVar14 + 7);
joined_r0x02f7ec6c:
        while (uVar12 = (ulong)uVar3, uVar12 == 0) {
          plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar17 = *plVar15;
          lVar20 = 0;
          if (lVar17 != 0) {
            lVar20 = lVar17 + (long)plVar15;
          }
          if ((*(uint *)(lVar20 + (uVar11 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar11 & 0x1f)) != 0)
          {
            FUN_02f7e564(*param_3,*(undefined2 *)((long)pfVar14 + 0x1e),param_3 + 10);
          }
LAB_02f7eeb8:
          if ((int)param_2[1] <= (int)lVar7) {
            return;
          }
          iVar19 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar19;
          uVar11 = (ulong)*(ushort *)(*param_2 + (long)iVar19 * 2);
          lVar20 = 0;
          if (*param_1 != 0) {
            lVar20 = *param_1 + (long)param_1;
          }
          pfVar14 = (float *)(lVar20 + uVar11 * 0x20);
          uVar3 = *(ushort *)(pfVar14 + 7);
        }
        local_98[0] = uVar3;
        lVar20 = 0;
        if (*param_1 != 0) {
          lVar20 = *param_1 + (long)param_1;
        }
        pfVar13 = (float *)(lVar20 + uVar12 * 0x20);
        local_68 = *(ushort *)((long)pfVar14 + 0x1e);
        local_70 = (float *)(lVar20 + (ulong)local_68 * 0x20);
        uStack_78 = (ulong)(uint)local_70[6];
        local_80 = local_70[4];
        fStack_7c = local_70[5];
        uStack_88 = *(undefined8 *)(local_70 + 2);
        local_90 = *(undefined8 *)local_70;
        pauVar1 = (undefined1 (*) [12])(param_3 + 6);
        fVar35 = (float)param_3[7];
        fVar36 = (float)((ulong)param_3[7] >> 0x20);
        fVar28 = (float)*(undefined8 *)*pauVar1;
        fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar21 = (float)param_3[8];
        auVar30._0_4_ = *pfVar13 - fVar21;
        fVar25 = (float)((ulong)param_3[8] >> 0x20);
        auVar30._4_4_ = pfVar13[1] - fVar25;
        fVar26 = (float)param_3[9];
        auVar30._8_4_ = pfVar13[2] - fVar26;
        fVar27 = (float)((ulong)param_3[9] >> 0x20);
        auVar30._12_4_ = pfVar13[3] - fVar27;
        auVar23._0_4_ = pfVar13[4] + fVar21;
        auVar23._4_4_ = pfVar13[5] + fVar25;
        auVar23._8_4_ = pfVar13[6] + fVar26;
        auVar23._12_4_ = fVar27 + 0.0;
        auVar37._0_4_ = local_70[4] + fVar21;
        auVar37._4_4_ = local_70[5] + fVar25;
        auVar37._8_4_ = local_70[6] + fVar26;
        auVar37._12_4_ = fVar27 + 0.0;
        auVar4._12_4_ = fVar36;
        auVar4._0_12_ = *pauVar1;
        auVar31 = NEON_fmax(auVar30,auVar4,4);
        auVar31 = NEON_fmin(auVar23,auVar31,4);
        auVar32._0_4_ = (float)local_90 - fVar21;
        auVar32._4_4_ = (float)((ulong)local_90 >> 0x20) - fVar25;
        auVar32._8_4_ = (float)uStack_88 - fVar26;
        auVar32._12_4_ = (float)((ulong)uStack_88 >> 0x20) - fVar27;
        auVar5._12_4_ = fVar36;
        auVar5._0_12_ = *pauVar1;
        auVar22 = NEON_fmax(auVar32,auVar5,4);
        fVar21 = fVar28 - auVar31._0_4_;
        fVar25 = fVar34 - auVar31._4_4_;
        fVar26 = fVar35 - auVar31._8_4_;
        fVar27 = fVar36 - auVar31._12_4_;
        auVar31 = NEON_fmin(auVar37,auVar22,4);
        auVar24._0_4_ = fVar21 * fVar21;
        auVar24._4_4_ = fVar25 * fVar25;
        auVar24._8_4_ = fVar26 * fVar26;
        auVar24._12_4_ = fVar27 * fVar27;
        auVar22 = NEON_ext(auVar24,auVar24,8,1);
        fVar28 = fVar28 - auVar31._0_4_;
        fVar34 = fVar34 - auVar31._4_4_;
        fVar35 = fVar35 - auVar31._8_4_;
        fVar36 = fVar36 - auVar31._12_4_;
        auVar33._0_4_ = fVar28 * fVar28;
        auVar33._4_4_ = fVar34 * fVar34;
        auVar33._8_4_ = fVar35 * fVar35;
        auVar33._12_4_ = fVar36 * fVar36;
        fVar26 = auVar24._0_4_ + auVar24._4_4_ + auVar22._0_4_;
        auVar31 = NEON_ext(auVar33,auVar33,8,1);
        fVar25 = auVar33._0_4_ + auVar33._4_4_ + auVar31._0_4_;
        fVar21 = (float)param_3[10];
        if (fVar26 <= fVar21) {
          plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar17 = *plVar15;
          lVar20 = 0;
          if (lVar17 != 0) {
            lVar20 = lVar17 + (long)plVar15;
          }
          bVar9 = (*(uint *)(lVar20 + ((ulong)(uVar3 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar3 & 0x1f))
                  != 0;
          if (fVar25 <= fVar21) goto LAB_02f7ed44;
LAB_02f7edb4:
          bVar18 = 0;
        }
        else {
          bVar9 = false;
          if (fVar21 < fVar25) goto LAB_02f7edb4;
LAB_02f7ed44:
          plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar17 = *plVar15;
          lVar20 = 0;
          if (lVar17 != 0) {
            lVar20 = lVar17 + (long)plVar15;
          }
          bVar18 = ((*(uint *)(lVar20 + ((ulong)(local_68 >> 3) & 0x1ffc)) &
                    1 << (ulong)(local_68 & 0x1f)) != 0) << 1;
        }
        bVar18 = bVar18 | bVar9;
        if (bVar18 != 1) {
          uVar12 = (ulong)local_68;
          pfVar13 = local_70;
          if (bVar18 != 2) {
            if (bVar18 != 3) goto LAB_02f7eeb8;
            *(uint *)(param_3 + 0xb) = (uint)(fVar25 < fVar26);
            iVar19 = (int)param_2[1];
            uVar10 = *(uint *)((long)param_2 + 0xc);
            uVar2 = iVar19 + 1;
            if (iVar19 < (int)(uVar10 & 0x3fffffff)) {
              lVar20 = *param_2;
            }
            else {
              lVar20 = *param_2;
              if (0x3ffffffe < iVar19) {
                FUN_032bd0a8(uVar2);
                uVar10 = *(uint *)((long)param_2 + 0xc);
              }
              uVar10 = (uVar10 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar10) {
                uVar10 = 0x3fffffff;
              }
              uVar6 = uVar2;
              if ((int)uVar2 <= (int)uVar10) {
                uVar6 = uVar10;
              }
              lVar20 = FUN_032bd1d4(puVar8,uVar6,2,lVar20,iVar19,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar20;
              iVar19 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar2;
            *(ushort *)(lVar20 + (long)iVar19 * 2) = local_98[(ulong)(fVar25 >= fVar26) * 0x18];
            pfVar14 = *(float **)(local_98 + (ulong)(fVar25 < fVar26) * 0x18 + -4);
            uVar11 = (ulong)local_98[(ulong)(fVar25 < fVar26) * 0x18];
            uVar3 = *(ushort *)(pfVar14 + 7);
            goto joined_r0x02f7ec6c;
          }
        }
        uVar3 = *(ushort *)(pfVar13 + 7);
        uVar11 = uVar12;
        pfVar14 = pfVar13;
        goto joined_r0x02f7ec6c;
      }
    }
  }
  return;
}


