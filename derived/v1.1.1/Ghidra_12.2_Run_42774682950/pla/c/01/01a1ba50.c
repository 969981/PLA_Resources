/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1ba50; name: FUN_01a1ba50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1ba50(long param_1)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined *puVar36;
  undefined *puVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  undefined8 uVar41;
  long *plVar42;
  long lVar43;
  undefined8 *puVar44;
  long *plVar45;
  float fVar46;
  undefined4 extraout_s0;
  float fVar47;
  undefined4 extraout_s0_00;
  float fVar48;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar49;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  float fVar50;
  undefined4 extraout_var_03;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  long *local_70;
  undefined1 auStack_68 [8];
  long *local_60;
  undefined1 **ppuStack_58;
  undefined1 *local_38;
  
  if ((*(long *)(param_1 + 0xef10) != 0) && (*(int *)(*(long *)(param_1 + 0xef10) + 0xc) != 0)) {
    lVar40 = FUN_01a4b9b4();
    if (lVar40 != 0) {
      auVar54._0_8_ =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar40 + 0x330) >> 0x20) +
                    *(float *)(lVar40 + 0x344),
                    (float)*(undefined8 *)(lVar40 + 0x330) + *(float *)(lVar40 + 0x340));
      auVar54._8_4_ = (float)*(undefined8 *)(lVar40 + 0x338) + *(float *)(lVar40 + 0x348);
      auVar54._12_4_ =
           (float)((ulong)*(undefined8 *)(lVar40 + 0x338) >> 0x20) + *(float *)(lVar40 + 0x34c);
      uVar59 = auVar54._8_8_;
      auVar56 = auVar54;
      uVar41 = auVar54._0_8_;
      uVar62 = uVar59;
      if ((*(byte *)(lVar40 + 0x380) >> 1 & 1) != 0) {
        pauVar1 = (undefined1 (*) [12])(lVar40 + 0x350);
        fVar83 = (float)((ulong)*(undefined8 *)(lVar40 + 0x358) >> 0x20);
        uVar62 = *(undefined8 *)*pauVar1;
        pauVar5 = (undefined1 (*) [12])(lVar40 + 0x360);
        uVar67 = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x368) >> 0x20);
        fVar49 = (float)*(undefined8 *)*pauVar5;
        fVar63 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
        auVar16._12_4_ = uVar67;
        auVar16._0_12_ = *pauVar5;
        uVar41 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
        fVar50 = (float)((ulong)uVar41 >> 0x20);
        auVar17._12_4_ = uVar67;
        auVar17._0_12_ = *pauVar5;
        uVar64 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
        fVar68 = (float)((ulong)uVar64 >> 0x20);
        auVar11._12_4_ = fVar83;
        auVar11._0_12_ = *pauVar1;
        uVar52 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a580);
        auVar12._12_4_ = fVar83;
        auVar12._0_12_ = *pauVar1;
        uVar61 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6c8);
        auVar13._12_4_ = fVar83;
        auVar13._0_12_ = *pauVar1;
        uVar84 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
        fVar51 = (float)_DAT_03889ad0;
        fVar57 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar58 = (float)_UNK_03889ad8;
        fVar60 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        auVar14._12_4_ = fVar83;
        auVar14._0_12_ = *pauVar1;
        uVar80 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
        auVar18._12_4_ = uVar67;
        auVar18._0_12_ = *pauVar5;
        uVar34 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
        fVar47 = (float)((ulong)uVar34 >> 0x20);
        auVar15._12_4_ = fVar83;
        auVar15._0_12_ = *pauVar1;
        uVar85 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a790);
        auVar35._8_8_ = uVar62;
        auVar35._0_8_ = uVar62;
        uVar81 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a648);
        fVar46 = ((float)uVar62 * (float)uVar41 + fVar51 * fVar49 * (float)uVar52 +
                 fVar51 * (float)uVar34 * (float)uVar80) - (float)uVar64 * (float)uVar84;
        fVar48 = ((float)((ulong)uVar62 >> 0x20) * fVar50 +
                  fVar57 * fVar63 * (float)((ulong)uVar52 >> 0x20) +
                 fVar57 * fVar47 * (float)((ulong)uVar80 >> 0x20)) -
                 fVar68 * (float)((ulong)uVar84 >> 0x20);
        fVar49 = ((float)*(undefined8 *)(lVar40 + 0x358) * (float)uVar41 +
                  fVar58 * (float)uVar64 * (float)uVar61 + fVar58 * fVar49 * (float)uVar81) -
                 (float)uVar34 * (float)uVar85;
        fVar50 = (fVar83 * fVar50 + fVar60 * fVar68 * (float)((ulong)uVar61 >> 0x20) +
                 fVar60 * fVar63 * (float)((ulong)uVar81 >> 0x20)) -
                 fVar47 * (float)((ulong)uVar85 >> 0x20);
        uVar72 = (undefined1)_UNK_03888d18;
        uVar73 = (undefined1)((ulong)_UNK_03888d18 >> 8);
        uVar74 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
        uVar75 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
        uVar76 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
        uVar77 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
        uVar78 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
        uVar79 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
        fVar68 = fVar46 * (float)_DAT_03889ac0;
        fVar69 = fVar48 * (float)((ulong)_DAT_03889ac0 >> 0x20);
        fVar70 = fVar49 * (float)_UNK_03889ac8;
        fVar71 = fVar50 * (float)((ulong)_UNK_03889ac8 >> 0x20);
        auVar31[8] = uVar72;
        auVar31._0_8_ = _DAT_03888d10;
        auVar31[9] = uVar73;
        auVar31[10] = uVar74;
        auVar31[0xb] = uVar75;
        auVar31[0xc] = uVar76;
        auVar31[0xd] = uVar77;
        auVar31[0xe] = uVar78;
        auVar31[0xf] = uVar79;
        uVar41 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a580);
        fVar63 = (float)((ulong)uVar41 >> 0x20);
        ppuStack_58 = (undefined1 **)CONCAT44(fVar50,fVar49);
        local_60 = (long *)CONCAT44(fVar48,fVar46);
        auVar32[8] = uVar72;
        auVar32._0_8_ = _DAT_03888d10;
        auVar32[9] = uVar73;
        auVar32[10] = uVar74;
        auVar32[0xb] = uVar75;
        auVar32[0xc] = uVar76;
        auVar32[0xd] = uVar77;
        auVar32[0xe] = uVar78;
        auVar32[0xf] = uVar79;
        uVar81 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a680);
        auVar25._4_4_ = fVar69;
        auVar25._0_4_ = fVar68;
        auVar25._8_4_ = fVar70;
        auVar25._12_4_ = fVar71;
        uVar52 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a580);
        auVar26._4_4_ = fVar69;
        auVar26._0_4_ = fVar68;
        auVar26._8_4_ = fVar70;
        auVar26._12_4_ = fVar71;
        uVar61 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a6c8);
        fVar82 = (float)((ulong)uVar81 >> 0x20);
        auVar27._4_4_ = fVar69;
        auVar27._0_4_ = fVar68;
        auVar27._8_4_ = fVar70;
        auVar27._12_4_ = fVar71;
        uVar80 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
        auVar28._4_4_ = fVar69;
        auVar28._0_4_ = fVar68;
        auVar28._8_4_ = fVar70;
        auVar28._12_4_ = fVar71;
        uVar84 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a880);
        auVar29._4_4_ = fVar69;
        auVar29._0_4_ = fVar68;
        auVar29._8_4_ = fVar70;
        auVar29._12_4_ = fVar71;
        uVar85 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a790);
        auVar33[8] = uVar72;
        auVar33._0_8_ = _DAT_03888d10;
        auVar33[9] = uVar73;
        auVar33[10] = uVar74;
        auVar33[0xb] = uVar75;
        auVar33[0xc] = uVar76;
        auVar33[0xd] = uVar77;
        auVar33[0xe] = uVar78;
        auVar33[0xf] = uVar79;
        uVar64 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
        fVar47 = (float)((ulong)uVar64 >> 0x20);
        auVar6._4_4_ = fVar48;
        auVar6._0_4_ = fVar46;
        auVar6._8_4_ = fVar49;
        auVar6._12_4_ = fVar50;
        uVar34 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
        auVar30._4_4_ = fVar69;
        auVar30._0_4_ = fVar68;
        auVar30._8_4_ = fVar68;
        auVar30._12_4_ = fVar69;
        uVar62 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a648);
        fVar83 = *(float *)(lVar40 + 0x388);
        fVar68 = (fVar68 * (float)uVar41 + fVar51 * (float)uVar52 * 0.0 +
                 fVar51 * (float)uVar64 * (float)uVar80) - (float)uVar81 * (float)uVar84;
        fVar69 = (fVar69 * fVar63 + fVar57 * (float)((ulong)uVar52 >> 0x20) * 0.0 +
                 fVar57 * fVar47 * (float)((ulong)uVar80 >> 0x20)) -
                 fVar82 * (float)((ulong)uVar84 >> 0x20);
        fVar70 = (fVar70 * (float)uVar41 + fVar58 * (float)uVar81 * (float)uVar61 +
                 fVar58 * (float)uVar62 * 0.0) - (float)uVar64 * (float)uVar85;
        fVar71 = (fVar71 * fVar63 + fVar60 * fVar82 * (float)((ulong)uVar61 >> 0x20) +
                 fVar60 * (float)((ulong)uVar62 >> 0x20) * 0.0) -
                 fVar47 * (float)((ulong)uVar85 >> 0x20);
        auVar7._4_4_ = fVar48;
        auVar7._0_4_ = fVar46;
        auVar7._8_4_ = fVar49;
        auVar7._12_4_ = fVar50;
        uVar84 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
        auVar19._4_4_ = fVar69;
        auVar19._0_4_ = fVar68;
        auVar19._8_4_ = fVar70;
        auVar19._12_4_ = fVar71;
        uVar81 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
        auVar20._4_4_ = fVar69;
        auVar20._0_4_ = fVar68;
        auVar20._8_4_ = fVar70;
        auVar20._12_4_ = fVar71;
        uVar52 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6c8);
        fVar47 = (float)((ulong)uVar34 >> 0x20);
        fVar82 = (float)((ulong)uVar84 >> 0x20);
        auVar21._4_4_ = fVar69;
        auVar21._0_4_ = fVar68;
        auVar21._8_4_ = fVar70;
        auVar21._12_4_ = fVar71;
        uVar64 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a680);
        auVar22._4_4_ = fVar69;
        auVar22._0_4_ = fVar68;
        auVar22._8_4_ = fVar70;
        auVar22._12_4_ = fVar71;
        uVar61 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a880);
        auVar23._4_4_ = fVar69;
        auVar23._0_4_ = fVar68;
        auVar23._8_4_ = fVar70;
        auVar23._12_4_ = fVar71;
        uVar80 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a790);
        auVar8._4_4_ = fVar48;
        auVar8._0_4_ = fVar46;
        auVar8._8_4_ = fVar49;
        auVar8._12_4_ = fVar50;
        uVar62 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
        fVar63 = (float)((ulong)uVar62 >> 0x20);
        auVar24._4_4_ = fVar69;
        auVar24._0_4_ = fVar68;
        auVar24._8_4_ = fVar68;
        auVar24._12_4_ = fVar69;
        uVar41 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a648);
        fVar50 = ((float)uVar34 * fVar68 + fVar51 * fVar46 * (float)uVar81 +
                 fVar51 * (float)uVar62 * (float)uVar64) - (float)uVar84 * (float)uVar61;
        fVar49 = (fVar47 * fVar69 + fVar57 * fVar48 * (float)((ulong)uVar81 >> 0x20) +
                 fVar57 * fVar63 * (float)((ulong)uVar64 >> 0x20)) -
                 fVar82 * (float)((ulong)uVar61 >> 0x20);
        fVar46 = ((float)uVar34 * fVar70 + fVar58 * (float)uVar84 * (float)uVar52 +
                 fVar58 * fVar46 * (float)uVar41) - (float)uVar62 * (float)uVar80;
        fVar47 = (fVar47 * fVar71 + fVar60 * fVar82 * (float)((ulong)uVar52 >> 0x20) +
                 fVar60 * fVar48 * (float)((ulong)uVar41 >> 0x20)) -
                 fVar63 * (float)((ulong)uVar80 >> 0x20);
        if (fVar83 <= 2.0) {
          fVar83 = 2.0;
        }
        fVar50 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18)
                                 ,CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                           CONCAT11((byte)((uint)fVar50 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 8),
                                                    SUB41(fVar50,0) & (byte)_DAT_038897c0)));
        auVar53._0_8_ =
             CONCAT17((byte)((uint)fVar49 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar49 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar49 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar49,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),fVar50))));
        auVar53[8] = SUB41(fVar46,0) & (byte)_UNK_038897c8;
        auVar53[9] = (byte)((uint)fVar46 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
        auVar53[10] = (byte)((uint)fVar46 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
        auVar53[0xb] = (byte)((uint)fVar46 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
        auVar55[0xc] = SUB41(fVar47,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
        auVar55._0_12_ = auVar53;
        auVar55[0xd] = (byte)((uint)fVar47 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
        auVar55[0xe] = (byte)((uint)fVar47 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
        auVar55[0xf] = (byte)((uint)fVar47 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
        fVar83 = -fVar83;
        auVar56 = *(undefined1 (*) [16])(lVar40 + 800);
        uVar62 = *(undefined8 *)(lVar40 + 0x348);
        uVar41 = *(undefined8 *)(lVar40 + 0x340);
        FUN_0098fad4(&local_60);
        *(undefined4 *)(param_1 + 0xef50) = extraout_var_01;
        if (*(char *)(param_1 + 0x370) == '\0') {
          uVar64 = NEON_rev64(CONCAT44(extraout_var,extraout_s0),4);
          *(undefined8 *)(param_1 + 0x360) = uVar64;
        }
        *(undefined4 *)(param_1 + 0x368) = extraout_var_01;
        uVar41 = CONCAT44((float)((ulong)uVar41 >> 0x20) +
                          auVar56._4_4_ + (float)((ulong)auVar53._0_8_ >> 0x20) * fVar83,
                          (float)uVar41 + auVar56._0_4_ + fVar50 * fVar83);
        uVar62 = CONCAT44((float)((ulong)uVar62 >> 0x20) + auVar56._12_4_ + auVar55._12_4_ * fVar83,
                          (float)uVar62 + auVar56._8_4_ + auVar53._8_4_ * fVar83);
        auVar56._8_8_ = uVar59;
        auVar56._0_8_ = auVar54._0_8_;
        *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar40 + 0x23c);
      }
      puVar36 = PTR_DAT_04379578;
      if ((*PTR_DAT_04379578 & 1) == 0) {
        iVar38 = __cxa_guard_acquire(PTR_DAT_04379578);
        auVar56._8_8_ = uVar59;
        auVar56._0_8_ = auVar54._0_8_;
        if (iVar38 != 0) {
          FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379578);
        }
      }
      plVar42 = (long *)PTR_DAT_04379588;
      plVar45 = (long *)PTR_DAT_04379580;
      lVar43 = *(long *)PTR_DAT_04379580;
      *(long *)PTR_DAT_04379588 = lVar43;
      lVar43 = *(long *)(lVar43 + 200);
      uVar64 = *(undefined8 *)(lVar43 + 0x538);
      uVar59 = *(undefined8 *)(lVar43 + 0x530);
      *(ulong *)(param_1 + 0xee68) =
           CONCAT44(auVar56._12_4_ - (float)((ulong)uVar64 >> 0x20),auVar56._8_4_ - (float)uVar64);
      *(ulong *)(param_1 + 0xee60) =
           CONCAT44(auVar56._4_4_ - (float)((ulong)uVar59 >> 0x20),auVar56._0_4_ - (float)uVar59);
      if ((*puVar36 & 1) == 0) {
        iVar38 = __cxa_guard_acquire(PTR_DAT_04379578);
        plVar45 = (long *)PTR_DAT_04379580;
        plVar42 = (long *)PTR_DAT_04379588;
        if (iVar38 != 0) {
          FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379578);
          plVar45 = (long *)PTR_DAT_04379580;
          plVar42 = (long *)PTR_DAT_04379588;
        }
      }
      lVar43 = *plVar45;
      *plVar42 = lVar43;
      puVar36 = PTR_DAT_04379570;
      lVar43 = *(long *)(lVar43 + 200);
      uVar64 = *(undefined8 *)(lVar43 + 0x538);
      uVar59 = *(undefined8 *)(lVar43 + 0x530);
      *(ulong *)(param_1 + 0xee78) =
           CONCAT44((float)((ulong)uVar62 >> 0x20) - (float)((ulong)uVar64 >> 0x20),
                    (float)uVar62 - (float)uVar64);
      *(ulong *)(param_1 + 0xee70) =
           CONCAT44((float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar59 >> 0x20),
                    (float)uVar41 - (float)uVar59);
      *(undefined8 *)(lVar40 + 0x340) = 0;
      *(undefined8 *)(lVar40 + 0x348) = 0;
      uVar41 = *(undefined8 *)puVar36;
      *(undefined8 *)(lVar40 + 0x368) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar40 + 0x360) = uVar41;
    }
    FUN_01a1c1d0(param_1);
    *(undefined4 *)(param_1 + 0xece8) = *(undefined4 *)(param_1 + 0xecec);
    *(undefined4 *)(param_1 + 0xedc8) = 0x7f7fffff;
    uVar65 = *(undefined4 *)(param_1 + 0x360);
    uVar67 = *(undefined4 *)(param_1 + 0x36c);
    uVar66 = *(undefined4 *)(param_1 + 0x364);
    FUN_019039e0(param_1 + 0x5b0,param_1 + (long)*(int *)(param_1 + 0xdd50) * 0x960 + 0xf10);
    fVar47 = (float)FUN_01904460(uVar66,param_1 + 0x5b0);
    *(double *)(param_1 + 0x700) = (double)fVar47;
    *(undefined4 *)(param_1 + 0xdd8c) = uVar67;
    FUN_01a1aa00(uVar65,param_1,*(undefined4 *)(param_1 + 0xece8));
    *(undefined4 *)(param_1 + 0xdd8c) = uVar67;
    *(undefined4 *)(param_1 + 0x36c) = uVar67;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    FUN_01a4b7e0(param_1);
    lVar40 = *(long *)(param_1 + 0xe2b0);
    *(undefined8 *)(lVar40 + 0xe4) = 0;
    *(undefined8 *)(lVar40 + 0x44) = 0;
    *(undefined8 *)(lVar40 + 0x94) = 0;
    *(undefined8 *)(lVar40 + 0x58) = 0;
    *(undefined8 *)(lVar40 + 0x50) = 0;
    *(undefined8 *)(lVar40 + 0xf0) = 0;
    *(undefined8 *)(lVar40 + 0x128) = 0;
    *(undefined8 *)(lVar40 + 0x130) = 0;
    *(undefined8 *)(lVar40 + 0x118) = 0;
    *(undefined8 *)(lVar40 + 0x120) = 0;
    *(undefined8 *)(lVar40 + 0x108) = 0;
    *(undefined8 *)(lVar40 + 0x110) = 0;
    *(undefined8 *)(lVar40 + 0xf8) = 0;
    *(undefined8 *)(lVar40 + 0x100) = 0;
    *(undefined8 *)(lVar40 + 0xa8) = 0;
    *(undefined8 *)(lVar40 + 0xa0) = 0;
    if (*(char *)(lVar40 + 0x140) != '\0') {
      *(undefined1 *)(lVar40 + 0x140) = 0;
    }
    lVar40 = *(long *)(param_1 + 0xe2d0);
    *(undefined4 *)(lVar40 + 0x74) = 0;
    *(undefined4 *)(lVar40 + 0x34) = *(undefined4 *)(lVar40 + 0x50);
    *(undefined4 *)(lVar40 + 0x38) = *(undefined4 *)(lVar40 + 0x40);
    *(undefined4 *)(lVar40 + 0x30) = *(undefined4 *)(lVar40 + 0x40);
    *(ulong *)(lVar40 + 0x18) = CONCAT44(extraout_var_03,extraout_var_02);
    *(ulong *)(lVar40 + 0x10) = CONCAT44(extraout_var_00,extraout_s0_00);
    *(ulong *)(lVar40 + 0x28) = CONCAT44(extraout_var_03,extraout_var_02);
    *(ulong *)(lVar40 + 0x20) = CONCAT44(extraout_var_00,extraout_s0_00);
    fVar47 = 0.0;
    fVar50 = 0.0;
    if (0 < *(int *)(lVar40 + 0x58)) {
      fVar50 = ABS(1.0 / (float)*(int *)(lVar40 + 0x58));
    }
    *(float *)(lVar40 + 0x78) = fVar50;
    *(undefined4 *)(lVar40 + 0x7c) = 0;
    if (0 < *(int *)(lVar40 + 0x6c)) {
      fVar47 = ABS(1.0 / (float)*(int *)(lVar40 + 0x6c));
    }
    *(float *)(lVar40 + 0x80) = fVar47;
    fVar47 = (float)*(undefined8 *)(param_1 + 0x358);
    if (*(char *)(param_1 + 0x370) != '\0') {
      fVar50 = (float)*(undefined8 *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
      fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) -
               *(float *)(param_1 + 0x344);
      fVar47 = fVar47 - *(float *)(param_1 + 0x348);
      fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20) -
               *(float *)(param_1 + 0x34c);
      fVar50 = fVar50 * fVar50;
      fVar49 = fVar49 * fVar49;
      fVar47 = fVar47 * fVar47;
      fVar46 = fVar46 * fVar46;
      auVar9._4_4_ = fVar49;
      auVar9._0_4_ = fVar50;
      auVar9._8_4_ = fVar47;
      auVar9._12_4_ = fVar46;
      auVar10._4_4_ = fVar49;
      auVar10._0_4_ = fVar50;
      auVar10._8_4_ = fVar47;
      auVar10._12_4_ = fVar46;
      auVar56 = NEON_ext(auVar9,auVar10,8,1);
      fVar47 = SQRT(auVar56._0_4_ + fVar50 + auVar56._4_4_ + fVar49);
    }
    *(float *)(param_1 + 0x46c) = fVar47;
    *(float *)(param_1 + 0x468) = fVar47;
    *(undefined4 *)(param_1 + 0xecec) = *(undefined4 *)(param_1 + 0xecf0);
    *(undefined1 *)(param_1 + 0xef22) = 0;
    *(undefined2 *)(param_1 + 0xef20) = 1;
    puVar37 = PTR_DAT_0437f970;
    puVar36 = PTR_DAT_0437f968;
    lVar40 = *(long *)(param_1 + 0xef10);
    if ((lVar40 == 0) || (*(int *)(lVar40 + 0xc) == 0)) {
LAB_01a1be44:
      plVar45 = (long *)0x0;
    }
    else {
      piVar2 = (int *)(lVar40 + 0xc);
      iVar38 = *(int *)(lVar40 + 0xc);
      do {
        puVar44 = *(undefined8 **)(lVar40 + 0x10);
        if (((*puVar36 & 1) == 0) && (iVar39 = __cxa_guard_acquire(puVar36), iVar39 != 0)) {
          uVar41 = FUN_0151c598();
          *(undefined8 *)puVar37 = uVar41;
          __cxa_guard_release(puVar36);
        }
        if (puVar44 == (undefined8 *)0x0) goto LAB_01a1be44;
        while (puVar44 != (undefined8 *)puVar37) {
          puVar44 = (undefined8 *)*puVar44;
          plVar45 = (long *)0x0;
          if (puVar44 == (undefined8 *)0x0) goto LAB_01a1be48;
        }
        iVar39 = *piVar2;
        if (iVar39 == iVar38) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar38 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar45 = (long *)0x0;
            if (*(long *)(lVar40 + 0x18) != 0) {
              plVar45 = (long *)(*(long *)(lVar40 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar45 = (long *)0x0;
        iVar38 = iVar39;
      } while (iVar39 != 0);
    }
LAB_01a1be48:
    FUN_028b55bc(plVar45 + 0x40);
    FUN_028bcbe4(0);
    if (plVar45 != (long *)0x0) {
      lVar40 = plVar45[0xb];
      piVar2 = (int *)(lVar40 + 0xc);
      do {
        iVar38 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar38 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar38 + -1 == 0) {
        *(undefined8 *)(lVar40 + 0x18) = 0;
        (**(code **)(*plVar45 + 0x20))(plVar45);
      }
    }
    puVar44 = *(undefined8 **)(param_1 + 0xef10);
    *(undefined8 *)(param_1 + 0xef10) = 0;
    if (puVar44 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar44 + 1);
      do {
        iVar38 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar38 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar38 + -1 == 0) {
        puVar44[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar38 = __cxa_guard_acquire(PTR_DAT_04379498), iVar38 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar40 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar40;
        local_60 = (long *)*puVar44;
        FUN_02a44274(lVar40 + 0xd8,&local_60);
      }
    }
    *(undefined8 *)(param_1 + 0xef18) = 0;
    FUN_00956dac(&local_70,param_1 + 0x1a8);
    local_38 = auStack_68;
    local_60 = local_70 + 0x1e;
    ppuStack_58 = &local_38;
    FUN_01a21720(local_60,&local_60);
    if (local_70 != (long *)0x0) {
      lVar40 = local_70[0xb];
      piVar2 = (int *)(lVar40 + 0xc);
      do {
        iVar38 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar38 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar38 + -1 == 0) {
        *(undefined8 *)(lVar40 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0xef24) = 0;
    *(undefined8 *)(param_1 + 0xef30) = 0;
    *(undefined8 *)(param_1 + 0xef38) = 0;
    uVar41 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
    *(undefined8 *)(param_1 + 0xef40) = *(undefined8 *)PTR_DAT_0437a120;
    *(undefined8 *)(param_1 + 0xef48) = uVar41;
  }
  return;
}


