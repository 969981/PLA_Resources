/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b74af4; name: FUN_01b74af4
 */


/* WARNING: Removing unreachable block (ram,0x01b75248) */
/* WARNING: Removing unreachable block (ram,0x01b75264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b74af4(long param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined2 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  code *pcVar27;
  int iVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  float fVar32;
  float fVar33;
  float extraout_s0;
  float fVar34;
  float extraout_var;
  float fVar38;
  float extraout_var_00;
  float fVar39;
  float extraout_var_01;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 uVar68;
  undefined1 auVar72 [16];
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar86;
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined8 uVar92;
  undefined8 uVar93;
  long *local_130;
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  long *local_118;
  long *local_110;
  undefined8 uStack_108;
  long *local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 auStack_c0 [96];
  long *local_58;
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    local_110 = (long *)0x0;
  }
  else {
    FUN_01a111e4(&local_110);
    if (local_110 != (long *)0x0) {
      FUN_02be88ac(&local_e0,local_110,0);
      FUN_00ab5ae0(&local_58,&local_e0);
      plVar31 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar2 = local_e0 + 1;
        do {
          iVar28 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar28;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar28 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_04379498), iVar28 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar30 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar30;
          local_100 = (long *)*plVar31;
          FUN_02a44274(lVar30 + 0xd8,&local_100);
        }
      }
      if (local_58 != (long *)0x0) {
        FUN_02bdbce0();
        fVar33 = (float)*param_3;
        auVar76._0_4_ = fVar33 * (0.0 - extraout_s0);
        fVar66 = (float)((ulong)*param_3 >> 0x20);
        auVar76._4_4_ = fVar66 * (0.0 - extraout_var);
        fVar32 = (float)param_3[1];
        auVar76._8_4_ = fVar32 * (0.0 - extraout_var_00);
        fVar73 = (float)((ulong)param_3[1] >> 0x20);
        auVar76._12_4_ = fVar73 * (0.0 - extraout_var_01);
        auVar69 = NEON_ext(auVar76,auVar76,8,1);
        fVar34 = auVar69._0_4_ + auVar76._0_4_ + auVar69._4_4_ + auVar76._4_4_;
        auVar69._0_8_ =
             (long *)CONCAT44((extraout_var + (fVar66 + fVar66) * fVar34) * 0.2,
                              (extraout_s0 + (fVar33 + fVar33) * fVar34) * 0.2);
        auVar69._8_4_ = (extraout_var_00 + (fVar32 + fVar32) * fVar34) * 0.2;
        auVar69._12_4_ = (extraout_var_01 + (fVar73 + fVar73) * fVar34) * 0.2;
        pcStack_d8 = auVar69._8_8_;
        local_e0 = auVar69._0_8_;
        FUN_02bdb28c(local_58,&local_e0);
        if (local_58 != (long *)0x0) {
          lVar30 = local_58[0xb];
          piVar1 = (int *)(lVar30 + 0xc);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            *(undefined8 *)(lVar30 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
      }
      if (local_110 != (long *)0x0) {
        lVar30 = local_110[0xb];
        piVar1 = (int *)(lVar30 + 0xc);
        do {
          iVar28 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar28 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar28 + -1 == 0) {
          *(undefined8 *)(lVar30 + 0x18) = 0;
          (**(code **)(*local_110 + 0x20))();
        }
      }
    }
  }
  local_e0 = (long *)0x0;
  pcStack_d8 = (code *)0x0;
  FUN_0191c300(&local_e0,param_1 + 0x340);
  if (local_e0 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    FUN_0191cb34(&local_100);
    plVar2 = local_e0;
    plVar31 = local_100;
    if (local_e0 != (long *)0x0) {
      plVar4 = local_e0 + 1;
      do {
        iVar28 = (int)*plVar4 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = iVar28;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar28 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_04379498), iVar28 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar30 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar30;
        local_100 = (long *)*plVar2;
        FUN_02a44274(lVar30 + 0xd8,&local_100);
      }
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar28 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  plVar2 = *(long **)PTR_DAT_0437a0d8;
  pcVar3 = *(char **)(PTR_DAT_0437a0d8 + 8);
  uVar87 = *(undefined8 *)(PTR_DAT_0437a0d8 + 0x10);
  plVar4 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (plVar31 == (long *)0x0) {
    local_100 = plVar2;
    local_f8 = pcVar3;
    local_f0 = uVar87;
    local_e8 = plVar4;
  }
  else {
    puVar29 = &DAT_04241f20;
    if ((1.1920929e-07 < *(float *)(param_1 + 0x61c)) &&
       (puVar29 = &DAT_04241f20, 1.0 < *(float *)(param_1 + 0x618) / *(float *)(param_1 + 0x61c))) {
      puVar29 = &DAT_04241f38;
    }
    FUN_019225b0(&local_e0,plVar31,*puVar29);
    local_100 = local_e0;
    local_e8 = local_c8;
    local_f8 = (char *)pcStack_d8;
    local_f0 = local_d0;
    if ((local_c8 != (long *)0x0) && ((**(code **)(*local_c8 + 0x18))(), local_c8 != (long *)0x0)) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    lVar30 = plVar31[0xb];
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      iVar28 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      *(undefined8 *)(lVar30 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if (*local_f8 != '\0') {
    if (*(long *)(param_1 + 0x2a0) == 0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_009acf14(&local_58);
      if (local_58 != (long *)0x0) {
        fVar34 = (*param_2 + (float)*param_3) - *param_2;
        fVar38 = (param_2[1] + (float)((ulong)*param_3 >> 0x20)) - param_2[1];
        fVar39 = (param_2[2] + (float)param_3[1]) - param_2[2];
        fVar40 = (param_2[3] + (float)((ulong)param_3[1] >> 0x20)) - param_2[3];
        fVar33 = fVar34 * fVar34;
        fVar66 = fVar38 * fVar38;
        uVar42 = (undefined1)((uint)fVar66 >> 8);
        uVar44 = (undefined1)((uint)fVar66 >> 0x10);
        uVar46 = (undefined1)((uint)fVar66 >> 0x18);
        fVar32 = fVar39 * fVar39;
        uVar48 = (undefined1)((uint)fVar32 >> 8);
        uVar55 = (undefined1)((uint)fVar32 >> 0x10);
        uVar57 = (undefined1)((uint)fVar32 >> 0x18);
        fVar73 = fVar40 * fVar40;
        uVar60 = (undefined1)((uint)fVar73 >> 8);
        uVar62 = (undefined1)((uint)fVar73 >> 0x10);
        uVar64 = (undefined1)((uint)fVar73 >> 0x18);
        auVar7[4] = SUB41(fVar66,0);
        auVar7._0_4_ = fVar33;
        auVar7[5] = uVar42;
        auVar7[6] = uVar44;
        auVar7[7] = uVar46;
        auVar7[8] = SUB41(fVar32,0);
        auVar7[9] = uVar48;
        auVar7[10] = uVar55;
        auVar7[0xb] = uVar57;
        auVar7[0xc] = SUB41(fVar73,0);
        auVar7[0xd] = uVar60;
        auVar7[0xe] = uVar62;
        auVar7[0xf] = uVar64;
        auVar8[4] = SUB41(fVar66,0);
        auVar8._0_4_ = fVar33;
        auVar8[5] = uVar42;
        auVar8[6] = uVar44;
        auVar8[7] = uVar46;
        auVar8[8] = SUB41(fVar32,0);
        auVar8[9] = uVar48;
        auVar8[10] = uVar55;
        auVar8[0xb] = uVar57;
        auVar8[0xc] = SUB41(fVar73,0);
        auVar8[0xd] = uVar60;
        auVar8[0xe] = uVar62;
        auVar8[0xf] = uVar64;
        auVar69 = NEON_ext(auVar7,auVar8,8,1);
        fVar33 = auVar69._0_4_ + fVar33;
        fVar66 = auVar69._4_4_ + fVar66;
        fVar32 = fVar33 + fVar66;
        fVar33 = fVar33 + fVar66;
        uVar42 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar46 = (undefined1)((uint)fVar33 >> 0x10);
        uVar48 = (undefined1)((uint)fVar33 >> 0x18);
        auVar9[4] = uVar42;
        auVar9._0_4_ = fVar32;
        auVar9[5] = uVar44;
        auVar9[6] = uVar46;
        auVar9[7] = uVar48;
        auVar9[8] = SUB41(fVar32,0);
        auVar9[9] = (char)((uint)fVar32 >> 8);
        auVar9[10] = (char)((uint)fVar32 >> 0x10);
        auVar9[0xb] = (char)((uint)fVar32 >> 0x18);
        auVar9[0xc] = uVar42;
        auVar9[0xd] = uVar44;
        auVar9[0xe] = uVar46;
        auVar9[0xf] = uVar48;
        auVar69 = NEON_frsqrte(auVar9,4);
        auVar75._0_4_ = auVar69._0_4_ * fVar32;
        auVar75._4_4_ = auVar69._4_4_ * fVar33;
        auVar75._8_4_ = auVar69._8_4_ * fVar32;
        uVar19 = (undefined2)(CONCAT15(uVar44,CONCAT14(uVar42,fVar32)) >> 0x20);
        auVar75._12_4_ = auVar69._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19));
        auVar76 = NEON_frsqrts(auVar69,auVar75,4);
        auVar70._0_4_ = auVar69._0_4_ * auVar76._0_4_;
        auVar70._4_4_ = auVar69._4_4_ * auVar76._4_4_;
        auVar70._8_4_ = auVar69._8_4_ * auVar76._8_4_;
        auVar70._12_4_ = auVar69._12_4_ * auVar76._12_4_;
        auVar77._0_4_ = fVar32 * auVar70._0_4_;
        auVar77._4_4_ = fVar33 * auVar70._4_4_;
        auVar77._8_4_ = fVar32 * auVar70._8_4_;
        auVar77._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19)) * auVar70._12_4_;
        iVar28 = -(uint)(fVar32 == 0.0);
        iVar20 = -(uint)(fVar33 == 0.0);
        iVar21 = -(uint)(fVar32 == 0.0);
        iVar22 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19)) == 0.0);
        auVar69 = NEON_frsqrts(auVar70,auVar77,4);
        fVar34 = fVar34 * auVar70._0_4_ * auVar69._0_4_;
        fVar38 = fVar38 * auVar70._4_4_ * auVar69._4_4_;
        fVar39 = fVar39 * auVar70._8_4_ * auVar69._8_4_;
        fVar40 = fVar40 * auVar70._12_4_ * auVar69._12_4_;
        bVar41 = SUB41(fVar34,0) & ~(byte)iVar28;
        bVar43 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar28 >> 8);
        bVar45 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
        bVar47 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
        bVar49 = SUB41(fVar38,0) & ~(byte)iVar20;
        bVar50 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar20 >> 8);
        bVar51 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
        bVar52 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
        bVar53 = SUB41(fVar39,0) & ~(byte)iVar21;
        bVar54 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar21 >> 8);
        bVar56 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
        bVar58 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
        bVar59 = SUB41(fVar40,0) & ~(byte)iVar22;
        bVar61 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar22 >> 8);
        bVar63 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
        bVar65 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
        auVar71._8_8_ = DAT_0388a148;
        auVar71._0_8_ = DAT_0388a140;
        uVar74 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a880);
        uVar87 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a6f0);
        auVar10[1] = bVar43;
        auVar10[0] = bVar41;
        auVar10[2] = bVar45;
        auVar10[3] = bVar47;
        auVar10[4] = bVar49;
        auVar10[5] = bVar50;
        auVar10[6] = bVar51;
        auVar10[7] = bVar52;
        auVar10[8] = bVar53;
        auVar10[9] = bVar54;
        auVar10[10] = bVar56;
        auVar10[0xb] = bVar58;
        auVar10[0xc] = bVar59;
        auVar10[0xd] = bVar61;
        auVar10[0xe] = bVar63;
        auVar10[0xf] = bVar65;
        uVar86 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
        fVar33 = (float)((ulong)uVar86 >> 0x20);
        auVar11[1] = bVar43;
        auVar11[0] = bVar41;
        auVar11[2] = bVar45;
        auVar11[3] = bVar47;
        auVar11[4] = bVar49;
        auVar11[5] = bVar50;
        auVar11[6] = bVar51;
        auVar11[7] = bVar52;
        auVar11[8] = bVar53;
        auVar11[9] = bVar54;
        auVar11[10] = bVar56;
        auVar11[0xb] = bVar58;
        auVar11[0xc] = bVar59;
        auVar11[0xd] = bVar61;
        auVar11[0xe] = bVar63;
        auVar11[0xf] = bVar65;
        uVar92 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6d8);
        uVar24 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a680);
        uVar67 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a6d8);
        auVar12[1] = bVar43;
        auVar12[0] = bVar41;
        auVar12[2] = bVar45;
        auVar12[3] = bVar47;
        auVar12[4] = bVar49;
        auVar12[5] = bVar50;
        auVar12[6] = bVar51;
        auVar12[7] = bVar52;
        auVar12[8] = bVar53;
        auVar12[9] = bVar54;
        auVar12[10] = bVar56;
        auVar12[0xb] = bVar58;
        auVar12[0xc] = bVar59;
        auVar12[0xd] = bVar61;
        auVar12[0xe] = bVar63;
        auVar12[0xf] = bVar65;
        uVar93 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6f0);
        auVar13[1] = bVar43;
        auVar13[0] = bVar41;
        auVar13[2] = bVar45;
        auVar13[3] = bVar47;
        auVar13[4] = bVar49;
        auVar13[5] = bVar50;
        auVar13[6] = bVar51;
        auVar13[7] = bVar52;
        auVar13[8] = bVar53;
        auVar13[9] = bVar54;
        auVar13[10] = bVar56;
        auVar13[0xb] = bVar58;
        auVar13[0xc] = bVar59;
        auVar13[0xd] = bVar61;
        auVar13[0xe] = bVar63;
        auVar13[0xf] = bVar65;
        uVar68 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
        fVar66 = (float)((ulong)uVar68 >> 0x20);
        fVar34 = (float)uVar74 * (float)uVar86 - (float)uVar24 * (float)uVar68;
        auVar78._0_8_ =
             CONCAT44((float)((ulong)uVar74 >> 0x20) * fVar33 -
                      (float)((ulong)uVar24 >> 0x20) * fVar66,fVar34);
        auVar78._8_4_ = (float)uVar87 * (float)uVar92 - (float)uVar67 * (float)uVar93;
        auVar78._12_4_ =
             (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar92 >> 0x20) -
             (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar93 >> 0x20);
        uVar87 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a680);
        uVar24 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6d8);
        uVar74 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6f0);
        uVar67 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a880);
        fVar38 = (float)uVar68 * (float)uVar87 - (float)uVar86 * (float)uVar67;
        fVar39 = fVar66 * (float)((ulong)uVar87 >> 0x20) - fVar33 * (float)((ulong)uVar67 >> 0x20);
        fVar40 = (float)uVar93 * (float)uVar24 - (float)uVar92 * (float)uVar74;
        fVar33 = (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar53)));
        auVar69 = NEON_fmov(0x3f800000,4);
        uVar87 = NEON_ext(auVar78._0_8_,
                          CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41)))))
                                                  )),4,1);
        fVar66 = (float)_DAT_03889820 * fVar34 + (float)_DAT_0388a450 * fVar39 +
                 (float)_DAT_03889eb0 * fVar33 + auVar69._0_4_;
        fVar32 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar34 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar39 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar33 + auVar69._4_4_;
        fVar73 = (float)_UNK_03889828 * fVar34 + (float)_UNK_0388a458 * fVar39 +
                 (float)_UNK_03889eb8 * fVar33 + auVar69._8_4_;
        fVar33 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar34 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar39 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar33 + auVar69._12_4_;
        auVar69 = NEON_ext(auVar78,auVar78,8,1);
        auVar79._0_4_ = fVar38 + (float)uVar87;
        fVar34 = (float)((ulong)uVar87 >> 0x20);
        auVar79._4_4_ = auVar69._0_4_ + fVar34;
        auVar79._8_4_ = (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49))) + fVar40;
        auVar79._12_4_ = 0;
        auVar83._0_4_ = (float)uVar87 - fVar38;
        auVar83._4_4_ = fVar34 - auVar69._0_4_;
        auVar83._8_4_ = fVar40 - (float)CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,bVar49)));
        auVar83._12_4_ = 0;
        uVar87 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a888);
        uVar26 = (undefined4)((ulong)uVar87 >> 0x20);
        uVar24 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a710);
        auVar35._0_8_ = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a880);
        uVar67 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a758);
        uVar68 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a640);
        uVar74 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a700);
        uVar86 = a64_TBL(ZEXT816(0),auVar79,auVar83,DAT_0388a590);
        auVar84._4_4_ = fVar32;
        auVar84._0_4_ = fVar32;
        auVar84._8_4_ = fVar32;
        auVar84._12_4_ = fVar32;
        auVar35._12_4_ = (undefined4)((ulong)uVar68 >> 0x20);
        auVar35._8_4_ = fVar73;
        auVar91._4_4_ = fVar66;
        auVar91._0_4_ = fVar66;
        auVar91._8_4_ = fVar66;
        auVar91._12_4_ = fVar66;
        auVar88._0_8_ = CONCAT44(-(uint)(fVar66 <= fVar32),-(uint)(fVar66 <= fVar32));
        auVar88._8_4_ = -(uint)(fVar66 <= fVar32);
        auVar88._12_4_ = -(uint)(fVar66 <= fVar32);
        auVar90._8_8_ = auVar88._8_8_;
        auVar90._0_8_ = auVar88._0_8_;
        auVar14[4] = SUB41(fVar32,0);
        auVar14._0_4_ = (int)uVar87;
        auVar14[5] = (char)((uint)fVar32 >> 8);
        auVar14[6] = (char)((uint)fVar32 >> 0x10);
        auVar14[7] = (char)((uint)fVar32 >> 0x18);
        auVar14[8] = (char)uVar67;
        auVar14[9] = (char)((ulong)uVar67 >> 8);
        auVar14[10] = (char)((ulong)uVar67 >> 0x10);
        auVar14[0xb] = (char)((ulong)uVar67 >> 0x18);
        auVar14[0xc] = (char)((ulong)uVar67 >> 0x20);
        auVar14[0xd] = (char)((ulong)uVar67 >> 0x28);
        auVar14[0xe] = (char)((ulong)uVar67 >> 0x30);
        auVar14[0xf] = (char)((ulong)uVar67 >> 0x38);
        auVar25._4_4_ = uVar26;
        auVar25._0_4_ = fVar66;
        auVar25._8_8_ = uVar24;
        auVar89._4_4_ = uVar26;
        auVar89._0_4_ = fVar66;
        auVar89._8_8_ = uVar24;
        auVar89 = auVar89 ^ (auVar25 ^ auVar14) & auVar88;
        uVar42 = SUB41(fVar73,0);
        uVar44 = (undefined1)((uint)fVar73 >> 8);
        uVar46 = (undefined1)((uint)fVar73 >> 0x10);
        uVar48 = (undefined1)((uint)fVar73 >> 0x18);
        auVar91 = auVar91 ^ (auVar91 ^ auVar84) & auVar90;
        auVar80._0_8_ = CONCAT44(-(uint)(auVar91._4_4_ <= fVar73),-(uint)(auVar91._0_4_ <= fVar73));
        auVar80._8_4_ = -(uint)(auVar91._8_4_ <= fVar73);
        auVar80._12_4_ = -(uint)(auVar91._12_4_ <= fVar73);
        auVar85._8_8_ = auVar80._8_8_;
        auVar85._0_8_ = auVar80._0_8_;
        auVar89 = auVar89 ^ (auVar89 ^ auVar35) & auVar80;
        auVar15[4] = uVar42;
        auVar15._0_4_ = fVar73;
        auVar15[5] = uVar44;
        auVar15[6] = uVar46;
        auVar15[7] = uVar48;
        auVar15[8] = uVar42;
        auVar15[9] = uVar44;
        auVar15[10] = uVar46;
        auVar15[0xb] = uVar48;
        auVar15[0xc] = uVar42;
        auVar15[0xd] = uVar44;
        auVar15[0xe] = uVar46;
        auVar15[0xf] = uVar48;
        auVar91 = auVar91 ^ (auVar91 ^ auVar15) & auVar85;
        auVar36._0_4_ = -(uint)(auVar91._0_4_ <= fVar33);
        auVar36._4_4_ = -(uint)(auVar91._4_4_ <= fVar33);
        auVar36._8_4_ = -(uint)(auVar91._8_4_ <= fVar33);
        auVar36._12_4_ = -(uint)(auVar91._12_4_ <= fVar33);
        auVar23._8_4_ = (int)uVar86;
        auVar23._0_8_ = uVar74;
        auVar23._12_4_ = fVar33;
        auVar89 = auVar89 ^ (auVar89 ^ auVar23) & auVar36;
        fVar34 = auVar89._0_4_;
        fVar33 = fVar34 * fVar34;
        fVar38 = auVar89._4_4_;
        fVar66 = fVar38 * fVar38;
        uVar42 = (undefined1)((uint)fVar66 >> 8);
        uVar44 = (undefined1)((uint)fVar66 >> 0x10);
        uVar46 = (undefined1)((uint)fVar66 >> 0x18);
        fVar39 = auVar89._8_4_;
        fVar32 = fVar39 * fVar39;
        uVar48 = (undefined1)((uint)fVar32 >> 8);
        uVar55 = (undefined1)((uint)fVar32 >> 0x10);
        uVar57 = (undefined1)((uint)fVar32 >> 0x18);
        fVar40 = auVar89._12_4_;
        fVar73 = fVar40 * fVar40;
        uVar60 = (undefined1)((uint)fVar73 >> 8);
        uVar62 = (undefined1)((uint)fVar73 >> 0x10);
        uVar64 = (undefined1)((uint)fVar73 >> 0x18);
        auVar16[4] = SUB41(fVar66,0);
        auVar16._0_4_ = fVar33;
        auVar16[5] = uVar42;
        auVar16[6] = uVar44;
        auVar16[7] = uVar46;
        auVar16[8] = SUB41(fVar32,0);
        auVar16[9] = uVar48;
        auVar16[10] = uVar55;
        auVar16[0xb] = uVar57;
        auVar16[0xc] = SUB41(fVar73,0);
        auVar16[0xd] = uVar60;
        auVar16[0xe] = uVar62;
        auVar16[0xf] = uVar64;
        auVar17[4] = SUB41(fVar66,0);
        auVar17._0_4_ = fVar33;
        auVar17[5] = uVar42;
        auVar17[6] = uVar44;
        auVar17[7] = uVar46;
        auVar17[8] = SUB41(fVar32,0);
        auVar17[9] = uVar48;
        auVar17[10] = uVar55;
        auVar17[0xb] = uVar57;
        auVar17[0xc] = SUB41(fVar73,0);
        auVar17[0xd] = uVar60;
        auVar17[0xe] = uVar62;
        auVar17[0xf] = uVar64;
        auVar69 = NEON_ext(auVar16,auVar17,8,1);
        fVar33 = auVar69._0_4_ + fVar33;
        fVar66 = auVar69._4_4_ + fVar66;
        fVar32 = fVar33 + fVar66;
        fVar33 = fVar33 + fVar66;
        uVar42 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar46 = (undefined1)((uint)fVar33 >> 0x10);
        uVar48 = (undefined1)((uint)fVar33 >> 0x18);
        auVar18[4] = uVar42;
        auVar18._0_4_ = fVar32;
        auVar18[5] = uVar44;
        auVar18[6] = uVar46;
        auVar18[7] = uVar48;
        auVar18[8] = SUB41(fVar32,0);
        auVar18[9] = (char)((uint)fVar32 >> 8);
        auVar18[10] = (char)((uint)fVar32 >> 0x10);
        auVar18[0xb] = (char)((uint)fVar32 >> 0x18);
        auVar18[0xc] = uVar42;
        auVar18[0xd] = uVar44;
        auVar18[0xe] = uVar46;
        auVar18[0xf] = uVar48;
        auVar69 = NEON_frsqrte(auVar18,4);
        auVar81._0_4_ = auVar69._0_4_ * fVar32;
        auVar81._4_4_ = auVar69._4_4_ * fVar33;
        auVar81._8_4_ = auVar69._8_4_ * fVar32;
        uVar19 = (undefined2)(CONCAT15(uVar44,CONCAT14(uVar42,fVar32)) >> 0x20);
        auVar81._12_4_ = auVar69._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19));
        auVar76 = NEON_frsqrts(auVar69,auVar81,4);
        auVar72._0_4_ = auVar69._0_4_ * auVar76._0_4_;
        auVar72._4_4_ = auVar69._4_4_ * auVar76._4_4_;
        auVar72._8_4_ = auVar69._8_4_ * auVar76._8_4_;
        auVar72._12_4_ = auVar69._12_4_ * auVar76._12_4_;
        auVar82._0_4_ = fVar32 * auVar72._0_4_;
        auVar82._4_4_ = fVar33 * auVar72._4_4_;
        auVar82._8_4_ = fVar32 * auVar72._8_4_;
        auVar82._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19)) * auVar72._12_4_;
        iVar28 = -(uint)(fVar32 == 0.0);
        iVar20 = -(uint)(fVar33 == 0.0);
        iVar21 = -(uint)(fVar32 == 0.0);
        iVar22 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar46,uVar19)) == 0.0);
        auVar69 = NEON_frsqrts(auVar72,auVar82,4);
        fVar34 = auVar72._0_4_ * auVar69._0_4_ * fVar34;
        fVar38 = auVar72._4_4_ * auVar69._4_4_ * fVar38;
        fVar39 = auVar72._8_4_ * auVar69._8_4_ * fVar39;
        fVar40 = auVar72._12_4_ * auVar69._12_4_ * fVar40;
        auVar37._0_8_ =
             (long *)CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                              CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                       CONCAT15((byte)((uint)fVar38 >> 8) &
                                                ~(byte)((uint)iVar20 >> 8),
                                                CONCAT14(SUB41(fVar38,0) & ~(byte)iVar20,
                                                         CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                                  ~(byte)((uint)iVar28 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar34 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar28 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar34 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                                  SUB41(fVar34,0) & ~(byte)iVar28)))))));
        auVar37[8] = SUB41(fVar39,0) & ~(byte)iVar21;
        auVar37[9] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar21 >> 8);
        auVar37[10] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
        auVar37[0xb] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
        auVar37[0xc] = SUB41(fVar40,0) & ~(byte)iVar22;
        auVar37[0xd] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar22 >> 8);
        auVar37[0xe] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
        auVar37[0xf] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
        uStack_108 = auVar37._8_8_;
        uVar87 = *(undefined8 *)(param_1 + 8);
        local_110 = auVar37._0_8_;
        auVar69 = FUN_00cb8d18(&local_110);
        local_124[0] = 1;
        local_120[0] = 1;
        local_11c[0] = 0;
        pcStack_d8 = auVar69._8_8_;
        local_e0 = auVar69._0_8_;
        FUN_01b752fc(&local_118,uVar87,param_2,&local_e0,&local_100,local_11c,local_120,local_124);
        local_d0 = 0;
        local_c8 = (long *)0x0;
        local_e0 = (long *)0x0;
        pcStack_d8 = (code *)0x0;
        FUN_00bdc73c(&local_130,local_58[0xf],0xc,&local_118,&local_e0,0);
        pcVar27 = pcStack_d8;
        if (pcStack_d8 == (code *)0x0) {
          pcStack_d8 = (code *)0x0;
        }
        else {
          local_d0 = 0;
          local_c8 = (long *)0x0;
          local_e0 = (long *)0x0;
          pcStack_d8 = (code *)0x0;
          (*pcVar27)(auStack_c0);
        }
        if (local_130 != (long *)0x0) {
          lVar30 = local_130[0xb];
          piVar1 = (int *)(lVar30 + 0xc);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            *(undefined8 *)(lVar30 + 0x18) = 0;
            (**(code **)(*local_130 + 0x20))();
          }
        }
        if (local_118 != (long *)0x0) {
          lVar30 = local_118[0xb];
          piVar1 = (int *)(lVar30 + 0xc);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            *(undefined8 *)(lVar30 + 0x18) = 0;
            (**(code **)(*local_118 + 0x20))();
          }
        }
        if (local_58 != (long *)0x0) {
          lVar30 = local_58[0xb];
          piVar1 = (int *)(lVar30 + 0xc);
          do {
            iVar28 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar28 + -1 == 0) {
            *(undefined8 *)(lVar30 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (*(char *)(param_1 + 0x638) == '\0') {
    *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 0x638) = 1;
    *(undefined4 *)(param_1 + 0x5f8) = 2;
  }
  return;
}


