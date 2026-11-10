/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316e900; name: FUN_0316e900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0316e900(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined1 (*param_5) [16],long *param_6,float *param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar23;
  undefined8 uVar22;
  undefined1 auVar24 [16];
  int iVar25;
  float fVar26;
  float fVar27;
  int iVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  lVar4 = nn::os::GetSystemTick();
  uVar9 = *(uint *)(param_6 + 1);
  if (uVar9 == 0) {
    *param_7 = 0.5;
    uVar17 = 1;
    goto LAB_0316ee20;
  }
  uVar35 = *param_3;
  iVar25 = uVar9 * 2 + 2;
  uVar36 = *param_4;
  iVar1 = iVar25 * 4;
  uVar58 = param_2[1];
  uVar17 = *param_2;
  fVar27 = (float)param_1[1];
  fVar32 = (float)((ulong)param_1[1] >> 0x20);
  fVar33 = (float)*param_1;
  fVar34 = (float)((ulong)*param_1 >> 0x20);
  lVar6 = tpidr_el0;
  auVar19 = *param_5;
  if (iVar25 == 0) {
    pfVar5 = (float *)0x0;
    if (0 < (int)uVar9) goto LAB_0316e9d0;
LAB_0316edc4:
    *param_7 = 0.0;
LAB_0316edc8:
    uVar17 = 1;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar8;
    }
    lVar8 = *(long *)(lVar8 + 8);
    uVar7 = (ulong)(int)(iVar1 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar8 + 0x10) < uVar7) {
LAB_0316eac4:
      pfVar5 = (float *)FUN_032ce670();
    }
    else {
      pfVar5 = *(float **)(lVar8 + 0x18);
      uVar7 = (long)pfVar5 + uVar7;
      if (*(ulong *)(lVar8 + 0x20) < uVar7) goto LAB_0316eac4;
      *(ulong *)(lVar8 + 0x18) = uVar7;
    }
    uVar9 = *(uint *)(param_6 + 1);
    if ((int)uVar9 < 1) goto LAB_0316edc4;
