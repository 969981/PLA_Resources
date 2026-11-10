/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a85de0; name: FUN_01a85de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01a85de0(long param_1)

{
  unkbyte9 *pVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  long lVar32;
  long lVar33;
  byte bVar34;
  byte extraout_b0;
  byte bVar36;
  undefined1 uVar37;
  byte extraout_var;
  byte bVar38;
  undefined1 uVar39;
  byte extraout_var_00;
  byte bVar40;
  undefined1 uVar41;
  byte extraout_var_01;
  byte bVar42;
  undefined1 uVar43;
  byte extraout_var_02;
  byte bVar44;
  undefined1 uVar45;
  byte extraout_var_03;
  byte bVar46;
  undefined1 uVar47;
  byte extraout_var_04;
  byte bVar48;
  undefined1 uVar49;
  byte extraout_var_05;
  byte bVar50;
  byte extraout_var_06;
  byte bVar51;
  byte extraout_var_07;
  byte bVar52;
  byte extraout_var_08;
  byte bVar53;
  byte extraout_var_09;
  byte bVar54;
  byte extraout_var_10;
  byte bVar55;
  byte extraout_var_11;
  byte bVar56;
  byte extraout_var_12;
  byte bVar57;
  undefined1 auVar35 [16];
  byte extraout_var_13;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar61;
  float fVar67;
  undefined8 uVar62;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined8 uVar95;
  long lVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  long *local_18;
  
  if (*(long *)(param_1 + 0x628) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_009b8474(&local_18,*(long *)(param_1 + 0x628));
    if (local_18 != (long *)0x0) {
      FUN_01829384(local_18);
      if (local_18 != (long *)0x0) {
        lVar33 = local_18[0xb];
        piVar2 = (int *)(lVar33 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar33 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
      bVar34 = extraout_b0;
      bVar36 = extraout_var;
      bVar38 = extraout_var_00;
      bVar40 = extraout_var_01;
      bVar42 = extraout_var_02;
      bVar44 = extraout_var_03;
      bVar46 = extraout_var_04;
      bVar48 = extraout_var_05;
      bVar50 = extraout_var_06;
      bVar51 = extraout_var_07;
      bVar52 = extraout_var_08;
      bVar53 = extraout_var_09;
      bVar54 = extraout_var_10;
      bVar55 = extraout_var_11;
      bVar56 = extraout_var_12;
      bVar57 = extraout_var_13;
      goto LAB_01a8606c;
    }
  }
  if ((*(float *)(param_1 + 0x8e0) <= 0.0) ||
     (*(float *)(param_1 + 0x8e0) <= *(float *)(param_1 + 0x8e4))) {
    FUN_009c69bc(&local_18);
    lVar96 = local_18[0x19];
    lVar33 = local_18[0x18];
    if (local_18 != (long *)0x0) {
      lVar32 = local_18[0xb];
      piVar2 = (int *)(lVar32 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar32 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    bVar34 = (byte)lVar33 & (byte)_DAT_038897c0;
    bVar36 = (byte)((ulong)lVar33 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
    bVar38 = (byte)((ulong)lVar33 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar40 = (byte)((ulong)lVar33 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar42 = (byte)((ulong)lVar33 >> 0x20) & (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar44 = (byte)((ulong)lVar33 >> 0x28) & (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar46 = (byte)((ulong)lVar33 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar48 = (byte)((ulong)lVar33 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar50 = (byte)lVar96 & (byte)_UNK_038897c8;
    bVar51 = (byte)((ulong)lVar96 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    bVar52 = (byte)((ulong)lVar96 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar53 = (byte)((ulong)lVar96 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    bVar54 = (byte)((ulong)lVar96 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar55 = (byte)((ulong)lVar96 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar56 = (byte)((ulong)lVar96 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar57 = (byte)((ulong)lVar96 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar61 = NEON_ext(CONCAT17(bVar48,CONCAT16(bVar46,CONCAT15(bVar44,CONCAT14(bVar42,CONCAT13(
                                                  bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)))))
                                              )),
                      CONCAT17(bVar48,CONCAT16(bVar46,CONCAT15(bVar44,CONCAT14(bVar42,CONCAT13(
                                                  bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)))))
                                              )),4,1);
    auVar7[1] = bVar36;
    auVar7[0] = bVar34;
    auVar7[2] = bVar38;
    auVar7[3] = bVar40;
    auVar7[4] = bVar42;
    auVar7[5] = bVar44;
    auVar7[6] = bVar46;
    auVar7[7] = bVar48;
    auVar7[8] = bVar50;
    auVar7[9] = bVar51;
    auVar7[10] = bVar52;
    auVar7[0xb] = bVar53;
    auVar7[0xc] = bVar54;
    auVar7[0xd] = bVar55;
    auVar7[0xe] = bVar56;
    auVar7[0xf] = bVar57;
    uVar62 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a6f0);
    auVar8[1] = bVar36;
    auVar8[0] = bVar34;
    auVar8[2] = bVar38;
    auVar8[3] = bVar40;
    auVar8[4] = bVar42;
    auVar8[5] = bVar44;
    auVar8[6] = bVar46;
    auVar8[7] = bVar48;
    auVar8[8] = bVar50;
    auVar8[9] = bVar51;
    auVar8[10] = bVar52;
    auVar8[0xb] = bVar53;
    auVar8[0xc] = bVar54;
    auVar8[0xd] = bVar55;
    auVar8[0xe] = bVar56;
    auVar8[0xf] = bVar57;
    uVar72 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a5e0);
    auVar9[1] = bVar36;
    auVar9[0] = bVar34;
    auVar9[2] = bVar38;
    auVar9[3] = bVar40;
    auVar9[4] = bVar42;
    auVar9[5] = bVar44;
    auVar9[6] = bVar46;
    auVar9[7] = bVar48;
    auVar9[8] = bVar50;
    auVar9[9] = bVar51;
    auVar9[10] = bVar52;
    auVar9[0xb] = bVar53;
    auVar9[0xc] = bVar54;
    auVar9[0xd] = bVar55;
    auVar9[0xe] = bVar56;
    auVar9[0xf] = bVar57;
    uVar78 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6d8);
    fVar59 = (float)uVar61 * (float)uVar61;
    fVar67 = (float)((ulong)uVar61 >> 0x20);
    fVar67 = fVar67 * fVar67;
    fVar81 = (float)uVar62;
    fVar83 = (float)((ulong)uVar62 >> 0x20);
    fVar71 = (float)uVar72 * (float)uVar72;
    fVar77 = (float)((ulong)uVar72 >> 0x20);
    fVar77 = fVar77 * fVar77;
    fVar68 = (float)uVar78;
    fVar69 = (float)((ulong)uVar78 >> 0x20);
    fVar80 = (float)_DAT_03888fc0 - (fVar59 + fVar59 + fVar71 + fVar71);
    fVar82 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar67 + fVar67 + fVar77 + fVar77);
    fVar84 = (float)_UNK_03888fc8 -
             (fVar81 * fVar81 + fVar81 * fVar81 + fVar68 * fVar68 + fVar68 * fVar68);
    fVar86 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
             (fVar83 * fVar83 + fVar83 * fVar83 + fVar69 * fVar69 + fVar69 * fVar69);
    auVar10[1] = bVar36;
    auVar10[0] = bVar34;
    auVar10[2] = bVar38;
    auVar10[3] = bVar40;
    auVar10[4] = bVar42;
    auVar10[5] = bVar44;
    auVar10[6] = bVar46;
    auVar10[7] = bVar48;
    auVar10[8] = bVar50;
    auVar10[9] = bVar51;
    auVar10[10] = bVar52;
    auVar10[0xb] = bVar53;
    auVar10[0xc] = bVar54;
    auVar10[0xd] = bVar55;
    auVar10[0xe] = bVar56;
    auVar10[0xf] = bVar57;
    uVar62 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
    fVar79 = (float)uVar62 * (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
    fVar58 = (float)((ulong)uVar62 >> 0x20) *
             (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar42)));
    fVar81 = fVar81 * (float)CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
    fVar83 = fVar83 * (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
    auVar11[1] = bVar36;
    auVar11[0] = bVar34;
    auVar11[2] = bVar38;
    auVar11[3] = bVar40;
    auVar11[4] = bVar42;
    auVar11[5] = bVar44;
    auVar11[6] = bVar46;
    auVar11[7] = bVar48;
    auVar11[8] = bVar50;
    auVar11[9] = bVar51;
    auVar11[10] = bVar52;
    auVar11[0xb] = bVar53;
    auVar11[0xc] = bVar54;
    auVar11[0xd] = bVar55;
    auVar11[0xe] = bVar56;
    auVar11[0xf] = bVar57;
    uVar62 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
    fVar79 = fVar79 + fVar79;
    fVar58 = fVar58 + fVar58;
    fVar81 = fVar81 + fVar81;
    fVar83 = fVar83 + fVar83;
    fVar77 = (float)((ulong)lVar96 >> 0x20);
    fVar59 = (float)uVar62 * fVar77;
    fVar67 = (float)((ulong)uVar62 >> 0x20) * fVar77;
    fVar59 = fVar59 + fVar59;
    fVar67 = fVar67 + fVar67;
    fVar71 = fVar68 * fVar77 + fVar68 * fVar77;
    fVar77 = fVar69 * fVar77 + fVar69 * fVar77;
    fVar68 = fVar79 + fVar59;
    fVar69 = fVar58 + fVar67;
    fVar70 = fVar81 + fVar71;
    fVar85 = fVar83 + fVar77;
    auVar73._0_4_ = fVar79 - fVar59;
    auVar73._4_4_ = fVar58 - fVar67;
    auVar73._8_4_ = fVar81 - fVar71;
    auVar73._12_4_ = fVar83 - fVar77;
    auVar17._4_4_ = fVar69;
    auVar17._0_4_ = fVar68;
    auVar17._8_4_ = fVar70;
    auVar17._12_4_ = fVar85;
    uVar72 = a64_TBL(ZEXT816(0),auVar17,auVar73,DAT_0388a758);
    auVar18._4_4_ = fVar69;
    auVar18._0_4_ = fVar68;
    auVar18._8_4_ = fVar70;
    auVar18._12_4_ = fVar85;
    uVar62 = a64_TBL(ZEXT816(0),auVar18,auVar73,DAT_0388a720);
    uVar37 = (undefined1)((ulong)uVar62 >> 8);
    uVar39 = (undefined1)((ulong)uVar62 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar62 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar62 >> 0x20);
    uVar45 = (undefined1)((ulong)uVar62 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar62 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar62 >> 0x38);
    auVar25._4_4_ = fVar82;
    auVar25._0_4_ = fVar80;
    auVar25._8_4_ = fVar84;
    auVar25._12_4_ = fVar86;
    auVar30[8] = (char)uVar62;
    auVar30._0_8_ = uVar72;
    auVar30[9] = uVar37;
    auVar30[10] = uVar39;
    auVar30[0xb] = uVar41;
    auVar30[0xc] = uVar43;
    auVar30[0xd] = uVar45;
    auVar30[0xe] = uVar47;
    auVar30[0xf] = uVar49;
    uVar61 = a64_TBL(ZEXT816(0),auVar25,auVar30,DAT_0388a668);
    fVar77 = (float)uVar61;
    fVar79 = (float)((ulong)uVar61 >> 0x20);
    auVar26._4_4_ = fVar82;
    auVar26._0_4_ = fVar80;
    auVar26._8_4_ = fVar84;
    auVar26._12_4_ = fVar86;
    auVar31[8] = (char)uVar62;
    auVar31._0_8_ = uVar72;
    auVar31[9] = uVar37;
    auVar31[10] = uVar39;
    auVar31[0xb] = uVar41;
    auVar31[0xc] = uVar43;
    auVar31[0xd] = uVar45;
    auVar31[0xe] = uVar47;
    auVar31[0xf] = uVar49;
    uVar62 = a64_TBL(ZEXT816(0),auVar26,auVar31,DAT_0388a5a8);
    fVar58 = (float)uVar62;
    fVar81 = (float)((ulong)uVar62 >> 0x20);
    fVar59 = fVar58 * fVar58 + fVar77 * fVar77;
    fVar67 = fVar81 * fVar81 + fVar79 * fVar79;
    fVar71 = fVar59 + fVar67;
    fVar59 = fVar59 + fVar67;
    uVar37 = SUB41(fVar59,0);
    uVar39 = (undefined1)((uint)fVar59 >> 8);
    uVar41 = (undefined1)((uint)fVar59 >> 0x10);
    uVar43 = (undefined1)((uint)fVar59 >> 0x18);
    auVar12[4] = uVar37;
    auVar12._0_4_ = fVar71;
    auVar12[5] = uVar39;
    auVar12[6] = uVar41;
    auVar12[7] = uVar43;
    auVar12[8] = SUB41(fVar71,0);
    auVar12[9] = (char)((uint)fVar71 >> 8);
    auVar12[10] = (char)((uint)fVar71 >> 0x10);
    auVar12[0xb] = (char)((uint)fVar71 >> 0x18);
    auVar12[0xc] = uVar37;
    auVar12[0xd] = uVar39;
    auVar12[0xe] = uVar41;
    auVar12[0xf] = uVar43;
    auVar65 = NEON_frsqrte(auVar12,4);
    auVar74._0_4_ = auVar65._0_4_ * fVar71;
    auVar74._4_4_ = auVar65._4_4_ * fVar59;
    auVar74._8_4_ = auVar65._8_4_ * fVar71;
    uVar13 = (undefined2)(CONCAT15(uVar39,CONCAT14(uVar37,fVar71)) >> 0x20);
    auVar74._12_4_ = auVar65._12_4_ * (float)CONCAT13(uVar43,CONCAT12(uVar41,uVar13));
    auVar75 = NEON_frsqrts(auVar65,auVar74,4);
    auVar66._0_4_ = auVar65._0_4_ * auVar75._0_4_;
    auVar66._4_4_ = auVar65._4_4_ * auVar75._4_4_;
    auVar66._8_4_ = auVar65._8_4_ * auVar75._8_4_;
    auVar66._12_4_ = auVar65._12_4_ * auVar75._12_4_;
    auVar76._0_4_ = fVar71 * auVar66._0_4_;
    auVar76._4_4_ = fVar59 * auVar66._4_4_;
    auVar76._8_4_ = fVar71 * auVar66._8_4_;
    auVar76._12_4_ = (float)CONCAT13(uVar43,CONCAT12(uVar41,uVar13)) * auVar66._12_4_;
    iVar3 = -(uint)(fVar71 == 0.0);
    iVar14 = -(uint)(fVar59 == 0.0);
    iVar15 = -(uint)(fVar71 == 0.0);
    iVar16 = -(uint)((float)CONCAT13(uVar43,CONCAT12(uVar41,uVar13)) == 0.0);
    auVar65 = NEON_frsqrts(auVar66,auVar76,4);
    fVar77 = fVar77 * auVar66._0_4_ * auVar65._0_4_;
    fVar79 = fVar79 * auVar66._4_4_ * auVar65._4_4_;
    fVar58 = fVar58 * auVar66._8_4_ * auVar65._8_4_;
    fVar81 = fVar81 * auVar66._12_4_ * auVar65._12_4_;
    bVar34 = SUB41(fVar77,0) & ~(byte)iVar3;
    bVar36 = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar3 >> 8);
    bVar38 = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
    bVar40 = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
    bVar42 = SUB41(fVar79,0) & ~(byte)iVar14;
    bVar44 = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar14 >> 8);
    bVar46 = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
    bVar48 = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
    bVar50 = SUB41(fVar58,0) & ~(byte)iVar15;
    bVar51 = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar15 >> 8);
    bVar52 = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
    bVar53 = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
    bVar54 = SUB41(fVar81,0) & ~(byte)iVar16;
    bVar55 = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar16 >> 8);
    bVar56 = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
    bVar57 = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
  }
  else {
    pVar1 = (unkbyte9 *)(param_1 + 0x900);
    uVar62 = *(undefined8 *)(param_1 + 0x908);
    uVar37 = (undefined1)((ulong)uVar62 >> 8);
    uVar39 = (undefined1)((ulong)uVar62 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar62 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar62 >> 0x20);
    uVar45 = (undefined1)((ulong)uVar62 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar62 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar62 >> 0x38);
    fVar59 = (float)*(undefined8 *)pVar1;
    fVar79 = fVar59 * (float)_DAT_03889ac0;
    fVar67 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar81 = fVar67 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    fVar83 = (float)uVar62 * (float)_UNK_03889ac8;
    fVar85 = (float)((ulong)uVar62 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
    uVar87 = (undefined1)_UNK_03888d18;
    uVar88 = (undefined1)((ulong)_UNK_03888d18 >> 8);
    uVar89 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
    uVar90 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
    uVar91 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
    uVar92 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
    uVar93 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
    uVar94 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
    auVar27[8] = uVar87;
    auVar27._0_8_ = _DAT_03888d10;
    auVar27[9] = uVar88;
    auVar27[10] = uVar89;
    auVar27[0xb] = uVar90;
    auVar27[0xc] = uVar91;
    auVar27[0xd] = uVar92;
    auVar27[0xe] = uVar93;
    auVar27[0xf] = uVar94;
    uVar60 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a580);
    auVar28[8] = uVar87;
    auVar28._0_8_ = _DAT_03888d10;
    auVar28[9] = uVar88;
    auVar28[10] = uVar89;
    auVar28[0xb] = uVar90;
    auVar28[0xc] = uVar91;
    auVar28[0xd] = uVar92;
    auVar28[0xe] = uVar93;
    auVar28[0xf] = uVar94;
    uVar95 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a680);
    auVar19._4_4_ = fVar81;
    auVar19._0_4_ = fVar79;
    auVar19._8_4_ = fVar83;
    auVar19._12_4_ = fVar85;
    uVar62 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
    auVar20._4_4_ = fVar81;
    auVar20._0_4_ = fVar79;
    auVar20._8_4_ = fVar83;
    auVar20._12_4_ = fVar85;
    uVar97 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6c8);
    fVar82 = (float)((ulong)uVar95 >> 0x20);
    auVar21._4_4_ = fVar81;
    auVar21._0_4_ = fVar79;
    auVar21._8_4_ = fVar83;
    auVar21._12_4_ = fVar85;
    uVar98 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a680);
    auVar22._4_4_ = fVar81;
    auVar22._0_4_ = fVar79;
    auVar22._8_4_ = fVar83;
    auVar22._12_4_ = fVar85;
    uVar100 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a790);
    fVar77 = (float)((ulong)uVar60 >> 0x20);
    auVar23._4_4_ = fVar81;
    auVar23._0_4_ = fVar79;
    auVar23._8_4_ = fVar83;
    auVar23._12_4_ = fVar85;
    uVar99 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
    auVar24._4_4_ = fVar81;
    auVar24._0_4_ = fVar79;
    auVar24._8_4_ = fVar79;
    auVar24._12_4_ = fVar81;
    uVar61 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a648);
    auVar29[8] = uVar87;
    auVar29._0_8_ = _DAT_03888d10;
    auVar29[9] = uVar88;
    auVar29[10] = uVar89;
    auVar29[0xb] = uVar90;
    auVar29[0xc] = uVar91;
    auVar29[0xd] = uVar92;
    auVar29[0xe] = uVar93;
    auVar29[0xf] = uVar94;
    uVar72 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a880);
    fVar71 = (float)((ulong)uVar72 >> 0x20);
    auVar65[9] = uVar37;
    auVar65._0_9_ = *pVar1;
    auVar65[10] = uVar39;
    auVar65[0xb] = uVar41;
    auVar65[0xc] = uVar43;
    auVar65[0xd] = uVar45;
    auVar65[0xe] = uVar47;
    auVar65[0xf] = uVar49;
    uVar78 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a580);
    fVar70 = (float)_UNK_03889ad8;
    fVar80 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar68 = (float)_DAT_03889ad0;
    fVar69 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar58 = (fVar79 * (float)uVar60 + fVar68 * (float)uVar62 * 0.0 +
             fVar68 * (float)uVar72 * (float)uVar98) - (float)uVar95 * (float)uVar99;
    fVar81 = (fVar81 * fVar77 + fVar69 * (float)((ulong)uVar62 >> 0x20) * 0.0 +
             fVar69 * fVar71 * (float)((ulong)uVar98 >> 0x20)) -
             fVar82 * (float)((ulong)uVar99 >> 0x20);
    auVar63._0_8_ = CONCAT44(fVar81,fVar58);
    auVar63._8_4_ =
         (fVar83 * (float)uVar60 + fVar70 * (float)uVar95 * (float)uVar97 +
         fVar70 * (float)uVar61 * 0.0) - (float)uVar72 * (float)uVar100;
    auVar63._12_4_ =
         (fVar85 * fVar77 + fVar80 * fVar82 * (float)((ulong)uVar97 >> 0x20) +
         fVar80 * (float)((ulong)uVar61 >> 0x20) * 0.0) - fVar71 * (float)((ulong)uVar100 >> 0x20);
    auVar75[9] = uVar37;
    auVar75._0_9_ = *pVar1;
    auVar75[10] = uVar39;
    auVar75[0xb] = uVar41;
    auVar75[0xc] = uVar43;
    auVar75[0xd] = uVar45;
    auVar75[0xe] = uVar47;
    auVar75[0xf] = uVar49;
    uVar97 = a64_TBL(ZEXT816(0),auVar75,DAT_0388a680);
    uVar60 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a580);
    uVar98 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a6c8);
    fVar79 = (float)((ulong)uVar78 >> 0x20);
    fVar85 = (float)((ulong)uVar97 >> 0x20);
    uVar99 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a790);
    uVar72 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a680);
    uVar95 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a880);
    auVar64._8_8_ = auVar63._0_8_;
    auVar64._0_8_ = auVar63._0_8_;
    auVar6[9] = uVar37;
    auVar6._0_9_ = *pVar1;
    auVar6[10] = uVar39;
    auVar6[0xb] = uVar41;
    auVar6[0xc] = uVar43;
    auVar6[0xd] = uVar45;
    auVar6[0xe] = uVar47;
    auVar6[0xf] = uVar49;
    uVar62 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
    fVar83 = (float)((ulong)uVar62 >> 0x20);
    uVar61 = a64_TBL(ZEXT816(0),auVar64,DAT_0388a648);
    fVar71 = fVar59 * (float)uVar61;
    fVar77 = fVar67 * (float)((ulong)uVar61 >> 0x20);
    fVar59 = ((float)uVar78 * fVar58 + fVar68 * fVar59 * (float)uVar60 +
             fVar68 * (float)uVar62 * (float)uVar72) - (float)uVar97 * (float)uVar95;
    fVar67 = (fVar79 * fVar81 + fVar69 * fVar67 * (float)((ulong)uVar60 >> 0x20) +
             fVar69 * fVar83 * (float)((ulong)uVar72 >> 0x20)) -
             fVar85 * (float)((ulong)uVar95 >> 0x20);
    fVar58 = ((float)uVar78 * auVar63._8_4_ + fVar70 * (float)uVar97 * (float)uVar98 +
             fVar70 * fVar71) - (float)uVar62 * (float)uVar99;
    fVar71 = (fVar79 * auVar63._12_4_ + fVar80 * fVar85 * (float)((ulong)uVar98 >> 0x20) +
             fVar80 * (float)(CONCAT17((char)((uint)fVar77 >> 0x18),
                                       CONCAT16((char)((uint)fVar77 >> 0x10),
                                                CONCAT15((char)((uint)fVar77 >> 8),
                                                         CONCAT14(SUB41(fVar77,0),fVar71)))) >> 0x20
                             )) - fVar83 * (float)((ulong)uVar99 >> 0x20);
    bVar34 = SUB41(fVar59,0) & (byte)_DAT_038897c0;
    bVar36 = (byte)((uint)fVar59 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
    bVar38 = (byte)((uint)fVar59 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar40 = (byte)((uint)fVar59 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar42 = SUB41(fVar67,0) & (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar44 = (byte)((uint)fVar67 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar46 = (byte)((uint)fVar67 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar48 = (byte)((uint)fVar67 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar50 = SUB41(fVar58,0) & (byte)_UNK_038897c8;
    bVar51 = (byte)((uint)fVar58 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    bVar52 = (byte)((uint)fVar58 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar53 = (byte)((uint)fVar58 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    bVar54 = SUB41(fVar71,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar55 = (byte)((uint)fVar71 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar56 = (byte)((uint)fVar71 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar57 = (byte)((uint)fVar71 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  }
LAB_01a8606c:
  auVar35[1] = bVar36;
  auVar35[0] = bVar34;
  auVar35[2] = bVar38;
  auVar35[3] = bVar40;
  auVar35[4] = bVar42;
  auVar35[5] = bVar44;
  auVar35[6] = bVar46;
  auVar35[7] = bVar48;
  auVar35[8] = bVar50;
  auVar35[9] = bVar51;
  auVar35[10] = bVar52;
  auVar35[0xb] = bVar53;
  auVar35[0xc] = bVar54;
  auVar35[0xd] = bVar55;
  auVar35[0xe] = bVar56;
  auVar35[0xf] = bVar57;
  return auVar35;
}


