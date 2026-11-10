/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2c2a0; name: FUN_01c2c2a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2c2a0(undefined8 *param_1,float param_2,undefined8 param_3,float *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long **pplVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar26;
  int iVar27;
  undefined1 auVar22 [12];
  float extraout_s0;
  float fVar25;
  undefined1 auVar23 [16];
  float extraout_var;
  float extraout_var_00;
  int iVar28;
  float extraout_var_01;
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar44 [12];
  undefined8 uVar43;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [12];
  undefined8 uVar62;
  undefined8 uVar63;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long *local_70;
  undefined8 uStack_68;
  
  auVar23 = FUN_01c2cd40();
  fStack_88 = auVar23._8_4_;
  fStack_84 = auVar23._12_4_;
  local_90 = auVar23._0_4_;
  fStack_8c = auVar23._4_4_;
  FUN_009c69bc(&local_70,param_3);
  (**(code **)(*local_70 + 0x40))();
  if (local_70 != (long *)0x0) {
    lVar9 = local_70[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 1;
  param_1[1] = 0;
  puVar6 = PTR_DAT_04379660;
  local_90 = *param_4 - local_90;
  fStack_8c = param_4[1] - fStack_8c;
  auVar23._0_8_ = CONCAT44(fStack_8c,local_90);
  auVar23._8_4_ = param_4[2] - fStack_88;
  auVar23._12_4_ = param_4[3] - fStack_84;
  auVar46._0_4_ = local_90 * local_90;
  auVar46._4_4_ = fStack_8c * fStack_8c;
  auVar46._8_4_ = auVar23._8_4_ * auVar23._8_4_;
  auVar46._12_4_ = auVar23._12_4_ * auVar23._12_4_;
  auVar31 = NEON_ext(auVar46,auVar46,8,1);
  fVar42 = SQRT(auVar31._0_4_ + auVar46._0_4_ + auVar31._4_4_ + auVar46._4_4_);
  if ((*PTR_DAT_04379660 & 1) == 0) {
    uVar83 = auVar23._8_8_;
    iVar21 = __cxa_guard_acquire(PTR_DAT_04379660);
    auVar23._8_8_ = uVar83;
    if (iVar21 != 0) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  puVar10 = *(undefined1 **)(lVar9 + 0x60);
  fVar96 = 0.0;
  if (puVar10 != (undefined1 *)0x0) {
    uVar12 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar10 + -1) & 0x471b26c9ac42475c);
    }
    else {
      uVar16 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar16 = 0x471b26c9ac42475c / (ulong)puVar10;
      }
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar10 < (undefined1 *)0x471b26c9ac42475d) {
        puVar13 = &DAT_471b26c9ac42475c + -(uVar16 * (long)puVar10);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar14[2] == &DAT_471b26c9ac42475c) goto LAB_01c2c40c;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar14[1];
          if (puVar15 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar14[2] == &DAT_471b26c9ac42475c) goto LAB_01c2c40c;
          }
          else {
            if (puVar10 <= puVar15) {
              uVar12 = 0;
              if (puVar10 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar15 / (ulong)puVar10;
              }
              puVar15 = puVar15 + -(uVar12 * (long)puVar10);
            }
            if (puVar15 != puVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01c2c568:
  *(float *)(param_1 + 1) = fVar42;
  if (fVar42 <= fVar96) {
    *(undefined4 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 4) = 1;
  }
  else if (fVar42 <= param_2) {
    fVar29 = auVar23._0_4_;
    auVar31._0_4_ = fVar29 * fVar29;
    auVar31._4_4_ = 0;
    fVar40 = auVar23._8_4_;
    auVar31._8_4_ = fVar40 * fVar40;
    fVar41 = auVar23._12_4_;
    auVar31._12_4_ = fVar41 * fVar41;
    auVar23 = NEON_ext(auVar31,auVar31,8,1);
    fVar20 = auVar23._0_4_ + auVar31._0_4_;
    fVar25 = auVar23._4_4_ + 0.0;
    fVar19 = fVar20 + fVar25;
    fVar20 = fVar20 + fVar25;
    if (fVar19 != 0.0) {
      auVar65._8_8_ = CONCAT44(fVar20,fVar19);
      auVar65._0_8_ = CONCAT44(fVar20,fVar19);
      auVar23 = NEON_frsqrte(auVar65,4);
      auVar45._0_4_ = auVar23._0_4_ * fVar19;
      auVar45._4_4_ = auVar23._4_4_ * fVar20;
      auVar45._8_4_ = auVar23._8_4_ * fVar19;
      auVar45._12_4_ = auVar23._12_4_ * fVar20;
      auVar46 = NEON_frsqrts(auVar23,auVar45,4);
      auVar32._0_4_ = auVar23._0_4_ * auVar46._0_4_;
      auVar32._4_4_ = auVar23._4_4_ * auVar46._4_4_;
      auVar32._8_4_ = auVar23._8_4_ * auVar46._8_4_;
      auVar32._12_4_ = auVar23._12_4_ * auVar46._12_4_;
      auVar47._0_4_ = fVar19 * auVar32._0_4_;
      auVar47._4_4_ = fVar20 * auVar32._4_4_;
      auVar47._8_4_ = fVar19 * auVar32._8_4_;
      auVar47._12_4_ = fVar20 * auVar32._12_4_;
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      iVar28 = -(uint)(fVar20 == 0.0);
      auVar23 = NEON_frsqrts(auVar32,auVar47,4);
      fVar29 = fVar29 * auVar32._0_4_ * auVar23._0_4_;
      fVar19 = auVar32._4_4_ * auVar23._4_4_ * 0.0;
      fVar40 = fVar40 * auVar32._8_4_ * auVar23._8_4_;
      fVar41 = fVar41 * auVar32._12_4_ * auVar23._12_4_;
      auVar22[0] = SUB41(fVar29,0) & ~(byte)iVar21;
      auVar22[1] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar21 >> 8);
      auVar22[2] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
      auVar22[3] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
      auVar22[4] = SUB41(fVar19,0) & ~(byte)iVar26;
      auVar22[5] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar26 >> 8);
      auVar22[6] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
      auVar22[7] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
      auVar22[8] = SUB41(fVar40,0) & ~(byte)iVar27;
      auVar22[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar22[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar22[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      auVar76[0xc] = SUB41(fVar41,0) & ~(byte)iVar28;
      auVar76._0_12_ = auVar22;
      auVar76[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar28 >> 8);
      auVar76[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
      auVar76[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
      FUN_01009820(auVar76,auVar22._8_4_,auVar23);
      fVar95 = 0.0;
      auVar46 = ZEXT816(0);
      auVar31 = ZEXT816(0);
      auVar23 = FUN_009a7ff4();
      FUN_009c69bc(&local_78,param_3);
      (**(code **)(*(long *)CONCAT44(uStack_74,local_78) + 0x40))();
      auVar53._0_4_ = extraout_s0 * extraout_s0;
      auVar53._4_4_ = extraout_var * extraout_var;
      auVar53._8_4_ = extraout_var_00 * extraout_var_00;
      auVar53._12_4_ = extraout_var_01 * extraout_var_01;
      auVar65 = NEON_ext(auVar53,auVar53,8,1);
      fVar20 = auVar65._0_4_ + auVar53._0_4_;
      fVar25 = auVar65._4_4_ + auVar53._4_4_;
      fVar19 = fVar20 + fVar25;
      fVar20 = fVar20 + fVar25;
      auVar54._8_8_ = CONCAT44(fVar20,fVar19);
      auVar54._0_8_ = CONCAT44(fVar20,fVar19);
      auVar65 = NEON_frsqrte(auVar54,4);
      auVar75._0_4_ = auVar65._0_4_ * fVar19;
      auVar75._4_4_ = auVar65._4_4_ * fVar20;
      auVar75._8_4_ = auVar65._8_4_ * fVar19;
      auVar75._12_4_ = auVar65._12_4_ * fVar20;
      auVar76 = NEON_frsqrts(auVar65,auVar75,4);
      auVar66._0_4_ = auVar65._0_4_ * auVar76._0_4_;
      auVar66._4_4_ = auVar65._4_4_ * auVar76._4_4_;
      auVar66._8_4_ = auVar65._8_4_ * auVar76._8_4_;
      auVar66._12_4_ = auVar65._12_4_ * auVar76._12_4_;
      auVar77._0_4_ = fVar19 * auVar66._0_4_;
      auVar77._4_4_ = fVar20 * auVar66._4_4_;
      auVar77._8_4_ = fVar19 * auVar66._8_4_;
      auVar77._12_4_ = fVar20 * auVar66._12_4_;
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      iVar28 = -(uint)(fVar20 == 0.0);
      auVar65 = NEON_frsqrts(auVar66,auVar77,4);
      fVar19 = extraout_s0 * auVar66._0_4_ * auVar65._0_4_;
      fVar20 = extraout_var * auVar66._4_4_ * auVar65._4_4_;
      fVar29 = extraout_var_00 * auVar66._8_4_ * auVar65._8_4_;
      fVar40 = extraout_var_01 * auVar66._12_4_ * auVar65._12_4_;
      fVar25 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                               CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar19 >> 8) &
                                                  ~(byte)((uint)iVar21 >> 8),
                                                  SUB41(fVar19,0) & ~(byte)iVar21)));
      auVar24._0_8_ =
           CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14(SUB41(fVar20,0) & ~(byte)iVar26,fVar25))));
      auVar24[8] = SUB41(fVar29,0) & ~(byte)iVar27;
      auVar24[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar24[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar24[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      auVar24[0xc] = SUB41(fVar40,0) & ~(byte)iVar28;
      auVar24[0xd] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar28 >> 8);
      auVar24[0xe] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
      auVar24[0xf] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
      fVar29 = auVar46._0_4_;
      auVar67._0_4_ = fVar29 * fVar29;
      fVar40 = auVar46._4_4_;
      auVar67._4_4_ = fVar40 * fVar40;
      fVar41 = auVar46._8_4_;
      auVar67._8_4_ = fVar41 * fVar41;
      auVar67._12_4_ = auVar46._12_4_ * auVar46._12_4_;
      auVar46 = NEON_ext(auVar67,auVar67,8,1);
      fVar20 = auVar46._0_4_ + auVar67._0_4_;
      fVar73 = auVar46._4_4_ + auVar67._4_4_;
      fVar19 = fVar20 + fVar73;
      fVar20 = fVar20 + fVar73;
      auVar68._8_8_ = CONCAT44(fVar20,fVar19);
      auVar68._0_8_ = CONCAT44(fVar20,fVar19);
      auVar46 = NEON_frsqrte(auVar68,4);
      auVar85._0_4_ = auVar46._0_4_ * fVar19;
      auVar85._4_4_ = auVar46._4_4_ * fVar20;
      auVar85._8_4_ = auVar46._8_4_ * fVar19;
      auVar85._12_4_ = auVar46._12_4_ * fVar20;
      auVar65 = NEON_frsqrts(auVar46,auVar85,4);
      auVar78._0_4_ = auVar46._0_4_ * auVar65._0_4_;
      auVar78._4_4_ = auVar46._4_4_ * auVar65._4_4_;
      auVar78._8_4_ = auVar46._8_4_ * auVar65._8_4_;
      auVar78._12_4_ = auVar46._12_4_ * auVar65._12_4_;
      auVar86._0_4_ = fVar19 * auVar78._0_4_;
      auVar86._4_4_ = fVar20 * auVar78._4_4_;
      auVar86._8_4_ = fVar19 * auVar78._8_4_;
      auVar86._12_4_ = fVar20 * auVar78._12_4_;
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      auVar46 = NEON_frsqrts(auVar78,auVar86,4);
      fVar29 = fVar29 * auVar78._0_4_ * auVar46._0_4_;
      fVar40 = fVar40 * auVar78._4_4_ * auVar46._4_4_;
      fVar41 = fVar41 * auVar78._8_4_ * auVar46._8_4_;
      fVar73 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar21 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar21)));
      auVar64._0_8_ =
           CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14(SUB41(fVar40,0) & ~(byte)iVar26,fVar73))));
      auVar64[8] = SUB41(fVar41,0) & ~(byte)iVar27;
      auVar64[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar64[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar64[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      fVar29 = auVar31._0_4_;
      auVar79._0_4_ = fVar29 * fVar29;
      fVar40 = auVar31._4_4_;
      auVar79._4_4_ = fVar40 * fVar40;
      fVar41 = auVar31._8_4_;
      auVar79._8_4_ = fVar41 * fVar41;
      auVar79._12_4_ = auVar31._12_4_ * auVar31._12_4_;
      auVar46 = NEON_ext(auVar79,auVar79,8,1);
      fVar20 = auVar46._0_4_ + auVar79._0_4_;
      fVar82 = auVar46._4_4_ + auVar79._4_4_;
      fVar19 = fVar20 + fVar82;
      fVar20 = fVar20 + fVar82;
      auVar80._8_8_ = CONCAT44(fVar20,fVar19);
      auVar80._0_8_ = CONCAT44(fVar20,fVar19);
      auVar46 = NEON_frsqrte(auVar80,4);
      auVar91._0_4_ = auVar46._0_4_ * fVar19;
      auVar91._4_4_ = auVar46._4_4_ * fVar20;
      auVar91._8_4_ = auVar46._8_4_ * fVar19;
      auVar91._12_4_ = auVar46._12_4_ * fVar20;
      auVar31 = NEON_frsqrts(auVar46,auVar91,4);
      auVar87._0_4_ = auVar46._0_4_ * auVar31._0_4_;
      auVar87._4_4_ = auVar46._4_4_ * auVar31._4_4_;
      auVar87._8_4_ = auVar46._8_4_ * auVar31._8_4_;
      auVar87._12_4_ = auVar46._12_4_ * auVar31._12_4_;
      auVar92._0_4_ = fVar19 * auVar87._0_4_;
      auVar92._4_4_ = fVar20 * auVar87._4_4_;
      auVar92._8_4_ = fVar19 * auVar87._8_4_;
      auVar92._12_4_ = fVar20 * auVar87._12_4_;
      auVar46 = NEON_frsqrts(auVar87,auVar92,4);
      fVar29 = fVar29 * auVar87._0_4_ * auVar46._0_4_;
      fVar40 = fVar40 * auVar87._4_4_ * auVar46._4_4_;
      fVar41 = fVar41 * auVar87._8_4_ * auVar46._8_4_;
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      auVar44._0_8_ =
           CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14(SUB41(fVar40,0) & ~(byte)iVar26,
                                               CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                        ~(byte)((uint)iVar21 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                                 ~(byte)((uint)iVar21 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar29 >> 8)
                                                                          & ~(byte)((uint)iVar21 >>
                                                                                   8),
                                                                          SUB41(fVar29,0) &
                                                                          ~(byte)iVar21)))))));
      auVar44[8] = SUB41(fVar41,0) & ~(byte)iVar27;
      auVar44[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar44[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar44[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      uVar83 = NEON_ext(auVar24._0_8_,auVar44._0_8_,4,1);
      auVar46 = NEON_ext(auVar24,auVar24,8,1);
      fVar41 = (float)((ulong)auVar64._0_8_ >> 0x20);
      fVar40 = auVar44._8_4_;
      auVar31 = NEON_fmov(0x3f800000,4);
      fVar19 = (float)_DAT_03889820 * fVar25 + (float)_DAT_0388a450 * fVar41 +
               (float)_DAT_03889eb0 * fVar40 + auVar31._0_4_;
      fVar20 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar25 +
               (float)((ulong)_DAT_0388a450 >> 0x20) * fVar41 +
               (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar40 + auVar31._4_4_;
      fVar29 = (float)_UNK_03889828 * fVar25 + (float)_UNK_0388a458 * fVar41 +
               (float)_UNK_03889eb8 * fVar40 + auVar31._8_4_;
      fVar25 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar25 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar41 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar40 + auVar31._12_4_;
      fVar40 = (float)((ulong)auVar44._0_8_ >> 0x20);
      auVar48._0_4_ = (float)uVar83 + fVar73;
      fVar41 = (float)((ulong)uVar83 >> 0x20);
      auVar48._4_4_ = fVar41 + auVar46._0_4_;
      auVar48._8_4_ = auVar64._8_4_ + fVar40;
      auVar48._12_4_ = 0;
      auVar55._0_4_ = (float)uVar83 - fVar73;
      auVar55._4_4_ = fVar41 - auVar46._0_4_;
      auVar55._8_4_ = auVar64._8_4_ - fVar40;
      auVar55._12_4_ = 0;
      uVar62 = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a888);
      uVar83 = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a710);
      auVar81._8_8_ = uVar83;
      auVar81._0_8_ = uVar62;
      uVar83 = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a758);
      auVar98._4_12_ = auVar81._4_12_;
      auVar98._0_4_ = fVar19;
      auVar88._0_8_ = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a880);
      uVar89 = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a640);
      auVar69._0_4_ = (undefined4)uVar62;
      auVar69._4_4_ = fVar20;
      auVar69._8_8_ = uVar83;
      auVar93._0_8_ = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a700);
      uVar83 = a64_TBL(ZEXT816(0),auVar48,auVar55,DAT_0388a590);
      auVar56._4_4_ = fVar20;
      auVar56._0_4_ = fVar20;
      auVar56._8_4_ = fVar20;
      auVar56._12_4_ = fVar20;
      auVar88._12_4_ = (undefined4)((ulong)uVar89 >> 0x20);
      auVar88._8_4_ = fVar29;
      auVar93._8_8_ = uVar83;
      auVar100._4_4_ = fVar19;
      auVar100._0_4_ = fVar19;
      auVar100._8_4_ = fVar19;
      auVar100._12_4_ = fVar19;
      auVar97._0_8_ = CONCAT44(-(uint)(fVar19 <= fVar20),-(uint)(fVar19 <= fVar20));
      auVar97._8_4_ = -(uint)(fVar19 <= fVar20);
      auVar97._12_4_ = -(uint)(fVar19 <= fVar20);
      auVar99._8_8_ = auVar97._8_8_;
      auVar99._0_8_ = auVar97._0_8_;
      auVar98 = auVar98 ^ (auVar98 ^ auVar69) & auVar97;
      auVar94._0_12_ = auVar93._0_12_;
      auVar94._12_4_ = fVar25;
      auVar100 = auVar100 ^ (auVar100 ^ auVar56) & auVar99;
      auVar49._4_4_ = fVar29;
      auVar49._0_4_ = fVar29;
      auVar49._8_4_ = fVar29;
      auVar49._12_4_ = fVar29;
      auVar57._0_8_ = CONCAT44(-(uint)(auVar100._4_4_ <= fVar29),-(uint)(auVar100._0_4_ <= fVar29));
      auVar57._8_4_ = -(uint)(auVar100._8_4_ <= fVar29);
      auVar57._12_4_ = -(uint)(auVar100._12_4_ <= fVar29);
      auVar70._8_8_ = auVar57._8_8_;
      auVar70._0_8_ = auVar57._0_8_;
      auVar98 = auVar98 ^ (auVar98 ^ auVar88) & auVar57;
      auVar100 = auVar100 ^ (auVar100 ^ auVar49) & auVar70;
      auVar33._0_4_ = -(uint)(auVar100._0_4_ <= fVar25);
      auVar33._4_4_ = -(uint)(auVar100._4_4_ <= fVar25);
      auVar33._8_4_ = -(uint)(auVar100._8_4_ <= fVar25);
      auVar33._12_4_ = -(uint)(auVar100._12_4_ <= fVar25);
      auVar98 = auVar98 ^ (auVar98 ^ auVar94) & auVar33;
      fVar25 = auVar98._0_4_;
      auVar50._0_4_ = fVar25 * fVar25;
      fVar29 = auVar98._4_4_;
      auVar50._4_4_ = fVar29 * fVar29;
      fVar40 = auVar98._8_4_;
      auVar50._8_4_ = fVar40 * fVar40;
      fVar41 = auVar98._12_4_;
      auVar50._12_4_ = fVar41 * fVar41;
      auVar46 = NEON_ext(auVar50,auVar50,8,1);
      fVar20 = auVar46._0_4_ + auVar50._0_4_;
      fVar73 = auVar46._4_4_ + auVar50._4_4_;
      fVar19 = fVar20 + fVar73;
      fVar20 = fVar20 + fVar73;
      auVar51._8_8_ = CONCAT44(fVar20,fVar19);
      auVar51._0_8_ = CONCAT44(fVar20,fVar19);
      auVar46 = NEON_frsqrte(auVar51,4);
      auVar71._0_4_ = auVar46._0_4_ * fVar19;
      auVar71._4_4_ = auVar46._4_4_ * fVar20;
      auVar71._8_4_ = auVar46._8_4_ * fVar19;
      auVar71._12_4_ = auVar46._12_4_ * fVar20;
      auVar31 = NEON_frsqrts(auVar46,auVar71,4);
      auVar58._0_4_ = auVar46._0_4_ * auVar31._0_4_;
      auVar58._4_4_ = auVar46._4_4_ * auVar31._4_4_;
      auVar58._8_4_ = auVar46._8_4_ * auVar31._8_4_;
      auVar58._12_4_ = auVar46._12_4_ * auVar31._12_4_;
      auVar72._0_4_ = fVar19 * auVar58._0_4_;
      auVar72._4_4_ = fVar20 * auVar58._4_4_;
      auVar72._8_4_ = fVar19 * auVar58._8_4_;
      auVar72._12_4_ = fVar20 * auVar58._12_4_;
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      iVar28 = -(uint)(fVar20 == 0.0);
      auVar46 = NEON_frsqrts(auVar58,auVar72,4);
      fVar25 = auVar58._0_4_ * auVar46._0_4_ * fVar25;
      fVar29 = auVar58._4_4_ * auVar46._4_4_ * fVar29;
      fVar40 = auVar58._8_4_ * auVar46._8_4_ * fVar40;
      fVar41 = auVar58._12_4_ * auVar46._12_4_ * fVar41;
      fVar19 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                               CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar25 >> 8) &
                                                  ~(byte)((uint)iVar21 >> 8),
                                                  SUB41(fVar25,0) & ~(byte)iVar21)));
      auVar30._0_8_ =
           CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14(SUB41(fVar29,0) & ~(byte)iVar26,fVar19))));
      auVar30[8] = SUB41(fVar40,0) & ~(byte)iVar27;
      auVar30[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar27 >> 8);
      auVar30[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      auVar30[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      auVar34[0xc] = SUB41(fVar41,0) & ~(byte)iVar28;
      auVar34._0_12_ = auVar30;
      auVar34[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar28 >> 8);
      auVar34[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
      auVar34[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
      auVar38._0_4_ = fVar19 * (float)_DAT_03889ac0;
      fVar20 = (float)((ulong)auVar30._0_8_ >> 0x20);
      auVar38._4_4_ = fVar20 * (float)((ulong)_DAT_03889ac0 >> 0x20);
      fVar25 = auVar30._8_4_;
      auVar38._8_4_ = fVar25 * (float)_UNK_03889ac8;
      fVar29 = auVar34._12_4_;
      auVar38._12_4_ = fVar29 * (float)((ulong)_UNK_03889ac8 >> 0x20);
      auVar35._0_4_ = fVar19 * fVar19;
      auVar35._4_4_ = fVar20 * fVar20;
      auVar35._8_4_ = fVar25 * fVar25;
      auVar35._12_4_ = fVar29 * fVar29;
      auVar46 = NEON_ext(auVar35,auVar35,8,1);
      fVar20 = auVar46._0_4_ + auVar35._0_4_;
      fVar25 = auVar46._4_4_ + auVar35._4_4_;
      fVar19 = fVar20 + fVar25;
      fVar20 = fVar20 + fVar25;
      auVar36._8_8_ = CONCAT44(fVar20,fVar19);
      auVar36._0_8_ = CONCAT44(fVar20,fVar19);
      auVar46 = NEON_frecpe(auVar36,4);
      auVar31 = NEON_frecps(auVar46,auVar36,4);
      auVar59._0_4_ = auVar46._0_4_ * auVar31._0_4_;
      auVar59._4_4_ = auVar46._4_4_ * auVar31._4_4_;
      auVar59._8_4_ = auVar46._8_4_ * auVar31._8_4_;
      auVar59._12_4_ = auVar46._12_4_ * auVar31._12_4_;
      auVar46 = NEON_frecps(auVar59,auVar36,4);
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar26 = -(uint)(fVar20 == 0.0);
      iVar27 = -(uint)(fVar19 == 0.0);
      iVar28 = -(uint)(fVar20 == 0.0);
      auVar37[0] = ~(byte)iVar21;
      auVar37[1] = ~(byte)((uint)iVar21 >> 8);
      auVar37[2] = ~(byte)((uint)iVar21 >> 0x10);
      auVar37[3] = ~(byte)((uint)iVar21 >> 0x18);
      auVar37[4] = ~(byte)iVar26;
      auVar37[5] = ~(byte)((uint)iVar26 >> 8);
      auVar37[6] = ~(byte)((uint)iVar26 >> 0x10);
      auVar37[7] = ~(byte)((uint)iVar26 >> 0x18);
      auVar37[8] = ~(byte)iVar27;
      auVar37[9] = ~(byte)((uint)iVar27 >> 8);
      auVar37[10] = ~(byte)((uint)iVar27 >> 0x10);
      auVar37[0xb] = ~(byte)((uint)iVar27 >> 0x18);
      auVar37[0xc] = ~(byte)iVar28;
      auVar37[0xd] = ~(byte)((uint)iVar28 >> 8);
      auVar37[0xe] = ~(byte)((uint)iVar28 >> 0x10);
      auVar37[0xf] = ~(byte)((uint)iVar28 >> 0x18);
      auVar60._0_4_ = auVar59._0_4_ * auVar46._0_4_ * auVar38._0_4_;
      auVar60._4_4_ = auVar59._4_4_ * auVar46._4_4_ * auVar38._4_4_;
      auVar60._8_4_ = auVar59._8_4_ * auVar46._8_4_ * auVar38._8_4_;
      auVar60._12_4_ = auVar59._12_4_ * auVar46._12_4_ * auVar38._12_4_;
      auVar38 = auVar38 ^ (auVar38 ^ auVar60) & auVar37;
      uVar52 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a580);
      uVar89 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a580);
      uVar74 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
      uVar63 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a680);
      uVar84 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a6c8);
      fVar25 = (float)((ulong)uVar74 >> 0x20);
      fVar20 = (float)((ulong)uVar52 >> 0x20);
      fVar29 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar40 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      uVar43 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
      uVar83 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a880);
      fVar19 = (float)((ulong)uVar43 >> 0x20);
      uVar90 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a790);
      auVar39._0_8_ = auVar38._0_8_;
      auVar39._8_8_ = auVar39._0_8_;
      uVar62 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a648);
      auVar61._0_8_ =
           (long *)CONCAT44((auVar38._4_4_ * fVar20 +
                             fVar29 * auVar23._4_4_ * (float)((ulong)uVar89 >> 0x20) +
                            fVar29 * fVar19 * (float)((ulong)uVar63 >> 0x20)) -
                            fVar25 * (float)((ulong)uVar83 >> 0x20),
                            (auVar38._0_4_ * (float)uVar52 +
                             (float)_DAT_03889ad0 * auVar23._0_4_ * (float)uVar89 +
                            (float)_DAT_03889ad0 * (float)uVar43 * (float)uVar63) -
                            (float)uVar74 * (float)uVar83);
      auVar61._8_4_ =
           (auVar38._8_4_ * (float)uVar52 + (float)_UNK_03889ad8 * (float)uVar74 * (float)uVar84 +
           (float)_UNK_03889ad8 * auVar23._0_4_ * (float)uVar62) - (float)uVar43 * (float)uVar90;
      auVar61._12_4_ =
           (auVar38._12_4_ * fVar20 + fVar40 * fVar25 * (float)((ulong)uVar84 >> 0x20) +
           fVar40 * auVar23._4_4_ * (float)((ulong)uVar62 >> 0x20)) -
           fVar19 * (float)((ulong)uVar90 >> 0x20);
      uStack_68 = auVar61._8_8_;
      local_70 = auVar61._0_8_;
      auVar23 = FUN_00cb8d18(&local_70);
      fVar19 = (*(float *)PTR_FloatDegree180_04372ce0 / *(float *)PTR_FloatPi_04372cf0) *
               auVar23._4_4_;
      plVar14 = (long *)CONCAT44(uStack_74,local_78);
      if (plVar14 != (long *)0x0) {
        lVar9 = plVar14[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
      }
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      if (((*puVar6 & 1) == 0) && (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar9 = *(long *)puVar7;
      *(long *)puVar8 = lVar9;
      puVar10 = *(undefined1 **)(lVar9 + 0x60);
      if (puVar10 != (undefined1 *)0x0) {
        uVar12 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar13 = (undefined1 *)((ulong)(puVar10 + -1) & 0x471b26c9ac42475c);
        }
        else if (&DAT_471b26c9ac42475c < puVar10) {
          puVar13 = &DAT_471b26c9ac42475c;
        }
        else {
          uVar16 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar16 = 0x471b26c9ac42475c / (ulong)puVar10;
          }
          puVar13 = &DAT_471b26c9ac42475c + -(uVar16 * (long)puVar10);
        }
        plVar14 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_471b26c9ac42475c) {
                if ((undefined1 *)plVar14[2] == &DAT_471b26c9ac42475c) goto LAB_01c2c9f8;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar15 = (undefined1 *)plVar14[1];
              if (puVar15 == &DAT_471b26c9ac42475c) {
                if ((undefined1 *)plVar14[2] == &DAT_471b26c9ac42475c) goto LAB_01c2c9f8;
              }
              else {
                if (puVar10 <= puVar15) {
                  uVar12 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar15 / (ulong)puVar10;
                  }
                  puVar15 = puVar15 + -(uVar12 * (long)puVar10);
                }
                if (puVar15 != puVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
LAB_01c2cb6c:
      if (fVar20 <= fVar95) {
        *(undefined4 *)param_1 = 2;
        *(undefined1 *)((long)param_1 + 4) = 1;
        local_7c = 0x3f800000;
        local_78 = 0;
        fVar42 = (fVar42 - param_2) / (fVar96 - param_2);
        pplVar11 = (long **)&local_7c;
        if (fVar42 <= 1.0) {
          pplVar11 = &local_70;
        }
        local_70 = (long *)CONCAT44(local_70._4_4_,fVar42);
        if (fVar42 < 0.0) {
          pplVar11 = (long **)&local_78;
        }
        *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)pplVar11;
      }
    }
  }
  return;
