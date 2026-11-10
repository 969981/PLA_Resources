/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01827df4; name: FUN_01827df4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01827df4(undefined1 param_1 [16],long param_2,float *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar16;
  undefined1 auVar11 [12];
  undefined8 uVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  int iVar19;
  undefined1 auVar20 [12];
  int iVar28;
  undefined1 auVar21 [16];
  int iVar29;
  int iVar30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar31;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar32;
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined8 uVar63;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  byte local_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte bStack_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  long *local_30;
  undefined8 uStack_28;
  
  uVar17 = param_1._8_8_;
  auVar33._0_8_ = param_1._0_8_;
  if (*(long *)(param_2 + 600) == 0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0182b7ac(&local_30);
    if ((local_30 != (long *)0x0) &&
       (auVar33._8_8_ = uVar17, FUN_01817594(auVar33,local_30,param_3), local_30 != (long *)0x0)) {
      lVar8 = local_30[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  if (1.1920929e-07 <= param_1._0_4_) {
    fVar10 = *param_3;
    fVar16 = param_3[2];
    fVar18 = fVar16 * fVar16 + fVar10 * fVar10;
    fVar9 = fVar18 + 0.0;
    fVar18 = fVar18 + 0.0;
    if (fVar9 != 0.0) {
      auVar21._8_8_ = CONCAT44(fVar18,fVar9);
      auVar21._0_8_ = CONCAT44(fVar18,fVar9);
      auVar33 = NEON_frsqrte(auVar21,4);
      auVar41._0_4_ = auVar33._0_4_ * fVar9;
      auVar41._4_4_ = auVar33._4_4_ * fVar18;
      auVar41._8_4_ = auVar33._8_4_ * fVar9;
      auVar41._12_4_ = auVar33._12_4_ * fVar18;
      auVar42 = NEON_frsqrts(auVar33,auVar41,4);
      auVar34._0_4_ = auVar33._0_4_ * auVar42._0_4_;
      auVar34._4_4_ = auVar33._4_4_ * auVar42._4_4_;
      auVar34._8_4_ = auVar33._8_4_ * auVar42._8_4_;
      auVar34._12_4_ = auVar33._12_4_ * auVar42._12_4_;
      auVar43._0_4_ = fVar9 * auVar34._0_4_;
      auVar43._4_4_ = fVar18 * auVar34._4_4_;
      auVar43._8_4_ = fVar9 * auVar34._8_4_;
      auVar43._12_4_ = fVar18 * auVar34._12_4_;
      iVar19 = -(uint)(fVar9 == 0.0);
      iVar28 = -(uint)(fVar18 == 0.0);
      iVar29 = -(uint)(fVar9 == 0.0);
      iVar30 = -(uint)(fVar18 == 0.0);
      auVar33 = NEON_frsqrts(auVar34,auVar43,4);
      fVar10 = fVar10 * auVar34._0_4_ * auVar33._0_4_;
      fVar9 = auVar34._4_4_ * auVar33._4_4_ * 0.0;
      fVar16 = fVar16 * auVar34._8_4_ * auVar33._8_4_;
      fVar18 = auVar34._12_4_ * auVar33._12_4_ * 0.0;
      fVar10 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                               CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar10 >> 8) &
                                                  ~(byte)((uint)iVar19 >> 8),
                                                  SUB41(fVar10,0) & ~(byte)iVar19)));
      auVar11._0_8_ =
           CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                    CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                             CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                      CONCAT14(SUB41(fVar9,0) & ~(byte)iVar28,fVar10))));
      auVar11[8] = SUB41(fVar16,0) & ~(byte)iVar29;
      auVar11[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar29 >> 8);
      auVar11[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      auVar11[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      auVar42[0xc] = SUB41(fVar18,0) & ~(byte)iVar30;
      auVar42._0_12_ = auVar11;
      auVar42[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar30 >> 8);
      auVar42[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
      auVar42[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
      fStack_48 = auVar11._8_4_;
      fStack_44 = auVar42._12_4_;
      fStack_4c = (float)((ulong)auVar11._0_8_ >> 0x20);
      FUN_009c69bc(&local_40,param_2);
      plVar7 = (long *)CONCAT17(bStack_39,
                                CONCAT16(bStack_3a,
                                         CONCAT15(bStack_3b,
                                                  CONCAT14(bStack_3c,
                                                           CONCAT13(bStack_3d,
                                                                    CONCAT12(bStack_3e,
                                                                             CONCAT11(bStack_3f,
                                                                                      local_40))))))
                               );
      uStack_28 = SUB168(*(undefined1 (*) [16])(plVar7 + 0x18),8);
      local_30 = SUB168(*(undefined1 (*) [16])(plVar7 + 0x18),0);
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar19 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      auVar12._0_4_ = fVar10 * fVar10;
      auVar12._4_4_ = fStack_4c * fStack_4c;
      auVar12._8_4_ = fStack_48 * fStack_48;
      auVar12._12_4_ = fStack_44 * fStack_44;
      auVar33 = NEON_ext(auVar12,auVar12,8,1);
      fVar9 = auVar33._0_4_ + auVar12._0_4_;
      fVar18 = auVar33._4_4_ + auVar12._4_4_;
      fVar16 = fVar9 + fVar18;
      fVar9 = fVar9 + fVar18;
      auVar13._8_8_ = CONCAT44(fVar9,fVar16);
      auVar13._0_8_ = CONCAT44(fVar9,fVar16);
      auVar33 = NEON_frsqrte(auVar13,4);
      auVar35._0_4_ = auVar33._0_4_ * fVar16;
      auVar35._4_4_ = auVar33._4_4_ * fVar9;
      auVar35._8_4_ = auVar33._8_4_ * fVar16;
      auVar35._12_4_ = auVar33._12_4_ * fVar9;
      auVar42 = NEON_frsqrts(auVar33,auVar35,4);
      auVar22._0_4_ = auVar33._0_4_ * auVar42._0_4_;
      auVar22._4_4_ = auVar33._4_4_ * auVar42._4_4_;
      auVar22._8_4_ = auVar33._8_4_ * auVar42._8_4_;
      auVar22._12_4_ = auVar33._12_4_ * auVar42._12_4_;
      auVar36._0_4_ = fVar16 * auVar22._0_4_;
      auVar36._4_4_ = fVar9 * auVar22._4_4_;
      auVar36._8_4_ = fVar16 * auVar22._8_4_;
      auVar36._12_4_ = fVar9 * auVar22._12_4_;
      iVar19 = -(uint)(fVar16 == 0.0);
      iVar28 = -(uint)(fVar9 == 0.0);
      iVar29 = -(uint)(fVar16 == 0.0);
      iVar30 = -(uint)(fVar9 == 0.0);
      auVar33 = NEON_frsqrts(auVar22,auVar36,4);
      fVar10 = fVar10 * auVar22._0_4_ * auVar33._0_4_;
      fStack_4c = fStack_4c * auVar22._4_4_ * auVar33._4_4_;
      fStack_48 = fStack_48 * auVar22._8_4_ * auVar33._8_4_;
      fStack_44 = fStack_44 * auVar22._12_4_ * auVar33._12_4_;
      auVar20._0_8_ =
           CONCAT17((byte)((uint)fStack_4c >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                    CONCAT16((byte)((uint)fStack_4c >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                             CONCAT15((byte)((uint)fStack_4c >> 8) & ~(byte)((uint)iVar28 >> 8),
                                      CONCAT14(SUB41(fStack_4c,0) & ~(byte)iVar28,
                                               CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                                        ~(byte)((uint)iVar19 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                                 ~(byte)((uint)iVar19 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar10 >> 8)
                                                                          & ~(byte)((uint)iVar19 >>
                                                                                   8),
                                                                          SUB41(fVar10,0) &
                                                                          ~(byte)iVar19)))))));
      auVar20[8] = SUB41(fStack_48,0) & ~(byte)iVar29;
      auVar20[9] = (byte)((uint)fStack_48 >> 8) & ~(byte)((uint)iVar29 >> 8);
      auVar20[10] = (byte)((uint)fStack_48 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      auVar20[0xb] = (byte)((uint)fStack_48 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      auVar23[0xc] = SUB41(fStack_44,0) & ~(byte)iVar30;
      auVar23._0_12_ = auVar20;
      auVar23[0xd] = (byte)((uint)fStack_44 >> 8) & ~(byte)((uint)iVar30 >> 8);
      auVar23[0xe] = (byte)((uint)fStack_44 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
      auVar23[0xf] = (byte)((uint)fStack_44 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
      auVar37._8_8_ = DAT_0388a148;
      auVar37._0_8_ = DAT_0388a140;
      uVar40 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a880);
      uVar17 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a6f0);
      uVar57 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
      fVar10 = (float)((ulong)uVar57 >> 0x20);
      uVar62 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6d8);
      uVar5 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a680);
      uVar31 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a6d8);
      uVar63 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6f0);
      uVar32 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
      fVar16 = (float)((ulong)uVar32 >> 0x20);
      fVar39 = (float)uVar40 * (float)uVar57 - (float)uVar5 * (float)uVar32;
      auVar44._0_8_ =
           CONCAT44((float)((ulong)uVar40 >> 0x20) * fVar10 - (float)((ulong)uVar5 >> 0x20) * fVar16
                    ,fVar39);
      auVar44._8_4_ = (float)uVar17 * (float)uVar62 - (float)uVar31 * (float)uVar63;
      auVar44._12_4_ =
           (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar62 >> 0x20) -
           (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar63 >> 0x20);
      uVar17 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a680);
      uVar5 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a6d8);
      uVar40 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a6f0);
      uVar31 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a880);
      fVar52 = (float)uVar32 * (float)uVar17 - (float)uVar57 * (float)uVar31;
      fVar53 = fVar16 * (float)((ulong)uVar17 >> 0x20) - fVar10 * (float)((ulong)uVar31 >> 0x20);
      fVar55 = (float)uVar63 * (float)uVar5 - (float)uVar62 * (float)uVar40;
      fVar10 = auVar20._8_4_;
      auVar33 = NEON_fmov(0x3f800000,4);
      fVar16 = (float)_DAT_03889820 * fVar39 + (float)_DAT_0388a450 * fVar53 +
               (float)_DAT_03889eb0 * fVar10 + auVar33._0_4_;
      fVar9 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar39 +
              (float)((ulong)_DAT_0388a450 >> 0x20) * fVar53 +
              (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar10 + auVar33._4_4_;
      fVar18 = (float)_UNK_03889828 * fVar39 + (float)_UNK_0388a458 * fVar53 +
               (float)_UNK_03889eb8 * fVar10 + auVar33._8_4_;
      fVar39 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar39 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar53 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar10 + auVar33._12_4_;
      fVar10 = (float)((ulong)auVar20._0_8_ >> 0x20);
      uVar17 = NEON_ext(auVar44._0_8_,auVar20._0_8_,4,1);
      fVar53 = (float)((ulong)uVar17 >> 0x20);
      auVar33 = NEON_ext(auVar44,auVar44,8,1);
      auVar45._0_4_ = fVar52 + (float)uVar17;
      auVar45._4_4_ = auVar33._0_4_ + fVar53;
      auVar45._8_4_ = fVar10 + fVar55;
      auVar45._12_4_ = 0;
      auVar49._0_4_ = (float)uVar17 - fVar52;
      auVar49._4_4_ = fVar53 - auVar33._0_4_;
      auVar49._8_4_ = fVar55 - fVar10;
      auVar49._12_4_ = 0;
      uVar32 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a888);
      uVar56 = (undefined4)((ulong)uVar32 >> 0x20);
      uVar17 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a710);
      uVar54 = (undefined4)((ulong)uVar17 >> 0x20);
      auVar14._0_8_ = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a880);
      uVar5 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a758);
      uVar31 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a640);
      auVar24._0_4_ = (undefined4)uVar32;
      auVar24._4_4_ = fVar9;
      auVar24._8_8_ = uVar5;
      uVar5 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a700);
      uVar32 = a64_TBL(ZEXT816(0),auVar45,auVar49,DAT_0388a590);
      auVar50._4_4_ = fVar9;
      auVar50._0_4_ = fVar9;
      auVar50._8_4_ = fVar9;
      auVar50._12_4_ = fVar9;
      auVar14._12_4_ = (undefined4)((ulong)uVar31 >> 0x20);
      auVar14._8_4_ = fVar18;
      auVar61._4_4_ = fVar16;
      auVar61._0_4_ = fVar16;
      auVar61._8_4_ = fVar16;
      auVar61._12_4_ = fVar16;
      auVar58._0_8_ = CONCAT44(-(uint)(fVar16 <= fVar9),-(uint)(fVar16 <= fVar9));
      auVar58._8_4_ = -(uint)(fVar16 <= fVar9);
      auVar58._12_4_ = -(uint)(fVar16 <= fVar9);
      auVar60._8_8_ = auVar58._8_8_;
      auVar60._0_8_ = auVar58._0_8_;
      auVar6._4_4_ = uVar56;
      auVar6._0_4_ = fVar16;
      auVar6._8_4_ = (int)uVar17;
      auVar6._12_4_ = uVar54;
      auVar59._4_4_ = uVar56;
      auVar59._0_4_ = fVar16;
      auVar59._8_4_ = (int)uVar17;
      auVar59._12_4_ = uVar54;
      auVar59 = auVar59 ^ (auVar6 ^ auVar24) & auVar58;
      auVar25._4_4_ = fVar18;
      auVar25._0_4_ = fVar18;
      auVar25._8_4_ = fVar18;
      auVar25._12_4_ = fVar18;
      auVar61 = auVar61 ^ (auVar61 ^ auVar50) & auVar60;
      auVar46._0_8_ = CONCAT44(-(uint)(auVar61._4_4_ <= fVar18),-(uint)(auVar61._0_4_ <= fVar18));
      auVar46._8_4_ = -(uint)(auVar61._8_4_ <= fVar18);
      auVar46._12_4_ = -(uint)(auVar61._12_4_ <= fVar18);
      auVar51._8_8_ = auVar46._8_8_;
      auVar51._0_8_ = auVar46._0_8_;
      auVar59 = auVar59 ^ (auVar59 ^ auVar14) & auVar46;
      auVar61 = auVar61 ^ (auVar61 ^ auVar25) & auVar51;
      auVar15._0_4_ = -(uint)(auVar61._0_4_ <= fVar39);
      auVar15._4_4_ = -(uint)(auVar61._4_4_ <= fVar39);
      auVar15._8_4_ = -(uint)(auVar61._8_4_ <= fVar39);
      auVar15._12_4_ = -(uint)(auVar61._12_4_ <= fVar39);
      auVar4._8_4_ = (int)uVar32;
      auVar4._0_8_ = uVar5;
      auVar4._12_4_ = fVar39;
      auVar59 = auVar59 ^ (auVar59 ^ auVar4) & auVar15;
      fVar9 = auVar59._0_4_;
      auVar26._0_4_ = fVar9 * fVar9;
      fVar18 = auVar59._4_4_;
      auVar26._4_4_ = fVar18 * fVar18;
      fVar39 = auVar59._8_4_;
      auVar26._8_4_ = fVar39 * fVar39;
      fVar52 = auVar59._12_4_;
      auVar26._12_4_ = fVar52 * fVar52;
      auVar33 = NEON_ext(auVar26,auVar26,8,1);
      fVar16 = auVar33._0_4_ + auVar26._0_4_;
      fVar53 = auVar33._4_4_ + auVar26._4_4_;
      fVar10 = fVar16 + fVar53;
      fVar16 = fVar16 + fVar53;
      auVar27._8_8_ = CONCAT44(fVar16,fVar10);
      auVar27._0_8_ = CONCAT44(fVar16,fVar10);
      auVar33 = NEON_frsqrte(auVar27,4);
      auVar47._0_4_ = auVar33._0_4_ * fVar10;
      auVar47._4_4_ = auVar33._4_4_ * fVar16;
      auVar47._8_4_ = auVar33._8_4_ * fVar10;
      auVar47._12_4_ = auVar33._12_4_ * fVar16;
      auVar42 = NEON_frsqrts(auVar33,auVar47,4);
      auVar38._0_4_ = auVar33._0_4_ * auVar42._0_4_;
      auVar38._4_4_ = auVar33._4_4_ * auVar42._4_4_;
      auVar38._8_4_ = auVar33._8_4_ * auVar42._8_4_;
      auVar38._12_4_ = auVar33._12_4_ * auVar42._12_4_;
      auVar48._0_4_ = fVar10 * auVar38._0_4_;
      auVar48._4_4_ = fVar16 * auVar38._4_4_;
      auVar48._8_4_ = fVar10 * auVar38._8_4_;
      auVar48._12_4_ = fVar16 * auVar38._12_4_;
      iVar19 = -(uint)(fVar10 == 0.0);
      iVar28 = -(uint)(fVar16 == 0.0);
      iVar29 = -(uint)(fVar10 == 0.0);
      iVar30 = -(uint)(fVar16 == 0.0);
      auVar33 = NEON_frsqrts(auVar38,auVar48,4);
      fVar9 = auVar38._0_4_ * auVar33._0_4_ * fVar9;
      fVar18 = auVar38._4_4_ * auVar33._4_4_ * fVar18;
      fVar39 = auVar38._8_4_ * auVar33._8_4_ * fVar39;
      fVar52 = auVar38._12_4_ * auVar33._12_4_ * fVar52;
      local_40 = SUB41(fVar9,0) & ~(byte)iVar19;
      bStack_3f = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar19 >> 8);
      bStack_3e = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
      bStack_3d = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
      bStack_3c = SUB41(fVar18,0) & ~(byte)iVar28;
      bStack_3b = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar28 >> 8);
      bStack_3a = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
      bStack_39 = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
      bStack_38 = SUB41(fVar39,0) & ~(byte)iVar29;
      bStack_37 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar29 >> 8);
      bStack_36 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      bStack_35 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      bStack_34 = SUB41(fVar52,0) & ~(byte)iVar30;
      bStack_33 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar30 >> 8);
      bStack_32 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
      bStack_31 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
      auVar33 = FUN_009c6b1c(&local_30,&local_40);
      return auVar33;
    }
  }
  FUN_009c69bc(&local_30,param_2);
  auVar33 = *(undefined1 (*) [16])(local_30 + 0x18);
  if (local_30 != (long *)0x0) {
    lVar8 = local_30[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return auVar33;
}


