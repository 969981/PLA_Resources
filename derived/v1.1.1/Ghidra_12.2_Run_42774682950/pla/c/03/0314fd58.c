/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314fd58; name: FUN_0314fd58
 */


void FUN_0314fd58(float param_1,long param_2,long *param_3,long param_4,long param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [12];
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined2 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  int iVar31;
  undefined1 auVar30 [16];
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fStack_7c;
  
  pauVar4 = (undefined1 (*) [16])
            (**(code **)(**(long **)(param_2 + 0x28) + 0x80))
                      (*(long **)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  plVar15 = *(long **)(param_2 + 0x28);
  lVar5 = (**(code **)(*plVar15 + 0x80))(plVar15,*(undefined8 *)(param_2 + 0x20));
  lVar5 = (**(code **)(*plVar15 + 0x100))(plVar15,*(undefined4 *)(lVar5 + 0x80));
  if (*(char *)(*(long *)(param_2 + 0x38) + 0x30) != '\0') {
    lVar16 = 0;
    lVar12 = 0;
    uVar11 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x90) + lVar12;
      auVar25 = *(undefined1 (*) [16])(lVar10 + 0x10);
      lVar14 = *(long *)(lVar10 + 0x28);
      fVar22 = *(float *)(*param_3 + uVar11 * 4);
      fVar24 = fVar22 * param_1;
      fVar37 = auVar25._0_4_ * fVar24;
      fVar38 = auVar25._4_4_ * fVar24;
      fVar39 = auVar25._8_4_ * fVar24;
      fVar24 = auVar25._12_4_ * fVar24;
      if (0.0 < fVar22) {
        fVar21 = (float)((int)(short)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x30) << 0x10);
        auVar30 = *(undefined1 (*) [16])(param_5 + 0xf0);
        fVar22 = *(float *)(param_5 + 0xe4) + fVar38 * fVar21;
        *(ulong *)(param_5 + 0xe8) =
             CONCAT44(*(float *)(param_5 + 0xec) + fVar24 * fVar21,
                      *(float *)(param_5 + 0xe8) + fVar39 * fVar21);
        *(ulong *)(param_5 + 0xe0) =
             CONCAT26((short)((uint)fVar22 >> 0x10),
                      CONCAT24(SUB42(fVar22,0),*(float *)(param_5 + 0xe0) + fVar37 * fVar21));
        auVar1 = pauVar4[2];
        fVar22 = (float)*(undefined8 *)(lVar10 + 0x40) - (float)*(double *)(lVar5 + 0x10);
        fVar20 = (float)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20) -
                 (float)*(double *)(lVar5 + 0x18);
        uVar17 = (undefined2)((uint)fVar20 >> 0x10);
        fVar18 = (float)*(undefined8 *)(lVar10 + 0x48) - (float)*(double *)(lVar5 + 0x20);
        fVar21 = (float)((ulong)*(undefined8 *)(lVar10 + 0x48) >> 0x20) - 0.0;
        auVar27._4_4_ = fVar38;
        auVar27._0_4_ = fVar37;
        auVar27._8_4_ = fVar39;
        auVar27._12_4_ = fVar24;
        auVar35._4_4_ = fVar38;
        auVar35._0_4_ = fVar37;
        auVar35._8_4_ = fVar39;
        auVar35._12_4_ = fVar24;
        auVar27 = NEON_ext(auVar27,auVar35,4,1);
        auVar25._4_2_ = SUB42(fVar20,0);
        auVar25._0_4_ = fVar22;
        auVar25._6_2_ = uVar17;
        auVar25._8_4_ = fVar18;
        auVar25._12_4_ = fVar21;
        auVar28._4_2_ = SUB42(fVar20,0);
        auVar28._0_4_ = fVar22;
        auVar28._6_2_ = uVar17;
        auVar28._8_4_ = fVar18;
        auVar28._12_4_ = fVar21;
        auVar25 = NEON_ext(auVar25,auVar28,4,1);
        fVar21 = auVar27._0_4_ * fVar22 - fVar37 * auVar25._0_4_;
        fVar20 = auVar27._4_4_ * fVar20 - fVar38 * auVar25._4_4_;
        fVar19 = fVar37 * fVar18 - fVar39 * fVar22;
        auVar25 = *pauVar4;
        auVar28 = pauVar4[1];
        auVar35 = NEON_ext(auVar28,auVar28,8,1);
        auVar27 = NEON_ext(auVar25,auVar25,8,1);
        auVar36 = NEON_ext(auVar1,auVar1,8,1);
        uVar33 = *(undefined8 *)(lVar5 + 0x40);
        fVar22 = (auVar27._0_4_ * fVar21 + auVar25._0_4_ * fVar20 + auVar25._4_4_ * fVar19) *
                 (float)((int)(short)uVar33 << 0x10);
        fVar18 = (auVar35._0_4_ * fVar21 + auVar28._0_4_ * fVar20 + auVar28._4_4_ * fVar19) *
                 (float)((int)(short)((ulong)uVar33 >> 0x10) << 0x10);
        fVar20 = (auVar36._0_4_ * fVar21 + auVar1._0_4_ * fVar20 + auVar1._4_4_ * fVar19) *
                 (float)((int)(short)((ulong)uVar33 >> 0x20) << 0x10);
        fVar21 = auVar30._4_4_ +
                 auVar1._4_4_ * fVar20 + auVar25._4_4_ * fVar22 + auVar28._4_4_ * fVar18;
        *(ulong *)(param_5 + 0xf8) =
             CONCAT44(auVar30._12_4_ +
                      auVar1._12_4_ * fVar20 + auVar25._12_4_ * fVar22 + auVar28._12_4_ * fVar18,
                      auVar30._8_4_ +
                      auVar1._8_4_ * fVar20 + auVar25._8_4_ * fVar22 + auVar28._8_4_ * fVar18);
        *(ulong *)(param_5 + 0xf0) =
             CONCAT26((short)((uint)fVar21 >> 0x10),
                      CONCAT24(SUB42(fVar21,0),
                               auVar30._0_4_ +
                               auVar1._0_4_ * fVar20 +
                               auVar25._0_4_ * fVar22 + auVar28._0_4_ * fVar18));
      }
      fVar18 = 0.0;
      fVar22 = 0.0;
      fVar21 = 0.0;
      fVar20 = 0.0;
      if (lVar14 == -1) {
LAB_0314fdf8:
        puVar8 = (undefined8 *)(param_6 + uVar11 * 0x10);
        puVar8[1] = CONCAT44(fVar22,fVar18);
        *puVar8 = CONCAT26((short)((uint)fVar20 >> 0x10),CONCAT24(SUB42(fVar20,0),fVar21));
      }
      else {
        plVar15 = *(long **)(param_2 + 0x28);
        lVar6 = (**(code **)(*plVar15 + 0x80))(plVar15,lVar14);
        lVar6 = (**(code **)(*plVar15 + 0x100))(plVar15,*(undefined4 *)(lVar6 + 0x80));
        if (*(int *)(lVar6 + 0x4c) != 0) {
          lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0xa0) + lVar16;
          fVar22 = -*(float *)(lVar9 + 0x1c);
          fVar21 = fVar37 * fVar22;
          fVar20 = fVar38 * fVar22;
          fVar18 = fVar39 * fVar22;
          fVar22 = fVar24 * fVar22;
          uVar33 = *(undefined8 *)(lVar6 + 0x40);
          auVar30._0_4_ = (int)(short)uVar33 << 0x10;
          auVar30._4_4_ = (int)(short)((ulong)uVar33 >> 0x10) << 0x10;
          auVar30._8_4_ = (int)(short)((ulong)uVar33 >> 0x20) << 0x10;
          auVar30._12_4_ = (float)((int)(short)((ulong)uVar33 >> 0x30) << 0x10);
          auVar25 = NEON_ext(auVar30,auVar30,8,1);
          fVar24 = auVar25._4_4_;
          uVar33 = CONCAT44(fVar24,fVar24);
          uVar29 = NEON_frecpe(uVar33,4);
          uVar34 = NEON_frecps(uVar33,uVar29,4);
          fVar37 = (float)uVar29 * (float)uVar34;
          iVar32 = -(uint)(fVar24 == 0.0);
          uVar33 = NEON_frecps(uVar33,CONCAT44((float)((ulong)uVar29 >> 0x20) *
                                               (float)((ulong)uVar34 >> 0x20),fVar37),4);
          fVar24 = *(float *)(lVar9 + 0x20) *
                   (float)((uint)(fVar37 * (float)uVar33) &
                          CONCAT13(~(byte)((uint)iVar32 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar32 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar32 >> 8),~(byte)iVar32)))) *
                   param_1;
          fVar37 = fVar18 * fVar18 + fVar21 * fVar21 + fVar20 * fVar20;
          fVar38 = fVar18 * fVar18 + fVar21 * fVar21 + fVar20 * fVar20;
          uVar33 = CONCAT44(fVar38,fVar37);
          if (fVar24 * fVar24 < fVar37) {
            uVar29 = NEON_frsqrte(uVar33,4);
            fVar39 = (float)uVar29;
            fVar19 = (float)((ulong)uVar29 >> 0x20);
            uVar29 = NEON_frsqrts(uVar33,CONCAT44(fVar19 * fVar19,fVar39 * fVar39),4);
            fVar39 = fVar39 * (float)uVar29;
            fVar19 = fVar19 * (float)((ulong)uVar29 >> 0x20);
            iVar32 = -(uint)(fVar37 <= 0.0);
            iVar31 = -(uint)(fVar38 <= 0.0);
            uVar33 = NEON_frsqrts(uVar33,CONCAT44(fVar19 * fVar19,fVar39 * fVar39),4);
            fVar39 = (float)uVar33 * fVar39;
            fVar19 = (float)((ulong)uVar33 >> 0x20) * fVar19;
            fVar38 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                     CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                              ~(byte)((uint)iVar32 >> 0x10),
                                              CONCAT11((byte)((uint)fVar39 >> 8) &
                                                       ~(byte)((uint)iVar32 >> 8),
                                                       SUB41(fVar39,0) & ~(byte)iVar32)));
            fVar37 = fVar38 * fVar24;
            fVar24 = (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                                      CONCAT16((byte)((uint)fVar19 >> 0x10) &
                                               ~(byte)((uint)iVar31 >> 0x10),
                                               CONCAT15((byte)((uint)fVar19 >> 8) &
                                                        ~(byte)((uint)iVar31 >> 8),
                                                        CONCAT14(SUB41(fVar19,0) & ~(byte)iVar31,
                                                                 fVar38)))) >> 0x20) * fVar24;
            fVar21 = fVar21 * fVar37;
            fVar20 = fVar20 * fVar24;
            fVar18 = fVar18 * fVar37;
            fVar22 = fVar22 * fVar24;
          }
          uVar17 = (undefined2)((uint)fVar20 >> 0x10);
          if (lVar14 == *(long *)(param_4 + (long)*(char *)(lVar9 + 0x24) * 8)) {
            lVar13 = param_5 + (long)*(char *)(lVar9 + 0x24) * 0x60;
            lVar9 = *(long *)(lVar13 + 0x30);
            *(float *)(lVar9 + 0x18) = fVar18 * auVar30._12_4_ + *(float *)(lVar9 + 0x18);
            *(float *)(lVar9 + 0x1c) = fVar22 * auVar30._12_4_ + *(float *)(lVar9 + 0x1c);
            *(float *)(lVar9 + 0x10) = fVar21 * auVar30._12_4_ + *(float *)(lVar9 + 0x10);
            *(float *)(lVar9 + 0x14) = fVar20 * auVar30._12_4_ + *(float *)(lVar9 + 0x14);
            auVar26._0_4_ = *(float *)(lVar10 + 0x40) - (float)*(double *)(lVar6 + 0x10);
            auVar26._4_4_ = *(float *)(lVar10 + 0x44) - (float)*(double *)(lVar6 + 0x18);
            auVar26._8_4_ = *(float *)(lVar10 + 0x48) - (float)*(double *)(lVar6 + 0x20);
            auVar26._12_4_ = *(float *)(lVar10 + 0x4c) - 0.0;
            auVar1._4_2_ = SUB42(fVar20,0);
            auVar1._0_4_ = fVar21;
            auVar1._6_2_ = uVar17;
            auVar1._8_4_ = fVar18;
            auVar1._12_4_ = fVar22;
            auVar36._4_2_ = SUB42(fVar20,0);
            auVar36._0_4_ = fVar21;
            auVar36._6_2_ = uVar17;
            auVar36._8_4_ = fVar18;
            auVar36._12_4_ = fVar22;
            auVar28 = NEON_ext(auVar1,auVar36,4,1);
            auVar25 = NEON_ext(auVar26,auVar26,4,1);
            fVar22 = auVar28._0_4_ * auVar26._0_4_ - fVar21 * auVar25._0_4_;
            fVar24 = auVar28._4_4_ * auVar26._4_4_ - fVar20 * auVar25._4_4_;
            fVar38 = fVar21 * auVar26._8_4_ - fVar18 * auVar26._0_4_;
            fStack_7c = (float)(CONCAT26((short)((uint)fVar24 >> 0x10),
                                         CONCAT24(SUB42(fVar24,0),fVar22)) >> 0x20);
            pauVar7 = (undefined1 (*) [12])
                      (**(code **)(**(long **)(param_2 + 0x28) + 0x80))
                                (*(long **)(param_2 + 0x28),lVar14);
            uVar23 = (undefined4)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
            auVar25 = *(undefined1 (*) [16])(pauVar7[1] + 4);
            auVar35 = NEON_ext(auVar25,auVar25,8,1);
            auVar28 = *(undefined1 (*) [16])(pauVar7[2] + 8);
            auVar2._12_4_ = uVar23;
            auVar2._0_12_ = *pauVar7;
            auVar3._12_4_ = uVar23;
            auVar3._0_12_ = *pauVar7;
            auVar27 = NEON_ext(auVar2,auVar3,8,1);
            auVar30 = NEON_ext(auVar28,auVar28,8,1);
            uVar33 = *(undefined8 *)(lVar6 + 0x40);
            fVar24 = (auVar27._0_4_ * fVar22 +
                     (float)*(undefined8 *)*pauVar7 * fStack_7c +
                     (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20) * fVar38) *
                     (float)((int)(short)uVar33 << 0x10);
            fVar37 = (auVar35._0_4_ * fVar22 + auVar25._0_4_ * fStack_7c + auVar25._4_4_ * fVar38) *
                     (float)((int)(short)((ulong)uVar33 >> 0x10) << 0x10);
            fVar39 = (auVar30._0_4_ * fVar22 + auVar28._0_4_ * fStack_7c + auVar28._4_4_ * fVar38) *
                     (float)((int)(short)((ulong)uVar33 >> 0x20) << 0x10);
            fStack_7c = (float)(CONCAT26((short)((uint)fVar37 >> 0x10),
                                         CONCAT24(SUB42(fVar37,0),fVar24)) >> 0x20);
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)(param_2 + 0x28) + 0x80))
                               (*(long **)(param_2 + 0x28),lVar14);
            uVar33 = *puVar8;
            fVar37 = *(float *)(puVar8 + 2);
            fVar38 = *(float *)(puVar8 + 4);
            lVar10 = *(long *)(lVar13 + 0x30);
            fVar22 = *(float *)(lVar10 + 0x24) +
                     *(float *)((long)puVar8 + 0x24) * fVar39 +
                     (float)((ulong)uVar33 >> 0x20) * fVar24 +
                     *(float *)((long)puVar8 + 0x14) * fStack_7c;
            *(ulong *)(lVar10 + 0x28) =
                 CONCAT44(*(float *)(lVar10 + 0x2c) +
                          *(float *)((long)puVar8 + 0x2c) * fVar39 +
                          (float)((ulong)puVar8[1] >> 0x20) * fVar24 +
                          *(float *)((long)puVar8 + 0x1c) * fStack_7c,
                          *(float *)(lVar10 + 0x28) +
                          *(float *)(puVar8 + 5) * fVar39 +
                          (float)puVar8[1] * fVar24 + *(float *)(puVar8 + 3) * fStack_7c);
            *(ulong *)(lVar10 + 0x20) =
                 CONCAT26((short)((uint)fVar22 >> 0x10),
                          CONCAT24(SUB42(fVar22,0),
                                   *(float *)(lVar10 + 0x20) +
                                   fVar38 * fVar39 + (float)uVar33 * fVar24 + fVar37 * fStack_7c));
            fVar18 = 0.0;
            fVar22 = 0.0;
            fVar21 = 0.0;
            fVar20 = 0.0;
          }
          goto LAB_0314fdf8;
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xd0;
      lVar16 = lVar16 + 0x28;
    } while (uVar11 < *(byte *)(*(long *)(param_2 + 0x38) + 0x30));
  }
  return;
}