LAB_01c2c40c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar14[0x21];
    fVar96 = 0.0;
    if (uVar12 != 0) {
      uVar16 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar12 - 1 & 0x2a84b06998145470;
      }
      else if (uVar12 < 0x2a84b06998145471) {
        uVar17 = 0;
        if (uVar12 != 0) {
          uVar17 = 0x2a84b06998145470 / uVar12;
        }
        uVar17 = 0x2a84b06998145470 - uVar17 * uVar12;
      }
      else {
        uVar17 = 0x2a84b06998145470;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0x2a84b06998145470) {
              if (plVar18[2] == 0x2a84b06998145470) goto LAB_01c2c550;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0x2a84b06998145470) {
              if (plVar18[2] == 0x2a84b06998145470) goto LAB_01c2c550;
            }
            else {
              if (uVar12 <= uVar16) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar16 / uVar12;
                }
                uVar16 = uVar16 - uVar5 * uVar12;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01c2c554;
  }
  goto LAB_01c2c568;
LAB_01c2c550:
  fVar96 = *(float *)(plVar18 + 6);
LAB_01c2c554:
  do {
    iVar21 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01c2c568;
LAB_01c2c9f8:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar14[0x21];
    fVar95 = 0.0;
    if (uVar12 != 0) {
      uVar16 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar12 - 1 & 0xe003a5b46203e842;
      }
      else if (uVar12 < 0xe003a5b46203e843) {
        uVar17 = 0;
        if (uVar12 != 0) {
          uVar17 = 0xe003a5b46203e842 / uVar12;
        }
        uVar17 = 0xe003a5b46203e842 - uVar17 * uVar12;
      }
      else {
        uVar17 = 0xe003a5b46203e842;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0xe003a5b46203e842) {
              if (plVar18[2] == -0x1ffc5a4b9dfc17be) goto LAB_01c2cb54;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0xe003a5b46203e842) {
              if (plVar18[2] == -0x1ffc5a4b9dfc17be) goto LAB_01c2cb54;
            }
            else {
              if (uVar12 <= uVar16) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar16 / uVar12;
                }
                uVar16 = uVar16 - uVar5 * uVar12;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01c2cb58;
  }
  goto LAB_01c2cb6c;
LAB_01c2cb54:
  fVar95 = *(float *)(plVar18 + 6);
LAB_01c2cb58:
  do {
    iVar21 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar21 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01c2cb6c;
}