LAB_0316e9d0:
    puVar2 = PTR_DAT_043723a0;
    fVar13 = (float)uVar17 - fVar33;
    fVar14 = (float)((ulong)uVar17 >> 0x20) - fVar34;
    fVar15 = (float)uVar58 - fVar27;
    fVar21 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
    fVar23 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
    uVar22 = CONCAT44(fVar23,fVar21);
    uVar17 = NEON_frsqrte(uVar22,4);
    fVar16 = (float)uVar17;
    fVar20 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(uVar22,CONCAT44(fVar20 * fVar20,fVar16 * fVar16),4);
    fVar16 = fVar16 * (float)uVar17;
    fVar20 = fVar20 * (float)((ulong)uVar17 >> 0x20);
    uVar17 = NEON_frsqrts(uVar22,CONCAT44(fVar20 * fVar20,fVar16 * fVar16),4);
    iVar25 = -(uint)(fVar21 <= 0.0);
    iVar30 = -(uint)(fVar23 <= 0.0);
    fVar16 = (float)uVar17 * fVar16;
    fVar20 = (float)((ulong)uVar17 >> 0x20) * fVar20;
    fVar26 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar25 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar25)));
    fVar21 = fVar21 * fVar26;
    fVar16 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                              CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                       CONCAT15((byte)((uint)fVar20 >> 8) &
                                                ~(byte)((uint)iVar30 >> 8),
                                                CONCAT14(SUB41(fVar20,0) & ~(byte)iVar30,fVar26))))
                    >> 0x20);
    uVar22 = CONCAT44(fVar23 * fVar16,fVar21);
    fVar13 = fVar13 * fVar26;
    fVar14 = fVar14 * fVar16;
    fVar15 = fVar15 * fVar26;
    fVar16 = ((float)((ulong)uVar58 >> 0x20) - fVar32) * fVar16;
    auVar18 = NEON_ext(auVar19,auVar19,8,1);
    uVar17 = NEON_ext(auVar19._0_8_,auVar18._0_8_,4,1);
    auVar18._4_4_ = fVar14;
    auVar18._0_4_ = fVar13;
    auVar18._8_4_ = fVar15;
    auVar18._12_4_ = fVar16;
    auVar38._4_4_ = fVar14;
    auVar38._0_4_ = fVar13;
    auVar38._8_4_ = fVar15;
    auVar38._12_4_ = fVar16;
    auVar18 = NEON_ext(auVar18,auVar38,4,1);
    auVar24._8_8_ = _UNK_03889298;
    auVar24._0_8_ = _DAT_03889290;
    lVar8 = 0;
    fVar26 = auVar19._0_4_ * auVar18._0_4_ - (float)uVar17 * fVar13;
    fVar31 = auVar19._4_4_ * auVar18._4_4_ - (float)((ulong)uVar17 >> 0x20) * fVar14;
    auVar28._0_8_ = CONCAT44(fVar31,fVar26);
    auVar28._8_4_ = auVar19._8_4_ * fVar13 - auVar19._0_4_ * fVar15;
    auVar28._12_4_ = auVar19._12_4_ * fVar14 - auVar19._4_4_ * fVar16;
    auVar19 = NEON_ext(auVar28,auVar28,4,1);
    auVar48._0_8_ = auVar19._0_8_;
    auVar48._8_8_ = auVar28._0_8_;
    iVar25 = 0;
    fVar20 = auVar19._0_4_;
    auVar29._0_4_ = fVar33 * fVar20;
    fVar23 = auVar19._4_4_;
    auVar29._4_4_ = fVar34 * fVar23;
    auVar29._8_4_ = fVar27 * fVar26;
    auVar29._12_4_ = fVar32 * fVar31;
    auVar19 = NEON_ext(auVar29,auVar29,8,1);
    fVar33 = fVar33 * fVar13;
    fVar34 = fVar34 * fVar14;
    auVar39._4_4_ = fVar34;
    auVar39._0_4_ = fVar33;
    auVar39._8_4_ = fVar27 * fVar15;
    auVar39._12_4_ = fVar32 * fVar16;
    auVar44._4_4_ = fVar34;
    auVar44._0_4_ = fVar33;
    auVar44._8_4_ = fVar27 * fVar15;
    auVar44._12_4_ = fVar32 * fVar16;
    auVar18 = NEON_ext(auVar39,auVar44,8,1);
    fVar27 = -(auVar29._0_4_ + auVar29._4_4_ + auVar19._0_4_);
    uVar12 = 0;
    auVar51._0_12_ = auVar48._0_12_;
    auVar51._12_4_ = fVar27;
    fVar33 = -(fVar33 + fVar34 + auVar18._0_4_);
    fVar34 = (float)uVar35 - (float)uVar36;
    fVar32 = (float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar36 >> 0x20);
    auVar19._4_4_ = fVar14;
    auVar19._0_4_ = fVar13;
    auVar19._8_4_ = fVar15;
    auVar19._12_4_ = fVar33;
    auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar24);
    auVar18 = a64_TBL(ZEXT816(0),auVar51,auVar24);
    uVar7 = (ulong)uVar9;
    bVar10 = true;
    do {
      pfVar11 = (float *)(*param_6 + lVar8);
      auVar50._0_4_ = fVar13 * pfVar11[4];
      auVar50._4_4_ = fVar14 * pfVar11[5];
      auVar50._8_4_ = fVar15 * pfVar11[6];
      auVar50._12_4_ = fVar33 * pfVar11[7];
      auVar47._0_4_ = fVar13 * *pfVar11;
      auVar47._4_4_ = fVar14 * pfVar11[1];
      auVar47._8_4_ = fVar15 * pfVar11[2];
      auVar47._12_4_ = fVar33 * pfVar11[3];
      auVar37._0_4_ = fVar20 * *pfVar11;
      auVar37._4_4_ = fVar23 * pfVar11[1];
      auVar37._8_4_ = fVar26 * pfVar11[2];
      auVar37._12_4_ = fVar27 * pfVar11[3];
      auVar43._0_4_ = fVar20 * pfVar11[4];
      auVar43._4_4_ = fVar23 * pfVar11[5];
      auVar43._8_4_ = fVar26 * pfVar11[6];
      auVar43._12_4_ = fVar27 * pfVar11[7];
      auVar48 = NEON_ext(auVar47,auVar47,8,1);
      auVar51 = NEON_ext(auVar50,auVar50,8,1);
      auVar38 = NEON_ext(auVar37,auVar37,8,1);
      auVar44 = NEON_ext(auVar43,auVar43,8,1);
      auVar39 = auVar18 ^ (auVar18 ^ auVar19) & *(undefined1 (*) [16])(puVar2 + 0x30);
      fVar31 = auVar48._0_4_ + auVar47._0_4_ + auVar47._4_4_ + auVar39._0_4_;
      fVar40 = auVar51._0_4_ + auVar50._0_4_ + auVar50._4_4_ + auVar39._4_4_;
      fVar16 = auVar38._0_4_ + auVar37._0_4_ + auVar37._4_4_ + auVar39._8_4_;
      fVar41 = auVar44._0_4_ + auVar43._0_4_ + auVar43._4_4_ + auVar39._12_4_;
      uVar58 = CONCAT44(fVar31,fVar31);
      uVar17 = CONCAT44(fVar40,fVar40);
      uVar35 = NEON_fmin(uVar58,uVar17,4);
      uVar36 = NEON_fmax(uVar58,uVar17,4);
      bVar3 = true;
      if ((float)uVar35 <= fVar34 + fVar21) {
        bVar3 = false;
        if (!NAN((float)uVar36) && !NAN(-fVar34)) {
          bVar3 = (float)uVar36 < -fVar34;
        }
      }
      if (!bVar3) {
        if (fVar16 <= fVar41) {
          uVar35 = uVar58;
          fVar31 = fVar41;
        }
        else {
          uVar35 = uVar17;
          uVar17 = uVar58;
          fVar31 = fVar16;
          fVar16 = fVar41;
        }
        if ((0.0 <= fVar34 + fVar31) && (fVar16 - fVar34 <= 0.0)) {
          fVar40 = (float)uVar17;
          fVar42 = (float)uVar35;
          fVar53 = fVar40 - fVar42;
          fVar41 = (float)((ulong)uVar17 >> 0x20);
          fVar45 = (float)((ulong)uVar35 >> 0x20);
          fVar54 = fVar41 - fVar45;
          fVar55 = fVar31 - fVar16;
          fVar56 = fVar31 - fVar16;
          fVar46 = fVar55 * fVar55 + fVar53 * fVar53;
          fVar49 = fVar56 * fVar56 + fVar54 * fVar54;
          uVar17 = CONCAT44(fVar49,fVar46);
          uVar58 = NEON_frsqrte(uVar17,4);
          fVar57 = (float)uVar58;
          fVar59 = (float)((ulong)uVar58 >> 0x20);
          uVar58 = NEON_frsqrts(uVar17,CONCAT44(fVar59 * fVar59,fVar57 * fVar57),4);
          fVar57 = fVar57 * (float)uVar58;
          fVar59 = fVar59 * (float)((ulong)uVar58 >> 0x20);
          iVar30 = -(uint)(fVar46 <= 0.0);
          iVar52 = -(uint)(fVar49 <= 0.0);
          uVar17 = NEON_frsqrts(uVar17,CONCAT44(fVar59 * fVar59,fVar57 * fVar57),4);
          fVar57 = (float)uVar17 * fVar57;
          fVar59 = (float)((ulong)uVar17 >> 0x20) * fVar59;
          fVar46 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                   CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                            ~(byte)((uint)iVar30 >> 0x10),
                                            CONCAT11((byte)((uint)fVar57 >> 8) &
                                                     ~(byte)((uint)iVar30 >> 8),
                                                     SUB41(fVar57,0) & ~(byte)iVar30)));
          fVar57 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                                    CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                             ~(byte)((uint)iVar52 >> 0x10),
                                             CONCAT15((byte)((uint)fVar59 >> 8) &
                                                      ~(byte)((uint)iVar52 >> 8),
                                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar52,
                                                               fVar46)))) >> 0x20);
          fVar49 = fVar34 * fVar53 * fVar46;
          fVar59 = fVar32 * fVar54 * fVar57;
          fVar46 = fVar34 * fVar55 * fVar46;
          fVar57 = fVar32 * fVar56 * fVar57;
          uVar17 = uVar22;
          if ((fVar16 + fVar49 < 0.0) && (0.0 < fVar31 + fVar49)) {
            uVar17 = CONCAT44(-fVar56,-fVar55);
            uVar58 = NEON_frecpe(uVar17,4);
            uVar35 = NEON_frecps(uVar17,uVar58,4);
            fVar60 = (float)uVar58 * (float)uVar35;
            fVar61 = (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
            uVar17 = NEON_frecps(uVar17,CONCAT44(fVar61,fVar60),4);
            uVar17 = CONCAT44((fVar45 - fVar57) +
                              fVar54 * (fVar16 + fVar59) * fVar61 * (float)((ulong)uVar17 >> 0x20),
                              (fVar42 - fVar46) +
                              fVar53 * (fVar16 + fVar49) * fVar60 * (float)uVar17);
          }
          uVar58 = 0;
          if ((fVar16 - fVar49 < 0.0) && (uVar58 = 0, 0.0 < fVar31 - fVar49)) {
            uVar58 = CONCAT44(-fVar56,-fVar55);
            uVar35 = NEON_frecpe(uVar58,4);
            uVar36 = NEON_frecps(uVar58,uVar35,4);
            fVar55 = (float)uVar35 * (float)uVar36;
            fVar56 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar36 >> 0x20);
            uVar58 = NEON_frecps(uVar58,CONCAT44(fVar56,fVar55),4);
            uVar58 = CONCAT44(fVar45 + fVar57 +
                              fVar54 * (fVar16 - fVar59) * fVar56 * (float)((ulong)uVar58 >> 0x20),
                              fVar42 + fVar46 + fVar53 * (fVar16 - fVar49) * fVar55 * (float)uVar58)
            ;
          }
          fVar46 = fVar34 * fVar34 - fVar16 * fVar16;
          fVar16 = fVar32 * fVar32 - fVar16 * fVar16;
          uVar35 = CONCAT44(fVar16,fVar46);
          if (0.0 < fVar46) {
            uVar36 = NEON_frsqrte(uVar35,4);
            fVar57 = (float)uVar36;
            fVar49 = (float)((ulong)uVar36 >> 0x20);
            uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar49 * fVar49,fVar57 * fVar57),4);
            fVar46 = fVar46 * fVar57 * (float)uVar35;
            fVar16 = fVar16 * fVar49 * (float)((ulong)uVar35 >> 0x20);
            uVar17 = NEON_fmin(uVar17,CONCAT44(fVar45 - fVar16,fVar42 - fVar46),4);
            uVar58 = NEON_fmax(uVar58,CONCAT44(fVar45 + fVar16,fVar42 + fVar46),4);
          }
          fVar16 = fVar34 * fVar34 - fVar31 * fVar31;
          fVar31 = fVar32 * fVar32 - fVar31 * fVar31;
          uVar35 = CONCAT44(fVar31,fVar16);
          if (0.0 < fVar16) {
            uVar36 = NEON_frsqrte(uVar35,4);
            fVar42 = (float)uVar36;
            fVar45 = (float)((ulong)uVar36 >> 0x20);
            uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar45 * fVar45,fVar42 * fVar42),4);
            fVar16 = fVar16 * fVar42 * (float)uVar35;
            fVar31 = fVar31 * fVar45 * (float)((ulong)uVar35 >> 0x20);
            uVar17 = NEON_fmin(uVar17,CONCAT44(fVar41 - fVar31,fVar40 - fVar16),4);
            uVar58 = NEON_fmax(uVar58,CONCAT44(fVar41 + fVar31,fVar40 + fVar16),4);
          }
          fVar16 = (float)uVar17;
          fVar31 = (float)uVar58;
          if (fVar16 < fVar31) {
            if (0.0 <= fVar16) {
              if (fVar16 < fVar21) {
                pfVar5[(int)uVar12] = (float)((uint)fVar16 & 0xfffffffe);
                uVar12 = uVar12 + 1;
              }
            }
            else {
              iVar25 = iVar25 + 1;
            }
            if (fVar31 < 0.0) {
              iVar25 = iVar25 + -1;
            }
            else if (fVar21 <= fVar31) {
              if (fVar16 < fVar21) {
                bVar10 = false;
              }
            }
            else {
              pfVar5[(int)uVar12] = (float)((uint)fVar31 | 1);
              uVar12 = uVar12 + 1;
            }
          }
        }
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar7 != 0);
    if (iVar25 == 0) goto LAB_0316edc4;
    if (bVar10) {
      *param_7 = 1.0;
      goto LAB_0316edc8;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 1) goto LAB_0316ee88;
    }
    else {
      FUN_03174d50(pfVar5,0,uVar12 - 1);
LAB_0316ee88:
      lVar8 = -1;
      pfVar11 = pfVar5;
      do {
        iVar25 = iVar25 + ((uint)*pfVar11 & 1) * -2 + 1;
        if (iVar25 == 0) {
          if (uVar12 + (int)lVar8 == 0) {
            fVar33 = 1.0;
          }
          else {
            fVar33 = pfVar5[(uint)-(int)lVar8];
          }
          *param_7 = ((*pfVar11 + fVar33) * 0.5) / fVar21;
          goto LAB_0316edc8;
        }
        lVar8 = lVar8 + -1;
        pfVar11 = pfVar11 + 1;
      } while ((ulong)uVar12 + lVar8 != -1);
    }
    uVar17 = 0;
  }
  lVar8 = *(long *)(lVar6 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar8;
  }
  lVar6 = *(long *)(lVar8 + 8);
  uVar7 = (ulong)(int)(iVar1 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar6 + 0x10) < uVar7) || (*(long *)(lVar6 + 0x18) != (long)pfVar5 + uVar7)) ||
     (*(float **)(lVar6 + 0x28) == pfVar5)) {
    if (pfVar5 != (float *)0x0) {
      if (*(ulong *)(lVar6 + 0x10) < uVar7) {
        *(int *)(*(long *)(lVar6 + 8) + 0x20) = *(int *)(*(long *)(lVar6 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar6 + 0x40) + 0x18))(*(long **)(lVar6 + 0x40),pfVar5);
      }
      else if (*(long *)(lVar6 + 0x18) == (long)pfVar5 + uVar7) {
        *(float **)(lVar6 + 0x18) = pfVar5;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar6,pfVar5);
      }
    }
  }
  else {
    *(float **)(lVar6 + 0x18) = pfVar5;
  }
LAB_0316ee20:
  lVar6 = nn::os::GetSystemTick();
  *(long *)(param_8 + 8) = (lVar6 - lVar4) + *(long *)(param_8 + 8);
  *(int *)(param_8 + 0x10) = *(int *)(param_8 + 0x10) + 1;
  return uVar17;
}


