/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be38a4; name: FUN_02be38a4
 */


/* WARNING: Removing unreachable block (ram,0x02be3b5c) */
/* WARNING: Removing unreachable block (ram,0x02be3b64) */
/* WARNING: Removing unreachable block (ram,0x02be3b68) */
/* WARNING: Removing unreachable block (ram,0x02be3b70) */
/* WARNING: Removing unreachable block (ram,0x02be3b78) */
/* WARNING: Removing unreachable block (ram,0x02be3b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02be38a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float extraout_s0;
  undefined1 auVar17 [12];
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar30;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [12];
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  int iVar40;
  float fVar50;
  int iVar52;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar51;
  int iVar53;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  long *local_158;
  undefined8 uStack_150;
  long *local_148;
  undefined **local_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  long *local_80;
  long local_78 [3];
  
  local_80 = (long *)0x0;
  if ((int)param_5[0x50] == 3) {
    FUN_02c06260(param_5 + 0x58,&local_80);
  }
  else {
    if ((int)param_5[0x50] != 1) {
      return 0;
    }
    FUN_02c05e04(param_5 + 0x52,&local_80);
  }
  plVar6 = (long *)param_5[0x60];
  param_5[0x60] = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar7 = plVar6 + 2;
    do {
      lVar14 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  plVar6 = local_80;
  lVar14 = tpidr_el0;
  if ((local_80 != (long *)0x0) && ((*(ushort *)((long)local_80 + 0x1a) & 1) != 0)) {
    uStack_138 = _UNK_03888fc8;
    local_140 = _DAT_03888fc0;
    lVar11 = *(long *)(lVar14 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar11;
    }
    plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    lVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,0);
    FUN_02fe89b0(lVar11,plVar6,&local_140,1);
    plVar6 = (long *)param_5[0x60];
    param_5[0x60] = lVar11;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        lVar11 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar7 = (long *)param_5[0x60];
    plVar6 = local_80;
    if (local_80 != plVar7) {
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar7 = plVar7 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar7 = (long *)param_5[0x60];
      }
      plVar6 = plVar7;
      if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
        plVar9 = local_80 + 2;
        do {
          lVar11 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          lVar11 = *local_80;
          local_80 = plVar7;
          (**(code **)(lVar11 + 0x18))();
          plVar6 = local_80;
        }
      }
    }
  }
  local_80 = plVar6;
  if (param_5[0x60] != 0) {
    auVar66 = *(undefined1 (*) [16])(param_5 + 0x62);
    auVar32 = NEON_ext(auVar66,auVar66,8,1);
    param_3._8_8_ = auVar32._8_8_;
    param_3._0_8_ = CONCAT44(0,auVar32._0_4_);
    local_140 = auVar66._0_8_;
    uStack_138 = param_3._0_8_;
    FUN_02fe4fa0(param_5[0x60],&local_140,1);
  }
  uStack_d8 = DAT_0388a148;
  local_e0 = DAT_0388a140;
  uVar4 = _UNK_0388a138;
  uVar15 = _DAT_0388a130;
  uStack_f8 = 0;
  local_100 = 0;
  local_d0 = (long *)0x0;
  uStack_138 = 0xffffffff;
  uStack_130 = 1;
  local_f0 = 0x3f800000;
  local_e8 = 0x3dcccccd;
  local_140 = &PTR_LAB_042d9a40;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = _UNK_0388a138;
  local_110 = _DAT_0388a130;
  local_ac = 0x412000003d4ccccd;
  local_a4 = 0x4120000000000004;
  local_8c = 10;
  local_86 = 1;
  lVar11 = param_5[0x19];
  lStack_b8 = 0;
  if (lVar11 != 0) {
    lStack_b8 = lVar11 + 0x18;
  }
  local_c0 = 0;
  if (lVar11 != 0) {
    local_c0 = lVar11 + 0x20;
  }
  if (local_80 != (long *)0x0) {
    if (local_80[1] == 0) {
      local_d0 = local_80;
    }
    else {
      plVar6 = local_80 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_d0 = local_80;
    }
  }
  local_9c = 0x7f7fffee;
  auVar66 = ZEXT816(0x3c8efa35);
  local_94 = CONCAT44((int)param_5[0x65],*(float *)((long)param_5 + 0x324) * 0.017453292);
  local_b0 = *(uint *)(param_5 + 0x16) | *(int *)((long)param_5 + 0xb4) << 0x10 |
             (int)param_5[0x17] << 6 | *(int *)((long)param_5 + 0xbc) << 0xb;
  local_c8 = param_5[0x18];
  local_88 = 0x101;
  local_158 = (long *)0x0;
  uStack_150 = 0;
  FUN_008c4b3c(&local_158,param_5 + 0xd);
  FUN_00956dac(&local_148,&local_158);
  plVar6 = local_158;
  if (local_158 != (long *)0x0) {
    plVar7 = local_158 + 1;
    do {
      iVar40 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar40 == 0) {
      local_158[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar40 = __cxa_guard_acquire(PTR_DAT_04379498), iVar40 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_78[0] = *plVar6;
      FUN_02a44274(lVar11 + 0xd8,local_78);
    }
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x40))();
    uStack_118 = (ulong)param_4._8_4_;
    local_120 = param_4._0_8_;
    (**(code **)(*local_148 + 0x40))();
    auVar41._0_4_ = extraout_s0 * extraout_s0;
    auVar41._4_4_ = extraout_var * extraout_var;
    auVar41._8_4_ = extraout_var_00 * extraout_var_00;
    auVar41._12_4_ = extraout_var_01 * extraout_var_01;
    auVar32 = NEON_ext(auVar41,auVar41,8,1);
    fVar39 = auVar32._0_4_ + auVar41._0_4_;
    fVar50 = auVar32._4_4_ + auVar41._4_4_;
    fVar16 = fVar39 + fVar50;
    fVar39 = fVar39 + fVar50;
    auVar42._8_8_ = CONCAT44(fVar39,fVar16);
    auVar42._0_8_ = CONCAT44(fVar39,fVar16);
    auVar32 = NEON_frsqrte(auVar42,4);
    auVar63._0_4_ = auVar32._0_4_ * fVar16;
    auVar63._4_4_ = auVar32._4_4_ * fVar39;
    auVar63._8_4_ = auVar32._8_4_ * fVar16;
    auVar63._12_4_ = auVar32._12_4_ * fVar39;
    auVar64 = NEON_frsqrts(auVar32,auVar63,4);
    auVar55._0_4_ = auVar32._0_4_ * auVar64._0_4_;
    auVar55._4_4_ = auVar32._4_4_ * auVar64._4_4_;
    auVar55._8_4_ = auVar32._8_4_ * auVar64._8_4_;
    auVar55._12_4_ = auVar32._12_4_ * auVar64._12_4_;
    auVar65._0_4_ = fVar16 * auVar55._0_4_;
    auVar65._4_4_ = fVar39 * auVar55._4_4_;
    auVar65._8_4_ = fVar16 * auVar55._8_4_;
    auVar65._12_4_ = fVar39 * auVar55._12_4_;
    iVar40 = -(uint)(fVar16 == 0.0);
    iVar51 = -(uint)(fVar39 == 0.0);
    iVar52 = -(uint)(fVar16 == 0.0);
    iVar53 = -(uint)(fVar39 == 0.0);
    auVar32 = NEON_frsqrts(auVar55,auVar65,4);
    fVar16 = extraout_s0 * auVar55._0_4_ * auVar32._0_4_;
    fVar39 = extraout_var * auVar55._4_4_ * auVar32._4_4_;
    fVar50 = extraout_var_00 * auVar55._8_4_ * auVar32._8_4_;
    fVar20 = extraout_var_01 * auVar55._12_4_ * auVar32._12_4_;
    fVar21 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar40)));
    auVar43._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar51,fVar21))));
    auVar43[8] = SUB41(fVar50,0) & ~(byte)iVar52;
    auVar43[9] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar43[10] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar43[0xb] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar43[0xc] = SUB41(fVar20,0) & ~(byte)iVar53;
    auVar43[0xd] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar43[0xe] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar43[0xf] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    fVar50 = auVar66._0_4_;
    auVar56._0_4_ = fVar50 * fVar50;
    fVar20 = auVar66._4_4_;
    auVar56._4_4_ = fVar20 * fVar20;
    fVar30 = auVar66._8_4_;
    auVar56._8_4_ = fVar30 * fVar30;
    auVar56._12_4_ = auVar66._12_4_ * auVar66._12_4_;
    auVar66 = NEON_ext(auVar56,auVar56,8,1);
    fVar39 = auVar66._0_4_ + auVar56._0_4_;
    fVar61 = auVar66._4_4_ + auVar56._4_4_;
    fVar16 = fVar39 + fVar61;
    fVar39 = fVar39 + fVar61;
    auVar57._8_8_ = CONCAT44(fVar39,fVar16);
    auVar57._0_8_ = CONCAT44(fVar39,fVar16);
    auVar66 = NEON_frsqrte(auVar57,4);
    auVar73._0_4_ = auVar66._0_4_ * fVar16;
    auVar73._4_4_ = auVar66._4_4_ * fVar39;
    auVar73._8_4_ = auVar66._8_4_ * fVar16;
    auVar73._12_4_ = auVar66._12_4_ * fVar39;
    auVar32 = NEON_frsqrts(auVar66,auVar73,4);
    auVar67._0_4_ = auVar66._0_4_ * auVar32._0_4_;
    auVar67._4_4_ = auVar66._4_4_ * auVar32._4_4_;
    auVar67._8_4_ = auVar66._8_4_ * auVar32._8_4_;
    auVar67._12_4_ = auVar66._12_4_ * auVar32._12_4_;
    auVar74._0_4_ = fVar16 * auVar67._0_4_;
    auVar74._4_4_ = fVar39 * auVar67._4_4_;
    auVar74._8_4_ = fVar16 * auVar67._8_4_;
    auVar74._12_4_ = fVar39 * auVar67._12_4_;
    iVar40 = -(uint)(fVar16 == 0.0);
    iVar51 = -(uint)(fVar39 == 0.0);
    iVar52 = -(uint)(fVar16 == 0.0);
    auVar66 = NEON_frsqrts(auVar67,auVar74,4);
    fVar50 = fVar50 * auVar67._0_4_ * auVar66._0_4_;
    fVar20 = fVar20 * auVar67._4_4_ * auVar66._4_4_;
    fVar30 = fVar30 * auVar67._8_4_ * auVar66._8_4_;
    fVar61 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar50 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar50,0) & ~(byte)iVar40)));
    auVar22._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar51,fVar61))));
    auVar22[8] = SUB41(fVar30,0) & ~(byte)iVar52;
    auVar22[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar22[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar22[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    fVar50 = param_3._0_4_;
    auVar68._0_4_ = fVar50 * fVar50;
    fVar20 = param_3._4_4_;
    auVar68._4_4_ = fVar20 * fVar20;
    fVar30 = param_3._8_4_;
    auVar68._8_4_ = fVar30 * fVar30;
    auVar68._12_4_ = param_3._12_4_ * param_3._12_4_;
    auVar66 = NEON_ext(auVar68,auVar68,8,1);
    fVar39 = auVar66._0_4_ + auVar68._0_4_;
    fVar71 = auVar66._4_4_ + auVar68._4_4_;
    fVar16 = fVar39 + fVar71;
    fVar39 = fVar39 + fVar71;
    auVar69._8_8_ = CONCAT44(fVar39,fVar16);
    auVar69._0_8_ = CONCAT44(fVar39,fVar16);
    auVar66 = NEON_frsqrte(auVar69,4);
    auVar78._0_4_ = auVar66._0_4_ * fVar16;
    auVar78._4_4_ = auVar66._4_4_ * fVar39;
    auVar78._8_4_ = auVar66._8_4_ * fVar16;
    auVar78._12_4_ = auVar66._12_4_ * fVar39;
    auVar32 = NEON_frsqrts(auVar66,auVar78,4);
    auVar75._0_4_ = auVar66._0_4_ * auVar32._0_4_;
    auVar75._4_4_ = auVar66._4_4_ * auVar32._4_4_;
    auVar75._8_4_ = auVar66._8_4_ * auVar32._8_4_;
    auVar75._12_4_ = auVar66._12_4_ * auVar32._12_4_;
    auVar79._0_4_ = fVar16 * auVar75._0_4_;
    auVar79._4_4_ = fVar39 * auVar75._4_4_;
    auVar79._8_4_ = fVar16 * auVar75._8_4_;
    auVar79._12_4_ = fVar39 * auVar75._12_4_;
    auVar66 = NEON_frsqrts(auVar75,auVar79,4);
    fVar50 = fVar50 * auVar75._0_4_ * auVar66._0_4_;
    fVar20 = fVar20 * auVar75._4_4_ * auVar66._4_4_;
    fVar30 = fVar30 * auVar75._8_4_ * auVar66._8_4_;
    iVar40 = -(uint)(fVar16 == 0.0);
    iVar51 = -(uint)(fVar39 == 0.0);
    iVar52 = -(uint)(fVar16 == 0.0);
    auVar31._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar51,
                                             CONCAT13((byte)((uint)fVar50 >> 0x18) &
                                                      ~(byte)((uint)iVar40 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                                               ~(byte)((uint)iVar40 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar50 >> 8) &
                                                                        ~(byte)((uint)iVar40 >> 8),
                                                                        SUB41(fVar50,0) &
                                                                        ~(byte)iVar40)))))));
    auVar31[8] = SUB41(fVar30,0) & ~(byte)iVar52;
    auVar31[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar31[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar31[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    uVar62 = NEON_ext(auVar43._0_8_,auVar31._0_8_,4,1);
    auVar66 = NEON_ext(auVar43,auVar43,8,1);
    fVar20 = (float)((ulong)auVar22._0_8_ >> 0x20);
    fVar30 = auVar31._8_4_;
    auVar32 = NEON_fmov(0x3f800000,4);
    fVar16 = (float)_DAT_03889820 * fVar21 + (float)_DAT_0388a450 * fVar20 +
             (float)_DAT_03889eb0 * fVar30 + auVar32._0_4_;
    fVar39 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar21 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar20 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar30 + auVar32._4_4_;
    fVar50 = (float)_UNK_03889828 * fVar21 + (float)_UNK_0388a458 * fVar20 +
             (float)_UNK_03889eb8 * fVar30 + auVar32._8_4_;
    fVar20 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar21 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar20 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar30 + auVar32._12_4_;
    fVar30 = (float)((ulong)auVar31._0_8_ >> 0x20);
    auVar33._0_4_ = (float)uVar62 + fVar61;
    fVar21 = (float)((ulong)uVar62 >> 0x20);
    auVar33._4_4_ = fVar21 + auVar66._0_4_;
    auVar33._8_4_ = auVar22._8_4_ + fVar30;
    auVar33._12_4_ = 0;
    auVar44._0_4_ = (float)uVar62 - fVar61;
    auVar44._4_4_ = fVar21 - auVar66._0_4_;
    auVar44._8_4_ = auVar22._8_4_ - fVar30;
    auVar44._12_4_ = 0;
    uVar62 = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a888);
    uVar54 = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a710);
    auVar70._8_8_ = uVar54;
    auVar70._0_8_ = uVar62;
    uVar54 = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a758);
    auVar64._4_12_ = auVar70._4_12_;
    auVar64._0_4_ = fVar16;
    auVar58._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a880);
    uVar72 = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a640);
    auVar23._0_4_ = (undefined4)uVar62;
    auVar23._4_4_ = fVar39;
    auVar23._8_8_ = uVar54;
    auVar76._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a700);
    uVar62 = a64_TBL(ZEXT816(0),auVar33,auVar44,DAT_0388a590);
    auVar45._4_4_ = fVar39;
    auVar45._0_4_ = fVar39;
    auVar45._8_4_ = fVar39;
    auVar45._12_4_ = fVar39;
    auVar58._12_4_ = (undefined4)((ulong)uVar72 >> 0x20);
    auVar58._8_4_ = fVar50;
    auVar76._8_8_ = uVar62;
    auVar82._4_4_ = fVar16;
    auVar82._0_4_ = fVar16;
    auVar82._8_4_ = fVar16;
    auVar82._12_4_ = fVar16;
    auVar80._0_8_ = CONCAT44(-(uint)(fVar16 <= fVar39),-(uint)(fVar16 <= fVar39));
    auVar80._8_4_ = -(uint)(fVar16 <= fVar39);
    auVar80._12_4_ = -(uint)(fVar16 <= fVar39);
    auVar81._8_8_ = auVar80._8_8_;
    auVar81._0_8_ = auVar80._0_8_;
    auVar64 = auVar64 ^ (auVar64 ^ auVar23) & auVar80;
    auVar24._4_4_ = fVar50;
    auVar24._0_4_ = fVar50;
    auVar24._8_4_ = fVar50;
    auVar24._12_4_ = fVar50;
    auVar77._0_12_ = auVar76._0_12_;
    auVar77._12_4_ = fVar20;
    auVar82 = auVar82 ^ (auVar82 ^ auVar45) & auVar81;
    auVar34._0_8_ = CONCAT44(-(uint)(auVar82._4_4_ <= fVar50),-(uint)(auVar82._0_4_ <= fVar50));
    auVar34._8_4_ = -(uint)(auVar82._8_4_ <= fVar50);
    auVar34._12_4_ = -(uint)(auVar82._12_4_ <= fVar50);
    auVar46._8_8_ = auVar34._8_8_;
    auVar46._0_8_ = auVar34._0_8_;
    auVar64 = auVar64 ^ (auVar64 ^ auVar58) & auVar34;
    auVar82 = auVar82 ^ (auVar82 ^ auVar24) & auVar46;
    auVar32._0_4_ = -(uint)(auVar82._0_4_ <= fVar20);
    auVar32._4_4_ = -(uint)(auVar82._4_4_ <= fVar20);
    auVar32._8_4_ = -(uint)(auVar82._8_4_ <= fVar20);
    auVar32._12_4_ = -(uint)(auVar82._12_4_ <= fVar20);
    auVar64 = auVar64 ^ (auVar64 ^ auVar77) & auVar32;
    fVar50 = auVar64._0_4_;
    auVar25._0_4_ = fVar50 * fVar50;
    fVar30 = auVar64._4_4_;
    auVar25._4_4_ = fVar30 * fVar30;
    fVar61 = auVar64._8_4_;
    auVar25._8_4_ = fVar61 * fVar61;
    fVar21 = auVar64._12_4_;
    auVar25._12_4_ = fVar21 * fVar21;
    auVar66 = NEON_ext(auVar25,auVar25,8,1);
    fVar39 = auVar66._0_4_ + auVar25._0_4_;
    fVar20 = auVar66._4_4_ + auVar25._4_4_;
    fVar16 = fVar39 + fVar20;
    fVar39 = fVar39 + fVar20;
    auVar26._8_8_ = CONCAT44(fVar39,fVar16);
    auVar26._0_8_ = CONCAT44(fVar39,fVar16);
    auVar66 = NEON_frsqrte(auVar26,4);
    auVar47._0_4_ = auVar66._0_4_ * fVar16;
    auVar47._4_4_ = auVar66._4_4_ * fVar39;
    auVar47._8_4_ = auVar66._8_4_ * fVar16;
    auVar47._12_4_ = auVar66._12_4_ * fVar39;
    auVar32 = NEON_frsqrts(auVar66,auVar47,4);
    auVar35._0_4_ = auVar66._0_4_ * auVar32._0_4_;
    auVar35._4_4_ = auVar66._4_4_ * auVar32._4_4_;
    auVar35._8_4_ = auVar66._8_4_ * auVar32._8_4_;
    auVar35._12_4_ = auVar66._12_4_ * auVar32._12_4_;
    auVar48._0_4_ = fVar16 * auVar35._0_4_;
    auVar48._4_4_ = fVar39 * auVar35._4_4_;
    auVar48._8_4_ = fVar16 * auVar35._8_4_;
    auVar48._12_4_ = fVar39 * auVar35._12_4_;
    iVar40 = -(uint)(fVar16 == 0.0);
    iVar51 = -(uint)(fVar39 == 0.0);
    iVar52 = -(uint)(fVar16 == 0.0);
    iVar53 = -(uint)(fVar39 == 0.0);
    auVar66 = NEON_frsqrts(auVar35,auVar48,4);
    fVar50 = auVar35._0_4_ * auVar66._0_4_ * fVar50;
    fVar30 = auVar35._4_4_ * auVar66._4_4_ * fVar30;
    fVar61 = auVar35._8_4_ * auVar66._8_4_ * fVar61;
    fVar21 = auVar35._12_4_ * auVar66._12_4_ * fVar21;
    fVar20 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar50 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar50,0) & ~(byte)iVar40)));
    auVar17._0_8_ =
         CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar30,0) & ~(byte)iVar51,fVar20))));
    auVar17[8] = SUB41(fVar61,0) & ~(byte)iVar52;
    auVar17[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar17[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar17[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar18[0xc] = SUB41(fVar21,0) & ~(byte)iVar53;
    auVar18._0_12_ = auVar17;
    auVar18[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar18[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar18[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    fVar16 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    auVar27._0_4_ = fVar20 * fVar20;
    fVar30 = (float)((ulong)auVar17._0_8_ >> 0x20);
    auVar27._4_4_ = fVar30 * fVar30;
    fVar61 = auVar17._8_4_;
    auVar27._8_4_ = fVar61 * fVar61;
    fVar21 = auVar18._12_4_;
    auVar27._12_4_ = fVar21 * fVar21;
    auVar66 = NEON_ext(auVar27,auVar27,8,1);
    fVar50 = auVar66._0_4_ + auVar27._0_4_;
    fVar71 = auVar66._4_4_ + auVar27._4_4_;
    fVar39 = fVar50 + fVar71;
    fVar50 = fVar50 + fVar71;
    auVar28._8_8_ = CONCAT44(fVar50,fVar39);
    auVar28._0_8_ = CONCAT44(fVar50,fVar39);
    auVar66 = NEON_frsqrte(auVar28,4);
    iVar40 = -(uint)(fVar39 < fVar16);
    iVar51 = -(uint)(fVar50 < fVar16);
    iVar52 = -(uint)(fVar39 < fVar16);
    iVar53 = -(uint)(fVar50 < fVar16);
    auVar59._0_4_ = auVar66._0_4_ * fVar39;
    auVar59._4_4_ = auVar66._4_4_ * fVar50;
    auVar59._8_4_ = auVar66._8_4_ * fVar39;
    auVar59._12_4_ = auVar66._12_4_ * fVar50;
    auVar32 = NEON_frsqrts(auVar66,auVar59,4);
    auVar49._0_4_ = auVar66._0_4_ * auVar32._0_4_;
    auVar49._4_4_ = auVar66._4_4_ * auVar32._4_4_;
    auVar49._8_4_ = auVar66._8_4_ * auVar32._8_4_;
    auVar49._12_4_ = auVar66._12_4_ * auVar32._12_4_;
    auVar60._0_4_ = fVar39 * auVar49._0_4_;
    auVar60._4_4_ = fVar50 * auVar49._4_4_;
    auVar60._8_4_ = fVar39 * auVar49._8_4_;
    auVar60._12_4_ = fVar50 * auVar49._12_4_;
    bVar36 = (byte)((uint)iVar40 >> 8);
    bVar37 = (byte)((uint)iVar40 >> 0x10);
    bVar38 = (byte)((uint)iVar40 >> 0x18);
    auVar66 = NEON_frsqrts(auVar49,auVar60,4);
    fVar20 = fVar20 * auVar49._0_4_ * auVar66._0_4_;
    fVar30 = fVar30 * auVar49._4_4_ * auVar66._4_4_;
    fVar61 = fVar61 * auVar49._8_4_ * auVar66._8_4_;
    fVar21 = fVar21 * auVar49._12_4_ * auVar66._12_4_;
    auVar19[0] = SUB41(fVar20,0) & ~(byte)iVar40;
    auVar19[1] = (byte)((uint)fVar20 >> 8) & ~bVar36;
    auVar19[2] = (byte)((uint)fVar20 >> 0x10) & ~bVar37;
    auVar19[3] = (byte)((uint)fVar20 >> 0x18) & ~bVar38;
    auVar19[4] = SUB41(fVar30,0) & ~(byte)iVar51;
    auVar19[5] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar51 >> 8);
    auVar19[6] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    auVar19[7] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    auVar19[8] = SUB41(fVar61,0) & ~(byte)iVar52;
    auVar19[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar19[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar19[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar19[0xc] = SUB41(fVar21,0) & ~(byte)iVar53;
    auVar19[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar19[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar19[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    iVar40 = -(uint)((float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~bVar38,
                                     CONCAT12((byte)((uint)fVar39 >> 0x10) & ~bVar37,
                                              CONCAT11((byte)((uint)fVar39 >> 8) & ~bVar36,
                                                       SUB41(fVar39,0) & ~(byte)iVar40))) == 0.0);
    auVar66._8_8_ = uVar4;
    auVar66._0_8_ = uVar15;
    auVar29._0_4_ =
         CONCAT13(~(byte)((uint)iVar40 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar40 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar40 >> 8),~(byte)iVar40)));
    auVar29._4_4_ = auVar29._0_4_;
    auVar29._8_4_ = auVar29._0_4_;
    auVar29._12_4_ = auVar29._0_4_;
    auVar66 = auVar66 ^ (auVar66 ^ auVar19) & auVar29;
    uStack_108 = auVar66._8_8_;
    local_110 = auVar66._0_8_;
  }
  lVar11 = *(long *)(lVar14 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar11;
  }
  plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x170,0);
  FUN_030ec2e4(puVar8,&local_140);
  *puVar8 = &PTR_LAB_04287048;
  plVar7 = param_5 + 0x1a;
  plVar6 = (long *)*plVar7;
  *plVar7 = (long)puVar8;
  if (plVar6 != (long *)0x0) {
    if (plVar6[1] != 0) {
      plVar9 = plVar6 + 2;
      do {
        lVar11 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    puVar8 = (undefined8 *)*plVar7;
  }
  uVar12 = puVar8[7];
  param_5[0x66] = uVar12;
  *(long *)(*(long *)(param_5[0x19] + 0x38) + (uVar12 & 0xffffff) * 0xc0 + 0x98) = param_5[0x18];
  lVar11 = *(long *)(lVar14 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar11;
  }
  plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x230,0);
  memset(plVar6,0,0x230);
  *plVar6 = (long)&PTR_LAB_04287078;
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  plVar6[3] = 0;
  plVar6[4] = -0x8000000000000000;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  plVar6[0x29] = 0;
  plVar6[0x36] = 0;
  plVar6[0x37] = 0;
  plVar6[0x38] = 0;
  plVar6[0x39] = 0;
  plVar9 = (long *)param_5[0x1b];
  param_5[0x1b] = (long)plVar6;
  if (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      plVar6 = plVar9 + 2;
      do {
        lVar14 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    plVar6 = (long *)param_5[0x1b];
  }
  puVar5 = PTR_PTR_0434a080;
  lVar14 = *plVar7;
  uVar10 = *(uint *)(lVar14 + 0x104);
  iVar51 = *(int *)(lVar14 + 0x100);
  iVar40 = iVar51 + 1;
  if (iVar51 < (int)(uVar10 & 0x3fffffff)) {
    lVar11 = *(long *)(lVar14 + 0xf8);
  }
  else {
    uVar15 = *(undefined8 *)(lVar14 + 0xf8);
    if (0x3ffffffe < iVar51) {
      FUN_032bd0a8(iVar40);
      uVar10 = *(uint *)(lVar14 + 0x104);
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    if ((int)uVar10 < iVar40) {
      uVar10 = iVar51 + 1;
    }
    lVar11 = FUN_032bd1d4(puVar5,uVar10,8,uVar15,iVar51,(uint *)(lVar14 + 0x104));
    iVar51 = *(int *)(lVar14 + 0x100);
    *(long *)(lVar14 + 0xf8) = lVar11;
  }
  *(long **)(lVar11 + (long)iVar51 * 8) = plVar6;
  *(int *)(lVar14 + 0x100) = iVar40;
  if (plVar6[1] != 0) {
    plVar7 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar6 + 0x48))(plVar6,lVar14);
  param_5[0x7b] = (long)(param_5 + 0x98);
  param_5[0x78] = param_5[0x1a];
  cVar2 = *(char *)((long)param_5 + 0x79);
  param_5[0x7a] = (long)(param_5 + 0x7e);
  param_5[0x7c] = (long)(param_5 + 0x9c);
  param_5[0x79] = 0;
  param_5[0x7d] = (long)(param_5 + 0x144);
  if ((char)param_5[0xf] != cVar2) {
    *(char *)(param_5 + 0xf) = cVar2;
    if (cVar2 == '\0') {
      pcVar13 = *(code **)(*param_5 + 0x90);
    }
    else {
      pcVar13 = *(code **)(*param_5 + 0x88);
    }
    (*pcVar13)(param_5);
  }
  if ((code *)param_5[0x68] != (code *)0x0) {
    local_158 = param_5;
    (*(code *)param_5[0x68])(param_5 + 0x6c,&local_158);
  }
  *(undefined4 *)((long)param_5 + 0x7c) = 2;
  if (local_148 != (long *)0x0) {
    lVar14 = local_148[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar40 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar40 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar40 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
  local_140 = &PTR_LAB_042d9a40;
  if ((local_d0 != (long *)0x0) && (local_d0[1] != 0)) {
    plVar6 = local_d0 + 2;
    do {
      lVar14 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_d0 + 0x18))();
    }
  }
  if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
    plVar6 = local_80 + 2;
    do {
      lVar14 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 1) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  return 1;
}


