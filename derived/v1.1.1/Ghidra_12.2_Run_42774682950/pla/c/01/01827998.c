/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01827998; name: FUN_01827998
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01827998(float param_1,long param_2,float *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  int iVar18;
  undefined1 auVar19 [12];
  int iVar25;
  undefined1 auVar20 [16];
  int iVar26;
  int iVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar31 [12];
  undefined8 uVar30;
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined8 uVar57;
  float fVar62;
  undefined1 auVar58 [16];
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined4 uVar75;
  byte local_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  long *local_18;
  
  if (*(long *)(param_2 + 600) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_0182b7ac(&local_18,*(long *)(param_2 + 600));
    if ((local_18 != (long *)0x0) &&
       (FUN_018172e8(local_18,param_3,param_4), local_18 != (long *)0x0)) {
      lVar16 = local_18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))(local_18);
      }
    }
  }
  if (1.1920929e-07 <= param_1) {
    fVar29 = *param_3;
    fVar37 = param_3[2];
    fVar28 = fVar37 * fVar37 + fVar29 * fVar29;
    fVar17 = fVar28 + 0.0;
    fVar28 = fVar28 + 0.0;
    if (fVar17 != 0.0) {
      auVar20._8_8_ = CONCAT44(fVar28,fVar17);
      auVar20._0_8_ = CONCAT44(fVar28,fVar17);
      auVar20 = NEON_frsqrte(auVar20,4);
      auVar39._0_4_ = auVar20._0_4_ * fVar17;
      auVar39._4_4_ = auVar20._4_4_ * fVar28;
      auVar39._8_4_ = auVar20._8_4_ * fVar17;
      auVar39._12_4_ = auVar20._12_4_ * fVar28;
      auVar39 = NEON_frsqrts(auVar20,auVar39,4);
      auVar49._0_4_ = auVar20._0_4_ * auVar39._0_4_;
      auVar49._4_4_ = auVar20._4_4_ * auVar39._4_4_;
      auVar49._8_4_ = auVar20._8_4_ * auVar39._8_4_;
      auVar49._12_4_ = auVar20._12_4_ * auVar39._12_4_;
      auVar40._0_4_ = fVar17 * auVar49._0_4_;
      auVar40._4_4_ = fVar28 * auVar49._4_4_;
      auVar40._8_4_ = fVar17 * auVar49._8_4_;
      auVar40._12_4_ = fVar28 * auVar49._12_4_;
      auVar20 = NEON_frsqrts(auVar49,auVar40,4);
      iVar18 = -(uint)(fVar17 == 0.0);
      iVar25 = -(uint)(fVar28 == 0.0);
      iVar26 = -(uint)(fVar17 == 0.0);
      iVar27 = -(uint)(fVar28 == 0.0);
      if (*(long *)(param_2 + 600) == 0) {
        local_18 = (long *)0x0;
      }
      else {
        FUN_0182b7ac(&local_18);
        if (local_18 != (long *)0x0) {
          if ((char)local_18[0x3e] != '\0') {
            *(undefined1 *)(local_18 + 0x3e) = 0;
          }
          lVar16 = local_18[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_18 + 0x20))();
          }
        }
      }
      local_60 = (byte)iVar18;
      bStack_5f = (byte)((uint)iVar18 >> 8);
      bStack_5e = (byte)((uint)iVar18 >> 0x10);
      bStack_5d = (byte)((uint)iVar18 >> 0x18);
      bStack_5c = (byte)iVar25;
      bStack_5b = (byte)((uint)iVar25 >> 8);
      bStack_5a = (byte)((uint)iVar25 >> 0x10);
      bStack_59 = (byte)((uint)iVar25 >> 0x18);
      bStack_58 = (byte)iVar26;
      bStack_57 = (byte)((uint)iVar26 >> 8);
      bStack_56 = (byte)((uint)iVar26 >> 0x10);
      bStack_55 = (byte)((uint)iVar26 >> 0x18);
      bStack_54 = (byte)iVar27;
      bStack_53 = (byte)((uint)iVar27 >> 8);
      bStack_52 = (byte)((uint)iVar27 >> 0x10);
      bStack_51 = (byte)((uint)iVar27 >> 0x18);
      fVar29 = fVar29 * auVar49._0_4_ * auVar20._0_4_;
      fVar17 = auVar49._4_4_ * auVar20._4_4_ * 0.0;
      fVar37 = fVar37 * auVar49._8_4_ * auVar20._8_4_;
      fVar28 = auVar49._12_4_ * auVar20._12_4_ * 0.0;
      if (*(char *)(param_2 + 0x1f0) != '\0') {
        *(undefined1 *)(param_2 + 0x1f0) = 0;
      }
      fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~bStack_5d,
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~bStack_5e,
                                        CONCAT11((byte)((uint)fVar29 >> 8) & ~bStack_5f,
                                                 SUB41(fVar29,0) & ~local_60)));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)fVar17 >> 0x18) & ~bStack_59,
                    CONCAT16((byte)((uint)fVar17 >> 0x10) & ~bStack_5a,
                             CONCAT15((byte)((uint)fVar17 >> 8) & ~bStack_5b,
                                      CONCAT14(SUB41(fVar17,0) & ~bStack_5c,fVar29))));
      auVar19[8] = SUB41(fVar37,0) & ~bStack_58;
      auVar19[9] = (byte)((uint)fVar37 >> 8) & ~bStack_57;
      auVar19[10] = (byte)((uint)fVar37 >> 0x10) & ~bStack_56;
      auVar19[0xb] = (byte)((uint)fVar37 >> 0x18) & ~bStack_55;
      auVar21[0xc] = SUB41(fVar28,0) & ~bStack_54;
      auVar21._0_12_ = auVar19;
      auVar21[0xd] = (byte)((uint)fVar28 >> 8) & ~bStack_53;
      auVar21[0xe] = (byte)((uint)fVar28 >> 0x10) & ~bStack_52;
      auVar21[0xf] = (byte)((uint)fVar28 >> 0x18) & ~bStack_51;
      FUN_009c69bc(&local_18,param_2);
      auVar20 = *(undefined1 (*) [16])(local_18 + 0x18);
      *(long *)(param_2 + 0x238) = auVar20._8_8_;
      *(long *)(param_2 + 0x230) = auVar20._0_8_;
      if (local_18 != (long *)0x0) {
        lVar16 = local_18[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar18 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
      uVar30 = DAT_0388a888;
      uVar15 = DAT_0388a880;
      uVar42 = DAT_0388a710;
      fVar62 = auVar19._8_4_;
      fVar63 = auVar21._12_4_;
      fVar61 = (float)((ulong)auVar19._0_8_ >> 0x20);
      auVar32._0_4_ = fVar29 * fVar29;
      auVar32._4_4_ = fVar61 * fVar61;
      auVar32._8_4_ = fVar62 * fVar62;
      auVar32._12_4_ = fVar63 * fVar63;
      auVar20 = NEON_ext(auVar32,auVar32,8,1);
      fVar17 = auVar20._0_4_ + auVar32._0_4_;
      fVar28 = auVar20._4_4_ + auVar32._4_4_;
      fVar37 = fVar17 + fVar28;
      fVar17 = fVar17 + fVar28;
      auVar33._8_8_ = CONCAT44(fVar17,fVar37);
      auVar33._0_8_ = CONCAT44(fVar17,fVar37);
      auVar20 = NEON_frsqrte(auVar33,4);
      auVar48._0_4_ = auVar20._0_4_ * fVar37;
      auVar48._4_4_ = auVar20._4_4_ * fVar17;
      auVar48._8_4_ = auVar20._8_4_ * fVar37;
      auVar48._12_4_ = auVar20._12_4_ * fVar17;
      auVar49 = NEON_frsqrts(auVar20,auVar48,4);
      auVar54._8_8_ = DAT_0388a148;
      auVar54._0_8_ = DAT_0388a140;
      auVar58._0_4_ = auVar20._0_4_ * auVar49._0_4_;
      auVar58._4_4_ = auVar20._4_4_ * auVar49._4_4_;
      auVar58._8_4_ = auVar20._8_4_ * auVar49._8_4_;
      auVar58._12_4_ = auVar20._12_4_ * auVar49._12_4_;
      auVar50._0_4_ = fVar37 * auVar58._0_4_;
      auVar50._4_4_ = fVar17 * auVar58._4_4_;
      auVar50._8_4_ = fVar37 * auVar58._8_4_;
      auVar50._12_4_ = fVar17 * auVar58._12_4_;
      iVar18 = -(uint)(fVar37 == 0.0);
      iVar25 = -(uint)(fVar17 == 0.0);
      iVar26 = -(uint)(fVar37 == 0.0);
      iVar27 = -(uint)(fVar17 == 0.0);
      auVar20 = NEON_frsqrts(auVar58,auVar50,4);
      fVar29 = fVar29 * auVar58._0_4_ * auVar20._0_4_;
      fVar61 = fVar61 * auVar58._4_4_ * auVar20._4_4_;
      fVar62 = fVar62 * auVar58._8_4_ * auVar20._8_4_;
      fVar63 = fVar63 * auVar58._12_4_ * auVar20._12_4_;
      auVar31._0_8_ =
           CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                    CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                             CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                      CONCAT14(SUB41(fVar61,0) & ~(byte)iVar25,
                                               CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                        ~(byte)((uint)iVar18 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                                 ~(byte)((uint)iVar18 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar29 >> 8)
                                                                          & ~(byte)((uint)iVar18 >>
                                                                                   8),
                                                                          SUB41(fVar29,0) &
                                                                          ~(byte)iVar18)))))));
      auVar31[8] = SUB41(fVar62,0) & ~(byte)iVar26;
      auVar31[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar26 >> 8);
      auVar31[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
      auVar31[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
      auVar34[0xc] = SUB41(fVar63,0) & ~(byte)iVar27;
      auVar34._0_12_ = auVar31;
      auVar34[0xd] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar34[0xe] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar34[0xf] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      uVar65 = a64_TBL(ZEXT816(0),auVar54,DAT_0388a880);
      uVar69 = a64_TBL(ZEXT816(0),auVar54,DAT_0388a6f0);
      uVar38 = a64_TBL(ZEXT816(0),auVar54,DAT_0388a680);
      uVar53 = a64_TBL(ZEXT816(0),auVar54,DAT_0388a6d8);
      uVar57 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
      uVar64 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6d8);
      fVar29 = (float)((ulong)uVar57 >> 0x20);
      uVar70 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a880);
      uVar47 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6f0);
      fVar37 = (float)((ulong)uVar70 >> 0x20);
      fVar52 = (float)uVar65 * (float)uVar57 - (float)uVar38 * (float)uVar70;
      auVar55._0_8_ =
           CONCAT44((float)((ulong)uVar65 >> 0x20) * fVar29 -
                    (float)((ulong)uVar38 >> 0x20) * fVar37,fVar52);
      auVar55._8_4_ = (float)uVar69 * (float)uVar64 - (float)uVar53 * (float)uVar47;
      auVar55._12_4_ =
           (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar64 >> 0x20) -
           (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
      uVar65 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a880);
      uVar53 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a680);
      uVar69 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6d8);
      uVar38 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6f0);
      fVar62 = (float)uVar70 * (float)uVar53 - (float)uVar57 * (float)uVar65;
      fVar63 = fVar37 * (float)((ulong)uVar53 >> 0x20) - fVar29 * (float)((ulong)uVar65 >> 0x20);
      fVar46 = (float)uVar47 * (float)uVar69 - (float)uVar64 * (float)uVar38;
      fVar29 = (float)((ulong)auVar31._0_8_ >> 0x20);
      auVar49 = NEON_ext(auVar55,auVar55,8,1);
      uVar53 = NEON_ext(auVar55._0_8_,auVar31._0_8_,4,1);
      fVar37 = auVar31._8_4_;
      auVar20 = NEON_fmov(0x3f800000,4);
      fVar17 = (float)_DAT_03889820 * fVar52 + (float)_DAT_0388a450 * fVar63 +
               (float)_DAT_03889eb0 * fVar37 + auVar20._0_4_;
      fVar28 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar52 +
               (float)((ulong)_DAT_0388a450 >> 0x20) * fVar63 +
               (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar37 + auVar20._4_4_;
      fVar61 = (float)_UNK_03889828 * fVar52 + (float)_UNK_0388a458 * fVar63 +
               (float)_UNK_03889eb8 * fVar37 + auVar20._8_4_;
      fVar37 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar52 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar63 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar37 + auVar20._12_4_;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      uVar38 = DAT_0388a700;
      uVar47 = DAT_0388a640;
      uVar65 = DAT_0388a590;
      fVar52 = fVar62 + (float)uVar53;
      fVar63 = (float)((ulong)uVar53 >> 0x20);
      fVar67 = auVar49._0_4_ + fVar63;
      fVar68 = fVar29 + fVar46;
      auVar71._0_4_ = (float)uVar53 - fVar62;
      auVar71._4_4_ = fVar63 - auVar49._0_4_;
      auVar71._8_4_ = fVar46 - fVar29;
      auVar71._12_4_ = 0;
      auVar5._4_4_ = fVar67;
      auVar5._0_4_ = fVar52;
      auVar5._8_4_ = fVar68;
      auVar5._12_4_ = 0;
      uVar30 = a64_TBL(ZEXT816(0),auVar5,auVar71,uVar30);
      auVar6._4_4_ = fVar67;
      auVar6._0_4_ = fVar52;
      auVar6._8_4_ = fVar68;
      auVar6._12_4_ = 0;
      uVar53 = a64_TBL(ZEXT816(0),auVar6,auVar71,uVar42);
      auVar7._4_4_ = fVar67;
      auVar7._0_4_ = fVar52;
      auVar7._8_4_ = fVar68;
      auVar7._12_4_ = 0;
      uVar42 = a64_TBL(ZEXT816(0),auVar7,auVar71,DAT_0388a758);
      *(undefined4 *)(param_2 + 0x220) = param_4;
      auVar8._4_4_ = fVar67;
      auVar8._0_4_ = fVar52;
      auVar8._8_4_ = fVar68;
      auVar8._12_4_ = 0;
      auVar22._0_8_ = a64_TBL(ZEXT816(0),auVar8,auVar71,uVar15);
      uVar74 = (undefined4)((ulong)uVar30 >> 0x20);
      auVar9._4_4_ = fVar67;
      auVar9._0_4_ = fVar52;
      auVar9._8_4_ = fVar68;
      auVar9._12_4_ = 0;
      uVar47 = a64_TBL(ZEXT816(0),auVar9,auVar71,uVar47);
      auVar10._4_4_ = fVar67;
      auVar10._0_4_ = fVar52;
      auVar10._8_4_ = fVar68;
      auVar10._12_4_ = 0;
      auVar59._0_8_ = a64_TBL(ZEXT816(0),auVar10,auVar71,uVar38);
      auVar11._4_4_ = fVar67;
      auVar11._0_4_ = fVar52;
      auVar11._8_4_ = fVar68;
      auVar11._12_4_ = 0;
      uVar65 = a64_TBL(ZEXT816(0),auVar11,auVar71,uVar65);
      auVar72._0_4_ = -(uint)(fVar17 <= fVar28);
      auVar72._4_4_ = -(uint)(fVar17 <= fVar28);
      auVar72._8_4_ = -(uint)(fVar17 <= fVar28);
      auVar72._12_4_ = -(uint)(fVar17 <= fVar28);
      uVar75 = (undefined4)((ulong)uVar53 >> 0x20);
      auVar51._4_4_ = fVar61;
      auVar51._0_4_ = fVar61;
      auVar51._8_4_ = fVar61;
      auVar51._12_4_ = fVar61;
      auVar59._8_8_ = uVar65;
      auVar12._4_4_ = fVar28;
      auVar12._0_4_ = fVar28;
      auVar12._8_4_ = fVar28;
      auVar12._12_4_ = fVar28;
      auVar13._4_4_ = fVar17;
      auVar13._0_4_ = fVar17;
      auVar13._8_4_ = fVar17;
      auVar13._12_4_ = fVar17;
      auVar43._4_4_ = fVar17;
      auVar43._0_4_ = fVar17;
      auVar43._8_4_ = fVar17;
      auVar43._12_4_ = fVar17;
      auVar43 = auVar43 ^ (auVar13 ^ auVar12) & auVar72;
      auVar35._0_4_ = (undefined4)uVar30;
      auVar35._4_4_ = fVar28;
      auVar35._8_8_ = uVar42;
      auVar22._12_4_ = (undefined4)((ulong)uVar47 >> 0x20);
      auVar22._8_4_ = fVar61;
      auVar56._0_8_ = CONCAT44(-(uint)(auVar43._4_4_ <= fVar61),-(uint)(auVar43._0_4_ <= fVar61));
      auVar56._8_4_ = -(uint)(auVar43._8_4_ <= fVar61);
      auVar56._12_4_ = -(uint)(auVar43._12_4_ <= fVar61);
      auVar66._8_8_ = auVar56._8_8_;
      auVar66._0_8_ = auVar56._0_8_;
      auVar60._0_12_ = auVar59._0_12_;
      auVar60._12_4_ = fVar37;
      auVar43 = auVar43 ^ (auVar43 ^ auVar51) & auVar66;
      auVar14._4_4_ = uVar74;
      auVar14._0_4_ = fVar17;
      auVar14._8_4_ = (int)uVar53;
      auVar14._12_4_ = uVar75;
      auVar73._4_4_ = uVar74;
      auVar73._0_4_ = fVar17;
      auVar73._8_4_ = (int)uVar53;
      auVar73._12_4_ = uVar75;
      auVar73 = auVar73 ^ (auVar14 ^ auVar35) & auVar72;
      auVar36._0_4_ = -(uint)(auVar43._0_4_ <= fVar37);
      auVar36._4_4_ = -(uint)(auVar43._4_4_ <= fVar37);
      auVar36._8_4_ = -(uint)(auVar43._8_4_ <= fVar37);
      auVar36._12_4_ = -(uint)(auVar43._12_4_ <= fVar37);
      auVar73 = auVar73 ^ (auVar73 ^ auVar22) & auVar56;
      auVar73 = auVar73 ^ (auVar73 ^ auVar60) & auVar36;
      fVar28 = auVar73._0_4_;
      auVar23._0_4_ = fVar28 * fVar28;
      fVar61 = auVar73._4_4_;
      auVar23._4_4_ = fVar61 * fVar61;
      fVar62 = auVar73._8_4_;
      auVar23._8_4_ = fVar62 * fVar62;
      fVar63 = auVar73._12_4_;
      auVar23._12_4_ = fVar63 * fVar63;
      auVar20 = NEON_ext(auVar23,auVar23,8,1);
      fVar37 = auVar20._0_4_ + auVar23._0_4_;
      fVar17 = auVar20._4_4_ + auVar23._4_4_;
      fVar29 = fVar37 + fVar17;
      fVar37 = fVar37 + fVar17;
      auVar24._8_8_ = CONCAT44(fVar37,fVar29);
      auVar24._0_8_ = CONCAT44(fVar37,fVar29);
      auVar20 = NEON_frsqrte(auVar24,4);
      auVar44._0_4_ = auVar20._0_4_ * fVar29;
      auVar44._4_4_ = auVar20._4_4_ * fVar37;
      auVar44._8_4_ = auVar20._8_4_ * fVar29;
      auVar44._12_4_ = auVar20._12_4_ * fVar37;
      auVar49 = NEON_frsqrts(auVar20,auVar44,4);
      auVar41._0_4_ = auVar20._0_4_ * auVar49._0_4_;
      auVar41._4_4_ = auVar20._4_4_ * auVar49._4_4_;
      auVar41._8_4_ = auVar20._8_4_ * auVar49._8_4_;
      auVar41._12_4_ = auVar20._12_4_ * auVar49._12_4_;
      auVar45._0_4_ = fVar29 * auVar41._0_4_;
      auVar45._4_4_ = fVar37 * auVar41._4_4_;
      auVar45._8_4_ = fVar29 * auVar41._8_4_;
      auVar45._12_4_ = fVar37 * auVar41._12_4_;
      iVar18 = -(uint)(fVar29 == 0.0);
      iVar25 = -(uint)(fVar37 == 0.0);
      iVar26 = -(uint)(fVar29 == 0.0);
      iVar27 = -(uint)(fVar37 == 0.0);
      auVar20 = NEON_frsqrts(auVar41,auVar45,4);
      fVar28 = auVar41._0_4_ * auVar20._0_4_ * fVar28;
      fVar61 = auVar41._4_4_ * auVar20._4_4_ * fVar61;
      fVar62 = auVar41._8_4_ * auVar20._8_4_ * fVar62;
      fVar63 = auVar41._12_4_ * auVar20._12_4_ * fVar63;
      *(byte *)(param_2 + 0x248) = SUB41(fVar62,0) & ~(byte)iVar26;
      *(byte *)(param_2 + 0x249) = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar26 >> 8);
      *(byte *)(param_2 + 0x24a) = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
      *(byte *)(param_2 + 0x24b) = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
      *(byte *)(param_2 + 0x24c) = SUB41(fVar63,0) & ~(byte)iVar27;
      *(byte *)(param_2 + 0x24d) = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar27 >> 8);
      *(byte *)(param_2 + 0x24e) = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      *(byte *)(param_2 + 0x24f) = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      *(byte *)(param_2 + 0x240) = SUB41(fVar28,0) & ~(byte)iVar18;
      *(byte *)(param_2 + 0x241) = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar18 >> 8);
      *(byte *)(param_2 + 0x242) = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
      *(byte *)(param_2 + 0x243) = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
      *(byte *)(param_2 + 0x244) = SUB41(fVar61,0) & ~(byte)iVar25;
      *(byte *)(param_2 + 0x245) = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar25 >> 8);
      *(byte *)(param_2 + 0x246) = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
      *(byte *)(param_2 + 0x247) = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
      *(float *)(param_2 + 0x218) = param_1;
    }
  }
  return;
}


