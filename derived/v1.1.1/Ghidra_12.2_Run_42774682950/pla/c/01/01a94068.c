/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a94068; name: FUN_01a94068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a94068(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,byte *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float extraout_s0;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  float extraout_var;
  undefined1 auVar16 [16];
  float extraout_var_00;
  float extraout_var_01;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_q0 [16];
  float fVar31;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  byte bVar40;
  float fVar41;
  int iVar42;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  float fVar60;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  int iVar66;
  byte bVar68;
  byte bVar69;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar61;
  int iVar71;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar58;
  byte bVar64;
  byte bVar70;
  float fVar67;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar87;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  long *local_a0;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  long *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  local_80 = (long *)0x0;
  pbStack_78 = (byte *)0x0;
  auVar16 = FUN_00af7e30(&local_80,param_4 + 0x230);
  plVar11 = local_80;
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  if (local_80 == (long *)0x0) {
LAB_01a940a4:
    bVar5 = false;
  }
  else {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar42 = *(int *)((long)local_80 + 0xc);
      do {
        plVar12 = (long *)plVar11[2];
        if (((*puVar6 & 1) == 0) &&
           (iVar61 = __cxa_guard_acquire(puVar6), auVar16 = extraout_q0, iVar61 != 0)) {
          uVar88 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar88;
          auVar16 = __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01a948bc;
          if (plVar12 == (long *)puVar7) break;
          plVar12 = (long *)*plVar12;
        }
        iVar61 = *piVar1;
        if (iVar61 == iVar42) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar42 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar10 = plVar11[3];
            local_a0 = (long *)0x0;
            plVar11 = local_80;
            if (lVar10 != 0) {
              local_a0 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01a943e4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar42 = iVar61;
      } while (iVar61 != 0);
    }
LAB_01a948bc:
    local_a0 = (long *)0x0;
    plVar11 = local_80;
joined_r0x01a943e4:
    local_80 = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        iVar42 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar42;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar42 == 0) {
        plVar11[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar42 = __cxa_guard_acquire(PTR_DAT_04379498), iVar42 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58 = (long *)*plVar11;
        auVar16 = FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    if (local_a0 == (long *)0x0) goto LAB_01a940a4;
    FUN_00a9ecd4(&local_80,local_a0);
    FUN_009983e4(&local_60,&local_80);
    plVar11 = local_80;
    if (local_80 != (long *)0x0) {
      plVar12 = local_80 + 1;
      do {
        iVar42 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar42;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar42 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar42 = __cxa_guard_acquire(PTR_DAT_04379498), iVar42 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58 = (long *)*plVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    if (local_60 == (long *)0x0) {
LAB_01a94834:
      bVar5 = false;
      if (local_60 == (long *)0x0) goto LAB_01a947e0;
LAB_01a947c4:
      lVar10 = local_60[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar42 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar42 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar42 + -1 != 0) goto LAB_01a947e0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      if (bVar5) goto LAB_01a947e4;
LAB_01a94878:
      auVar16._4_4_ = fStack_8c;
      auVar16._0_4_ = local_90;
      auVar16._8_4_ = fStack_88;
      auVar16._12_4_ = uStack_84;
      bVar5 = false;
    }
    else {
      FUN_028a17c4(&local_58);
      plVar11 = local_58;
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar42 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar42 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      puVar2 = (undefined8 *)PTR_DAT_0437a578;
      if (plVar11[0x19] != 0) {
        puVar2 = (undefined8 *)(plVar11[0x19] + 0x88);
      }
      plVar11 = (long *)*puVar2;
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 10;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(int *)plVar12 = (int)*plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (param_5 == (byte *)0x0) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar42 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar42 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        local_80 = *(long **)PTR_DAT_0437a0d8;
        pbStack_78 = *(byte **)(PTR_DAT_0437a0d8 + 8);
        local_70 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        local_68 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
      }
      else {
        local_70 = strlen((char *)param_5);
        bVar40 = *param_5;
        local_80 = (long *)&DAT_cbf29ce484222645;
        pbVar9 = param_5;
        while (bVar40 != 0) {
          pbVar9 = pbVar9 + 1;
          local_80 = (long *)(((ulong)local_80 ^ (ulong)bVar40) * 0x100000001b3);
          bVar40 = *pbVar9;
        }
        local_68 = (long *)0x0;
        pbStack_78 = param_5;
      }
      uVar8 = FUN_02b68184(plVar11,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if ((~uVar8 & 0xffff) == 0) {
        bVar5 = false;
      }
      else {
        pbVar9 = (byte *)FUN_02b6962c(plVar11,uVar8);
        auVar16 = *(undefined1 (*) [16])(pbVar9 + 0x10);
        bVar40 = (byte)_DAT_038897c0;
        bVar56 = (byte)((ulong)_DAT_038897c0 >> 8);
        bVar57 = (byte)((ulong)_DAT_038897c0 >> 0x10);
        bVar58 = (byte)((ulong)_DAT_038897c0 >> 0x18);
        bVar59 = (byte)((ulong)_DAT_038897c0 >> 0x20);
        bVar62 = (byte)((ulong)_DAT_038897c0 >> 0x28);
        bVar63 = (byte)((ulong)_DAT_038897c0 >> 0x30);
        bVar64 = (byte)((ulong)_DAT_038897c0 >> 0x38);
        bVar65 = (byte)_UNK_038897c8;
        bVar68 = (byte)((ulong)_UNK_038897c8 >> 8);
        bVar69 = (byte)((ulong)_UNK_038897c8 >> 0x10);
        bVar70 = (byte)((ulong)_UNK_038897c8 >> 0x18);
        auVar80 = *(undefined1 (*) [16])(pbVar9 + 0x20);
        uStack_b8 = (float)CONCAT13(pbVar9[0xb] & bVar70,
                                    CONCAT12(pbVar9[10] & bVar69,
                                             CONCAT11(pbVar9[9] & bVar68,pbVar9[8] & bVar65)));
        local_c0 = (float)CONCAT13(pbVar9[3] & bVar58,
                                   CONCAT12(pbVar9[2] & bVar57,
                                            CONCAT11(pbVar9[1] & bVar56,*pbVar9 & bVar40)));
        uStack_bc = (float)CONCAT13(pbVar9[7] & bVar64,
                                    CONCAT12(pbVar9[6] & bVar63,
                                             CONCAT11(pbVar9[5] & bVar62,pbVar9[4] & bVar59)));
        uStack_a8 = (float)CONCAT13(auVar16[0xb] & bVar70,
                                    CONCAT12(auVar16[10] & bVar69,
                                             CONCAT11(auVar16[9] & bVar68,auVar16[8] & bVar65)));
        local_b0 = (float)CONCAT13(auVar16[3] & bVar58,
                                   CONCAT12(auVar16[2] & bVar57,
                                            CONCAT11(auVar16[1] & bVar56,auVar16[0] & bVar40)));
        uStack_ac = (float)CONCAT13(auVar16[7] & bVar64,
                                    CONCAT12(auVar16[6] & bVar63,
                                             CONCAT11(auVar16[5] & bVar62,auVar16[4] & bVar59)));
        fVar13 = (float)CONCAT13(auVar80[3] & bVar58,
                                 CONCAT12(auVar80[2] & bVar57,
                                          CONCAT11(auVar80[1] & bVar56,auVar80[0] & bVar40)));
        auVar14._0_8_ =
             CONCAT17(auVar80[7] & bVar64,
                      CONCAT16(auVar80[6] & bVar63,
                               CONCAT15(auVar80[5] & bVar62,CONCAT14(auVar80[4] & bVar59,fVar13))));
        auVar14[8] = auVar80[8] & bVar65;
        auVar14[9] = auVar80[9] & bVar68;
        auVar14[10] = auVar80[10] & bVar69;
        auVar14[0xb] = auVar80[0xb] & bVar70;
        fStack_88 = auVar14._8_4_;
        fStack_8c = (float)((ulong)auVar14._0_8_ >> 0x20);
        FUN_009c69bc(&local_80,param_4);
        auVar18 = (**(code **)(*local_80 + 0x40))();
        if (local_80 != (long *)0x0) {
          lVar10 = local_80[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar42 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar42 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar42 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
        local_f0 = auVar18._0_4_;
        fStack_ec = auVar18._4_4_;
        fStack_e8 = auVar18._8_4_;
        fStack_e4 = auVar18._12_4_;
        fStack_e0 = auVar16._0_4_;
        fStack_dc = auVar16._4_4_;
        fStack_d8 = auVar16._8_4_;
        fStack_d4 = auVar16._12_4_;
        bVar5 = true;
        local_d0 = auVar80._0_4_;
        fStack_cc = auVar80._4_4_;
        fStack_c8 = auVar80._8_4_;
        fStack_c4 = auVar80._12_4_;
        fVar31 = local_f0 * local_b0 + fStack_e0 * uStack_ac + local_d0 * uStack_a8;
        fVar78 = fStack_ec * local_b0 + fStack_dc * uStack_ac + fStack_cc * uStack_a8;
        fVar39 = fStack_e8 * local_b0 + fStack_d8 * uStack_ac + fStack_c8 * uStack_a8;
        fVar20 = local_f0 * local_c0 + fStack_e0 * uStack_bc + local_d0 * uStack_b8;
        auVar26._0_8_ =
             CONCAT44(fStack_ec * local_c0 + fStack_dc * uStack_bc + fStack_cc * uStack_b8,fVar20);
        auVar26._8_4_ = fStack_e8 * local_c0 + fStack_d8 * uStack_bc + fStack_c8 * uStack_b8;
        auVar26._12_4_ = fStack_e4 * local_c0 + fStack_d4 * uStack_bc + fStack_c4 * uStack_b8;
        fVar87 = fStack_ec * fVar13 + fStack_dc * fStack_8c + fStack_cc * fStack_88;
        fVar67 = fStack_e8 * fVar13 + fStack_d8 * fStack_8c + fStack_c8 * fStack_88;
        uVar88 = NEON_ext(auVar26._0_8_,
                          CONCAT44(fVar87,local_f0 * fVar13 + fStack_e0 * fStack_8c +
                                          local_d0 * fStack_88),4,1);
        auVar16 = NEON_fmov(0x3f800000,4);
        fVar13 = (float)_DAT_03889820 * fVar20 + (float)_DAT_0388a450 * fVar78 +
                 (float)_DAT_03889eb0 * fVar67 + auVar16._0_4_;
        fVar41 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar20 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar78 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar67 + auVar16._4_4_;
        fVar60 = (float)_UNK_03889828 * fVar20 + (float)_UNK_0388a458 * fVar78 +
                 (float)_UNK_03889eb8 * fVar67 + auVar16._8_4_;
        fVar20 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar20 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar78 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar67 + auVar16._12_4_;
        auVar16 = NEON_ext(auVar26,auVar26,8,1);
        auVar36._0_4_ = (float)uVar88 + fVar31;
        fVar78 = (float)((ulong)uVar88 >> 0x20);
        auVar36._4_4_ = fVar78 + auVar16._0_4_;
        auVar36._8_4_ = fVar39 + fVar87;
        auVar36._12_4_ = 0;
        auVar51._0_4_ = (float)uVar88 - fVar31;
        auVar51._4_4_ = fVar78 - auVar16._0_4_;
        auVar51._8_4_ = fVar39 - fVar87;
        auVar51._12_4_ = 0;
        uVar88 = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a888);
        uVar72 = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a710);
        auVar86._8_8_ = uVar72;
        auVar86._0_8_ = uVar88;
        uVar72 = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a758);
        auVar18._4_12_ = auVar86._4_12_;
        auVar18._0_4_ = fVar13;
        auVar77._0_8_ = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a880);
        uVar89 = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a640);
        auVar27._0_4_ = (undefined4)uVar88;
        auVar27._4_4_ = fVar41;
        auVar27._8_8_ = uVar72;
        auVar95._0_8_ = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a700);
        uVar88 = a64_TBL(ZEXT816(0),auVar36,auVar51,DAT_0388a590);
        auVar52._4_4_ = fVar41;
        auVar52._0_4_ = fVar41;
        auVar52._8_4_ = fVar41;
        auVar52._12_4_ = fVar41;
        auVar77._12_4_ = (undefined4)((ulong)uVar89 >> 0x20);
        auVar77._8_4_ = fVar60;
        auVar95._8_8_ = uVar88;
        auVar105._4_4_ = fVar13;
        auVar105._0_4_ = fVar13;
        auVar105._8_4_ = fVar13;
        auVar105._12_4_ = fVar13;
        auVar101._0_8_ = CONCAT44(-(uint)(fVar13 <= fVar41),-(uint)(fVar13 <= fVar41));
        auVar101._8_4_ = -(uint)(fVar13 <= fVar41);
        auVar101._12_4_ = -(uint)(fVar13 <= fVar41);
        auVar104._8_8_ = auVar101._8_8_;
        auVar104._0_8_ = auVar101._0_8_;
        auVar18 = auVar18 ^ (auVar18 ^ auVar27) & auVar101;
        auVar28._4_4_ = fVar60;
        auVar28._0_4_ = fVar60;
        auVar28._8_4_ = fVar60;
        auVar28._12_4_ = fVar60;
        auVar96._0_12_ = auVar95._0_12_;
        auVar96._12_4_ = fVar20;
        auVar105 = auVar105 ^ (auVar105 ^ auVar52) & auVar104;
        auVar37._0_8_ =
             CONCAT44(-(uint)(auVar105._4_4_ <= fVar60),-(uint)(auVar105._0_4_ <= fVar60));
        auVar37._8_4_ = -(uint)(auVar105._8_4_ <= fVar60);
        auVar37._12_4_ = -(uint)(auVar105._12_4_ <= fVar60);
        auVar53._8_8_ = auVar37._8_8_;
        auVar53._0_8_ = auVar37._0_8_;
        auVar18 = auVar18 ^ (auVar18 ^ auVar77) & auVar37;
        auVar105 = auVar105 ^ (auVar105 ^ auVar28) & auVar53;
        auVar80._0_4_ = -(uint)(auVar105._0_4_ <= fVar20);
        auVar80._4_4_ = -(uint)(auVar105._4_4_ <= fVar20);
        auVar80._8_4_ = -(uint)(auVar105._8_4_ <= fVar20);
        auVar80._12_4_ = -(uint)(auVar105._12_4_ <= fVar20);
        auVar18 = auVar18 ^ (auVar18 ^ auVar96) & auVar80;
        fVar60 = auVar18._0_4_;
        auVar29._0_4_ = fVar60 * fVar60;
        fVar20 = auVar18._4_4_;
        auVar29._4_4_ = fVar20 * fVar20;
        fVar31 = auVar18._8_4_;
        auVar29._8_4_ = fVar31 * fVar31;
        fVar78 = auVar18._12_4_;
        auVar29._12_4_ = fVar78 * fVar78;
        auVar16 = NEON_ext(auVar29,auVar29,8,1);
        fVar41 = auVar16._0_4_ + auVar29._0_4_;
        fVar39 = auVar16._4_4_ + auVar29._4_4_;
        fVar13 = fVar41 + fVar39;
        fVar41 = fVar41 + fVar39;
        auVar30._8_8_ = CONCAT44(fVar41,fVar13);
        auVar30._0_8_ = CONCAT44(fVar41,fVar13);
        auVar16 = NEON_frsqrte(auVar30,4);
        auVar54._0_4_ = auVar16._0_4_ * fVar13;
        auVar54._4_4_ = auVar16._4_4_ * fVar41;
        auVar54._8_4_ = auVar16._8_4_ * fVar13;
        auVar54._12_4_ = auVar16._12_4_ * fVar41;
        auVar80 = NEON_frsqrts(auVar16,auVar54,4);
        auVar38._0_4_ = auVar16._0_4_ * auVar80._0_4_;
        auVar38._4_4_ = auVar16._4_4_ * auVar80._4_4_;
        auVar38._8_4_ = auVar16._8_4_ * auVar80._8_4_;
        auVar38._12_4_ = auVar16._12_4_ * auVar80._12_4_;
        auVar55._0_4_ = fVar13 * auVar38._0_4_;
        auVar55._4_4_ = fVar41 * auVar38._4_4_;
        auVar55._8_4_ = fVar13 * auVar38._8_4_;
        auVar55._12_4_ = fVar41 * auVar38._12_4_;
        iVar42 = -(uint)(fVar13 == 0.0);
        iVar61 = -(uint)(fVar41 == 0.0);
        iVar66 = -(uint)(fVar13 == 0.0);
        iVar71 = -(uint)(fVar41 == 0.0);
        param_2[0] = ~(byte)iVar42;
        param_2[1] = ~(byte)((uint)iVar42 >> 8);
        param_2[2] = ~(byte)((uint)iVar42 >> 0x10);
        param_2[3] = ~(byte)((uint)iVar42 >> 0x18);
        param_2[4] = ~(byte)iVar61;
        param_2[5] = ~(byte)((uint)iVar61 >> 8);
        param_2[6] = ~(byte)((uint)iVar61 >> 0x10);
        param_2[7] = ~(byte)((uint)iVar61 >> 0x18);
        param_2[8] = ~(byte)iVar66;
        param_2[9] = ~(byte)((uint)iVar66 >> 8);
        param_2[10] = ~(byte)((uint)iVar66 >> 0x10);
        param_2[0xb] = ~(byte)((uint)iVar66 >> 0x18);
        param_2[0xc] = ~(byte)iVar71;
        param_2[0xd] = ~(byte)((uint)iVar71 >> 8);
        param_2[0xe] = ~(byte)((uint)iVar71 >> 0x10);
        param_2[0xf] = ~(byte)((uint)iVar71 >> 0x18);
        auVar16 = NEON_frsqrts(auVar38,auVar55,4);
        param_3._0_4_ = auVar38._0_4_ * auVar16._0_4_;
        param_3._4_4_ = auVar38._4_4_ * auVar16._4_4_;
        param_3._8_4_ = auVar38._8_4_ * auVar16._8_4_;
        param_3._12_4_ = auVar38._12_4_ * auVar16._12_4_;
        fVar60 = param_3._0_4_ * fVar60;
        fVar20 = param_3._4_4_ * fVar20;
        fVar31 = param_3._8_4_ * fVar31;
        fVar78 = param_3._12_4_ * fVar78;
        local_90 = CONCAT13((byte)((uint)fVar60 >> 0x18) & param_2[3],
                            CONCAT12((byte)((uint)fVar60 >> 0x10) & param_2[2],
                                     CONCAT11((byte)((uint)fVar60 >> 8) & param_2[1],
                                              SUB41(fVar60,0) & param_2[0])));
        auVar15._0_8_ =
             CONCAT17((byte)((uint)fVar20 >> 0x18) & param_2[7],
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & param_2[6],
                               CONCAT15((byte)((uint)fVar20 >> 8) & param_2[5],
                                        CONCAT14(SUB41(fVar20,0) & param_2[4],local_90))));
        auVar15[8] = SUB41(fVar31,0) & param_2[8];
        auVar15[9] = (byte)((uint)fVar31 >> 8) & param_2[9];
        auVar15[10] = (byte)((uint)fVar31 >> 0x10) & param_2[10];
        auVar15[0xb] = (byte)((uint)fVar31 >> 0x18) & param_2[0xb];
        auVar19[0xc] = SUB41(fVar78,0) & param_2[0xc];
        auVar19._0_12_ = auVar15;
        auVar19[0xd] = (byte)((uint)fVar78 >> 8) & param_2[0xd];
        auVar19[0xe] = (byte)((uint)fVar78 >> 0x10) & param_2[0xe];
        auVar19[0xf] = (byte)((uint)fVar78 >> 0x18) & param_2[0xf];
        fStack_88 = auVar15._8_4_;
        uStack_84 = auVar19._12_4_;
        fStack_8c = (float)((ulong)auVar15._0_8_ >> 0x20);
      }
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 10;
        do {
          iVar42 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar42;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar42 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (local_58 != (long *)0x0) {
        plVar11 = local_58 + 10;
        do {
          iVar42 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar42;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar42 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      if (!bVar5) goto LAB_01a94834;
      bVar5 = true;
      if (local_60 != (long *)0x0) goto LAB_01a947c4;
LAB_01a947e0:
      if (!bVar5) goto LAB_01a94878;
LAB_01a947e4:
      auVar16._4_4_ = fStack_8c;
      auVar16._0_4_ = local_90;
      auVar16._8_4_ = fStack_88;
      auVar16._12_4_ = uStack_84;
      bVar5 = true;
    }
    if (local_a0 != (long *)0x0) {
      lVar10 = local_a0[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar42 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar42 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar42 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
        if (bVar5) {
          return;
        }
        goto LAB_01a94108;
      }
    }
  }
  if (bVar5) {
    return;
  }
LAB_01a94108:
  FUN_009c69bc(&local_80,auVar16,param_4);
  (**(code **)(*local_80 + 0x40))();
  auVar43._0_4_ = extraout_s0 * extraout_s0;
  auVar43._4_4_ = extraout_var * extraout_var;
  auVar43._8_4_ = extraout_var_00 * extraout_var_00;
  auVar43._12_4_ = extraout_var_01 * extraout_var_01;
  auVar16 = NEON_ext(auVar43,auVar43,8,1);
  fVar41 = auVar16._0_4_ + auVar43._0_4_;
  fVar60 = auVar16._4_4_ + auVar43._4_4_;
  fVar13 = fVar41 + fVar60;
  fVar41 = fVar41 + fVar60;
  auVar44._8_8_ = CONCAT44(fVar41,fVar13);
  auVar44._0_8_ = CONCAT44(fVar41,fVar13);
  auVar16 = NEON_frsqrte(auVar44,4);
  auVar79._0_4_ = auVar16._0_4_ * fVar13;
  auVar79._4_4_ = auVar16._4_4_ * fVar41;
  auVar79._8_4_ = auVar16._8_4_ * fVar13;
  auVar79._12_4_ = auVar16._12_4_ * fVar41;
  auVar80 = NEON_frsqrts(auVar16,auVar79,4);
  auVar73._0_4_ = auVar16._0_4_ * auVar80._0_4_;
  auVar73._4_4_ = auVar16._4_4_ * auVar80._4_4_;
  auVar73._8_4_ = auVar16._8_4_ * auVar80._8_4_;
  auVar73._12_4_ = auVar16._12_4_ * auVar80._12_4_;
  auVar81._0_4_ = fVar13 * auVar73._0_4_;
  auVar81._4_4_ = fVar41 * auVar73._4_4_;
  auVar81._8_4_ = fVar13 * auVar73._8_4_;
  auVar81._12_4_ = fVar41 * auVar73._12_4_;
  iVar42 = -(uint)(fVar13 == 0.0);
  iVar61 = -(uint)(fVar41 == 0.0);
  iVar66 = -(uint)(fVar13 == 0.0);
  iVar71 = -(uint)(fVar41 == 0.0);
  auVar16 = NEON_frsqrts(auVar73,auVar81,4);
  fVar13 = extraout_s0 * auVar73._0_4_ * auVar16._0_4_;
  fVar41 = extraout_var * auVar73._4_4_ * auVar16._4_4_;
  fVar60 = extraout_var_00 * auVar73._8_4_ * auVar16._8_4_;
  fVar20 = extraout_var_01 * auVar73._12_4_ * auVar16._12_4_;
  fVar39 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar42)));
  auVar45._0_8_ =
       CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                         CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                  CONCAT14(SUB41(fVar41,0) & ~(byte)iVar61,fVar39))));
  auVar45[8] = SUB41(fVar60,0) & ~(byte)iVar66;
  auVar45[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar66 >> 8);
  auVar45[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
  auVar45[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
  auVar45[0xc] = SUB41(fVar20,0) & ~(byte)iVar71;
  auVar45[0xd] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar71 >> 8);
  auVar45[0xe] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
  auVar45[0xf] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
  fVar60 = param_2._0_4_;
  auVar74._0_4_ = fVar60 * fVar60;
  fVar20 = param_2._4_4_;
  auVar74._4_4_ = fVar20 * fVar20;
  fVar31 = param_2._8_4_;
  auVar74._8_4_ = fVar31 * fVar31;
  auVar74._12_4_ = param_2._12_4_ * param_2._12_4_;
  auVar16 = NEON_ext(auVar74,auVar74,8,1);
  fVar41 = auVar16._0_4_ + auVar74._0_4_;
  fVar78 = auVar16._4_4_ + auVar74._4_4_;
  fVar13 = fVar41 + fVar78;
  fVar41 = fVar41 + fVar78;
  auVar75._8_8_ = CONCAT44(fVar41,fVar13);
  auVar75._0_8_ = CONCAT44(fVar41,fVar13);
  auVar16 = NEON_frsqrte(auVar75,4);
  auVar90._0_4_ = auVar16._0_4_ * fVar13;
  auVar90._4_4_ = auVar16._4_4_ * fVar41;
  auVar90._8_4_ = auVar16._8_4_ * fVar13;
  auVar90._12_4_ = auVar16._12_4_ * fVar41;
  auVar80 = NEON_frsqrts(auVar16,auVar90,4);
  auVar82._0_4_ = auVar16._0_4_ * auVar80._0_4_;
  auVar82._4_4_ = auVar16._4_4_ * auVar80._4_4_;
  auVar82._8_4_ = auVar16._8_4_ * auVar80._8_4_;
  auVar82._12_4_ = auVar16._12_4_ * auVar80._12_4_;
  auVar91._0_4_ = fVar13 * auVar82._0_4_;
  auVar91._4_4_ = fVar41 * auVar82._4_4_;
  auVar91._8_4_ = fVar13 * auVar82._8_4_;
  auVar91._12_4_ = fVar41 * auVar82._12_4_;
  iVar42 = -(uint)(fVar13 == 0.0);
  iVar61 = -(uint)(fVar41 == 0.0);
  iVar66 = -(uint)(fVar13 == 0.0);
  auVar16 = NEON_frsqrts(auVar82,auVar91,4);
  fVar60 = fVar60 * auVar82._0_4_ * auVar16._0_4_;
  fVar20 = fVar20 * auVar82._4_4_ * auVar16._4_4_;
  fVar31 = fVar31 * auVar82._8_4_ * auVar16._8_4_;
  fVar78 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                           CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                    CONCAT11((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                             SUB41(fVar60,0) & ~(byte)iVar42)));
  auVar21._0_8_ =
       CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                         CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                  CONCAT14(SUB41(fVar20,0) & ~(byte)iVar61,fVar78))));
  auVar21[8] = SUB41(fVar31,0) & ~(byte)iVar66;
  auVar21[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar66 >> 8);
  auVar21[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
  auVar21[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
  fVar60 = param_3._0_4_;
  auVar83._0_4_ = fVar60 * fVar60;
  fVar20 = param_3._4_4_;
  auVar83._4_4_ = fVar20 * fVar20;
  fVar31 = param_3._8_4_;
  auVar83._8_4_ = fVar31 * fVar31;
  auVar83._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar16 = NEON_ext(auVar83,auVar83,8,1);
  fVar41 = auVar16._0_4_ + auVar83._0_4_;
  fVar87 = auVar16._4_4_ + auVar83._4_4_;
  fVar13 = fVar41 + fVar87;
  fVar41 = fVar41 + fVar87;
  auVar84._8_8_ = CONCAT44(fVar41,fVar13);
  auVar84._0_8_ = CONCAT44(fVar41,fVar13);
  auVar16 = NEON_frsqrte(auVar84,4);
  auVar97._0_4_ = auVar16._0_4_ * fVar13;
  auVar97._4_4_ = auVar16._4_4_ * fVar41;
  auVar97._8_4_ = auVar16._8_4_ * fVar13;
  auVar97._12_4_ = auVar16._12_4_ * fVar41;
  auVar80 = NEON_frsqrts(auVar16,auVar97,4);
  auVar92._0_4_ = auVar16._0_4_ * auVar80._0_4_;
  auVar92._4_4_ = auVar16._4_4_ * auVar80._4_4_;
  auVar92._8_4_ = auVar16._8_4_ * auVar80._8_4_;
  auVar92._12_4_ = auVar16._12_4_ * auVar80._12_4_;
  auVar98._0_4_ = fVar13 * auVar92._0_4_;
  auVar98._4_4_ = fVar41 * auVar92._4_4_;
  auVar98._8_4_ = fVar13 * auVar92._8_4_;
  auVar98._12_4_ = fVar41 * auVar92._12_4_;
  auVar16 = NEON_frsqrts(auVar92,auVar98,4);
  fVar60 = fVar60 * auVar92._0_4_ * auVar16._0_4_;
  fVar20 = fVar20 * auVar92._4_4_ * auVar16._4_4_;
  fVar31 = fVar31 * auVar92._8_4_ * auVar16._8_4_;
  iVar42 = -(uint)(fVar13 == 0.0);
  iVar61 = -(uint)(fVar41 == 0.0);
  iVar66 = -(uint)(fVar13 == 0.0);
  auVar32._0_8_ =
       CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                         CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                  CONCAT14(SUB41(fVar20,0) & ~(byte)iVar61,
                                           CONCAT13((byte)((uint)fVar60 >> 0x18) &
                                                    ~(byte)((uint)iVar42 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                                             ~(byte)((uint)iVar42 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar60 >> 8) &
                                                                      ~(byte)((uint)iVar42 >> 8),
                                                                      SUB41(fVar60,0) &
                                                                      ~(byte)iVar42)))))));
  auVar32[8] = SUB41(fVar31,0) & ~(byte)iVar66;
  auVar32[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar66 >> 8);
  auVar32[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
  auVar32[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
  uVar88 = NEON_ext(auVar45._0_8_,auVar32._0_8_,4,1);
  auVar16 = NEON_ext(auVar45,auVar45,8,1);
  fVar20 = (float)((ulong)auVar21._0_8_ >> 0x20);
  fVar31 = auVar32._8_4_;
  auVar80 = NEON_fmov(0x3f800000,4);
  fVar13 = (float)_DAT_03889820 * fVar39 + (float)_DAT_0388a450 * fVar20 +
           (float)_DAT_03889eb0 * fVar31 + auVar80._0_4_;
  fVar41 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar39 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar20 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar31 + auVar80._4_4_;
  fVar60 = (float)_UNK_03889828 * fVar39 + (float)_UNK_0388a458 * fVar20 +
           (float)_UNK_03889eb8 * fVar31 + auVar80._8_4_;
  fVar20 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar39 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar20 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar31 + auVar80._12_4_;
  fVar31 = (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar33._0_4_ = (float)uVar88 + fVar78;
  fVar39 = (float)((ulong)uVar88 >> 0x20);
  auVar33._4_4_ = fVar39 + auVar16._0_4_;
  auVar33._8_4_ = auVar21._8_4_ + fVar31;
  auVar33._12_4_ = 0;
  auVar46._0_4_ = (float)uVar88 - fVar78;
  auVar46._4_4_ = fVar39 - auVar16._0_4_;
  auVar46._8_4_ = auVar21._8_4_ - fVar31;
  auVar46._12_4_ = 0;
  uVar88 = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a888);
  uVar72 = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a710);
  auVar85._8_8_ = uVar72;
  auVar85._0_8_ = uVar88;
  uVar72 = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a758);
  auVar100._4_12_ = auVar85._4_12_;
  auVar100._0_4_ = fVar13;
  auVar76._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a880);
  uVar89 = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a640);
  auVar22._0_4_ = (undefined4)uVar88;
  auVar22._4_4_ = fVar41;
  auVar22._8_8_ = uVar72;
  auVar93._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a700);
  uVar88 = a64_TBL(ZEXT816(0),auVar33,auVar46,DAT_0388a590);
  auVar47._4_4_ = fVar41;
  auVar47._0_4_ = fVar41;
  auVar47._8_4_ = fVar41;
  auVar47._12_4_ = fVar41;
  auVar76._12_4_ = (undefined4)((ulong)uVar89 >> 0x20);
  auVar76._8_4_ = fVar60;
  auVar93._8_8_ = uVar88;
  auVar103._4_4_ = fVar13;
  auVar103._0_4_ = fVar13;
  auVar103._8_4_ = fVar13;
  auVar103._12_4_ = fVar13;
  auVar99._0_8_ = CONCAT44(-(uint)(fVar13 <= fVar41),-(uint)(fVar13 <= fVar41));
  auVar99._8_4_ = -(uint)(fVar13 <= fVar41);
  auVar99._12_4_ = -(uint)(fVar13 <= fVar41);
  auVar102._8_8_ = auVar99._8_8_;
  auVar102._0_8_ = auVar99._0_8_;
  auVar100 = auVar100 ^ (auVar100 ^ auVar22) & auVar99;
  auVar23._4_4_ = fVar60;
  auVar23._0_4_ = fVar60;
  auVar23._8_4_ = fVar60;
  auVar23._12_4_ = fVar60;
  auVar94._0_12_ = auVar93._0_12_;
  auVar94._12_4_ = fVar20;
  auVar103 = auVar103 ^ (auVar103 ^ auVar47) & auVar102;
  auVar34._0_8_ = CONCAT44(-(uint)(auVar103._4_4_ <= fVar60),-(uint)(auVar103._0_4_ <= fVar60));
  auVar34._8_4_ = -(uint)(auVar103._8_4_ <= fVar60);
  auVar34._12_4_ = -(uint)(auVar103._12_4_ <= fVar60);
  auVar48._8_8_ = auVar34._8_8_;
  auVar48._0_8_ = auVar34._0_8_;
  auVar100 = auVar100 ^ (auVar100 ^ auVar76) & auVar34;
  auVar103 = auVar103 ^ (auVar103 ^ auVar23) & auVar48;
  auVar17._0_4_ = -(uint)(auVar103._0_4_ <= fVar20);
  auVar17._4_4_ = -(uint)(auVar103._4_4_ <= fVar20);
  auVar17._8_4_ = -(uint)(auVar103._8_4_ <= fVar20);
  auVar17._12_4_ = -(uint)(auVar103._12_4_ <= fVar20);
  auVar100 = auVar100 ^ (auVar100 ^ auVar94) & auVar17;
  auVar24._0_4_ = auVar100._0_4_ * auVar100._0_4_;
  auVar24._4_4_ = auVar100._4_4_ * auVar100._4_4_;
  auVar24._8_4_ = auVar100._8_4_ * auVar100._8_4_;
  auVar24._12_4_ = auVar100._12_4_ * auVar100._12_4_;
  auVar16 = NEON_ext(auVar24,auVar24,8,1);
  fVar41 = auVar16._0_4_ + auVar24._0_4_;
  fVar60 = auVar16._4_4_ + auVar24._4_4_;
  fVar13 = fVar41 + fVar60;
  fVar41 = fVar41 + fVar60;
  auVar25._8_8_ = CONCAT44(fVar41,fVar13);
  auVar25._0_8_ = CONCAT44(fVar41,fVar13);
  auVar16 = NEON_frsqrte(auVar25,4);
  auVar49._0_4_ = auVar16._0_4_ * fVar13;
  auVar49._4_4_ = auVar16._4_4_ * fVar41;
  auVar49._8_4_ = auVar16._8_4_ * fVar13;
  auVar49._12_4_ = auVar16._12_4_ * fVar41;
  auVar80 = NEON_frsqrts(auVar16,auVar49,4);
  auVar35._0_4_ = auVar16._0_4_ * auVar80._0_4_;
  auVar35._4_4_ = auVar16._4_4_ * auVar80._4_4_;
  auVar35._8_4_ = auVar16._8_4_ * auVar80._8_4_;
  auVar35._12_4_ = auVar16._12_4_ * auVar80._12_4_;
  auVar50._0_4_ = fVar13 * auVar35._0_4_;
  auVar50._4_4_ = fVar41 * auVar35._4_4_;
  auVar50._8_4_ = fVar13 * auVar35._8_4_;
  auVar50._12_4_ = fVar41 * auVar35._12_4_;
  NEON_frsqrts(auVar35,auVar50,4);
  if (local_80 != (long *)0x0) {
    lVar10 = local_80[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar42 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar42 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar42 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


