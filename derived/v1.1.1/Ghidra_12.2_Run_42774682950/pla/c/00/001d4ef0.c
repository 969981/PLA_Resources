/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4ef0; name: FUN_001d4ef0
 */


void FUN_001d4ef0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined1 (*pauVar17) [12];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  int iVar37;
  int iVar38;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar39;
  int iVar41;
  int iVar42;
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float *local_50 [2];
  
  lVar25 = *(long *)(param_1 + 0x18);
  plVar23 = (long *)(lVar25 + 0x18);
  uVar21 = *(uint *)(lVar25 + 0x34);
  lVar15 = *plVar23 + (long)plVar23;
  lVar14 = 0;
  if (*plVar23 != 0) {
    lVar14 = lVar15;
  }
  uVar24 = (ulong)param_2;
  if (uVar21 == param_2) {
    *(undefined4 *)(lVar25 + 0x34) = 0;
  }
  else {
    pfVar12 = (float *)(lVar14 + (ulong)param_2 * 0x30);
    fVar29 = *pfVar12;
    fVar30 = pfVar12[1];
    fVar31 = pfVar12[2];
    auVar35 = *(undefined1 (*) [16])(pfVar12 + 4);
    puVar16 = (uint *)(lVar14 + uVar24 * 0x30 + 0x20);
    lVar22 = lVar14 + (ulong)*puVar16 * 0x30;
    uVar19 = (ulong)*(uint *)(lVar22 + (ulong)(*(uint *)(lVar22 + 0x28) != param_2) * 4 + 0x24);
    lVar20 = lVar14 + uVar19 * 0x30;
    uVar32 = *(uint *)(lVar22 + 0x20);
    if (uVar32 == 0) {
      *(undefined4 *)(lVar15 + (long)(int)uVar21 * 0x30) = *(undefined4 *)(lVar25 + 0x28);
      lVar15 = 0;
      if (*(long *)(lVar25 + 0x18) != 0) {
        lVar15 = *(long *)(lVar25 + 0x18) + (long)plVar23;
      }
      *(int *)(lVar25 + 0x34) = (int)((ulong)(lVar20 - lVar15) >> 4) * -0x55555555;
      *(uint *)(lVar25 + 0x28) = uVar21;
      *(undefined4 *)(lVar14 + uVar19 * 0x30 + 0x20) = 0;
    }
    else {
      lVar14 = lVar14 + uVar19 * 0x30;
      *(uint *)(lVar14 + 0x20) = uVar32;
      lVar15 = 0;
      if (*(long *)(lVar25 + 0x18) != 0) {
        lVar15 = *(long *)(lVar25 + 0x18) + (long)plVar23;
      }
      lVar22 = lVar15 + (ulong)*(uint *)(lVar22 + 0x20) * 0x30;
      *(int *)(lVar22 + (ulong)(*(uint *)(lVar22 + 0x28) == *puVar16) * 4 + 0x24) =
           (int)((ulong)(lVar20 - lVar15) >> 4) * -0x55555555;
      uVar21 = *puVar16;
      *(undefined4 *)((long)plVar23 + (long)(int)uVar21 * 0x30 + *(long *)(lVar25 + 0x18)) =
           *(undefined4 *)(lVar25 + 0x28);
      *(uint *)(lVar25 + 0x28) = uVar21;
      lVar20 = *(long *)(lVar25 + 0x18);
      lVar15 = 0;
      if (lVar20 != 0) {
        lVar15 = lVar20 + (long)plVar23;
      }
      lVar15 = lVar15 + (ulong)*(uint *)(lVar14 + 0x20) * 0x30;
      do {
        lVar14 = 0;
        if (lVar20 != 0) {
          lVar14 = lVar20 + (long)plVar23;
        }
        uVar21 = *(uint *)(lVar15 + 0x20);
        puVar13 = (undefined8 *)
                  (lVar14 + (ulong)(uint)((int)((ulong)(lVar15 - lVar14) >> 4) * -0x55555555) * 0x30
                  );
        pauVar18 = (undefined1 (*) [16])(lVar14 + (ulong)*(uint *)((long)puVar13 + 0x24) * 0x30);
        pauVar17 = (undefined1 (*) [12])(lVar14 + (ulong)*(uint *)(puVar13 + 5) * 0x30);
        auVar51 = NEON_fmax(pauVar18[1],*(undefined1 (*) [16])(pauVar17[1] + 4),4);
        auVar34._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
        auVar34._0_12_ = *pauVar17;
        auVar34 = NEON_fmin(*pauVar18,auVar34,4);
        puVar13[1] = auVar34._8_8_;
        *puVar13 = auVar34._0_8_;
        puVar13[3] = auVar51._8_8_;
        puVar13[2] = auVar51._0_8_;
        if (uVar21 == 0) break;
        iVar11 = -(uint)(auVar34._0_4_ <= fVar29);
        iVar37 = -(uint)(auVar34._4_4_ <= fVar30);
        iVar38 = -(uint)(auVar34._8_4_ <= fVar31);
        iVar39 = -(uint)(auVar35._0_4_ <= auVar51._0_4_);
        iVar41 = -(uint)(auVar35._4_4_ <= auVar51._4_4_);
        iVar42 = -(uint)(auVar35._8_4_ <= auVar51._8_4_);
        uVar32 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar11 >> 8),
                                            (byte)iVar39 & (byte)iVar11)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar37 >> 8),
                                        CONCAT14((byte)iVar41 & (byte)iVar37,uVar32))));
        auVar33[8] = (byte)iVar42 & (byte)iVar38;
        auVar33[9] = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar38 >> 8);
        auVar33[10] = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
        auVar33[0xb] = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
        if ((uVar32 & (uint)((ulong)auVar33._0_8_ >> 0x20) & auVar33._8_4_) != 0) break;
        lVar20 = *plVar23;
        lVar15 = 0;
        if (lVar20 != 0) {
          lVar15 = lVar20 + (long)plVar23;
        }
        lVar15 = lVar15 + (ulong)uVar21 * 0x30;
      } while (lVar15 != 0);
    }
  }
  uVar7 = *param_3;
  lVar15 = 0;
  if (*(long *)(lVar25 + 0x18) != 0) {
    lVar15 = *(long *)(lVar25 + 0x18) + (long)plVar23;
  }
  puVar13 = (undefined8 *)(lVar15 + uVar24 * 0x30);
  puVar13[1] = param_3[1];
  *puVar13 = uVar7;
  auVar35 = *(undefined1 (*) [16])(param_3 + 2);
  puVar13[3] = auVar35._8_8_;
  puVar13[2] = auVar35._0_8_;
  lVar20 = *(long *)(lVar25 + 0x18);
  uVar21 = *(uint *)(lVar25 + 0x34);
  lVar15 = lVar20 + (long)plVar23;
  lVar14 = 0;
  if (lVar20 != 0) {
    lVar14 = lVar15;
  }
  if (uVar21 == 0) {
    *(uint *)(lVar25 + 0x34) = param_2;
    *(undefined4 *)(lVar14 + uVar24 * 0x30 + 0x20) = 0;
  }
  else {
    pauVar17 = (undefined1 (*) [12])(lVar14 + uVar24 * 0x30);
    fVar44 = (float)*(undefined8 *)(*pauVar17 + 8);
    fVar54 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
    auVar10 = *pauVar17;
    auVar33 = *pauVar17;
    fVar43 = (float)*(undefined8 *)*pauVar17;
    fVar47 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
    pauVar1 = (undefined1 (*) [12])(pauVar17[1] + 4);
    fVar31 = (float)*(undefined8 *)pauVar17[2];
    fVar53 = (float)((ulong)*(undefined8 *)pauVar17[2] >> 0x20);
    auVar9 = *pauVar1;
    auVar8 = *pauVar1;
    fVar29 = (float)*(undefined8 *)*pauVar1;
    fVar30 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    uVar32 = *(uint *)(lVar25 + 0x28);
    if (uVar32 == 0) {
      iVar11 = FUN_02fc7c84(plVar23,1);
      if (iVar11 < 0) {
        return;
      }
      lVar20 = *(long *)(lVar25 + 0x18);
      lVar15 = lVar20 + (long)plVar23;
      uVar32 = *(uint *)(lVar25 + 0x28);
    }
    lVar14 = 0;
    if (lVar20 != 0) {
      lVar14 = lVar15;
    }
    pauVar18 = (undefined1 (*) [16])(lVar14 + (ulong)uVar21 * 0x30);
    *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)(lVar15 + (long)(int)uVar32 * 0x30);
    uVar21 = *(uint *)(pauVar18[2] + 4);
    if (uVar21 != 0) {
      fVar26 = fVar43 + fVar29;
      fVar27 = fVar47 + fVar30;
      fVar28 = fVar44 + fVar31;
      fVar29 = fVar29 - fVar43;
      fVar30 = fVar30 - fVar47;
      fVar31 = fVar31 - fVar44;
      while( true ) {
        lVar15 = 0;
        if (lVar20 != 0) {
          lVar15 = lVar20 + (long)plVar23;
        }
        local_50[0] = (float *)(lVar15 + (ulong)uVar21 * 0x30);
        local_50[1] = (float *)(lVar15 + (ulong)*(uint *)(pauVar18[2] + 8) * 0x30);
        auVar35 = pauVar18[1];
        auVar5._12_4_ = fVar54;
        auVar5._0_12_ = auVar33;
        auVar34 = NEON_fmin(*pauVar18,auVar5,4);
        *(long *)(*pauVar18 + 8) = auVar34._8_8_;
        *(long *)*pauVar18 = auVar34._0_8_;
        auVar52._12_4_ = fVar53;
        auVar52._0_12_ = auVar8;
        auVar35 = NEON_fmax(auVar35,auVar52,4);
        *(long *)(pauVar18[1] + 8) = auVar35._8_8_;
        *(long *)pauVar18[1] = auVar35._0_8_;
        fVar47 = (*local_50[1] + local_50[1][4]) - fVar26;
        fVar48 = (local_50[1][1] + local_50[1][5]) - fVar27;
        fVar49 = (local_50[1][2] + local_50[1][6]) - fVar28;
        fVar50 = (local_50[1][3] + local_50[1][7]) - (fVar54 + fVar53);
        fVar43 = (*local_50[0] + local_50[0][4]) - fVar26;
        fVar44 = (local_50[0][1] + local_50[0][5]) - fVar27;
        fVar45 = (local_50[0][2] + local_50[0][6]) - fVar28;
        fVar46 = (local_50[0][3] + local_50[0][7]) - (fVar54 + fVar53);
        auVar36._0_4_ = fVar29 + (local_50[0][4] - *local_50[0]);
        auVar36._4_4_ = fVar30 + (local_50[0][5] - local_50[0][1]);
        auVar36._8_4_ = fVar31 + (local_50[0][6] - local_50[0][2]);
        auVar36._12_4_ = (fVar53 - fVar54) + (local_50[0][7] - local_50[0][3]);
        auVar40._0_4_ = fVar29 + (local_50[1][4] - *local_50[1]);
        auVar40._4_4_ = fVar30 + (local_50[1][5] - local_50[1][1]);
        auVar40._8_4_ = fVar31 + (local_50[1][6] - local_50[1][2]);
        auVar40._12_4_ = (fVar53 - fVar54) + (local_50[1][7] - local_50[1][3]);
        fVar43 = fVar43 * fVar43;
        fVar44 = fVar44 * fVar44;
        fVar45 = fVar45 * fVar45;
        fVar46 = fVar46 * fVar46;
        auVar35._4_4_ = fVar44;
        auVar35._0_4_ = fVar43;
        auVar35._8_4_ = fVar45;
        auVar35._12_4_ = fVar46;
        auVar51._4_4_ = fVar44;
        auVar51._0_4_ = fVar43;
        auVar51._8_4_ = fVar45;
        auVar51._12_4_ = fVar46;
        auVar51 = NEON_ext(auVar35,auVar51,8,1);
        auVar52 = NEON_ext(auVar36,auVar36,8,1);
        fVar47 = fVar47 * fVar47;
        fVar48 = fVar48 * fVar48;
        fVar49 = fVar49 * fVar49;
        fVar50 = fVar50 * fVar50;
        auVar2._4_4_ = fVar48;
        auVar2._0_4_ = fVar47;
        auVar2._8_4_ = fVar49;
        auVar2._12_4_ = fVar50;
        auVar3._4_4_ = fVar48;
        auVar3._0_4_ = fVar47;
        auVar3._8_4_ = fVar49;
        auVar3._12_4_ = fVar50;
        auVar35 = NEON_ext(auVar2,auVar3,8,1);
        auVar34 = NEON_ext(auVar40,auVar40,8,1);
        pauVar18 = (undefined1 (*) [16])
                   local_50[(fVar47 + fVar48 + auVar35._0_4_) *
                            (auVar34._0_4_ + auVar40._0_4_ + auVar40._4_4_) <
                            (fVar43 + fVar44 + auVar51._0_4_) *
                            (auVar52._0_4_ + auVar36._0_4_ + auVar36._4_4_)];
        uVar21 = *(uint *)(pauVar18[2] + 4);
        if (uVar21 == 0) break;
        lVar20 = *plVar23;
      }
    }
    if (*(uint *)pauVar18[2] == 0) {
      *(uint *)(lVar25 + 0x34) = uVar32;
    }
    else {
      lVar15 = 0;
      if (*plVar23 != 0) {
        lVar15 = *plVar23 + (long)plVar23;
      }
      lVar25 = lVar15 + (ulong)*(uint *)pauVar18[2] * 0x30;
      *(uint *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x28) ==
                                (int)((ulong)((long)pauVar18 - lVar15) >> 4) * -0x55555555) * 4 +
               0x24) = uVar32;
    }
    puVar13 = (undefined8 *)(lVar14 + (ulong)uVar32 * 0x30);
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)pauVar18[2];
    lVar15 = 0;
    if (*plVar23 != 0) {
      lVar15 = *plVar23 + (long)plVar23;
    }
    *(int *)((long)puVar13 + 0x24) = (int)((ulong)((long)pauVar18 - lVar15) >> 4) * -0x55555555;
    *(uint *)(puVar13 + 5) = param_2;
    *(uint *)pauVar18[2] = uVar32;
    lVar15 = 0;
    if (*plVar23 != 0) {
      lVar15 = *plVar23 + (long)plVar23;
    }
    *(uint *)(lVar15 + uVar24 * 0x30 + 0x20) = uVar32;
    auVar4._12_4_ = fVar53;
    auVar4._0_12_ = auVar9;
    auVar34 = NEON_fmax(pauVar18[1],auVar4,4);
    auVar6._12_4_ = fVar54;
    auVar6._0_12_ = auVar10;
    auVar35 = NEON_fmin(*pauVar18,auVar6,4);
    puVar13[1] = auVar35._8_8_;
    *puVar13 = auVar35._0_8_;
    puVar13[3] = auVar34._8_8_;
    puVar13[2] = auVar34._0_8_;
  }
  return;
}


