/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f78db0; name: FUN_02f78db0
 */


void FUN_02f78db0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
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
  byte bVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined8 local_b0;
  ushort local_a8 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  ulong uStack_88;
  float *local_80;
  ushort local_78;
  
  puVar8 = PTR_PTR_0434a080;
  uVar2 = *(ushort *)((long)param_1 + 0x1c);
  uVar11 = (ulong)uVar2;
  if (uVar11 != 0) {
    lVar19 = 0;
    if (*param_1 != 0) {
      lVar19 = *param_1 + (long)param_1;
    }
    lVar7 = param_2[1];
    plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
    lVar18 = *plVar15;
    lVar16 = 0;
    if (lVar18 != 0) {
      lVar16 = lVar18 + (long)plVar15;
    }
    if ((*(uint *)(lVar16 + ((ulong)(uVar2 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar2 & 0x1f)) != 0) {
      pfVar14 = (float *)(lVar19 + uVar11 * 0x20);
      fVar32 = (float)param_3[9];
      fVar33 = (float)((ulong)param_3[9] >> 0x20);
      fVar25 = (float)param_3[8];
      fVar29 = (float)((ulong)param_3[8] >> 0x20);
      fVar36 = (float)param_3[3];
      fVar34 = (float)((ulong)param_3[3] >> 0x20);
      fVar26 = (float)param_3[2];
      fVar28 = (float)((ulong)param_3[2] >> 0x20);
      fVar31 = (float)param_3[7];
      fVar35 = (float)((ulong)param_3[7] >> 0x20);
      fVar27 = (float)param_3[6];
      fVar30 = (float)((ulong)param_3[6] >> 0x20);
      auVar21._0_4_ = ((*pfVar14 - fVar25) - fVar26) * fVar27;
      auVar21._4_4_ = ((pfVar14[1] - fVar29) - fVar28) * fVar30;
      auVar21._8_4_ = ((pfVar14[2] - fVar32) - fVar36) * fVar31;
      auVar21._12_4_ = ((pfVar14[3] - fVar33) - fVar34) * fVar35;
      auVar44._0_4_ = fVar27 * ((pfVar14[4] + fVar25) - fVar26);
      auVar44._4_4_ = fVar30 * ((pfVar14[5] + fVar29) - fVar28);
      auVar44._8_4_ = fVar31 * ((pfVar14[6] + fVar32) - fVar36);
      auVar44._12_4_ = fVar35 * ((fVar33 + 0.0) - fVar34);
      auVar37 = NEON_fmin(auVar21,auVar44,4);
      auVar21 = NEON_fmax(auVar21,auVar44,4);
      uVar22 = NEON_fmaxp(auVar37._0_8_,auVar37._0_8_,4);
      uVar23 = NEON_fmax(CONCAT44(auVar37._8_4_,auVar37._8_4_),uVar22,4);
      uVar22 = NEON_fminp(auVar21._0_8_,auVar21._0_8_,4);
      uVar22 = NEON_fmin(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar22,4);
      uVar23 = NEON_fmax(uVar23,0,4);
      uVar22 = NEON_fmin(uVar22,*(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10),4);
      if ((float)uVar23 <= (float)uVar22) {
        uVar2 = *(ushort *)(pfVar14 + 7);
joined_r0x02f78eb8:
        while (uVar12 = (ulong)uVar2, uVar12 == 0) {
          plVar15 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar16 = *plVar15;
          lVar19 = 0;
          if (lVar16 != 0) {
            lVar19 = lVar16 + (long)plVar15;
          }
          if ((*(uint *)(lVar19 + (uVar11 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar11 & 0x1f)) != 0)
          {
            FUN_02f791cc(*param_3,*(undefined2 *)((long)pfVar14 + 0x1e));
          }
LAB_02f79140:
          if ((int)param_2[1] <= (int)lVar7) {
            return;
          }
          iVar20 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar20;
          uVar11 = (ulong)*(ushort *)(*param_2 + (long)iVar20 * 2);
          lVar19 = 0;
          if (*param_1 != 0) {
            lVar19 = *param_1 + (long)param_1;
          }
          pfVar14 = (float *)(lVar19 + uVar11 * 0x20);
          uVar2 = *(ushort *)(pfVar14 + 7);
        }
        local_a8[0] = uVar2;
        lVar19 = 0;
        if (*param_1 != 0) {
          lVar19 = *param_1 + (long)param_1;
        }
        pfVar13 = (float *)(lVar19 + uVar12 * 0x20);
        local_78 = *(ushort *)((long)pfVar14 + 0x1e);
        local_80 = (float *)(lVar19 + (ulong)local_78 * 0x20);
        local_90 = *(undefined8 *)(local_80 + 4);
        uStack_88 = *(ulong *)(local_80 + 6) & 0xffffffff;
        fStack_98 = local_80[2];
        fStack_94 = local_80[3];
        local_a0 = *local_80;
        fStack_9c = local_80[1];
        fVar31 = (float)param_3[8];
        fVar33 = (float)((ulong)param_3[8] >> 0x20);
        fVar34 = (float)param_3[9];
        fVar35 = (float)((ulong)param_3[9] >> 0x20);
        lVar19 = *param_3;
        fVar25 = *(float *)(param_3 + 2);
        fVar26 = *(float *)((long)param_3 + 0x14);
        fVar27 = *(float *)(param_3 + 3);
        fVar29 = *(float *)((long)param_3 + 0x1c);
        fVar28 = (float)param_3[6];
        auVar38._0_4_ = ((*pfVar13 - fVar31) - fVar25) * fVar28;
        fVar30 = (float)((ulong)param_3[6] >> 0x20);
        auVar38._4_4_ = ((pfVar13[1] - fVar33) - fVar26) * fVar30;
        fVar32 = (float)param_3[7];
        auVar38._8_4_ = ((pfVar13[2] - fVar34) - fVar27) * fVar32;
        fVar36 = (float)((ulong)param_3[7] >> 0x20);
        auVar38._12_4_ = ((pfVar13[3] - fVar35) - fVar29) * fVar36;
        fVar39 = fVar28 * ((pfVar13[4] + fVar31) - fVar25);
        fVar40 = fVar30 * ((pfVar13[5] + fVar33) - fVar26);
        fVar41 = fVar32 * ((pfVar13[6] + fVar34) - fVar27);
        fVar42 = fVar36 * ((fVar35 + 0.0) - fVar29);
        uVar23 = *(undefined8 *)(*(long *)(lVar19 + 0x48) + 0x10);
        auVar37._4_4_ = fVar40;
        auVar37._0_4_ = fVar39;
        auVar37._8_4_ = fVar41;
        auVar37._12_4_ = fVar42;
        auVar44 = NEON_fmin(auVar38,auVar37,4);
        auVar5._4_4_ = fVar40;
        auVar5._0_4_ = fVar39;
        auVar5._8_4_ = fVar41;
        auVar5._12_4_ = fVar42;
        auVar21 = NEON_fmax(auVar38,auVar5,4);
        uVar22 = NEON_fmaxp(auVar44._0_8_,auVar44._0_8_,4);
        uVar22 = NEON_fmax(CONCAT44(auVar44._8_4_,auVar44._8_4_),uVar22,4);
        uVar43 = NEON_fminp(auVar21._0_8_,auVar21._0_8_,4);
        uVar43 = NEON_fmin(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar43,4);
        uVar22 = NEON_fmax(uVar22,0,4);
        fVar39 = (float)uVar22;
        uVar22 = NEON_fmin(uVar43,uVar23,4);
        if (fVar39 <= (float)uVar22) {
          plVar15 = (long *)(*(long *)(lVar19 + 8) + 0x38);
          lVar18 = *plVar15;
          lVar16 = 0;
          if (lVar18 != 0) {
            lVar16 = lVar18 + (long)plVar15;
          }
          bVar9 = (*(uint *)(lVar16 + ((ulong)(uVar2 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar2 & 0x1f))
                  != 0;
        }
        else {
          bVar9 = false;
        }
        auVar24._0_4_ = ((*local_80 - fVar31) - fVar25) * fVar28;
        auVar24._4_4_ = ((local_80[1] - fVar33) - fVar26) * fVar30;
        auVar24._8_4_ = ((local_80[2] - fVar34) - fVar27) * fVar32;
        auVar24._12_4_ = ((local_80[3] - fVar35) - fVar29) * fVar36;
        fVar28 = fVar28 * (((float)local_90 + fVar31) - fVar25);
        fVar30 = fVar30 * (((float)((ulong)local_90 >> 0x20) + fVar33) - fVar26);
        fVar32 = fVar32 * (((float)*(ulong *)(local_80 + 6) + fVar34) - fVar27);
        fVar36 = fVar36 * ((fVar35 + 0.0) - fVar29);
        auVar3._4_4_ = fVar30;
        auVar3._0_4_ = fVar28;
        auVar3._8_4_ = fVar32;
        auVar3._12_4_ = fVar36;
        auVar44 = NEON_fmin(auVar24,auVar3,4);
        auVar4._4_4_ = fVar30;
        auVar4._0_4_ = fVar28;
        auVar4._8_4_ = fVar32;
        auVar4._12_4_ = fVar36;
        auVar21 = NEON_fmax(auVar24,auVar4,4);
        uVar22 = NEON_fmaxp(auVar44._0_8_,auVar44._0_8_,4);
        uVar22 = NEON_fmax(CONCAT44(auVar44._8_4_,auVar44._8_4_),uVar22,4);
        uVar43 = NEON_fminp(auVar21._0_8_,auVar21._0_8_,4);
        uVar43 = NEON_fmin(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar43,4);
        uVar22 = NEON_fmax(uVar22,0,4);
        fVar25 = (float)uVar22;
        uVar22 = NEON_fmin(uVar43,uVar23,4);
        if (fVar25 <= (float)uVar22) {
          plVar15 = (long *)(*(long *)(lVar19 + 8) + 0x38);
          lVar16 = *plVar15;
          lVar19 = 0;
          if (lVar16 != 0) {
            lVar19 = lVar16 + (long)plVar15;
          }
          bVar17 = ((*(uint *)(lVar19 + ((ulong)(local_78 >> 3) & 0x1ffc)) &
                    1 << (ulong)(local_78 & 0x1f)) != 0) << 1;
        }
        else {
          bVar17 = 0;
        }
        bVar17 = bVar17 | bVar9;
        if (bVar17 != 1) {
          uVar12 = (ulong)local_78;
          pfVar13 = local_80;
          if (bVar17 != 2) {
            if (bVar17 != 3) goto LAB_02f79140;
            *(uint *)(param_3 + 10) = (uint)(fVar25 < fVar39);
            iVar20 = (int)param_2[1];
            uVar10 = *(uint *)((long)param_2 + 0xc);
            uVar1 = iVar20 + 1;
            if (iVar20 < (int)(uVar10 & 0x3fffffff)) {
              lVar19 = *param_2;
            }
            else {
              lVar19 = *param_2;
              if (0x3ffffffe < iVar20) {
                FUN_032bd0a8(uVar1);
                uVar10 = *(uint *)((long)param_2 + 0xc);
              }
              uVar10 = (uVar10 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar10) {
                uVar10 = 0x3fffffff;
              }
              uVar6 = uVar1;
              if ((int)uVar1 <= (int)uVar10) {
                uVar6 = uVar10;
              }
              lVar19 = FUN_032bd1d4(puVar8,uVar6,2,lVar19,iVar20,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar19;
              iVar20 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar1;
            *(ushort *)(lVar19 + (long)iVar20 * 2) = local_a8[(ulong)(fVar25 >= fVar39) * 0x18];
            pfVar14 = *(float **)(local_a8 + (ulong)(fVar25 < fVar39) * 0x18 + -4);
            uVar11 = (ulong)local_a8[(ulong)(fVar25 < fVar39) * 0x18];
            uVar2 = *(ushort *)(pfVar14 + 7);
            goto joined_r0x02f78eb8;
          }
        }
        uVar2 = *(ushort *)(pfVar13 + 7);
        uVar11 = uVar12;
        pfVar14 = pfVar13;
        goto joined_r0x02f78eb8;
      }
    }
  }
  return;
}


