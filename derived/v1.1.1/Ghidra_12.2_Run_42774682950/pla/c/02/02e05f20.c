/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e05f20; name: FUN_02e05f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e05f20(float *param_1,long param_2,long param_3,ulong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  long lVar22;
  float *pfVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  float fVar52;
  float fVar56;
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  byte bVar59;
  float fVar60;
  byte bVar65;
  byte bVar66;
  undefined8 uVar61;
  undefined1 auVar62 [12];
  byte bVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined8 uVar81;
  byte bVar82;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined8 uVar83;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  
  lVar12 = *(long *)(param_3 + 0x48);
  if (param_4 < 2) {
    if (*(int *)(param_3 + 4) == 0) {
      pfVar13 = (float *)(lVar12 + 4);
      param_1 = param_1 + 1;
      uVar18 = param_4;
      pfVar21 = pfVar13;
      pfVar23 = pfVar13;
      do {
        pfVar2 = param_1 + param_4 * 2;
        pfVar3 = param_1 + param_4 * 6;
        pfVar4 = param_1 + param_4 * 4;
        pfVar16 = pfVar23 + -1;
        fVar52 = *pfVar23;
        pfVar1 = pfVar21 + -1;
        fVar68 = *pfVar21;
        pfVar23 = pfVar23 + param_2 * 6;
        pfVar21 = pfVar21 + param_2 * 4;
        fVar57 = pfVar13[-1] * pfVar2[-1] - *pfVar13 * *pfVar2;
        fVar58 = *pfVar2 * pfVar13[-1] + pfVar2[-1] * *pfVar13;
        fVar56 = *pfVar3 * *pfVar16 + pfVar3[-1] * fVar52;
        fVar52 = *pfVar16 * pfVar3[-1] - fVar52 * *pfVar3;
        fVar60 = *pfVar1 * pfVar4[-1] - fVar68 * *pfVar4;
        fVar68 = *pfVar4 * *pfVar1 + pfVar4[-1] * fVar68;
        fVar69 = *param_1;
        fVar70 = fVar52 + fVar57;
        fVar71 = fVar56 + fVar58;
        fVar57 = fVar57 - fVar52;
        fVar58 = fVar58 - fVar56;
        fVar52 = fVar69 + fVar68;
        fVar56 = fVar60 + param_1[-1];
        fVar60 = param_1[-1] - fVar60;
        param_1[-1] = fVar56;
        *param_1 = fVar52;
        pfVar4[-1] = fVar56 - fVar70;
        *pfVar4 = fVar52 - fVar71;
        fVar69 = fVar69 - fVar68;
        uVar18 = uVar18 - 1;
        pfVar13 = pfVar13 + param_2 * 2;
        param_1[-1] = param_1[-1] + fVar70;
        *param_1 = *param_1 + fVar71;
        param_1 = param_1 + 2;
        pfVar2[-1] = fVar60 + fVar58;
        *pfVar2 = fVar69 - fVar57;
        pfVar3[-1] = fVar60 - fVar58;
        *pfVar3 = fVar69 + fVar57;
      } while (uVar18 != 0);
    }
    else {
      pfVar13 = (float *)(lVar12 + 4);
      uVar18 = param_4;
      pfVar16 = param_1 + 1;
      pfVar21 = pfVar13;
      pfVar23 = pfVar13;
      do {
        pfVar3 = pfVar16 + param_4 * 2;
        pfVar4 = pfVar16 + param_4 * 6;
        pfVar5 = pfVar16 + param_4 * 4;
        pfVar1 = pfVar23 + -1;
        fVar52 = *pfVar23;
        pfVar2 = pfVar21 + -1;
        fVar68 = *pfVar21;
        pfVar23 = pfVar23 + param_2 * 6;
        pfVar21 = pfVar21 + param_2 * 4;
        fVar57 = pfVar13[-1] * pfVar3[-1] - *pfVar13 * *pfVar3;
        fVar58 = *pfVar3 * pfVar13[-1] + pfVar3[-1] * *pfVar13;
        fVar56 = *pfVar4 * *pfVar1 + pfVar4[-1] * fVar52;
        fVar52 = *pfVar1 * pfVar4[-1] - fVar52 * *pfVar4;
        fVar60 = *pfVar2 * pfVar5[-1] - fVar68 * *pfVar5;
        fVar68 = *pfVar5 * *pfVar2 + pfVar5[-1] * fVar68;
        fVar69 = *pfVar16;
        fVar70 = fVar52 + fVar57;
        fVar71 = fVar56 + fVar58;
        fVar57 = fVar57 - fVar52;
        fVar58 = fVar58 - fVar56;
        fVar52 = fVar69 + fVar68;
        fVar56 = fVar60 + pfVar16[-1];
        fVar60 = pfVar16[-1] - fVar60;
        pfVar16[-1] = fVar56;
        *pfVar16 = fVar52;
        *pfVar5 = fVar52 - fVar71;
        pfVar5[-1] = fVar56 - fVar70;
        fVar69 = fVar69 - fVar68;
        uVar18 = uVar18 - 1;
        pfVar13 = pfVar13 + param_2 * 2;
        pfVar16[-1] = pfVar16[-1] + fVar70;
        *pfVar16 = *pfVar16 + fVar71;
        pfVar3[-1] = fVar60 - fVar58;
        *pfVar3 = fVar69 + fVar57;
        pfVar4[-1] = fVar60 + fVar58;
        *pfVar4 = fVar69 - fVar57;
        pfVar16 = pfVar16 + 2;
      } while (uVar18 != 0);
    }
  }
  else {
    iVar24 = -(uint)(*(int *)(param_3 + 4) == 0);
    auVar54._0_8_ = CONCAT44(iVar24,iVar24);
    auVar54._8_4_ = iVar24;
    auVar54._12_4_ = iVar24;
    uVar36 = (undefined1)_UNK_03889f68;
    uVar38 = (undefined1)((ulong)_UNK_03889f68 >> 8);
    uVar40 = (undefined1)((ulong)_UNK_03889f68 >> 0x10);
    uVar42 = (undefined1)((ulong)_UNK_03889f68 >> 0x18);
    uVar44 = (undefined1)((ulong)_UNK_03889f68 >> 0x20);
    uVar46 = (undefined1)((ulong)_UNK_03889f68 >> 0x28);
    uVar48 = (undefined1)((ulong)_UNK_03889f68 >> 0x30);
    uVar50 = (undefined1)((ulong)_UNK_03889f68 >> 0x38);
    auVar53._8_8_ = _UNK_0388a458;
    auVar53._0_8_ = _DAT_0388a450;
    lVar19 = param_2 * 0x18;
    lVar20 = param_2 * 0x10;
    auVar26._8_8_ = auVar54._8_8_;
    auVar26._0_8_ = auVar54._0_8_;
    auVar25[8] = uVar36;
    auVar25._0_8_ = _DAT_03889f60;
    auVar25[9] = uVar38;
    auVar25[10] = uVar40;
    auVar25[0xb] = uVar42;
    auVar25[0xc] = uVar44;
    auVar25[0xd] = uVar46;
    auVar25[0xe] = uVar48;
    auVar25[0xf] = uVar50;
    auVar25 = auVar53 ^ (auVar53 ^ auVar25) & auVar54;
    lVar14 = 0;
    auVar64[8] = uVar36;
    auVar64._0_8_ = _DAT_03889f60;
    auVar64[9] = uVar38;
    auVar64[10] = uVar40;
    auVar64[0xb] = uVar42;
    auVar64[0xc] = uVar44;
    auVar64[0xd] = uVar46;
    auVar64[0xe] = uVar48;
    auVar64[0xf] = uVar50;
    auVar27[8] = uVar36;
    auVar27._0_8_ = _DAT_03889f60;
    auVar27[9] = uVar38;
    auVar27[10] = uVar40;
    auVar27[0xb] = uVar42;
    auVar27[0xc] = uVar44;
    auVar27[0xd] = uVar46;
    auVar27[0xe] = uVar48;
    auVar27[0xf] = uVar50;
    auVar27 = auVar27 ^ (auVar64 ^ auVar53) & auVar26;
    bVar37 = (byte)_UNK_038891d8;
    bVar39 = (byte)((ulong)_UNK_038891d8 >> 8);
    bVar41 = (byte)((ulong)_UNK_038891d8 >> 0x10);
    bVar43 = (byte)((ulong)_UNK_038891d8 >> 0x18);
    bVar45 = (byte)((ulong)_UNK_038891d8 >> 0x20);
    bVar47 = (byte)((ulong)_UNK_038891d8 >> 0x28);
    bVar49 = (byte)((ulong)_UNK_038891d8 >> 0x30);
    bVar51 = (byte)((ulong)_UNK_038891d8 >> 0x38);
    bVar28 = (byte)_DAT_038891d0;
    bVar29 = (byte)((ulong)_DAT_038891d0 >> 8);
    bVar30 = (byte)((ulong)_DAT_038891d0 >> 0x10);
    bVar31 = (byte)((ulong)_DAT_038891d0 >> 0x18);
    bVar32 = (byte)((ulong)_DAT_038891d0 >> 0x20);
    bVar33 = (byte)((ulong)_DAT_038891d0 >> 0x28);
    bVar34 = (byte)((ulong)_DAT_038891d0 >> 0x30);
    bVar35 = (byte)((ulong)_DAT_038891d0 >> 0x38);
    lVar15 = 0;
    lVar17 = 0;
    uVar18 = param_4 >> 1;
    lVar22 = param_2 << 3;
    lVar11 = lVar20;
    do {
      uVar61 = *(undefined8 *)(lVar12 + lVar14);
      lVar14 = lVar14 + lVar20;
      uVar18 = uVar18 - 1;
      uVar72 = *(undefined8 *)(lVar12 + lVar22);
      lVar22 = lVar22 + lVar20;
      uVar76 = *(undefined8 *)(lVar12 + lVar17);
      uVar81 = *(undefined8 *)(lVar12 + lVar19);
      uVar83 = *(undefined8 *)(lVar12 + lVar15);
      uVar9 = *(undefined8 *)(lVar12 + lVar11);
      lVar17 = lVar17 + param_2 * 0x30;
      lVar19 = lVar19 + param_2 * 0x30;
      lVar15 = lVar15 + param_2 * 0x20;
      lVar11 = lVar11 + param_2 * 0x20;
      auVar64 = *(undefined1 (*) [16])(param_1 + param_4 * 2);
      bVar59 = (byte)((ulong)uVar61 >> 0x20);
      bVar65 = (byte)((ulong)uVar61 >> 0x28);
      bVar66 = (byte)((ulong)uVar61 >> 0x30);
      bVar67 = (byte)((ulong)uVar61 >> 0x38);
      fVar52 = (float)CONCAT13(bVar67 ^ bVar31,
                               CONCAT12(bVar66 ^ bVar30,CONCAT11(bVar65 ^ bVar29,bVar59 ^ bVar28)));
      auVar62._0_8_ =
           CONCAT17(bVar67 ^ bVar35,
                    CONCAT16(bVar66 ^ bVar34,
                             CONCAT15(bVar65 ^ bVar33,CONCAT14(bVar59 ^ bVar32,fVar52))));
      bVar59 = (byte)((ulong)uVar72 >> 0x20);
      auVar62[8] = bVar59 ^ bVar37;
      bVar65 = (byte)((ulong)uVar72 >> 0x28);
      auVar62[9] = bVar65 ^ bVar39;
      bVar66 = (byte)((ulong)uVar72 >> 0x30);
      auVar62[10] = bVar66 ^ bVar41;
      bVar67 = (byte)((ulong)uVar72 >> 0x38);
      auVar62[0xb] = bVar67 ^ bVar43;
      auVar63[0xc] = bVar59 ^ bVar45;
      auVar63._0_12_ = auVar62;
      auVar63[0xd] = bVar65 ^ bVar47;
      auVar63[0xe] = bVar66 ^ bVar49;
      auVar63[0xf] = bVar67 ^ bVar51;
      bVar59 = (byte)((ulong)uVar76 >> 0x20);
      bVar65 = (byte)((ulong)uVar76 >> 0x28);
      bVar66 = (byte)((ulong)uVar76 >> 0x30);
      bVar67 = (byte)((ulong)uVar76 >> 0x38);
      fVar56 = (float)CONCAT13(bVar67 ^ bVar31,
                               CONCAT12(bVar66 ^ bVar30,CONCAT11(bVar65 ^ bVar29,bVar59 ^ bVar28)));
      bVar77 = (byte)((ulong)uVar81 >> 0x20);
      bVar78 = (byte)((ulong)uVar81 >> 0x28);
      bVar79 = (byte)((ulong)uVar81 >> 0x30);
      bVar80 = (byte)((ulong)uVar81 >> 0x38);
      fVar58 = (float)CONCAT13(bVar80 ^ bVar43,
                               CONCAT12(bVar79 ^ bVar41,CONCAT11(bVar78 ^ bVar39,bVar77 ^ bVar37)));
      pauVar6 = (undefined1 (*) [12])(param_1 + param_4 * 6);
      fVar70 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
      bVar82 = (byte)((ulong)uVar83 >> 0x20);
      bVar84 = (byte)((ulong)uVar83 >> 0x28);
      bVar85 = (byte)((ulong)uVar83 >> 0x30);
      bVar86 = (byte)((ulong)uVar83 >> 0x38);
      fVar60 = (float)CONCAT13(bVar86 ^ bVar31,
                               CONCAT12(bVar85 ^ bVar30,CONCAT11(bVar84 ^ bVar29,bVar82 ^ bVar28)));
      bVar87 = (byte)((ulong)uVar9 >> 0x20);
      bVar88 = (byte)((ulong)uVar9 >> 0x28);
      bVar89 = (byte)((ulong)uVar9 >> 0x30);
      bVar90 = (byte)((ulong)uVar9 >> 0x38);
      fVar68 = (float)CONCAT13(bVar90 ^ bVar43,
                               CONCAT12(bVar89 ^ bVar41,CONCAT11(bVar88 ^ bVar39,bVar87 ^ bVar37)));
      pauVar7 = (undefined1 (*) [12])(param_1 + param_4 * 4);
      fVar69 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      auVar54 = NEON_rev64(auVar64,4);
      fVar91 = (float)uVar61 * auVar64._0_4_ + fVar52 * auVar54._0_4_;
      fVar92 = (float)uVar61 * auVar64._4_4_ + (float)((ulong)auVar62._0_8_ >> 0x20) * auVar54._4_4_
      ;
      fVar93 = (float)uVar72 * auVar64._8_4_ + auVar62._8_4_ * auVar54._8_4_;
      fVar94 = (float)uVar72 * auVar64._12_4_ + auVar63._12_4_ * auVar54._12_4_;
      auVar10._12_4_ = fVar70;
      auVar10._0_12_ = *pauVar6;
      auVar64 = NEON_rev64(auVar10,4);
      auVar8._12_4_ = fVar69;
      auVar8._0_12_ = *pauVar7;
      auVar54 = NEON_rev64(auVar8,4);
      fVar52 = (float)uVar76 * (float)*(undefined8 *)*pauVar6 + fVar56 * auVar64._0_4_;
      fVar56 = (float)uVar76 * (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20) +
               (float)(CONCAT17(bVar67 ^ bVar35,
                                CONCAT16(bVar66 ^ bVar34,
                                         CONCAT15(bVar65 ^ bVar33,CONCAT14(bVar59 ^ bVar32,fVar56)))
                               ) >> 0x20) * auVar64._4_4_;
      fVar57 = (float)uVar81 * (float)*(undefined8 *)(*pauVar6 + 8) + fVar58 * auVar64._8_4_;
      fVar58 = (float)uVar81 * fVar70 +
               (float)(CONCAT17(bVar80 ^ bVar51,
                                CONCAT16(bVar79 ^ bVar49,
                                         CONCAT15(bVar78 ^ bVar47,CONCAT14(bVar77 ^ bVar45,fVar58)))
                               ) >> 0x20) * auVar64._12_4_;
      fVar71 = (float)uVar83 * (float)*(undefined8 *)*pauVar7 + fVar60 * auVar54._0_4_;
      fVar73 = (float)uVar83 * (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20) +
               (float)(CONCAT17(bVar86 ^ bVar35,
                                CONCAT16(bVar85 ^ bVar34,
                                         CONCAT15(bVar84 ^ bVar33,CONCAT14(bVar82 ^ bVar32,fVar60)))
                               ) >> 0x20) * auVar54._4_4_;
      fVar74 = (float)uVar9 * (float)*(undefined8 *)(*pauVar7 + 8) + fVar68 * auVar54._8_4_;
      fVar75 = (float)uVar9 * fVar69 +
               (float)(CONCAT17(bVar90 ^ bVar51,
                                CONCAT16(bVar89 ^ bVar49,
                                         CONCAT15(bVar88 ^ bVar47,CONCAT14(bVar87 ^ bVar45,fVar68)))
                               ) >> 0x20) * auVar54._12_4_;
      fVar60 = fVar52 + fVar91;
      fVar68 = fVar56 + fVar92;
      fVar69 = fVar57 + fVar93;
      fVar70 = fVar58 + fVar94;
      auVar55._0_4_ = fVar91 - fVar52;
      auVar55._4_4_ = fVar92 - fVar56;
      auVar55._8_4_ = fVar93 - fVar57;
      auVar55._12_4_ = fVar94 - fVar58;
      auVar64 = NEON_rev64(auVar55,4);
      fVar52 = (float)*(undefined8 *)param_1;
      fVar91 = fVar52 - fVar71;
      fVar56 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar92 = fVar56 - fVar73;
      fVar57 = (float)*(undefined8 *)(param_1 + 2);
      fVar93 = fVar57 - fVar74;
      fVar58 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
      fVar94 = fVar58 - fVar75;
      fVar71 = fVar71 + fVar52;
      fVar73 = fVar73 + fVar56;
      fVar74 = fVar74 + fVar57;
      fVar75 = fVar75 + fVar58;
      *(ulong *)(param_1 + param_4 * 4 + 2) = CONCAT44(fVar75 - fVar70,fVar74 - fVar69);
      *(ulong *)(param_1 + param_4 * 4) = CONCAT44(fVar73 - fVar68,fVar71 - fVar60);
      param_1[2] = fVar74 + fVar69;
      param_1[3] = fVar75 + fVar70;
      *param_1 = fVar71 + fVar60;
      param_1[1] = fVar73 + fVar68;
      *(ulong *)(param_1 + param_4 * 2 + 2) =
           CONCAT44(fVar94 + auVar25._12_4_ * auVar64._12_4_,fVar93 + auVar25._8_4_ * auVar64._8_4_)
      ;
      *(ulong *)(param_1 + param_4 * 2) =
           CONCAT44(fVar92 + auVar25._4_4_ * auVar64._4_4_,fVar91 + auVar25._0_4_ * auVar64._0_4_);
      pfVar13 = param_1 + param_4 * 6;
      pfVar13[2] = fVar93 + auVar27._8_4_ * auVar64._8_4_;
      pfVar13[3] = fVar94 + auVar27._12_4_ * auVar64._12_4_;
      *pfVar13 = fVar91 + auVar27._0_4_ * auVar64._0_4_;
      pfVar13[1] = fVar92 + auVar27._4_4_ * auVar64._4_4_;
      param_1 = param_1 + 4;
    } while (uVar18 != 0);
  }
  return;
}


