/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a20444; name: FUN_01a20444
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a20444(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  long **pplVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
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
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  long lVar41;
  ulong uVar42;
  long **pplVar43;
  long lVar44;
  float fVar45;
  float fVar46;
  undefined1 uVar47;
  undefined1 extraout_b0;
  undefined1 uVar48;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 uVar49;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar50;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar51;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar52;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar53;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar54;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar55;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar56;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar57;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar58;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar59;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 uVar60;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 uVar61;
  undefined1 uVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  float fVar72;
  undefined1 auVar68 [16];
  int iVar73;
  undefined1 auVar74 [12];
  int iVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar80;
  int iVar81;
  undefined1 auVar78 [16];
  undefined8 uVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  float fVar90;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  
  lVar41 = FUN_01a4b9b4();
  puVar38 = PTR_DAT_04379578;
  if (lVar41 != 0) {
    uVar9 = param_2[1];
    uVar31 = *param_2;
    uVar65 = *(undefined8 *)(param_1 + 0xedf8);
    uVar20 = *(undefined8 *)(param_1 + 0xedf0);
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar73 = __cxa_guard_acquire(PTR_DAT_04379578), iVar73 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    puVar40 = PTR_DAT_04379588;
    puVar39 = PTR_DAT_04379580;
    lVar44 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar44;
    lVar44 = *(long *)(lVar44 + 200);
    uVar86 = *(undefined8 *)(lVar44 + 0x538);
    uVar82 = *(undefined8 *)(lVar44 + 0x530);
    auVar76._0_4_ = (float)uVar31 + (float)uVar20 + (float)uVar82;
    auVar76._4_4_ =
         (float)((ulong)uVar31 >> 0x20) + (float)((ulong)uVar20 >> 0x20) +
         (float)((ulong)uVar82 >> 0x20);
    auVar76._8_4_ = (float)uVar9 + (float)uVar65 + (float)uVar86;
    auVar76._12_4_ =
         (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar65 >> 0x20) +
         (float)((ulong)uVar86 >> 0x20);
    uVar9 = param_3[1];
    uVar31 = *param_3;
    uVar65 = *(undefined8 *)(param_1 + 0xee08);
    uVar20 = *(undefined8 *)(param_1 + 0xee00);
    auVar66 = auVar76;
    if ((*puVar38 & 1) == 0) {
      iVar73 = __cxa_guard_acquire(PTR_DAT_04379578);
      auVar66._4_4_ = auVar76._4_4_;
      auVar66._0_4_ = auVar76._0_4_;
      auVar66._8_4_ = auVar76._8_4_;
      auVar66._12_4_ = auVar76._12_4_;
      if (iVar73 != 0) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
    }
    lVar44 = *(long *)puVar39;
    *(long *)puVar40 = lVar44;
    lVar44 = *(long *)(lVar44 + 200);
    uVar86 = *(undefined8 *)(lVar44 + 0x538);
    uVar82 = *(undefined8 *)(lVar44 + 0x530);
    fVar63 = (float)((ulong)uVar31 >> 0x20) + (float)((ulong)uVar20 >> 0x20) +
             (float)((ulong)uVar82 >> 0x20);
    fVar85 = (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar65 >> 0x20) +
             (float)((ulong)uVar86 >> 0x20);
    uStack_88 = auVar66._8_8_;
    local_90 = auVar66._0_8_;
    uStack_78 = CONCAT17((char)((uint)fVar85 >> 0x18),
                         CONCAT16((char)((uint)fVar85 >> 0x10),
                                  CONCAT15((char)((uint)fVar85 >> 8),
                                           CONCAT14(SUB41(fVar85,0),
                                                    (float)uVar9 + (float)uVar65 + (float)uVar86))))
    ;
    local_80 = CONCAT17((char)((uint)fVar63 >> 0x18),
                        CONCAT16((char)((uint)fVar63 >> 0x10),
                                 CONCAT15((char)((uint)fVar63 >> 8),
                                          CONCAT14(SUB41(fVar63,0),
                                                   (float)uVar31 + (float)uVar20 + (float)uVar82))))
    ;
    *(undefined8 *)(lVar41 + 0x328) = uStack_78;
    *(undefined8 *)(lVar41 + 800) = local_80;
    lVar44 = FUN_01a4b9b4(param_1);
    puVar38 = PTR_FloatDegree180_04372ce0;
    local_a0 = auVar76._0_4_;
    fStack_9c = auVar76._4_4_;
    fStack_98 = auVar76._8_4_;
    fStack_94 = auVar76._12_4_;
    if (lVar44 != 0) {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      uVar42 = FUN_00ab869c(&local_80,&local_90,&local_60,0x26000);
      local_a0 = (float)local_80;
      fVar30 = (float)local_90 - local_a0;
      fVar85 = (float)((ulong)local_80 >> 0x20);
      fVar32 = (float)((ulong)local_90 >> 0x20) - fVar85;
      fStack_98 = (float)uStack_78;
      fVar64 = (float)uStack_88 - fStack_98;
      fVar21 = (float)((ulong)uStack_78 >> 0x20);
      fVar69 = (float)((ulong)uStack_88 >> 0x20) - fVar21;
      fVar46 = fVar30 * fVar30;
      fVar63 = fVar32 * fVar32;
      uVar47 = (undefined1)((uint)fVar63 >> 8);
      uVar49 = (undefined1)((uint)fVar63 >> 0x10);
      uVar51 = (undefined1)((uint)fVar63 >> 0x18);
      fVar45 = fVar64 * fVar64;
      uVar53 = (undefined1)((uint)fVar45 >> 8);
      uVar55 = (undefined1)((uint)fVar45 >> 0x10);
      uVar56 = (undefined1)((uint)fVar45 >> 0x18);
      fVar84 = fVar69 * fVar69;
      uVar57 = (undefined1)((uint)fVar84 >> 8);
      uVar58 = (undefined1)((uint)fVar84 >> 0x10);
      uVar59 = (undefined1)((uint)fVar84 >> 0x18);
      auVar10[4] = SUB41(fVar63,0);
      auVar10._0_4_ = fVar46;
      auVar10[5] = uVar47;
      auVar10[6] = uVar49;
      auVar10[7] = uVar51;
      auVar10[8] = SUB41(fVar45,0);
      auVar10[9] = uVar53;
      auVar10[10] = uVar55;
      auVar10[0xb] = uVar56;
      auVar10[0xc] = SUB41(fVar84,0);
      auVar10[0xd] = uVar57;
      auVar10[0xe] = uVar58;
      auVar10[0xf] = uVar59;
      auVar11[4] = SUB41(fVar63,0);
      auVar11._0_4_ = fVar46;
      auVar11[5] = uVar47;
      auVar11[6] = uVar49;
      auVar11[7] = uVar51;
      auVar11[8] = SUB41(fVar45,0);
      auVar11[9] = uVar53;
      auVar11[10] = uVar55;
      auVar11[0xb] = uVar56;
      auVar11[0xc] = SUB41(fVar84,0);
      auVar11[0xd] = uVar57;
      auVar11[0xe] = uVar58;
      auVar11[0xf] = uVar59;
      auVar66 = NEON_ext(auVar10,auVar11,8,1);
      fVar46 = auVar66._0_4_ + fVar46;
      fVar63 = auVar66._4_4_ + fVar63;
      fVar45 = fVar46 + fVar63;
      fVar46 = fVar46 + fVar63;
      uVar47 = SUB41(fVar46,0);
      uVar49 = (undefined1)((uint)fVar46 >> 8);
      uVar51 = (undefined1)((uint)fVar46 >> 0x10);
      uVar53 = (undefined1)((uint)fVar46 >> 0x18);
      pplVar2 = (long **)(param_1 + 0xedc8);
      auVar12[4] = uVar47;
      auVar12._0_4_ = fVar45;
      auVar12[5] = uVar49;
      auVar12[6] = uVar51;
      auVar12[7] = uVar53;
      auVar12[8] = SUB41(fVar45,0);
      auVar12[9] = (char)((uint)fVar45 >> 8);
      auVar12[10] = (char)((uint)fVar45 >> 0x10);
      auVar12[0xb] = (char)((uint)fVar45 >> 0x18);
      auVar12[0xc] = uVar47;
      auVar12[0xd] = uVar49;
      auVar12[0xe] = uVar51;
      auVar12[0xf] = uVar53;
      auVar66 = NEON_frsqrte(auVar12,4);
      auVar75._0_4_ = auVar66._0_4_ * fVar45;
      auVar75._4_4_ = auVar66._4_4_ * fVar46;
      auVar75._8_4_ = auVar66._8_4_ * fVar45;
      uVar19 = (undefined2)(CONCAT15(uVar49,CONCAT14(uVar47,fVar45)) >> 0x20);
      auVar75._12_4_ = auVar66._12_4_ * (float)CONCAT13(uVar53,CONCAT12(uVar51,uVar19));
      auVar76 = NEON_frsqrts(auVar66,auVar75,4);
      auVar67._0_4_ = auVar66._0_4_ * auVar76._0_4_;
      auVar67._4_4_ = auVar66._4_4_ * auVar76._4_4_;
      auVar67._8_4_ = auVar66._8_4_ * auVar76._8_4_;
      auVar67._12_4_ = auVar66._12_4_ * auVar76._12_4_;
      auVar77._0_4_ = fVar45 * auVar67._0_4_;
      auVar77._4_4_ = fVar46 * auVar67._4_4_;
      auVar77._8_4_ = fVar45 * auVar67._8_4_;
      auVar77._12_4_ = (float)CONCAT13(uVar53,CONCAT12(uVar51,uVar19)) * auVar67._12_4_;
      auVar66 = NEON_frsqrts(auVar67,auVar77,4);
      fVar63 = *(float *)(param_1 + 0xedc8);
      iVar73 = -(uint)(fVar45 == 0.0);
      iVar79 = -(uint)(fVar46 == 0.0);
      iVar80 = -(uint)(fVar45 == 0.0);
      iVar81 = -(uint)((float)CONCAT13(uVar53,CONCAT12(uVar51,uVar19)) == 0.0);
      fVar45 = SQRT(fVar45);
      if (fVar63 < 3.4028235e+38) {
        fVar63 = fVar63 + 0.06;
        *(float *)pplVar2 = fVar63;
      }
      fVar30 = fVar30 * auVar67._0_4_ * auVar66._0_4_;
      fVar32 = fVar32 * auVar67._4_4_ * auVar66._4_4_;
      fVar64 = fVar64 * auVar67._8_4_ * auVar66._8_4_;
      fVar69 = fVar69 * auVar67._12_4_ * auVar66._12_4_;
      if ((uVar42 & 1) != 0) {
        fVar46 = SUB84(local_60,0) - local_a0;
        fVar84 = (float)((ulong)local_60 >> 0x20) - fVar85;
        fVar71 = (float)uStack_58 - fStack_98;
        fVar72 = (float)((ulong)uStack_58 >> 0x20) - fVar21;
        fVar46 = fVar46 * fVar46;
        fVar84 = fVar84 * fVar84;
        fVar71 = fVar71 * fVar71;
        fVar72 = fVar72 * fVar72;
        auVar33._4_4_ = fVar84;
        auVar33._0_4_ = fVar46;
        auVar33._8_4_ = fVar71;
        auVar33._12_4_ = fVar72;
        auVar34._4_4_ = fVar84;
        auVar34._0_4_ = fVar46;
        auVar34._8_4_ = fVar71;
        auVar34._12_4_ = fVar72;
        auVar66 = NEON_ext(auVar33,auVar34,8,1);
        fVar46 = SQRT(auVar66._0_4_ + fVar46 + auVar66._4_4_ + fVar84);
        local_70 = (long *)CONCAT44(local_70._4_4_,fVar46);
        if (fVar63 < fVar46) {
          pplVar43 = pplVar2;
        }
        else {
          pplVar43 = &local_70;
        }
        fVar63 = *(float *)pplVar43;
        *(float *)pplVar2 = fVar63;
      }
      fVar46 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                               CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar30 >> 8) &
                                                  ~(byte)((uint)iVar73 >> 8),
                                                  SUB41(fVar30,0) & ~(byte)iVar73)));
      auVar74._0_8_ =
           CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                    CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10),
                             CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar79 >> 8),
                                      CONCAT14(SUB41(fVar32,0) & ~(byte)iVar79,fVar46))));
      auVar74[8] = SUB41(fVar64,0) & ~(byte)iVar80;
      auVar74[9] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar80 >> 8);
      auVar74[10] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
      auVar74[0xb] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
      auVar78[0xc] = SUB41(fVar69,0) & ~(byte)iVar81;
      auVar78._0_12_ = auVar74;
      auVar78[0xd] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar81 >> 8);
      auVar78[0xe] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
      auVar78[0xf] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
      if (fVar45 <= fVar63) {
        fVar63 = 3.4028235e+38;
        *(float *)pplVar2 = 3.4028235e+38;
      }
      uVar47 = SUB41(fVar63,0);
      uVar49 = (char)((uint)fVar63 >> 8);
      uVar51 = (char)((uint)fVar63 >> 0x10);
      uVar53 = (char)((uint)fVar63 >> 0x18);
      if (fVar45 <= fVar63) {
        uVar47 = SUB41(fVar45,0);
        uVar49 = (char)((uint)fVar45 >> 8);
        uVar51 = (char)((uint)fVar45 >> 0x10);
        uVar53 = (char)((uint)fVar45 >> 0x18);
      }
      fVar63 = (float)CONCAT13(uVar53,CONCAT12(uVar51,CONCAT11(uVar49,uVar47)));
      local_a0 = local_a0 + fVar46 * fVar63;
      fVar85 = fVar85 + (float)((ulong)auVar74._0_8_ >> 0x20) * fVar63;
      fStack_98 = fStack_98 + auVar74._8_4_ * fVar63;
      fVar21 = fVar21 + auVar78._12_4_ * fVar63;
      fVar63 = fVar85 + (float)((ulong)_DAT_03889770 >> 0x20);
      fVar46 = fVar21 + (float)((ulong)_UNK_03889778 >> 0x20);
      fStack_94 = (float)(CONCAT17((char)((uint)fVar21 >> 0x18),
                                   CONCAT16((char)((uint)fVar21 >> 0x10),
                                            CONCAT15((char)((uint)fVar21 >> 8),
                                                     CONCAT14(SUB41(fVar21,0),fStack_98)))) >> 0x20)
      ;
      fStack_9c = (float)(CONCAT17((char)((uint)fVar85 >> 0x18),
                                   CONCAT16((char)((uint)fVar85 >> 0x10),
                                            CONCAT15((char)((uint)fVar85 >> 8),
                                                     CONCAT14(SUB41(fVar85,0),local_a0)))) >> 0x20);
      uStack_68 = CONCAT17((char)((uint)fVar46 >> 0x18),
                           CONCAT16((char)((uint)fVar46 >> 0x10),
                                    CONCAT15((char)((uint)fVar46 >> 8),
                                             CONCAT14(SUB41(fVar46,0),
                                                      fStack_98 + (float)_UNK_03889778))));
      local_70 = (long *)CONCAT17((char)((uint)fVar63 >> 0x18),
                                  CONCAT16((char)((uint)fVar63 >> 0x10),
                                           CONCAT15((char)((uint)fVar63 >> 8),
                                                    CONCAT14(SUB41(fVar63,0),
                                                             local_a0 + (float)_DAT_03889770))));
      uVar42 = FUN_00ab5160(&local_70,&local_60,0x26000,3);
      if ((uVar42 & 1) != 0) {
        fVar63 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
        uVar42 = (ulong)(*(float *)(param_1 + 0x36c) * 0.5 * (fVar63 / *(float *)puVar38));
        pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar42 >> 0x18 & 0xff) * 0x10);
        fVar63 = (float)((uint)uVar42 & 0xffffff) * 5.9604645e-08;
        fVar45 = pfVar1[2];
        fVar21 = pfVar1[3];
        fVar85 = *pfVar1;
        fVar46 = pfVar1[1];
        FUN_018fc9a0(&local_70,param_1 + 0x2f0);
        if (local_70 == (long *)0x0) {
          fVar84 = 0.0;
        }
        else {
          fVar84 = *(float *)((long)local_70 + 0x234);
          lVar44 = local_70[0xb];
          piVar3 = (int *)(lVar44 + 0xc);
          do {
            iVar73 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = iVar73 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar73 + -1 == 0) {
            *(undefined8 *)(lVar44 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
          }
        }
        fVar64 = SUB84(local_60,0) - local_a0;
        fVar30 = (float)((ulong)local_60 >> 0x20);
        fVar69 = fVar30 - fStack_9c;
        fVar71 = (float)uStack_58 - fStack_98;
        fVar32 = (float)((ulong)uStack_58 >> 0x20);
        fVar72 = fVar32 - fStack_94;
        auVar68._0_4_ = fVar64 * fVar64;
        auVar68._4_4_ = fVar69 * fVar69;
        auVar68._8_4_ = fVar71 * fVar71;
        auVar68._12_4_ = fVar72 * fVar72;
        fVar63 = *(float *)(param_1 + 0xee18) +
                 ((fVar46 + fVar21 * fVar63) / (fVar85 + fVar45 * fVar63)) * fVar84;
        auVar66 = NEON_ext(auVar68,auVar68,8,1);
        if (SQRT(auVar66._0_4_ + auVar68._0_4_ + auVar66._4_4_ + auVar68._4_4_) < fVar63) {
          local_a0 = SUB84(local_60,0) + 0.0;
          fVar30 = fVar30 + fVar63;
          fStack_98 = (float)uStack_58 + 0.0;
          fVar32 = fVar32 + 0.0;
          fStack_94 = (float)(CONCAT17((char)((uint)fVar32 >> 0x18),
                                       CONCAT16((char)((uint)fVar32 >> 0x10),
                                                CONCAT15((char)((uint)fVar32 >> 8),
                                                         CONCAT14(SUB41(fVar32,0),fStack_98)))) >>
                             0x20);
          fStack_9c = (float)(CONCAT17((char)((uint)fVar30 >> 0x18),
                                       CONCAT16((char)((uint)fVar30 >> 0x10),
                                                CONCAT15((char)((uint)fVar30 >> 8),
                                                         CONCAT14(SUB41(fVar30,0),local_a0)))) >>
                             0x20);
        }
      }
    }
    lVar44 = *(long *)(param_1 + 0xe2b0);
    *(undefined8 *)(lVar44 + 0xe4) = 0;
    *(undefined8 *)(lVar44 + 0x44) = 0;
    *(undefined8 *)(lVar44 + 0x94) = 0;
    *(undefined8 *)(lVar44 + 0x58) = 0;
    *(undefined8 *)(lVar44 + 0x50) = 0;
    *(undefined8 *)(lVar44 + 0x130) = 0;
    *(undefined8 *)(lVar44 + 0xf0) = 0;
    *(undefined8 *)(lVar44 + 0xf8) = 0;
    *(undefined8 *)(lVar44 + 0x100) = 0;
    *(undefined8 *)(lVar44 + 0x108) = 0;
    *(undefined8 *)(lVar44 + 0x110) = 0;
    *(undefined8 *)(lVar44 + 0x118) = 0;
    *(undefined8 *)(lVar44 + 0x120) = 0;
    *(undefined8 *)(lVar44 + 0x128) = 0;
    *(undefined8 *)(lVar44 + 0xa8) = 0;
    *(undefined8 *)(lVar44 + 0xa0) = 0;
    if (*(char *)(lVar44 + 0x140) != '\0') {
      *(undefined1 *)(lVar44 + 0x140) = 0;
    }
    lVar44 = *(long *)(param_1 + 0xe2d0);
    uVar47 = 0;
    uVar49 = 0;
    uVar51 = 0;
    uVar53 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    *(undefined8 *)(lVar44 + 0x10) = local_80;
    *(undefined8 *)(lVar44 + 0x18) = uStack_78;
    *(undefined8 *)(lVar44 + 0x28) = uStack_78;
    *(undefined4 *)(lVar44 + 0x34) = *(undefined4 *)(lVar44 + 0x50);
    *(undefined4 *)(lVar44 + 0x38) = *(undefined4 *)(lVar44 + 0x40);
    *(undefined4 *)(lVar44 + 0x30) = *(undefined4 *)(lVar44 + 0x40);
    *(undefined4 *)(lVar44 + 0x74) = 0;
    *(undefined8 *)(lVar44 + 0x20) = local_80;
    if (0 < *(int *)(lVar44 + 0x58)) {
      fVar63 = ABS(1.0 / (float)*(int *)(lVar44 + 0x58));
      uVar55 = SUB41(fVar63,0);
      uVar56 = (undefined1)((uint)fVar63 >> 8);
      uVar57 = (undefined1)((uint)fVar63 >> 0x10);
      uVar58 = (undefined1)((uint)fVar63 >> 0x18);
    }
    *(uint *)(lVar44 + 0x78) = CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
    *(undefined4 *)(lVar44 + 0x7c) = 0;
    if (0 < *(int *)(lVar44 + 0x6c)) {
      fVar63 = ABS(1.0 / (float)*(int *)(lVar44 + 0x6c));
      uVar47 = SUB41(fVar63,0);
      uVar49 = (undefined1)((uint)fVar63 >> 8);
      uVar51 = (undefined1)((uint)fVar63 >> 0x10);
      uVar53 = (undefined1)((uint)fVar63 >> 0x18);
    }
    *(uint *)(lVar44 + 0x80) = CONCAT13(uVar53,CONCAT12(uVar51,CONCAT11(uVar49,uVar47)));
    local_a0 = local_a0 - (float)local_80;
    uVar47 = SUB41(local_a0,0);
    fStack_9c = fStack_9c - (float)((ulong)local_80 >> 0x20);
    uVar49 = SUB41(fStack_9c,0);
    uVar51 = (undefined1)((uint)fStack_9c >> 8);
    uVar53 = (undefined1)((uint)fStack_9c >> 0x10);
    uVar55 = (undefined1)((uint)fStack_9c >> 0x18);
    fStack_98 = fStack_98 - (float)uStack_78;
    uVar56 = SUB41(fStack_98,0);
    fStack_94 = fStack_94 - (float)((ulong)uStack_78 >> 0x20);
    uVar57 = SUB41(fStack_94,0);
    uVar58 = (undefined1)((uint)fStack_94 >> 8);
    uVar59 = (undefined1)((uint)fStack_94 >> 0x10);
    uVar60 = (undefined1)((uint)fStack_94 >> 0x18);
    fStack_94 = (float)(CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fStack_98)))
                                ) >> 0x20);
    fStack_9c = (float)(CONCAT17(uVar55,CONCAT16(uVar53,CONCAT15(uVar51,CONCAT14(uVar49,local_a0))))
                       >> 0x20);
    FUN_00aacd40(uVar47,uVar56);
    fVar63 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))) + -360.0;
    if ((float)CONCAT13(extraout_var_07,CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))
                       ) == 180.0 ||
        (float)CONCAT13(extraout_var_07,CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))
                       ) < 180.0) {
      fVar63 = (float)CONCAT13(extraout_var_07,
                               CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0)));
    }
    if (fVar63 < -180.0) {
      fVar63 = fVar63 + 360.0;
    }
    fVar85 = local_a0 * local_a0 + fStack_98 * fStack_98;
    fVar21 = SQRT(fVar85);
    uVar48 = SUB41(fVar21,0);
    if (NAN(fVar21)) {
      fVar85 = sqrtf(fVar85);
      uVar48 = SUB41(fVar85,0);
    }
    FUN_00aacd40(uVar49,uVar48);
    fVar85 = (float)CONCAT13(extraout_var_08,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00))) +
             -360.0;
    uVar54 = (undefined1)((uint)fVar85 >> 0x18);
    uVar48 = SUB41(fVar85,0);
    uVar50 = (undefined1)((uint)fVar85 >> 8);
    uVar52 = (undefined1)((uint)fVar85 >> 0x10);
    if ((float)CONCAT13(extraout_var_08,
                        CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00))) == 180.0
        || (float)CONCAT13(extraout_var_08,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00))) <
           180.0) {
      uVar48 = extraout_b0_00;
      uVar50 = extraout_var_00;
      uVar52 = extraout_var_04;
      uVar54 = extraout_var_08;
    }
    if (!NAN((float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar50,uVar48)))) &&
        (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar50,uVar48))) < -180.0) {
      fVar85 = (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar50,uVar48))) + 360.0;
      uVar48 = SUB41(fVar85,0);
      uVar50 = (undefined1)((uint)fVar85 >> 8);
      uVar52 = (undefined1)((uint)fVar85 >> 0x10);
      uVar54 = (undefined1)((uint)fVar85 >> 0x18);
    }
    fVar85 = *(float *)PTR_FloatPi_04372cf0 / *(float *)puVar38;
    fVar63 = fVar63 * fVar85;
    fVar85 = -(fVar85 * (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar50,uVar48))));
    FUN_009a7ff4(SUB41(fVar63,0),SUB41(fVar85,0));
    *(ulong *)(lVar41 + 0x358) =
         CONCAT17(extraout_var_33,
                  CONCAT16(extraout_var_31,
                           CONCAT15(extraout_var_29,
                                    CONCAT14(extraout_var_27,
                                             CONCAT13(extraout_var_25,
                                                      CONCAT12(extraout_var_23,
                                                               CONCAT11(extraout_var_21,
                                                                        extraout_var_19)))))));
    *(ulong *)(lVar41 + 0x350) =
         CONCAT17(extraout_var_17,
                  CONCAT16(extraout_var_15,
                           CONCAT15(extraout_var_13,
                                    CONCAT14(extraout_var_11,
                                             CONCAT13(extraout_var_09,
                                                      CONCAT12(extraout_var_05,
                                                               CONCAT11(extraout_var_01,
                                                                        extraout_b0_01)))))));
    if (*(char *)(param_1 + 0x370) == '\0') {
      *(float *)(param_1 + 0x360) = fVar63;
      *(float *)(param_1 + 0x364) = fVar85;
    }
    uVar54 = (undefined1)((uint)fStack_98 >> 8);
    uVar61 = (undefined1)((uint)fStack_98 >> 0x10);
    uVar62 = (undefined1)((uint)fStack_98 >> 0x18);
    uVar48 = (undefined1)((uint)local_a0 >> 8);
    uVar50 = (undefined1)((uint)local_a0 >> 0x10);
    uVar52 = (undefined1)((uint)local_a0 >> 0x18);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0xef50);
    if (*(long *)(param_1 + 0x3d0) != 0) {
      fVar85 = (float)CONCAT13(extraout_var_25,
                               CONCAT12(extraout_var_23,CONCAT11(extraout_var_21,extraout_var_19)));
      fStack_a4 = (float)(CONCAT17(extraout_var_33,
                                   CONCAT16(extraout_var_31,
                                            CONCAT15(extraout_var_29,
                                                     CONCAT14(extraout_var_27,fVar85)))) >> 0x20);
      fVar63 = (float)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_05,CONCAT11(extraout_var_01,extraout_b0_01)));
      uVar31 = CONCAT17(extraout_var_17,
                        CONCAT16(extraout_var_15,
                                 CONCAT15(extraout_var_13,CONCAT14(extraout_var_11,fVar63))));
      FUN_009e659c(&local_60);
      if (local_60 != (long *)0x0) {
        FUN_01c2f7bc();
        auVar37._8_4_ = fVar85;
        auVar37._0_8_ = uVar31;
        auVar36._8_4_ = fVar85;
        auVar36._0_8_ = uVar31;
        auVar35._8_4_ = fVar85;
        auVar35._0_8_ = uVar31;
        fVar90 = (float)((ulong)uVar31 >> 0x20);
        fVar45 = fVar63 * (float)_DAT_03889ac0;
        fVar30 = fVar90 * (float)((ulong)_DAT_03889ac0 >> 0x20);
        uVar47 = SUB41(fVar30,0);
        uVar49 = (undefined1)((uint)fVar30 >> 8);
        uVar51 = (undefined1)((uint)fVar30 >> 0x10);
        uVar53 = (undefined1)((uint)fVar30 >> 0x18);
        fVar85 = fVar85 * (float)_UNK_03889ac8;
        uVar55 = SUB41(fVar85,0);
        uVar56 = (undefined1)((uint)fVar85 >> 8);
        uVar57 = (undefined1)((uint)fVar85 >> 0x10);
        uVar58 = (undefined1)((uint)fVar85 >> 0x18);
        fVar69 = fStack_a4 * (float)((ulong)_UNK_03889ac8 >> 0x20);
        uVar59 = SUB41(fVar69,0);
        uVar60 = (undefined1)((uint)fVar69 >> 8);
        uVar48 = (undefined1)((uint)fVar69 >> 0x10);
        uVar50 = (undefined1)((uint)fVar69 >> 0x18);
        auVar6[1] = extraout_var_02;
        auVar6[0] = extraout_b0_02;
        auVar6[2] = extraout_var_06;
        auVar6[3] = extraout_var_10;
        auVar6[4] = extraout_var_12;
        auVar6[5] = extraout_var_14;
        auVar6[6] = extraout_var_16;
        auVar6[7] = extraout_var_18;
        auVar6[8] = extraout_var_20;
        auVar6[9] = extraout_var_22;
        auVar6[10] = extraout_var_24;
        auVar6[0xb] = extraout_var_26;
        auVar6[0xc] = extraout_var_28;
        auVar6[0xd] = extraout_var_30;
        auVar6[0xe] = extraout_var_32;
        auVar6[0xf] = extraout_var_34;
        uVar20 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
        auVar7[1] = extraout_var_02;
        auVar7[0] = extraout_b0_02;
        auVar7[2] = extraout_var_06;
        auVar7[3] = extraout_var_10;
        auVar7[4] = extraout_var_12;
        auVar7[5] = extraout_var_14;
        auVar7[6] = extraout_var_16;
        auVar7[7] = extraout_var_18;
        auVar7[8] = extraout_var_20;
        auVar7[9] = extraout_var_22;
        auVar7[10] = extraout_var_24;
        auVar7[0xb] = extraout_var_26;
        auVar7[0xc] = extraout_var_28;
        auVar7[0xd] = extraout_var_30;
        auVar7[0xe] = extraout_var_32;
        auVar7[0xf] = extraout_var_34;
        uVar82 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
        auVar22[4] = uVar47;
        auVar22._0_4_ = fVar45;
        auVar22[5] = uVar49;
        auVar22[6] = uVar51;
        auVar22[7] = uVar53;
        auVar22[8] = uVar55;
        auVar22[9] = uVar56;
        auVar22[10] = uVar57;
        auVar22[0xb] = uVar58;
        auVar22[0xc] = uVar59;
        auVar22[0xd] = uVar60;
        auVar22[0xe] = uVar48;
        auVar22[0xf] = uVar50;
        uVar65 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
        auVar23[4] = uVar47;
        auVar23._0_4_ = fVar45;
        auVar23[5] = uVar49;
        auVar23[6] = uVar51;
        auVar23[7] = uVar53;
        auVar23[8] = uVar55;
        auVar23[9] = uVar56;
        auVar23[10] = uVar57;
        auVar23[0xb] = uVar58;
        auVar23[0xc] = uVar59;
        auVar23[0xd] = uVar60;
        auVar23[0xe] = uVar48;
        auVar23[0xf] = uVar50;
        uVar86 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a6c8);
        fVar70 = (float)((ulong)uVar82 >> 0x20);
        auVar24[4] = uVar47;
        auVar24._0_4_ = fVar45;
        auVar24[5] = uVar49;
        auVar24[6] = uVar51;
        auVar24[7] = uVar53;
        auVar24[8] = uVar55;
        auVar24[9] = uVar56;
        auVar24[10] = uVar57;
        auVar24[0xb] = uVar58;
        auVar24[0xc] = uVar59;
        auVar24[0xd] = uVar60;
        auVar24[0xe] = uVar48;
        auVar24[0xf] = uVar50;
        uVar87 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
        fVar46 = (float)((ulong)uVar20 >> 0x20);
        auVar25[4] = uVar47;
        auVar25._0_4_ = fVar45;
        auVar25[5] = uVar49;
        auVar25[6] = uVar51;
        auVar25[7] = uVar53;
        auVar25[8] = uVar55;
        auVar25[9] = uVar56;
        auVar25[10] = uVar57;
        auVar25[0xb] = uVar58;
        auVar25[0xc] = uVar59;
        auVar25[0xd] = uVar60;
        auVar25[0xe] = uVar48;
        auVar25[0xf] = uVar50;
        uVar88 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
        auVar26[4] = uVar47;
        auVar26._0_4_ = fVar45;
        auVar26[5] = uVar49;
        auVar26[6] = uVar51;
        auVar26[7] = uVar53;
        auVar26[8] = uVar55;
        auVar26[9] = uVar56;
        auVar26[10] = uVar57;
        auVar26[0xb] = uVar58;
        auVar26[0xc] = uVar59;
        auVar26[0xd] = uVar60;
        auVar26[0xe] = uVar48;
        auVar26[0xf] = uVar50;
        uVar89 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a790);
        auVar27[4] = uVar47;
        auVar27._0_4_ = fVar45;
        auVar27[5] = uVar49;
        auVar27[6] = uVar51;
        auVar27[7] = uVar53;
        auVar27[8] = SUB41(fVar45,0);
        auVar27[9] = (char)((uint)fVar45 >> 8);
        auVar27[10] = (char)((uint)fVar45 >> 0x10);
        auVar27[0xb] = (char)((uint)fVar45 >> 0x18);
        auVar27[0xc] = uVar47;
        auVar27[0xd] = uVar49;
        auVar27[0xe] = uVar51;
        auVar27[0xf] = uVar53;
        uVar31 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a648);
        fVar84 = (float)CONCAT13(extraout_var_10,
                                 CONCAT12(extraout_var_06,CONCAT11(extraout_var_02,extraout_b0_02)))
                 * (float)uVar31;
        fVar32 = (float)CONCAT13(extraout_var_18,
                                 CONCAT12(extraout_var_16,CONCAT11(extraout_var_14,extraout_var_12))
                                ) * (float)((ulong)uVar31 >> 0x20);
        auVar8[1] = extraout_var_02;
        auVar8[0] = extraout_b0_02;
        auVar8[2] = extraout_var_06;
        auVar8[3] = extraout_var_10;
        auVar8[4] = extraout_var_12;
        auVar8[5] = extraout_var_14;
        auVar8[6] = extraout_var_16;
        auVar8[7] = extraout_var_18;
        auVar8[8] = extraout_var_20;
        auVar8[9] = extraout_var_22;
        auVar8[10] = extraout_var_24;
        auVar8[0xb] = extraout_var_26;
        auVar8[0xc] = extraout_var_28;
        auVar8[0xd] = extraout_var_30;
        auVar8[0xe] = extraout_var_32;
        auVar8[0xf] = extraout_var_34;
        uVar31 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
        fVar21 = (float)((ulong)uVar31 >> 0x20);
        auVar35._12_4_ = fStack_a4;
        uVar9 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a580);
        fVar71 = (float)_DAT_03889ad0;
        fVar72 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar28 = (float)_UNK_03889ad8;
        fVar29 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        fVar45 = (fVar45 * (float)uVar20 +
                  fVar71 * (float)CONCAT13(extraout_var_10,
                                           CONCAT12(extraout_var_06,
                                                    CONCAT11(extraout_var_02,extraout_b0_02))) *
                           (float)uVar65 + fVar71 * (float)uVar31 * (float)uVar87) -
                 (float)uVar82 * (float)uVar88;
        fVar30 = (fVar30 * fVar46 +
                  fVar72 * (float)CONCAT13(extraout_var_18,
                                           CONCAT12(extraout_var_16,
                                                    CONCAT11(extraout_var_14,extraout_var_12))) *
                           (float)((ulong)uVar65 >> 0x20) +
                 fVar72 * fVar21 * (float)((ulong)uVar87 >> 0x20)) -
                 fVar70 * (float)((ulong)uVar88 >> 0x20);
        uVar47 = SUB41(fVar30,0);
        uVar49 = (undefined1)((uint)fVar30 >> 8);
        uVar51 = (undefined1)((uint)fVar30 >> 0x10);
        uVar53 = (undefined1)((uint)fVar30 >> 0x18);
        fVar64 = (fVar85 * (float)uVar20 + fVar28 * (float)uVar82 * (float)uVar86 + fVar28 * fVar84)
                 - (float)uVar31 * (float)uVar89;
        uVar55 = SUB41(fVar64,0);
        uVar56 = (undefined1)((uint)fVar64 >> 8);
        uVar57 = (undefined1)((uint)fVar64 >> 0x10);
        uVar58 = (undefined1)((uint)fVar64 >> 0x18);
        fVar69 = (fVar69 * fVar46 + fVar29 * fVar70 * (float)((ulong)uVar86 >> 0x20) +
                 fVar29 * (float)(CONCAT17((char)((uint)fVar32 >> 0x18),
                                           CONCAT16((char)((uint)fVar32 >> 0x10),
                                                    CONCAT15((char)((uint)fVar32 >> 8),
                                                             CONCAT14(SUB41(fVar32,0),fVar84)))) >>
                                 0x20)) - fVar21 * (float)((ulong)uVar89 >> 0x20);
        uVar59 = SUB41(fVar69,0);
        uVar60 = (undefined1)((uint)fVar69 >> 8);
        uVar48 = (undefined1)((uint)fVar69 >> 0x10);
        uVar50 = (undefined1)((uint)fVar69 >> 0x18);
        auVar36._12_4_ = fStack_a4;
        uVar87 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a680);
        auVar13[4] = uVar47;
        auVar13._0_4_ = fVar45;
        auVar13[5] = uVar49;
        auVar13[6] = uVar51;
        auVar13[7] = uVar53;
        auVar13[8] = uVar55;
        auVar13[9] = uVar56;
        auVar13[10] = uVar57;
        auVar13[0xb] = uVar58;
        auVar13[0xc] = uVar59;
        auVar13[0xd] = uVar60;
        auVar13[0xe] = uVar48;
        auVar13[0xf] = uVar50;
        uVar20 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a580);
        auVar14[4] = uVar47;
        auVar14._0_4_ = fVar45;
        auVar14[5] = uVar49;
        auVar14[6] = uVar51;
        auVar14[7] = uVar53;
        auVar14[8] = uVar55;
        auVar14[9] = uVar56;
        auVar14[10] = uVar57;
        auVar14[0xb] = uVar58;
        auVar14[0xc] = uVar59;
        auVar14[0xd] = uVar60;
        auVar14[0xe] = uVar48;
        auVar14[0xf] = uVar50;
        uVar88 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a6c8);
        fVar83 = (float)((ulong)uVar87 >> 0x20);
        fVar85 = (float)((ulong)uVar9 >> 0x20);
        auVar15[4] = uVar47;
        auVar15._0_4_ = fVar45;
        auVar15[5] = uVar49;
        auVar15[6] = uVar51;
        auVar15[7] = uVar53;
        auVar15[8] = uVar55;
        auVar15[9] = uVar56;
        auVar15[10] = uVar57;
        auVar15[0xb] = uVar58;
        auVar15[0xc] = uVar59;
        auVar15[0xd] = uVar60;
        auVar15[0xe] = uVar48;
        auVar15[0xf] = uVar50;
        uVar86 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
        auVar16[4] = uVar47;
        auVar16._0_4_ = fVar45;
        auVar16[5] = uVar49;
        auVar16[6] = uVar51;
        auVar16[7] = uVar53;
        auVar16[8] = uVar55;
        auVar16[9] = uVar56;
        auVar16[10] = uVar57;
        auVar16[0xb] = uVar58;
        auVar16[0xc] = uVar59;
        auVar16[0xd] = uVar60;
        auVar16[0xe] = uVar48;
        auVar16[0xf] = uVar50;
        uVar89 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a790);
        auVar17[4] = uVar47;
        auVar17._0_4_ = fVar45;
        auVar17[5] = uVar49;
        auVar17[6] = uVar51;
        auVar17[7] = uVar53;
        auVar17[8] = uVar55;
        auVar17[9] = uVar56;
        auVar17[10] = uVar57;
        auVar17[0xb] = uVar58;
        auVar17[0xc] = uVar59;
        auVar17[0xd] = uVar60;
        auVar17[0xe] = uVar48;
        auVar17[0xf] = uVar50;
        uVar65 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a880);
        auVar37._12_4_ = fStack_a4;
        uVar82 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a880);
        fVar70 = (float)((ulong)uVar82 >> 0x20);
        auVar18[4] = uVar47;
        auVar18._0_4_ = fVar45;
        auVar18[5] = uVar49;
        auVar18[6] = uVar51;
        auVar18[7] = uVar53;
        auVar18[8] = SUB41(fVar45,0);
        auVar18[9] = (char)((uint)fVar45 >> 8);
        auVar18[10] = (char)((uint)fVar45 >> 0x10);
        auVar18[0xb] = (char)((uint)fVar45 >> 0x18);
        auVar18[0xc] = uVar47;
        auVar18[0xd] = uVar49;
        auVar18[0xe] = uVar51;
        auVar18[0xf] = uVar53;
        uVar31 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a648);
        fVar84 = fVar63 * (float)uVar31;
        fVar32 = fVar90 * (float)((ulong)uVar31 >> 0x20);
        fVar63 = ((float)uVar9 * fVar45 + fVar71 * fVar63 * (float)uVar20 +
                 fVar71 * (float)uVar82 * (float)uVar86) - (float)uVar87 * (float)uVar65;
        fVar21 = (fVar85 * fVar30 + fVar72 * fVar90 * (float)((ulong)uVar20 >> 0x20) +
                 fVar72 * fVar70 * (float)((ulong)uVar86 >> 0x20)) -
                 fVar83 * (float)((ulong)uVar65 >> 0x20);
        fVar46 = ((float)uVar9 * fVar64 + fVar28 * (float)uVar87 * (float)uVar88 + fVar28 * fVar84)
                 - (float)uVar82 * (float)uVar89;
        fVar85 = (fVar85 * fVar69 + fVar29 * fVar83 * (float)((ulong)uVar88 >> 0x20) +
                 fVar29 * (float)(CONCAT17((char)((uint)fVar32 >> 0x18),
                                           CONCAT16((char)((uint)fVar32 >> 0x10),
                                                    CONCAT15((char)((uint)fVar32 >> 8),
                                                             CONCAT14(SUB41(fVar32,0),fVar84)))) >>
                                 0x20)) - fVar70 * (float)((ulong)uVar89 >> 0x20);
        local_a0 = local_a0 +
                   (float)CONCAT13((byte)((uint)fVar63 >> 0x18) &
                                   (byte)((ulong)_DAT_038897c0 >> 0x18),
                                   CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                            (byte)((ulong)_DAT_038897c0 >> 0x10),
                                            CONCAT11((byte)((uint)fVar63 >> 8) &
                                                     (byte)((ulong)_DAT_038897c0 >> 8),
                                                     SUB41(fVar63,0) & (byte)_DAT_038897c0)));
        fStack_9c = fStack_9c +
                    (float)CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x38),
                                    CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x30),
                                             CONCAT11((byte)((uint)fVar21 >> 8) &
                                                      (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                      SUB41(fVar21,0) &
                                                      (byte)((ulong)_DAT_038897c0 >> 0x20))));
        fStack_98 = fStack_98 +
                    (float)CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x18),
                                    CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                             (byte)((ulong)_UNK_038897c8 >> 0x10),
                                             CONCAT11((byte)((uint)fVar46 >> 8) &
                                                      (byte)((ulong)_UNK_038897c8 >> 8),
                                                      SUB41(fVar46,0) & (byte)_UNK_038897c8)));
        fStack_94 = fStack_94 +
                    (float)CONCAT13((byte)((uint)fVar85 >> 0x18) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x38),
                                    CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                             (byte)((ulong)_UNK_038897c8 >> 0x30),
                                             CONCAT11((byte)((uint)fVar85 >> 8) &
                                                      (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                      SUB41(fVar85,0) &
                                                      (byte)((ulong)_UNK_038897c8 >> 0x20))));
        fStack_94 = (float)(CONCAT17((char)((uint)fStack_94 >> 0x18),
                                     CONCAT16((char)((uint)fStack_94 >> 0x10),
                                              CONCAT15((char)((uint)fStack_94 >> 8),
                                                       CONCAT14(SUB41(fStack_94,0),fStack_98)))) >>
                           0x20);
        fStack_9c = (float)(CONCAT17((char)((uint)fStack_9c >> 0x18),
                                     CONCAT16((char)((uint)fStack_9c >> 0x10),
                                              CONCAT15((char)((uint)fStack_9c >> 8),
                                                       CONCAT14(SUB41(fStack_9c,0),local_a0)))) >>
                           0x20);
        if (local_60 != (long *)0x0) {
          lVar44 = local_60[0xb];
          piVar3 = (int *)(lVar44 + 0xc);
          do {
            iVar73 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = iVar73 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar73 + -1 == 0) {
            *(undefined8 *)(lVar44 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
      }
      uVar56 = SUB41(fStack_98,0);
      uVar54 = (undefined1)((uint)fStack_98 >> 8);
      uVar61 = (undefined1)((uint)fStack_98 >> 0x10);
      uVar62 = (undefined1)((uint)fStack_98 >> 0x18);
      uVar57 = SUB41(fStack_94,0);
      uVar58 = (undefined1)((uint)fStack_94 >> 8);
      uVar59 = (undefined1)((uint)fStack_94 >> 0x10);
      uVar60 = (undefined1)((uint)fStack_94 >> 0x18);
      uVar47 = SUB41(local_a0,0);
      uVar48 = (undefined1)((uint)local_a0 >> 8);
      uVar50 = (undefined1)((uint)local_a0 >> 0x10);
      uVar52 = (undefined1)((uint)local_a0 >> 0x18);
      uVar49 = SUB41(fStack_9c,0);
      uVar51 = (undefined1)((uint)fStack_9c >> 8);
      uVar53 = (undefined1)((uint)fStack_9c >> 0x10);
      uVar55 = (undefined1)((uint)fStack_9c >> 0x18);
    }
    *(ulong *)(lVar41 + 0x348) =
         CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,CONCAT13(uVar62,CONCAT12(
                                                  uVar61,CONCAT11(uVar54,uVar56)))))));
    *(ulong *)(lVar41 + 0x340) =
         CONCAT17(uVar55,CONCAT16(uVar53,CONCAT15(uVar51,CONCAT14(uVar49,CONCAT13(uVar52,CONCAT12(
                                                  uVar50,CONCAT11(uVar48,uVar47)))))));
    *(undefined4 *)(lVar41 + 0x23c) = *(undefined4 *)(param_1 + 0x36c);
  }
  return;
}


