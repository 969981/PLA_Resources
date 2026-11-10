/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f314c; name: FUN_030f314c
 */


void FUN_030f314c(undefined4 param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [12];
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined8 uVar28;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  float fVar34;
  int iVar35;
  int iVar39;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar17 = (ulong)uVar2;
  uVar3 = *(uint *)(param_4 + 1);
  if (*(uint *)(param_4 + 1) != uVar2) {
    *(uint *)(param_4 + 1) = uVar2;
    uVar3 = uVar2;
  }
  if (0 < (int)uVar2) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      FUN_030f3494(param_1,param_2,*(long *)(param_2 + 0x18) + lVar18,param_3,*param_4 + lVar19);
      lVar13 = *param_4;
      uVar16 = *(undefined8 *)(lVar13 + lVar19);
      fVar20 = (float)uVar16 * (float)*(undefined8 *)(param_2 + 0x130);
      fVar22 = (float)((ulong)uVar16 >> 0x20) *
               (float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
      fVar24 = (float)((undefined8 *)(lVar13 + lVar19))[1] * (float)*(undefined8 *)(param_2 + 0x138)
      ;
      fVar34 = fVar20 + fVar22 + fVar24;
      fVar24 = fVar20 + fVar22 + fVar24;
      uVar9 = CONCAT44(-(uint)(fVar24 < *(float *)(param_2 + 0x118)),
                       -(uint)(fVar34 < *(float *)(param_2 + 0x118))) &
              CONCAT44(-(uint)(0.01 < fVar24),-(uint)(0.01 < fVar34));
      if ((int)uVar9 != 0 || (int)(uVar9 >> 0x20) != 0) {
        fVar20 = *(float *)(*(long *)(param_2 + 0x18) + lVar18 + 0x34);
        iVar39 = (int)param_4[1];
        iVar35 = iVar39 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar39) {
          lVar13 = FUN_030f12fc(PTR_PTR_0434a080,iVar35);
          *param_4 = lVar13;
          iVar39 = (int)param_4[1];
        }
        *(int *)(param_4 + 1) = iVar35;
        puVar1 = (undefined8 *)(lVar13 + lVar19);
        puVar14 = (undefined8 *)(lVar13 + (long)iVar39 * 0x50);
        uVar36 = puVar1[1];
        fVar27 = (float)((ulong)uVar36 >> 0x20);
        uVar28 = *puVar1;
        puVar14[1] = uVar36;
        *puVar14 = uVar28;
        uVar16 = puVar1[2];
        pauVar15 = (undefined1 (*) [16])(puVar14 + 2);
        puVar14[3] = puVar1[3];
        *(undefined8 *)*pauVar15 = uVar16;
        uVar16 = puVar1[4];
        puVar14[5] = puVar1[5];
        puVar14[4] = uVar16;
        uVar4 = *(undefined4 *)(puVar1 + 8);
        puVar14[7] = puVar1[7];
        uVar16 = puVar1[6];
        *(undefined4 *)(puVar14 + 8) = uVar4;
        puVar14[6] = uVar16;
        fVar21 = (float)uVar28 - fVar34 * (float)*(undefined8 *)(param_2 + 0x130);
        fVar23 = (float)((ulong)uVar28 >> 0x20) -
                 fVar24 * (float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
        fVar25 = (float)uVar36 - fVar34 * (float)*(undefined8 *)(param_2 + 0x138);
        fVar26 = fVar21 * fVar21 + fVar23 * fVar23 + fVar25 * fVar25;
        fVar29 = fVar21 * fVar21 + fVar23 * fVar23 + fVar25 * fVar25;
        uVar28 = CONCAT44(fVar29,fVar26);
        uVar16 = NEON_frsqrte(uVar28,4);
        fVar22 = (float)uVar16;
        fVar34 = (float)((ulong)uVar16 >> 0x20);
        uVar16 = NEON_frsqrts(uVar28,CONCAT44(fVar34 * fVar34,fVar22 * fVar22),4);
        fVar22 = fVar22 * (float)uVar16;
        fVar34 = fVar34 * (float)((ulong)uVar16 >> 0x20);
        iVar35 = -(uint)(fVar26 <= 0.0);
        iVar39 = -(uint)(fVar29 <= 0.0);
        uVar16 = NEON_frsqrts(uVar28,CONCAT44(fVar34 * fVar34,fVar22 * fVar22),4);
        fVar22 = (float)uVar16 * fVar22;
        fVar34 = (float)((ulong)uVar16 >> 0x20) * fVar34;
        fVar26 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar35 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar35 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar35)));
        fVar21 = fVar21 * fVar26;
        fVar22 = (float)(CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                  CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                           ~(byte)((uint)iVar39 >> 0x10),
                                           CONCAT15((byte)((uint)fVar34 >> 8) &
                                                    ~(byte)((uint)iVar39 >> 8),
                                                    CONCAT14(SUB41(fVar34,0) & ~(byte)iVar39,fVar26)
                                                   ))) >> 0x20);
        fVar23 = fVar23 * fVar22;
        fVar25 = fVar25 * fVar26;
        fVar22 = (fVar27 - fVar24 * (float)((ulong)*(undefined8 *)(param_2 + 0x138) >> 0x20)) *
                 fVar22;
        puVar14[1] = CONCAT44(fVar22,fVar25);
        *puVar14 = CONCAT44(fVar23,fVar21);
        if (0.0 <= fVar27) {
          uVar28 = ((undefined8 *)(*param_4 + lVar19))[1];
          uVar16 = *(undefined8 *)(*param_4 + lVar19);
          fVar20 = fVar21 * (float)uVar16;
          fVar24 = fVar23 * (float)((ulong)uVar16 >> 0x20);
          uVar30 = (undefined1)((uint)fVar24 >> 8);
          uVar31 = (undefined1)((uint)fVar24 >> 0x10);
          uVar32 = (undefined1)((uint)fVar24 >> 0x18);
          fVar34 = fVar25 * (float)uVar28;
          fVar22 = fVar22 * (float)((ulong)uVar28 >> 0x20);
          auVar38[4] = SUB41(fVar24,0);
          auVar38._0_4_ = fVar20;
          auVar38[5] = uVar30;
          auVar38[6] = uVar31;
          auVar38[7] = uVar32;
          auVar38._8_4_ = fVar34;
          auVar38._12_4_ = fVar22;
          auVar11[4] = SUB41(fVar24,0);
          auVar11._0_4_ = fVar20;
          auVar11[5] = uVar30;
          auVar11[6] = uVar31;
          auVar11[7] = uVar32;
          auVar11._8_4_ = fVar34;
          auVar11._12_4_ = fVar22;
          auVar38 = NEON_ext(auVar38,auVar11,8,1);
          fVar27 = fVar27 * (fVar20 + fVar24 + auVar38._0_4_);
        }
        else {
          pfVar6 = (float *)(*param_4 + lVar19);
          uVar28 = NEON_fmin(CONCAT44(fVar20 + fVar27,fVar20 + fVar27),0,4);
          fVar20 = fVar21 * *pfVar6 + fVar23 * pfVar6[1] + fVar25 * pfVar6[2];
          fVar22 = fVar21 * *pfVar6 + fVar23 * pfVar6[1] + fVar25 * pfVar6[2];
          uVar30 = SUB41(fVar22,0);
          uVar31 = (undefined1)((uint)fVar22 >> 8);
          uVar32 = (undefined1)((uint)fVar22 >> 0x10);
          uVar33 = (undefined1)((uint)fVar22 >> 0x18);
          uVar36 = NEON_frecpe(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,
                                                  fVar20)))),4);
          uVar16 = NEON_frecps(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,
                                                  fVar20)))),uVar36,4);
          fVar22 = (float)uVar36 * (float)uVar16;
          uVar16 = NEON_frecps(CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,
                                                  fVar20)))),
                               CONCAT44((float)((ulong)uVar36 >> 0x20) *
                                        (float)((ulong)uVar16 >> 0x20),fVar22),4);
          puVar14[1] = CONCAT44((float)uVar28 * fVar22 * (float)uVar16,fVar25);
          *puVar14 = CONCAT44(fVar23,fVar21);
          puVar1 = (undefined8 *)(*param_4 + lVar19);
          uVar16 = *puVar1;
          puVar7 = (undefined8 *)(*param_4 + lVar19);
          puVar7[1] = puVar1[1] & 0xffffffff;
          *puVar7 = uVar16;
          uVar16 = puVar14[1];
          fVar25 = (float)uVar16;
          fVar34 = (float)((ulong)uVar16 >> 0x20);
          fVar21 = (float)*puVar14;
          fVar23 = (float)((ulong)*puVar14 >> 0x20);
          fVar20 = *(float *)(param_2 + 0x15c) * fVar34;
          fVar22 = *(float *)(param_2 + 0x15c) * fVar34;
          iVar35 = -(uint)(fVar34 < -1.1920929e-07);
          iVar39 = -(uint)(fVar34 < -1.1920929e-07);
          uVar30 = (undefined1)((uint)iVar39 >> 8);
          uVar31 = (undefined1)((uint)iVar39 >> 0x10);
          uVar32 = (undefined1)((uint)iVar39 >> 0x18);
          auVar37[4] = (char)iVar39;
          auVar37._0_4_ = iVar35;
          auVar37[5] = uVar30;
          auVar37[6] = uVar31;
          auVar37[7] = uVar32;
          auVar37[0xc] = (char)iVar39;
          auVar37._8_4_ = iVar35;
          auVar37[0xd] = uVar30;
          auVar37[0xe] = uVar31;
          auVar37[0xf] = uVar32;
          fVar27 = (float)CONCAT13((byte)((ulong)uVar16 >> 0x38) & ~(byte)((uint)iVar35 >> 0x18),
                                   CONCAT12((byte)((ulong)uVar16 >> 0x30) &
                                            ~(byte)((uint)iVar35 >> 0x10),
                                            CONCAT11((byte)((ulong)uVar16 >> 0x28) &
                                                     ~(byte)((uint)iVar35 >> 8),
                                                     (byte)((ulong)uVar16 >> 0x20) & ~(byte)iVar35))
                                  );
          auVar38 = *pauVar15;
          fVar24 = auVar38._4_4_ - fVar23 * fVar22;
          auVar12[4] = SUB41(fVar24,0);
          auVar12._0_4_ = auVar38._0_4_ - fVar21 * fVar20;
          auVar12[5] = (char)((uint)fVar24 >> 8);
          auVar12[6] = (char)((uint)fVar24 >> 0x10);
          auVar12[7] = (char)((uint)fVar24 >> 0x18);
          auVar12._8_4_ = auVar38._8_4_ - fVar25 * fVar20;
          auVar12._12_4_ =
               auVar38._12_4_ -
               fVar34 * (float)(CONCAT17((char)((uint)fVar22 >> 0x18),
                                         CONCAT16((char)((uint)fVar22 >> 0x10),
                                                  CONCAT15((char)((uint)fVar22 >> 8),
                                                           CONCAT14(SUB41(fVar22,0),fVar20)))) >>
                               0x20);
          auVar38 = auVar38 ^ (auVar38 ^ auVar12) & auVar37;
          puVar14[3] = auVar38._8_8_;
          *(long *)*pauVar15 = auVar38._0_8_;
        }
        puVar14[1] = CONCAT44(fVar27,fVar25);
        *puVar14 = CONCAT44(fVar23,fVar21);
      }
      uVar17 = uVar17 - 1;
      puVar1 = (undefined8 *)(*param_4 + lVar19);
      lVar19 = lVar19 + 0x50;
      lVar18 = lVar18 + 0x40;
      uVar28 = puVar1[1];
      uVar16 = *puVar1;
      pauVar5 = (undefined1 (*) [12])(puVar1 + 2);
      fVar34 = (float)((ulong)puVar1[3] >> 0x20);
      fVar24 = (float)((ulong)uVar28 >> 0x20);
      fVar20 = *(float *)(param_2 + 0x15c) * fVar24;
      fVar22 = *(float *)(param_2 + 0x15c) * fVar24;
      iVar35 = -(uint)(fVar24 < -1.1920929e-07);
      iVar39 = -(uint)(fVar24 < -1.1920929e-07);
      uVar30 = (undefined1)((uint)iVar39 >> 8);
      uVar31 = (undefined1)((uint)iVar39 >> 0x10);
      uVar32 = (undefined1)((uint)iVar39 >> 0x18);
      auVar40[4] = (char)iVar39;
      auVar40._0_4_ = iVar35;
      auVar40[5] = uVar30;
      auVar40[6] = uVar31;
      auVar40[7] = uVar32;
      auVar40[0xc] = (char)iVar39;
      auVar40._8_4_ = iVar35;
      auVar40[0xd] = uVar30;
      auVar40[0xe] = uVar31;
      auVar40[0xf] = uVar32;
      auVar8._4_4_ = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) -
                     (float)((ulong)uVar16 >> 0x20) * fVar22;
      auVar8._0_4_ = (float)*(undefined8 *)*pauVar5 - (float)uVar16 * fVar20;
      auVar8._8_4_ = (float)puVar1[3] - (float)uVar28 * fVar20;
      auVar8._12_4_ = fVar34 - fVar24 * fVar22;
      auVar10._12_4_ = fVar34;
      auVar10._0_12_ = *pauVar5;
      auVar41._12_4_ = fVar34;
      auVar41._0_12_ = *pauVar5;
      auVar41 = auVar41 ^ (auVar10 ^ auVar8) & auVar40;
      puVar1[1] = CONCAT44(CONCAT13((byte)((ulong)uVar28 >> 0x38) & ~(byte)((uint)iVar35 >> 0x18),
                                    CONCAT12((byte)((ulong)uVar28 >> 0x30) &
                                             ~(byte)((uint)iVar35 >> 0x10),
                                             CONCAT11((byte)((ulong)uVar28 >> 0x28) &
                                                      ~(byte)((uint)iVar35 >> 8),
                                                      (byte)((ulong)uVar28 >> 0x20) & ~(byte)iVar35)
                                            )),(float)uVar28);
      *puVar1 = uVar16;
      puVar1[3] = auVar41._8_8_;
      puVar1[2] = auVar41._0_8_;
    } while (uVar17 != 0);
    uVar3 = *(uint *)(param_4 + 1);
  }
  uVar2 = *(uint *)((long)param_4 + 0xc) & 0x3fffffff;
  if (((int)(uVar2 - uVar3) < *(int *)(param_2 + 0x14c)) &&
     (iVar35 = *(int *)(param_2 + 0x14c) + uVar3, (int)uVar2 < iVar35)) {
    lVar19 = FUN_030f12fc(PTR_PTR_0434a080,iVar35,*param_4);
    *param_4 = lVar19;
  }
  return;
}


