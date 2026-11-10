/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd9e28; name: FUN_02bd9e28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_02bd9e28(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5)

{
  long *plVar1;
  ulong *puVar2;
  MutexType *pMVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong *puVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  float fVar25;
  float extraout_s0;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  float extraout_var;
  float extraout_var_00;
  float fVar29;
  float extraout_var_01;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [12];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  int iVar45;
  float fVar54;
  float fVar56;
  int iVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar55;
  int iVar58;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar59;
  undefined1 auVar60 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar71;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar78 [16];
  undefined8 uVar72;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  long *local_218;
  long local_210 [2];
  undefined1 local_200 [16];
  undefined8 local_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  long *local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long *local_108;
  ulong *local_100;
  uint local_f8;
  undefined2 local_f4;
  uint local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined8 local_e8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  
  if (*(int *)((long)param_5 + 0x7c) == 3) {
    FUN_02bdad5c(param_5);
    FUN_02bdae6c(param_5);
    FUN_02bdaf7c(param_5);
    iVar45 = (**(code **)(*(long *)param_5[0x1a] + 0x100))((long *)param_5[0x1a],param_5[0x1b]);
    if (iVar45 != 0) {
      (**(code **)(*(long *)param_5[0x1a] + 0xd8))((long *)param_5[0x1a],param_5 + 0x1b,1,0);
    }
    plVar24 = (long *)param_5[0x1a];
    param_5[0x1a] = 0;
    if ((plVar24 != (long *)0x0) && (plVar24[1] != 0)) {
      plVar1 = plVar24 + 2;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 + -1 == 0) {
        plVar24 = (long *)(**(code **)(*plVar24 + 0x18))();
      }
    }
    *(undefined4 *)((long)param_5 + 0x7c) = 4;
  }
  else {
    plVar24 = param_5;
    if (*(int *)((long)param_5 + 0x7c) == 1) {
      local_ea = 0xff;
      local_c0 = DAT_03aae460;
      uStack_b8 = DAT_03aae468;
      local_90 = 0xbf800000;
      local_100 = (ulong *)0x0;
      local_f8 = 0;
      local_f4 = 0;
      local_ec = 0;
      local_d8 = 0;
      local_78 = 0xffff;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_74 = 0x7fffffff00ffffff;
      local_6c = 0;
      local_68 = 0;
      local_60 = 0;
      local_f0 = *(uint *)(param_5 + 0x16) | *(int *)((long)param_5 + 0xb4) << 0x10 |
                 (int)param_5[0x17] << 6 | *(int *)((long)param_5 + 0xbc) << 0xb;
      local_e0 = param_5[0x18];
      uVar14 = (uint)*(byte *)((long)param_5 + 0xf6);
      if (*(byte *)((long)param_5 + 0xf6) != 0) {
        uVar14 = 0x1c00;
        local_f8 = 0x1c00;
      }
      if (*(char *)((long)param_5 + 0xf7) != '\0') {
        local_f8 = uVar14 | 0x100;
        uVar14 = local_f8;
      }
      if ((char)param_5[0x1f] != '\0') {
        local_f8 = uVar14 | 0xe000;
      }
      local_1d0 = (ulong *)0x0;
      uStack_1c8 = 0;
      FUN_008c4b3c(&local_1d0,param_5 + 0xd);
      FUN_00956dac(&local_108,&local_1d0);
      puVar9 = local_1d0;
      if (local_1d0 != (ulong *)0x0) {
        puVar2 = local_1d0 + 1;
        do {
          iVar45 = (int)*puVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *(int *)puVar2 = iVar45;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar45 == 0) {
          local_1d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar45 = __cxa_guard_acquire(PTR_DAT_04379498), iVar45 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_160 = *puVar9;
          FUN_02a44274(lVar16 + 0xd8,&local_160);
        }
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x40))();
        param_5[0x85] = param_4._8_8_;
        param_5[0x84] = param_4._0_8_;
        (**(code **)(*local_108 + 0x40))();
        auVar46._0_4_ = extraout_s0 * extraout_s0;
        auVar46._4_4_ = extraout_var * extraout_var;
        auVar46._8_4_ = extraout_var_00 * extraout_var_00;
        auVar46._12_4_ = extraout_var_01 * extraout_var_01;
        auVar61 = NEON_ext(auVar46,auVar46,8,1);
        fVar44 = auVar61._0_4_ + auVar46._0_4_;
        fVar54 = auVar61._4_4_ + auVar46._4_4_;
        fVar25 = fVar44 + fVar54;
        fVar44 = fVar44 + fVar54;
        auVar47._8_8_ = CONCAT44(fVar44,fVar25);
        auVar47._0_8_ = CONCAT44(fVar44,fVar25);
        auVar61 = NEON_frsqrte(auVar47,4);
        auVar73._0_4_ = auVar61._0_4_ * fVar25;
        auVar73._4_4_ = auVar61._4_4_ * fVar44;
        auVar73._8_4_ = auVar61._8_4_ * fVar25;
        auVar73._12_4_ = auVar61._12_4_ * fVar44;
        auVar74 = NEON_frsqrts(auVar61,auVar73,4);
        auVar62._0_4_ = auVar61._0_4_ * auVar74._0_4_;
        auVar62._4_4_ = auVar61._4_4_ * auVar74._4_4_;
        auVar62._8_4_ = auVar61._8_4_ * auVar74._8_4_;
        auVar62._12_4_ = auVar61._12_4_ * auVar74._12_4_;
        auVar75._0_4_ = fVar25 * auVar62._0_4_;
        auVar75._4_4_ = fVar44 * auVar62._4_4_;
        auVar75._8_4_ = fVar25 * auVar62._8_4_;
        auVar75._12_4_ = fVar44 * auVar62._12_4_;
        iVar45 = -(uint)(fVar25 == 0.0);
        iVar55 = -(uint)(fVar44 == 0.0);
        iVar57 = -(uint)(fVar25 == 0.0);
        iVar58 = -(uint)(fVar44 == 0.0);
        auVar61 = NEON_frsqrts(auVar62,auVar75,4);
        fVar25 = extraout_s0 * auVar62._0_4_ * auVar61._0_4_;
        fVar44 = extraout_var * auVar62._4_4_ * auVar61._4_4_;
        fVar54 = extraout_var_00 * auVar62._8_4_ * auVar61._8_4_;
        fVar30 = extraout_var_01 * auVar62._12_4_ * auVar61._12_4_;
        fVar56 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)fVar25 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(fVar25,0) & ~(byte)iVar45)));
        auVar48._0_8_ =
             CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                      CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                               CONCAT15((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                        CONCAT14(SUB41(fVar44,0) & ~(byte)iVar55,fVar56))));
        auVar48[8] = SUB41(fVar54,0) & ~(byte)iVar57;
        auVar48[9] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar48[10] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar48[0xb] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        auVar48[0xc] = SUB41(fVar30,0) & ~(byte)iVar58;
        auVar48[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar48[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar48[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        fVar31 = param_2._0_4_;
        auVar63._0_4_ = fVar31 * fVar31;
        fVar37 = param_2._4_4_;
        auVar63._4_4_ = fVar37 * fVar37;
        fVar38 = param_2._8_4_;
        auVar63._8_4_ = fVar38 * fVar38;
        auVar63._12_4_ = param_2._12_4_ * param_2._12_4_;
        auVar61 = NEON_ext(auVar63,auVar63,8,1);
        fVar44 = auVar61._0_4_ + auVar63._0_4_;
        fVar54 = auVar61._4_4_ + auVar63._4_4_;
        fVar25 = fVar44 + fVar54;
        fVar44 = fVar44 + fVar54;
        auVar64._8_8_ = CONCAT44(fVar44,fVar25);
        auVar64._0_8_ = CONCAT44(fVar44,fVar25);
        auVar61 = NEON_frsqrte(auVar64,4);
        auVar83._0_4_ = auVar61._0_4_ * fVar25;
        auVar83._4_4_ = auVar61._4_4_ * fVar44;
        auVar83._8_4_ = auVar61._8_4_ * fVar25;
        auVar83._12_4_ = auVar61._12_4_ * fVar44;
        auVar74 = NEON_frsqrts(auVar61,auVar83,4);
        auVar76._0_4_ = auVar61._0_4_ * auVar74._0_4_;
        auVar76._4_4_ = auVar61._4_4_ * auVar74._4_4_;
        auVar76._8_4_ = auVar61._8_4_ * auVar74._8_4_;
        auVar76._12_4_ = auVar61._12_4_ * auVar74._12_4_;
        auVar84._0_4_ = fVar25 * auVar76._0_4_;
        auVar84._4_4_ = fVar44 * auVar76._4_4_;
        auVar84._8_4_ = fVar25 * auVar76._8_4_;
        auVar84._12_4_ = fVar44 * auVar76._12_4_;
        iVar45 = -(uint)(fVar25 == 0.0);
        iVar55 = -(uint)(fVar44 == 0.0);
        iVar57 = -(uint)(fVar25 == 0.0);
        auVar61 = NEON_frsqrts(auVar76,auVar84,4);
        fVar31 = fVar31 * auVar76._0_4_ * auVar61._0_4_;
        fVar37 = fVar37 * auVar76._4_4_ * auVar61._4_4_;
        fVar38 = fVar38 * auVar76._8_4_ * auVar61._8_4_;
        fVar54 = param_3._0_4_;
        auVar77._0_4_ = fVar54 * fVar54;
        fVar30 = param_3._4_4_;
        auVar77._4_4_ = fVar30 * fVar30;
        fVar29 = param_3._8_4_;
        auVar77._8_4_ = fVar29 * fVar29;
        auVar77._12_4_ = param_3._12_4_ * param_3._12_4_;
        auVar61 = NEON_ext(auVar77,auVar77,8,1);
        fVar44 = auVar61._0_4_ + auVar77._0_4_;
        fVar82 = auVar61._4_4_ + auVar77._4_4_;
        fVar25 = fVar44 + fVar82;
        fVar44 = fVar44 + fVar82;
        auVar78._8_8_ = CONCAT44(fVar44,fVar25);
        auVar78._0_8_ = CONCAT44(fVar44,fVar25);
        auVar61 = NEON_frsqrte(auVar78,4);
        auVar88._0_4_ = auVar61._0_4_ * fVar25;
        auVar88._4_4_ = auVar61._4_4_ * fVar44;
        auVar88._8_4_ = auVar61._8_4_ * fVar25;
        auVar88._12_4_ = auVar61._12_4_ * fVar44;
        auVar74 = NEON_frsqrts(auVar61,auVar88,4);
        auVar85._0_4_ = auVar61._0_4_ * auVar74._0_4_;
        auVar85._4_4_ = auVar61._4_4_ * auVar74._4_4_;
        auVar85._8_4_ = auVar61._8_4_ * auVar74._8_4_;
        auVar85._12_4_ = auVar61._12_4_ * auVar74._12_4_;
        auVar89._0_4_ = fVar25 * auVar85._0_4_;
        auVar89._4_4_ = fVar44 * auVar85._4_4_;
        auVar89._8_4_ = fVar25 * auVar85._8_4_;
        auVar89._12_4_ = fVar44 * auVar85._12_4_;
        auVar61 = NEON_frsqrts(auVar85,auVar89,4);
        fVar54 = fVar54 * auVar85._0_4_ * auVar61._0_4_;
        fVar30 = fVar30 * auVar85._4_4_ * auVar61._4_4_;
        fVar29 = fVar29 * auVar85._8_4_ * auVar61._8_4_;
        fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)fVar31 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(fVar31,0) & ~(byte)iVar45)));
        auVar39._0_8_ =
             CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                      CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                               CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                        CONCAT14(SUB41(fVar37,0) & ~(byte)iVar55,fVar31))));
        auVar39[8] = SUB41(fVar38,0) & ~(byte)iVar57;
        auVar39[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar39[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar39[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        iVar45 = -(uint)(fVar25 == 0.0);
        iVar55 = -(uint)(fVar44 == 0.0);
        iVar57 = -(uint)(fVar25 == 0.0);
        auVar60._0_8_ =
             CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar55,
                                                 CONCAT13((byte)((uint)fVar54 >> 0x18) &
                                                          ~(byte)((uint)iVar45 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                                                   ~(byte)((uint)iVar45 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar54 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar45 >> 8),SUB41(fVar54,0) & ~(byte)iVar45))))))
                     );
        auVar60[8] = SUB41(fVar29,0) & ~(byte)iVar57;
        auVar60[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar60[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar60[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        uVar71 = NEON_ext(auVar48._0_8_,auVar60._0_8_,4,1);
        auVar74 = NEON_ext(auVar48,auVar48,8,1);
        fVar30 = (float)((ulong)auVar39._0_8_ >> 0x20);
        fVar29 = auVar60._8_4_;
        auVar61 = NEON_fmov(0x3f800000,4);
        fVar25 = (float)_DAT_03889820 * fVar56 + (float)_DAT_0388a450 * fVar30 +
                 (float)_DAT_03889eb0 * fVar29 + auVar61._0_4_;
        fVar44 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar56 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar30 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar29 + auVar61._4_4_;
        fVar54 = (float)_UNK_03889828 * fVar56 + (float)_UNK_0388a458 * fVar30 +
                 (float)_UNK_03889eb8 * fVar29 + auVar61._8_4_;
        fVar30 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar56 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar30 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar29 + auVar61._12_4_;
        fVar29 = (float)((ulong)auVar60._0_8_ >> 0x20);
        auVar49._0_4_ = (float)uVar71 + fVar31;
        fVar37 = (float)((ulong)uVar71 >> 0x20);
        auVar49._4_4_ = fVar37 + auVar74._0_4_;
        auVar49._8_4_ = auVar39._8_4_ + fVar29;
        auVar49._12_4_ = 0;
        auVar65._0_4_ = (float)uVar71 - fVar31;
        auVar65._4_4_ = fVar37 - auVar74._0_4_;
        auVar65._8_4_ = auVar39._8_4_ - fVar29;
        auVar65._12_4_ = 0;
        uVar71 = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a888);
        uVar72 = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a710);
        auVar86._8_8_ = uVar72;
        auVar86._0_8_ = uVar71;
        uVar72 = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a758);
        auVar93._4_12_ = auVar86._4_12_;
        auVar93._0_4_ = fVar25;
        auVar79._0_8_ = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a880);
        uVar87 = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a640);
        auVar40._0_4_ = (undefined4)uVar71;
        auVar40._4_4_ = fVar44;
        auVar40._8_8_ = uVar72;
        auVar90._0_8_ = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a700);
        uVar71 = a64_TBL(ZEXT816(0),auVar49,auVar65,DAT_0388a590);
        auVar66._4_4_ = fVar44;
        auVar66._0_4_ = fVar44;
        auVar66._8_4_ = fVar44;
        auVar66._12_4_ = fVar44;
        auVar79._12_4_ = (undefined4)((ulong)uVar87 >> 0x20);
        auVar79._8_4_ = fVar54;
        auVar90._8_8_ = uVar71;
        auVar95._4_4_ = fVar25;
        auVar95._0_4_ = fVar25;
        auVar95._8_4_ = fVar25;
        auVar95._12_4_ = fVar25;
        auVar92._0_8_ = CONCAT44(-(uint)(fVar25 <= fVar44),-(uint)(fVar25 <= fVar44));
        auVar92._8_4_ = -(uint)(fVar25 <= fVar44);
        auVar92._12_4_ = -(uint)(fVar25 <= fVar44);
        auVar94._8_8_ = auVar92._8_8_;
        auVar94._0_8_ = auVar92._0_8_;
        auVar93 = auVar93 ^ (auVar93 ^ auVar40) & auVar92;
        auVar41._4_4_ = fVar54;
        auVar41._0_4_ = fVar54;
        auVar41._8_4_ = fVar54;
        auVar41._12_4_ = fVar54;
        auVar91._0_12_ = auVar90._0_12_;
        auVar91._12_4_ = fVar30;
        auVar95 = auVar95 ^ (auVar95 ^ auVar66) & auVar94;
        auVar50._0_8_ = CONCAT44(-(uint)(auVar95._4_4_ <= fVar54),-(uint)(auVar95._0_4_ <= fVar54));
        auVar50._8_4_ = -(uint)(auVar95._8_4_ <= fVar54);
        auVar50._12_4_ = -(uint)(auVar95._12_4_ <= fVar54);
        auVar67._8_8_ = auVar50._8_8_;
        auVar67._0_8_ = auVar50._0_8_;
        auVar93 = auVar93 ^ (auVar93 ^ auVar79) & auVar50;
        auVar95 = auVar95 ^ (auVar95 ^ auVar41) & auVar67;
        auVar33._0_4_ = -(uint)(auVar95._0_4_ <= fVar30);
        auVar33._4_4_ = -(uint)(auVar95._4_4_ <= fVar30);
        auVar33._8_4_ = -(uint)(auVar95._8_4_ <= fVar30);
        auVar33._12_4_ = -(uint)(auVar95._12_4_ <= fVar30);
        auVar93 = auVar93 ^ (auVar93 ^ auVar91) & auVar33;
        fVar54 = auVar93._0_4_;
        auVar42._0_4_ = fVar54 * fVar54;
        fVar29 = auVar93._4_4_;
        auVar42._4_4_ = fVar29 * fVar29;
        fVar31 = auVar93._8_4_;
        auVar42._8_4_ = fVar31 * fVar31;
        fVar37 = auVar93._12_4_;
        auVar42._12_4_ = fVar37 * fVar37;
        auVar61 = NEON_ext(auVar42,auVar42,8,1);
        fVar44 = auVar61._0_4_ + auVar42._0_4_;
        fVar30 = auVar61._4_4_ + auVar42._4_4_;
        fVar25 = fVar44 + fVar30;
        fVar44 = fVar44 + fVar30;
        auVar43._8_8_ = CONCAT44(fVar44,fVar25);
        auVar43._0_8_ = CONCAT44(fVar44,fVar25);
        auVar61 = NEON_frsqrte(auVar43,4);
        auVar68._0_4_ = auVar61._0_4_ * fVar25;
        auVar68._4_4_ = auVar61._4_4_ * fVar44;
        auVar68._8_4_ = auVar61._8_4_ * fVar25;
        auVar68._12_4_ = auVar61._12_4_ * fVar44;
        auVar74 = NEON_frsqrts(auVar61,auVar68,4);
        auVar51._0_4_ = auVar61._0_4_ * auVar74._0_4_;
        auVar51._4_4_ = auVar61._4_4_ * auVar74._4_4_;
        auVar51._8_4_ = auVar61._8_4_ * auVar74._8_4_;
        auVar51._12_4_ = auVar61._12_4_ * auVar74._12_4_;
        auVar69._0_4_ = fVar25 * auVar51._0_4_;
        auVar69._4_4_ = fVar44 * auVar51._4_4_;
        auVar69._8_4_ = fVar25 * auVar51._8_4_;
        auVar69._12_4_ = fVar44 * auVar51._12_4_;
        iVar45 = -(uint)(fVar25 == 0.0);
        iVar55 = -(uint)(fVar44 == 0.0);
        iVar57 = -(uint)(fVar25 == 0.0);
        iVar58 = -(uint)(fVar44 == 0.0);
        auVar61 = NEON_frsqrts(auVar51,auVar69,4);
        fVar54 = auVar51._0_4_ * auVar61._0_4_ * fVar54;
        fVar29 = auVar51._4_4_ * auVar61._4_4_ * fVar29;
        fVar31 = auVar51._8_4_ * auVar61._8_4_ * fVar31;
        fVar37 = auVar51._12_4_ * auVar61._12_4_ * fVar37;
        fVar30 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)fVar54 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(fVar54,0) & ~(byte)iVar45)));
        auVar32._0_8_ =
             CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                      CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                               CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                        CONCAT14(SUB41(fVar29,0) & ~(byte)iVar55,fVar30))));
        auVar32[8] = SUB41(fVar31,0) & ~(byte)iVar57;
        auVar32[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar32[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar32[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        auVar34[0xc] = SUB41(fVar37,0) & ~(byte)iVar58;
        auVar34._0_12_ = auVar32;
        auVar34[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar34[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar34[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        local_d0 = param_5[0x84];
        auVar52._0_4_ = fVar30 * fVar30;
        fVar29 = (float)((ulong)auVar32._0_8_ >> 0x20);
        auVar52._4_4_ = fVar29 * fVar29;
        fVar31 = auVar32._8_4_;
        auVar52._8_4_ = fVar31 * fVar31;
        fVar37 = auVar34._12_4_;
        auVar52._12_4_ = fVar37 * fVar37;
        param_5[0x87] = auVar34._8_8_;
        param_5[0x86] = auVar32._0_8_;
        uStack_c8 = (ulong)*(uint *)(param_5 + 0x85);
        auVar61 = NEON_ext(auVar52,auVar52,8,1);
        fVar54 = auVar61._0_4_ + auVar52._0_4_;
        fVar25 = auVar61._4_4_ + auVar52._4_4_;
        fVar44 = fVar54 + fVar25;
        fVar54 = fVar54 + fVar25;
        auVar53._8_8_ = CONCAT44(fVar54,fVar44);
        auVar53._0_8_ = CONCAT44(fVar54,fVar44);
        fVar25 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
        auVar61 = NEON_frsqrte(auVar53,4);
        iVar45 = -(uint)(fVar44 < fVar25);
        iVar55 = -(uint)(fVar54 < fVar25);
        iVar57 = -(uint)(fVar44 < fVar25);
        iVar58 = -(uint)(fVar54 < fVar25);
        auVar80._0_4_ = auVar61._0_4_ * fVar44;
        auVar80._4_4_ = auVar61._4_4_ * fVar54;
        auVar80._8_4_ = auVar61._8_4_ * fVar44;
        auVar80._12_4_ = auVar61._12_4_ * fVar54;
        auVar74 = NEON_frsqrts(auVar61,auVar80,4);
        auVar70._0_4_ = auVar61._0_4_ * auVar74._0_4_;
        auVar70._4_4_ = auVar61._4_4_ * auVar74._4_4_;
        auVar70._8_4_ = auVar61._8_4_ * auVar74._8_4_;
        auVar70._12_4_ = auVar61._12_4_ * auVar74._12_4_;
        auVar81._0_4_ = fVar44 * auVar70._0_4_;
        auVar81._4_4_ = fVar54 * auVar70._4_4_;
        auVar81._8_4_ = fVar44 * auVar70._8_4_;
        auVar81._12_4_ = fVar54 * auVar70._12_4_;
        auVar61 = NEON_frsqrts(auVar70,auVar81,4);
        fVar30 = fVar30 * auVar70._0_4_ * auVar61._0_4_;
        fVar29 = fVar29 * auVar70._4_4_ * auVar61._4_4_;
        fVar31 = fVar31 * auVar70._8_4_ * auVar61._8_4_;
        fVar37 = fVar37 * auVar70._12_4_ * auVar61._12_4_;
        bVar26 = (byte)((uint)iVar45 >> 8);
        bVar27 = (byte)((uint)iVar45 >> 0x10);
        bVar28 = (byte)((uint)iVar45 >> 0x18);
        auVar35[0] = SUB41(fVar30,0) & ~(byte)iVar45;
        auVar35[1] = (byte)((uint)fVar30 >> 8) & ~bVar26;
        auVar35[2] = (byte)((uint)fVar30 >> 0x10) & ~bVar27;
        auVar35[3] = (byte)((uint)fVar30 >> 0x18) & ~bVar28;
        auVar35[4] = SUB41(fVar29,0) & ~(byte)iVar55;
        auVar35[5] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar35[6] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar35[7] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        auVar35[8] = SUB41(fVar31,0) & ~(byte)iVar57;
        auVar35[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar35[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar35[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        auVar35[0xc] = SUB41(fVar37,0) & ~(byte)iVar58;
        auVar35[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar35[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar35[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        iVar45 = -(uint)((float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~bVar28,
                                         CONCAT12((byte)((uint)fVar44 >> 0x10) & ~bVar27,
                                                  CONCAT11((byte)((uint)fVar44 >> 8) & ~bVar26,
                                                           SUB41(fVar44,0) & ~(byte)iVar45))) == 0.0
                        );
        auVar74._8_8_ = _UNK_0388a138;
        auVar74._0_8_ = _DAT_0388a130;
        auVar61._0_4_ =
             CONCAT13(~(byte)((uint)iVar45 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar45 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar45 >> 8),~(byte)iVar45)));
        auVar61._4_4_ = auVar61._0_4_;
        auVar61._8_4_ = auVar61._0_4_;
        auVar61._12_4_ = auVar61._0_4_;
        auVar74 = auVar74 ^ (auVar74 ^ auVar35) & auVar61;
        uStack_b8 = auVar74._8_8_;
        local_c0 = auVar74._0_8_;
      }
      param_5[0x53] = 0;
      param_5[0x52] = 0;
      if ((char)param_5[0x4c] != '\0') {
        FUN_02bd8d3c(&local_1d0,param_5);
        puVar9 = local_100;
        local_100 = local_1d0;
        local_1d0 = (ulong *)0x0;
        if ((puVar9 != (ulong *)0x0) && (puVar9[1] != 0)) {
          puVar2 = puVar9 + 2;
          do {
            uVar20 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar20 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar20 - 1 == 0) {
            (**(code **)(*puVar9 + 0x18))();
          }
        }
      }
      iVar45 = *(int *)((long)param_5 + 0xfc);
      if (iVar45 == 5) {
        uVar20 = param_5[0x22];
        if (uVar20 != 0) {
          uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
          uVar17 = *(ulong *)(*(long *)(param_5[0x37] + 0x18) + 0x70);
          uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar21 < 2) {
            uVar22 = uVar20 - 1 & uVar17;
          }
          else {
            uVar22 = uVar17;
            if (uVar20 <= uVar17) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar17 / uVar20;
              }
              uVar22 = uVar17 - uVar22 * uVar20;
            }
          }
          plVar24 = *(long **)(param_5[0x21] + uVar22 * 8);
          if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
            if (uVar21 < 2) {
              do {
                if (plVar24[1] == uVar17) {
                  if (plVar24[2] == uVar17) goto LAB_02bda464;
                }
                else if ((plVar24[1] & uVar20 - 1) != uVar22) break;
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
            else {
              do {
                uVar21 = plVar24[1];
                if (uVar21 == uVar17) {
                  if (plVar24[2] == uVar17) goto LAB_02bda464;
                }
                else {
                  if (uVar20 <= uVar21) {
                    uVar7 = 0;
                    if (uVar20 != 0) {
                      uVar7 = uVar21 / uVar20;
                    }
                    uVar21 = uVar21 - uVar7 * uVar20;
                  }
                  if (uVar21 != uVar22) break;
                }
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02be1d40();
      }
      goto LAB_02bda4cc;
    }
  }
  return plVar24;
LAB_02bda464:
  lVar16 = plVar24[3];
  puVar12 = (undefined8 *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
  FUN_02be1960();
  for (; puVar12 != &DAT_043f2038; puVar12 = (undefined8 *)*puVar12) {
  }
  pfVar18 = *(float **)(lVar16 + 0x70);
  fVar25 = *pfVar18;
  fVar44 = pfVar18[2];
  uStack_c8 = CONCAT44(uStack_c8._4_4_ + 0.0,(float)uStack_c8 + fVar44);
  local_d0 = CONCAT44(local_d0._4_4_ + 0.0,(float)local_d0 + fVar25);
  param_5[0x53] = (ulong)(uint)fVar44;
  param_5[0x52] = (ulong)(uint)fVar25;
  iVar45 = *(int *)((long)param_5 + 0xfc);
LAB_02bda4cc:
  if ((iVar45 != 6) && (lVar16 = param_5[0x20], lVar16 != 0)) {
    plVar24 = (long *)(lVar16 + 0x48);
    uVar14 = 0;
    do {
      uVar23 = uVar14;
      uVar14 = 0xffffffff;
      if (*(int *)(lVar16 + 0x50) <= (int)uVar23) goto LAB_02bda514;
      uVar14 = uVar23 + 1;
    } while ((*(byte *)((long)plVar24 + (ulong)(uVar23 & 0xffff) * 0x40 + *plVar24 + 0x1e) & 1) != 0
            );
    uVar14 = uVar23;
LAB_02bda514:
    auVar61 = *(undefined1 (*) [16])(param_5 + 0x4e);
    auVar74 = NEON_ext(auVar61,auVar61,8,1);
    uStack_1c8 = (ulong)auVar74._0_4_;
    local_1d0 = auVar61._0_8_;
    if (uVar14 != 0xffffffff) {
      lVar13 = lVar16;
      while( true ) {
        local_160 = CONCAT62(local_160._2_6_,(short)uVar14);
        FUN_02f706c8(lVar13,&local_160,1,0,&local_1d0);
        uVar23 = uVar14 + 1;
        do {
          uVar14 = uVar23;
          if (*(int *)(lVar16 + 0x50) <= (int)uVar14) goto LAB_02bda58c;
          uVar23 = uVar14 + 1;
        } while ((*(byte *)((long)plVar24 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar24 + 0x1e) & 1)
                 != 0);
        if (uVar14 + 1 == 0) break;
        lVar13 = param_5[0x20];
      }
    }
  }
LAB_02bda58c:
  uVar11 = (undefined4)param_5[0x1d];
  local_120 = 0;
  uStack_118 = 0;
  uVar15 = 0;
  local_160 = 0;
  local_158 = (long *)0x0;
  uStack_138 = 0x3f8000007f7fffee;
  local_140 = 0x3d4ccccd00000201;
  iVar45 = 6;
  uStack_128 = 0x40a00000;
  uVar23 = 0x100;
  local_130 = 0x3f800000;
  local_150 = (ulong)*(byte *)((long)param_5 + 0xf5);
  uVar14 = 0x80;
  do {
    fVar25 = (float)((uint)*(ushort *)(&DAT_03ab05f0 + (long)(int)uVar14 * 2) * 0x1000 + 0x3b800000)
    ;
    do {
      if (iVar45 < 0) {
        local_148._0_2_ =
             CONCAT11((char)uVar14 + (uVar14 < 0xff && fVar25 < 0.01),
                      *(char *)((long)param_5 + 0xf4) << 1);
        local_148 = (ulong)CONCAT42(CONCAT22(*(undefined2 *)((long)param_5 + 0xf2),
                                             *(undefined2 *)((long)param_5 + 0xee)),
                                    (undefined2)local_148);
        if (((*PTR_DAT_0437a648 & 1) == 0) &&
           (iVar45 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar45 != 0)) {
          FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a648);
        }
        lVar16 = *(long *)PTR_DAT_0437a650;
        *(long *)PTR_DAT_0437a658 = lVar16;
        lVar16 = *(long *)(lVar16 + 0x230);
        pMVar3 = (MutexType *)(lVar16 + 0x128);
        nn::os::LockMutex(pMVar3);
        uVar10 = FUN_030131f8(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x898),&local_160);
        nn::os::UnlockMutex(pMVar3);
        *(undefined2 *)(param_5 + 0x1c) = uVar10;
        iVar45 = *(int *)((long)param_5 + 0xe4);
        local_ec = uVar10;
        local_90 = uVar11;
        if (iVar45 == 0) {
          local_d8 = 0;
        }
        else if (iVar45 == 1) {
          local_1d0._0_3_ = CONCAT12(1,(undefined2)local_1d0);
          lVar16 = 0;
          if (local_88 != 0) {
            lVar16 = local_88 + 0x20;
          }
          local_d8 = (char)iVar45;
          FUN_03001ff0(local_100,lVar16,local_210);
          auVar8._8_8_ = uStack_b8;
          auVar8._0_8_ = local_c0;
          auVar61 = NEON_ext(auVar8,auVar8,8,1);
          local_1d0 = (ulong *)CONCAT62(local_1d0._2_6_,local_78);
          fVar37 = auVar61._4_4_ * auVar61._4_4_;
          uVar71 = NEON_ext(local_c0,auVar61._0_8_,4,1);
          local_1c0 = 0;
          uStack_1b8 = 0;
          fVar31 = fVar37 + -0.5;
          fVar25 = (float)local_c0;
          fVar38 = local_200._0_4_;
          fVar54 = (float)((ulong)local_c0 >> 0x20);
          fVar56 = local_200._4_4_;
          fVar30 = (float)uStack_b8;
          fVar82 = local_200._8_4_;
          fVar29 = (float)((ulong)uStack_b8 >> 0x20);
          fVar59 = fVar25 * fVar38 + fVar54 * fVar56 + fVar30 * fVar82;
          local_1d0 = (ulong *)((ulong)local_1d0 & 0xffffffff);
          auVar61 = NEON_ext(local_200,local_200,8,1);
          uVar72 = NEON_ext(local_200._0_8_,auVar61._0_8_,4,1);
          auVar36._0_4_ = fVar25 * (float)uVar72 - fVar38 * (float)uVar71;
          auVar36._4_4_ =
               fVar54 * (float)((ulong)uVar72 >> 0x20) - fVar56 * (float)((ulong)uVar71 >> 0x20);
          auVar36._8_4_ = fVar30 * fVar38 - fVar82 * fVar25;
          auVar36._12_4_ = fVar29 * fVar56 - local_200._12_4_ * fVar54;
          auVar61 = NEON_ext(auVar36,auVar36,4,1);
          fVar44 = fVar38 * fVar31 + fVar25 * fVar59 + auVar61._0_4_ * fVar29;
          fVar25 = fVar56 * (fVar37 + -0.5) +
                   fVar54 * (fVar25 * fVar38 + fVar54 * fVar56 + fVar30 * fVar82) +
                   auVar61._4_4_ * fVar29;
          fVar54 = fVar82 * fVar31 + fVar30 * fVar59 + auVar36._0_4_ * fVar29;
          local_1b0 = (double)((float)local_d0 + fVar44 + fVar44);
          local_1a0 = (double)((float)uStack_c8 + fVar54 + fVar54);
          dStack_1a8 = (double)(local_d0._4_4_ + fVar25 + fVar25);
          uStack_168 = uStack_98;
          local_170 = local_a0;
          uStack_188 = _UNK_0388a138;
          local_190 = _DAT_0388a130;
          uStack_178 = uStack_a8;
          uStack_180 = local_b0;
          uVar11 = (**(code **)(*(long *)param_5[0x1a] + 0x260))((long *)param_5[0x1a],&local_1d0);
          local_74 = CONCAT44(uVar11,(undefined4)local_74);
        }
        else if (iVar45 == 2) {
          local_d8 = (char)iVar45;
        }
        local_1d0 = (ulong *)0x0;
        uStack_1c8 = 0;
        FUN_008c4b3c(&local_1d0,param_5 + 0xd);
        FUN_00956dac(&local_218,&local_1d0);
        plVar24 = (long *)local_1d0;
        if (local_1d0 != (ulong *)0x0) {
          plVar1 = (long *)(local_1d0 + 1);
          do {
            iVar45 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar45;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar45 == 0) {
            local_1d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar45 = __cxa_guard_acquire(PTR_DAT_04379498), iVar45 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_210[0] = *plVar24;
            FUN_02a44274(lVar16 + 0xd8,local_210);
          }
        }
        if ((local_218 != (long *)0x0) &&
           (FUN_032c7fe0(&local_e8,local_218[0x47],0xffffffff), local_218 != (long *)0x0)) {
          lVar16 = local_218[0xb];
          piVar4 = (int *)(lVar16 + 0xc);
          do {
            iVar45 = *piVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar6) {
              *piVar4 = iVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_218 + 0x20))();
          }
        }
        lVar16 = (**(code **)(*(long *)param_5[0x1a] + 0xc0))
                           ((long *)param_5[0x1a],&local_100,0xffffffffffffffff);
        param_5[0x1b] = lVar16;
        (**(code **)(*(long *)param_5[0x1a] + 200))((long *)param_5[0x1a],lVar16,1,0);
        cVar5 = *(char *)((long)param_5 + 0x79);
        if ((char)param_5[0xf] != cVar5) {
          *(char *)(param_5 + 0xf) = cVar5;
          if (cVar5 == '\0') {
            pcVar19 = *(code **)(*param_5 + 0x90);
          }
          else {
            pcVar19 = *(code **)(*param_5 + 0x88);
          }
          (*pcVar19)(param_5);
        }
        if ((code *)param_5[100] != (code *)0x0) {
          local_1d0 = (ulong *)param_5;
          (*(code *)param_5[100])(param_5 + 0x68,&local_1d0);
        }
        if ((code *)param_5[0x54] != (code *)0x0) {
          local_1d0 = (ulong *)param_5;
          (*(code *)param_5[0x54])(param_5 + 0x58,&local_1d0);
        }
        *(undefined4 *)((long)param_5 + 0x7c) = 2;
        uVar20 = local_160;
        if ((local_158 != (long *)0x0) && (local_158[1] != 0)) {
          plVar24 = local_158 + 2;
          do {
            lVar16 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*local_158 + 0x18))();
            uVar20 = local_160;
          }
        }
        local_160 = uVar20;
        if ((uVar20 & 1) != 0) {
          lVar16 = tpidr_el0;
          lVar13 = *(long *)(lVar16 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar16 + 0x38d490) = lVar13;
          }
          plVar24 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          *(undefined8 *)(uVar20 - 0x11) = 0;
          (**(code **)(*plVar24 + 0x18))
                    (plVar24,(undefined8 *)(uVar20 - 0x11),(long)*(int *)(uVar20 - 9) + 0x10);
        }
        if (local_108 != (long *)0x0) {
          lVar16 = local_108[0xb];
          piVar4 = (int *)(lVar16 + 0xc);
          do {
            iVar45 = *piVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar6) {
              *piVar4 = iVar45 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_108 + 0x20))();
          }
        }
        FUN_02fff010(&local_100);
        return (long *)0x1;
      }
      if (0.01 <= fVar25) {
        uVar23 = uVar14;
        uVar14 = uVar15;
      }
      uVar15 = uVar14;
      uVar14 = (int)(uVar15 + uVar23) >> 1;
      iVar45 = iVar45 + -1;
      fVar25 = 0.0;
    } while (uVar14 == 0);
  } while( true );
}


