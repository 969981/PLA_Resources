/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f7310; name: FUN_030f7310
 */


void FUN_030f7310(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined2 *param_5,long *param_6,int *param_7,undefined2 *param_8,long *param_9,
                 long param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  ulong uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar33 [12];
  undefined8 uVar31;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar32 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined8 uVar48;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar75;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  float fVar87;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar112 [16];
  undefined1 auVar111 [16];
  undefined1 auVar110 [16];
  undefined1 auVar109 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 local_50;
  
  local_50 = *(undefined8 *)(param_1 + 0x10);
  if (*param_7 != 3) {
    uVar17 = FUN_030f7044(*(undefined8 *)(param_1 + 0xa0),param_2,param_4,param_7,param_9,param_10,
                          param_1 + 0xa8,&local_70);
    if ((uVar17 & 1) == 0) {
      return;
    }
    goto LAB_030f7630;
  }
  puVar19 = *(undefined8 **)(param_7 + 2);
  fVar64 = *(float *)(puVar19 + 1);
  fVar65 = *(float *)((long)puVar19 + 0x14);
  fVar60 = (float)*(undefined8 *)((long)puVar19 + 0xc);
  fVar63 = (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
  fVar72 = *(float *)(puVar19 + 4);
  fVar71 = (float)*puVar19;
  fVar75 = (float)((ulong)*puVar19 >> 0x20);
  fVar61 = (float)puVar19[3];
  fVar66 = (float)((ulong)puVar19[3] >> 0x20);
  if (param_7[4] == 3) {
    fVar56 = (float)*(undefined8 *)(param_10 + 0x38);
    fVar58 = (float)((ulong)*(undefined8 *)(param_10 + 0x38) >> 0x20);
    fVar54 = (float)*(undefined8 *)(param_10 + 0x30);
    fVar55 = (float)((ulong)*(undefined8 *)(param_10 + 0x30) >> 0x20);
    auVar51._0_4_ = fVar60 - fVar71;
    auVar51._4_4_ = fVar63 - fVar75;
    auVar51._8_4_ = fVar65 - fVar64;
    auVar51._12_4_ = fVar65 - fVar64;
    auVar78 = NEON_ext(auVar51,auVar51,4,1);
    fVar27 = fVar54 - fVar71;
    fVar28 = fVar55 - fVar75;
    fVar29 = fVar56 - fVar64;
    fVar30 = fVar58 - fVar64;
    auVar1._4_4_ = fVar28;
    auVar1._0_4_ = fVar27;
    auVar1._8_4_ = fVar29;
    auVar1._12_4_ = fVar30;
    auVar2._4_4_ = fVar28;
    auVar2._0_4_ = fVar27;
    auVar2._8_4_ = fVar29;
    auVar2._12_4_ = fVar30;
    auVar98 = NEON_ext(auVar1,auVar2,4,1);
    fVar76 = fVar61 - fVar60;
    fVar62 = fVar66 - fVar63;
    uVar38 = SUB41(fVar62,0);
    uVar39 = (undefined1)((uint)fVar62 >> 8);
    uVar40 = (undefined1)((uint)fVar62 >> 0x10);
    uVar41 = (undefined1)((uint)fVar62 >> 0x18);
    fVar46 = fVar72 - fVar65;
    fVar47 = fVar72 - fVar65;
    auVar4[4] = uVar38;
    auVar4._0_4_ = fVar76;
    auVar4[5] = uVar39;
    auVar4[6] = uVar40;
    auVar4[7] = uVar41;
    auVar4._8_4_ = fVar46;
    auVar4._12_4_ = fVar47;
    auVar5[4] = uVar38;
    auVar5._0_4_ = fVar76;
    auVar5[5] = uVar39;
    auVar5[6] = uVar40;
    auVar5[7] = uVar41;
    auVar5._8_4_ = fVar46;
    auVar5._12_4_ = fVar47;
    auVar88 = NEON_ext(auVar4,auVar5,4,1);
    auVar34._0_4_ = fVar71 - fVar61;
    auVar34._4_4_ = fVar75 - fVar66;
    auVar34._8_4_ = fVar64 - fVar72;
    auVar34._12_4_ = fVar64 - fVar72;
    fVar60 = fVar54 - fVar60;
    fVar63 = fVar55 - fVar63;
    fVar64 = fVar56 - fVar65;
    fVar65 = fVar58 - fVar65;
    fVar54 = fVar54 - fVar61;
    fVar55 = fVar55 - fVar66;
    fVar56 = fVar56 - fVar72;
    fVar58 = fVar58 - fVar72;
    auVar12._4_4_ = fVar55;
    auVar12._0_4_ = fVar54;
    auVar12._8_4_ = fVar56;
    auVar12._12_4_ = fVar58;
    auVar13._4_4_ = fVar55;
    auVar13._0_4_ = fVar54;
    auVar13._8_4_ = fVar56;
    auVar13._12_4_ = fVar58;
    auVar118 = NEON_ext(auVar12,auVar13,4,1);
    auVar79._0_4_ = auVar51._0_4_ * auVar98._0_4_ - auVar78._0_4_ * fVar27;
    auVar79._4_4_ = auVar51._4_4_ * auVar98._4_4_ - auVar78._4_4_ * fVar28;
    auVar79._8_4_ = auVar51._8_4_ * fVar27 - auVar51._0_4_ * fVar29;
    auVar79._12_4_ = auVar51._12_4_ * fVar28 - auVar51._4_4_ * fVar30;
    auVar99 = NEON_ext(auVar79,auVar79,4,1);
    fVar75 = (float)(CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(uVar38,fVar76)))) >>
                    0x20);
    fVar66 = auVar51._0_4_ * auVar88._0_4_ - fVar76 * auVar78._0_4_;
    fVar71 = auVar51._4_4_ * auVar88._4_4_ - fVar62 * auVar78._4_4_;
    auVar67._0_8_ = CONCAT44(fVar71,fVar66);
    auVar67._8_4_ = auVar51._8_4_ * fVar76 - fVar46 * auVar51._0_4_;
    auVar67._12_4_ = auVar51._12_4_ * fVar75 - fVar47 * auVar51._4_4_;
    auVar78 = NEON_ext(auVar67,auVar67,4,1);
    auVar14._4_4_ = fVar63;
    auVar14._0_4_ = fVar60;
    auVar14._8_4_ = fVar64;
    auVar14._12_4_ = fVar65;
    auVar15._4_4_ = fVar63;
    auVar15._0_4_ = fVar60;
    auVar15._8_4_ = fVar64;
    auVar15._12_4_ = fVar65;
    auVar98 = NEON_ext(auVar14,auVar15,4,1);
    fVar61 = auVar78._4_4_;
    auVar24._8_8_ = auVar67._0_8_;
    auVar24._0_8_ = auVar78._0_8_;
    auVar32 = auVar24._0_12_;
    fVar72 = auVar78._0_4_;
    auVar108._0_4_ = fVar72 * auVar99._0_4_;
    auVar108._4_4_ = fVar61 * auVar99._4_4_;
    auVar108._8_4_ = fVar66 * auVar79._0_4_;
    auVar108._12_4_ = fVar71 * auVar79._4_4_;
    auVar80._0_4_ = fVar76 * auVar98._0_4_ - auVar88._0_4_ * fVar60;
    auVar80._4_4_ = fVar62 * auVar98._4_4_ - auVar88._4_4_ * fVar63;
    auVar80._8_4_ = fVar46 * fVar60 - fVar76 * fVar64;
    auVar80._12_4_ = fVar47 * fVar63 - fVar75 * fVar65;
    auVar98 = NEON_ext(auVar80,auVar80,4,1);
    auVar78 = NEON_ext(auVar34,auVar34,4,1);
    fVar65 = fVar72 * auVar98._0_4_;
    auVar109._4_12_ = auVar108._4_12_;
    auVar109._0_4_ = auVar108._0_4_;
    auVar111._0_8_ = auVar109._0_8_;
    auVar111._8_4_ = auVar108._8_4_;
    auVar111._12_4_ = auVar108._12_4_;
    auVar110._8_8_ = auVar111._8_8_;
    auVar110._4_4_ = fVar65;
    auVar110._0_4_ = auVar108._0_4_;
    auVar112._0_12_ = auVar110._0_12_;
    auVar112._12_4_ = fVar66 * auVar80._0_4_;
    auVar81._0_4_ = auVar34._0_4_ * auVar118._0_4_ - auVar78._0_4_ * fVar54;
    auVar81._4_4_ = auVar34._4_4_ * auVar118._4_4_ - auVar78._4_4_ * fVar55;
    auVar81._8_4_ = auVar34._8_4_ * fVar54 - auVar34._0_4_ * fVar56;
    auVar81._12_4_ = auVar34._12_4_ * fVar55 - auVar34._4_4_ * fVar58;
    auVar78 = NEON_ext(auVar81,auVar81,4,1);
    fVar71 = fVar72 * auVar78._0_4_;
    fVar75 = fVar61 * auVar78._4_4_;
    auVar78 = NEON_ext(auVar112,auVar112,8,1);
    auVar89._0_4_ = auVar78._0_4_ + fVar61 * auVar99._4_4_ + auVar108._0_4_;
    auVar89._4_4_ = auVar78._4_4_ + fVar61 * auVar98._4_4_ + fVar65;
    fVar65 = fVar71 + fVar75 + fVar66 * auVar81._0_4_;
    fVar71 = fVar71 + fVar75 + fVar66 * auVar81._0_4_;
    auVar89._12_4_ = fVar71;
    auVar89._8_4_ = fVar65;
    if (!(0.0 < fVar65 && (0.0 < auVar89._0_4_ && 0.0 < auVar89._4_4_))) {
      fVar65 = auVar51._0_4_ * fVar27;
      auVar90._4_12_ = auVar89._4_12_;
      auVar90._0_4_ = fVar65;
      auVar92._0_8_ = auVar90._0_8_;
      auVar92._8_4_ = auVar51._8_4_ * fVar29;
      auVar92._12_4_ = fVar71;
      auVar91._8_8_ = auVar92._8_8_;
      auVar91._4_4_ = fVar76 * fVar60;
      auVar91._0_4_ = fVar65;
      auVar93._0_12_ = auVar91._0_12_;
      auVar93._12_4_ = fVar46 * fVar64;
      auVar98 = NEON_ext(auVar93,auVar93,8,1);
      fVar72 = auVar51._0_4_ * auVar51._0_4_;
      auVar100._4_12_ = auVar78._4_12_;
      auVar100._0_4_ = fVar72;
      auVar102._12_4_ = auVar78._12_4_;
      auVar102._0_8_ = auVar100._0_8_;
      auVar102._8_4_ = auVar51._8_4_ * auVar51._8_4_;
      auVar101._8_8_ = auVar102._8_8_;
      auVar101._4_4_ = fVar76 * fVar76;
      auVar101._0_4_ = fVar72;
      auVar103._0_12_ = auVar101._0_12_;
      auVar103._12_4_ = fVar46 * fVar46;
      auVar78 = NEON_ext(auVar103,auVar103,8,1);
      auVar73._0_4_ = auVar78._0_4_ + auVar51._4_4_ * auVar51._4_4_ + fVar72;
      auVar73._4_4_ = auVar78._4_4_ + fVar62 * fVar62 + fVar76 * fVar76;
      auVar73._12_4_ =
           auVar34._8_4_ * auVar34._8_4_ +
           auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_;
      auVar73._8_4_ =
           auVar34._8_4_ * auVar34._8_4_ +
           auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_;
      auVar78 = NEON_frecpe(auVar73,4);
      auVar88 = NEON_frecps(auVar73,auVar78,4);
      auVar82._0_4_ = auVar78._0_4_ * auVar88._0_4_;
      auVar82._4_4_ = auVar78._4_4_ * auVar88._4_4_;
      auVar82._8_4_ = auVar78._8_4_ * auVar88._8_4_;
      auVar82._12_4_ = auVar78._12_4_ * auVar88._12_4_;
      auVar78 = NEON_frecps(auVar73,auVar82,4);
      auVar68._0_4_ =
           (auVar98._0_4_ + auVar51._4_4_ * fVar28 + fVar65) * auVar82._0_4_ * auVar78._0_4_;
      auVar68._4_4_ =
           (auVar98._4_4_ + fVar62 * fVar63 + fVar76 * fVar60) * auVar82._4_4_ * auVar78._4_4_;
      auVar68._8_4_ =
           (auVar34._8_4_ * fVar56 + auVar34._0_4_ * fVar54 + auVar34._4_4_ * fVar55) *
           auVar82._8_4_ * auVar78._8_4_;
      auVar68._12_4_ =
           (auVar34._8_4_ * fVar56 + auVar34._0_4_ * fVar54 + auVar34._4_4_ * fVar55) *
           auVar82._12_4_ * auVar78._12_4_;
      auVar78 = NEON_fmov(0x3f800000,4);
      auVar78 = NEON_fminnm(auVar68,auVar78,4);
      auVar78 = NEON_fmax(auVar78,ZEXT816(0),4);
      fVar65 = auVar78._0_4_;
      fVar72 = auVar78._4_4_;
      fVar27 = fVar27 - auVar51._0_4_ * fVar65;
      fVar28 = fVar28 - auVar51._4_4_ * fVar65;
      fVar29 = fVar29 - auVar51._8_4_ * fVar65;
      fVar65 = auVar78._8_4_;
      fVar60 = fVar60 - fVar76 * fVar72;
      fVar63 = fVar63 - fVar62 * fVar72;
      uVar38 = (undefined1)((uint)fVar63 >> 8);
      uVar39 = (undefined1)((uint)fVar63 >> 0x10);
      uVar40 = (undefined1)((uint)fVar63 >> 0x18);
      fVar64 = fVar64 - fVar46 * fVar72;
      auVar49._0_4_ = fVar54 - auVar34._0_4_ * fVar65;
      auVar49._4_4_ = fVar55 - auVar34._4_4_ * fVar65;
      auVar49._8_4_ = fVar56 - auVar34._8_4_ * fVar65;
      fVar65 = fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29;
      fVar72 = fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29;
      fVar71 = fVar60 * fVar60 + fVar63 * fVar63 + fVar64 * fVar64;
      fVar75 = fVar60 * fVar60 + fVar63 * fVar63 + fVar64 * fVar64;
      fVar61 = auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_ +
               auVar49._8_4_ * auVar49._8_4_;
      fVar66 = auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_ +
               auVar49._8_4_ * auVar49._8_4_;
      auVar69._0_8_ = CONCAT44(-(uint)(fVar72 < fVar75),-(uint)(fVar65 < fVar71));
      auVar69._8_8_ = auVar69._0_8_;
      auVar3._4_4_ = fVar28;
      auVar3._0_4_ = fVar27;
      auVar3._8_4_ = fVar29;
      auVar6[4] = SUB41(fVar63,0);
      auVar6._0_4_ = fVar60;
      auVar6[5] = uVar38;
      auVar6[6] = uVar39;
      auVar6[7] = uVar40;
      auVar6._8_4_ = fVar64;
      auVar7[4] = SUB41(fVar63,0);
      auVar7._0_4_ = fVar60;
      auVar7[5] = uVar38;
      auVar7[6] = uVar39;
      auVar7[7] = uVar40;
      auVar7._8_4_ = fVar64;
      uVar22 = NEON_fmin(CONCAT44(fVar72,fVar65),CONCAT44(fVar75,fVar71),4);
      auVar35._0_8_ =
           CONCAT44(-(uint)((float)((ulong)uVar22 >> 0x20) < fVar66),-(uint)((float)uVar22 < fVar61)
                   );
      auVar35._8_8_ = auVar35._0_8_;
      uVar22 = NEON_fmin(uVar22,CONCAT44(fVar66,fVar61),4);
      uVar38 = (undefined1)uVar22;
      uVar39 = (undefined1)((ulong)uVar22 >> 8);
      uVar40 = (undefined1)((ulong)uVar22 >> 0x10);
      uVar41 = (undefined1)((ulong)uVar22 >> 0x18);
      uVar42 = (undefined1)((ulong)uVar22 >> 0x20);
      uVar43 = (undefined1)((ulong)uVar22 >> 0x28);
      uVar44 = (undefined1)((ulong)uVar22 >> 0x30);
      uVar45 = (undefined1)((ulong)uVar22 >> 0x38);
      auVar16 = auVar49 ^ (auVar49 ^ auVar7 ^ (auVar6 ^ auVar3) & auVar69._0_12_) & auVar35._0_12_;
      auVar23 = auVar32;
      goto LAB_030f7584;
    }
    uVar22 = CONCAT44(fVar66 * fVar66 + fVar72 * fVar72 + fVar61 * fVar61,
                      fVar66 * fVar66 + fVar72 * fVar72 + fVar61 * fVar61);
    fVar72 = fVar72 * fVar27;
    fVar61 = fVar61 * fVar28;
    fVar66 = fVar66 * fVar29;
LAB_030f79d0:
    uVar48 = NEON_frecpe(uVar22,4);
    uVar31 = NEON_frecps(uVar22,uVar48,4);
    fVar64 = (float)uVar48 * (float)uVar31;
    fVar65 = (float)((ulong)uVar48 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
    uVar31 = NEON_frecps(uVar22,CONCAT44(fVar65,fVar64),4);
    iVar9 = -(uint)((float)uVar22 == 0.0);
    fVar60 = (float)((ulong)uVar22 >> 0x20);
    iVar10 = -(uint)(fVar60 == 0.0);
    uVar17 = CONCAT44(fVar65 * (float)((ulong)uVar31 >> 0x20),fVar64 * (float)uVar31) &
             CONCAT17(~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(~(byte)iVar10,
                                                 CONCAT13(~(byte)((uint)iVar9 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar9 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar9 >> 8
                                                                                   ),~(byte)iVar9)))
                                                ))));
    fVar64 = (fVar66 + fVar72 + fVar61) * (float)uVar17;
    fVar65 = (fVar66 + fVar72 + fVar61) * (float)(uVar17 >> 0x20);
    fVar72 = (float)uVar22 * fVar64 * fVar64;
    uVar38 = SUB41(fVar72,0);
    uVar39 = (undefined1)((uint)fVar72 >> 8);
    uVar40 = (undefined1)((uint)fVar72 >> 0x10);
    uVar41 = (undefined1)((uint)fVar72 >> 0x18);
    fVar60 = fVar60 * fVar65 * fVar65;
    uVar42 = SUB41(fVar60,0);
    uVar43 = (undefined1)((uint)fVar60 >> 8);
    uVar44 = (undefined1)((uint)fVar60 >> 0x10);
    uVar45 = (undefined1)((uint)fVar60 >> 0x18);
    auVar23 = auVar32;
  }
  else {
    fVar76 = *(float *)((long)puVar19 + 0x2c);
    fVar56 = fVar60 - fVar71;
    fVar58 = fVar63 - fVar75;
    fVar57 = fVar65 - fVar64;
    fVar59 = fVar65 - fVar64;
    fVar62 = *(float *)(param_10 + 0x30);
    fVar27 = *(float *)(param_10 + 0x34);
    fVar28 = *(float *)(param_10 + 0x38);
    fVar29 = *(float *)(param_10 + 0x3c);
    auVar52._0_4_ = fVar61 - fVar60;
    auVar52._4_4_ = fVar66 - fVar63;
    auVar52._8_4_ = fVar72 - fVar65;
    auVar52._12_4_ = fVar72 - fVar65;
    fVar77 = (float)*(undefined8 *)((long)puVar19 + 0x24);
    auVar36._0_4_ = fVar77 - fVar61;
    fVar87 = (float)((ulong)*(undefined8 *)((long)puVar19 + 0x24) >> 0x20);
    auVar36._4_4_ = fVar87 - fVar66;
    auVar36._8_4_ = fVar76 - fVar72;
    auVar36._12_4_ = fVar76 - fVar72;
    fVar30 = fVar71 - fVar77;
    fVar46 = fVar75 - fVar87;
    fVar47 = fVar64 - fVar76;
    fVar54 = fVar64 - fVar76;
    fVar71 = fVar62 - fVar71;
    fVar75 = fVar27 - fVar75;
    uVar38 = SUB41(fVar75,0);
    uVar39 = (undefined1)((uint)fVar75 >> 8);
    uVar40 = (undefined1)((uint)fVar75 >> 0x10);
    uVar41 = (undefined1)((uint)fVar75 >> 0x18);
    fVar55 = fVar28 - fVar64;
    fVar64 = fVar29 - fVar64;
    auVar118._4_4_ = fVar58;
    auVar118._0_4_ = fVar56;
    auVar118._8_4_ = fVar57;
    auVar118._12_4_ = fVar59;
    auVar119._4_4_ = fVar58;
    auVar119._0_4_ = fVar56;
    auVar119._8_4_ = fVar57;
    auVar119._12_4_ = fVar59;
    auVar78 = NEON_ext(auVar118,auVar119,4,1);
    auVar74._0_4_ = fVar62 - fVar60;
    auVar74._4_4_ = fVar27 - fVar63;
    auVar74._8_4_ = fVar28 - fVar65;
    auVar74._12_4_ = fVar29 - fVar65;
    auVar70._0_4_ = fVar62 - fVar61;
    auVar70._4_4_ = fVar27 - fVar66;
    auVar70._8_4_ = fVar28 - fVar72;
    auVar70._12_4_ = fVar29 - fVar72;
    auVar118 = NEON_ext(auVar70,auVar70,4,1);
    fVar62 = fVar62 - fVar77;
    fVar27 = fVar27 - fVar87;
    fVar28 = fVar28 - fVar76;
    fVar29 = fVar29 - fVar76;
    auVar98 = NEON_ext(auVar52,auVar52,4,1);
    auVar120._4_4_ = fVar27;
    auVar120._0_4_ = fVar62;
    auVar120._8_4_ = fVar28;
    auVar120._12_4_ = fVar29;
    auVar117._4_4_ = fVar27;
    auVar117._0_4_ = fVar62;
    auVar117._8_4_ = fVar28;
    auVar117._12_4_ = fVar29;
    auVar119 = NEON_ext(auVar120,auVar117,4,1);
    fVar66 = fVar56 * auVar98._0_4_ - auVar52._0_4_ * auVar78._0_4_;
    auVar83._0_8_ = CONCAT44(fVar58 * auVar98._4_4_ - auVar52._4_4_ * auVar78._4_4_,fVar66);
    auVar83._8_4_ = fVar57 * auVar52._0_4_ - auVar52._8_4_ * fVar56;
    auVar83._12_4_ = fVar59 * auVar52._4_4_ - auVar52._12_4_ * fVar58;
    auVar88[4] = uVar38;
    auVar88._0_4_ = fVar71;
    auVar88[5] = uVar39;
    auVar88[6] = uVar40;
    auVar88[7] = uVar41;
    auVar88._8_4_ = fVar55;
    auVar88._12_4_ = fVar64;
    auVar99[4] = uVar38;
    auVar99._0_4_ = fVar71;
    auVar99[5] = uVar39;
    auVar99[6] = uVar40;
    auVar99[7] = uVar41;
    auVar99._8_4_ = fVar55;
    auVar99._12_4_ = fVar64;
    auVar88 = NEON_ext(auVar88,auVar99,4,1);
    auVar99 = NEON_ext(auVar83,auVar83,4,1);
    auVar25._0_4_ = fVar56 * auVar88._0_4_ - auVar78._0_4_ * fVar71;
    auVar25._4_4_ = fVar58 * auVar88._4_4_ - auVar78._4_4_ * fVar75;
    auVar25._8_4_ = fVar57 * fVar71 - fVar56 * fVar55;
    auVar25._12_4_ =
         fVar59 * (float)(CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(uVar38,fVar71))))
                         >> 0x20) - fVar58 * fVar64;
    auVar78 = NEON_ext(auVar74,auVar74,4,1);
    auVar88 = NEON_ext(auVar25,auVar25,4,1);
    auVar94._0_4_ = auVar52._0_4_ * auVar78._0_4_ - auVar98._0_4_ * auVar74._0_4_;
    auVar94._4_4_ = auVar52._4_4_ * auVar78._4_4_ - auVar98._4_4_ * auVar74._4_4_;
    auVar94._8_4_ = auVar52._8_4_ * auVar74._0_4_ - auVar52._0_4_ * auVar74._8_4_;
    auVar94._12_4_ = auVar52._12_4_ * auVar74._4_4_ - auVar52._4_4_ * auVar74._12_4_;
    auVar78 = NEON_ext(auVar36,auVar36,4,1);
    auVar120 = NEON_ext(auVar94,auVar94,4,1);
    auVar104._0_4_ = auVar36._0_4_ * auVar118._0_4_ - auVar70._0_4_ * auVar78._0_4_;
    auVar104._4_4_ = auVar36._4_4_ * auVar118._4_4_ - auVar70._4_4_ * auVar78._4_4_;
    auVar104._8_4_ = auVar36._8_4_ * auVar70._0_4_ - auVar70._8_4_ * auVar36._0_4_;
    auVar104._12_4_ = auVar36._12_4_ * auVar70._4_4_ - auVar70._12_4_ * auVar36._4_4_;
    auVar78._4_4_ = fVar46;
    auVar78._0_4_ = fVar30;
    auVar78._8_4_ = fVar47;
    auVar78._12_4_ = fVar54;
    auVar98._4_4_ = fVar46;
    auVar98._0_4_ = fVar30;
    auVar98._8_4_ = fVar47;
    auVar98._12_4_ = fVar54;
    auVar78 = NEON_ext(auVar78,auVar98,4,1);
    auVar98 = NEON_ext(auVar104,auVar104,4,1);
    fVar72 = auVar99._0_4_;
    fVar61 = auVar99._4_4_;
    auVar113._0_4_ = fVar30 * auVar119._0_4_ - fVar62 * auVar78._0_4_;
    auVar113._4_4_ = fVar46 * auVar119._4_4_ - fVar27 * auVar78._4_4_;
    auVar113._8_4_ = fVar47 * fVar62 - fVar28 * fVar30;
    auVar113._12_4_ = fVar54 * fVar27 - fVar29 * fVar46;
    auVar78 = NEON_ext(auVar113,auVar113,4,1);
    auVar26._8_8_ = auVar83._0_8_;
    auVar26._0_8_ = auVar99._0_8_;
    auVar32 = auVar26._0_12_;
    if (!(fVar66 * auVar113._0_4_ + fVar72 * auVar78._0_4_ + fVar61 * auVar78._4_4_ < 0.0 ||
         (fVar66 * auVar104._0_4_ + fVar72 * auVar98._0_4_ + fVar61 * auVar98._4_4_ < 0.0 ||
         (fVar66 * auVar25._0_4_ + fVar72 * auVar88._0_4_ + fVar61 * auVar88._4_4_ < 0.0 ||
         fVar66 * auVar94._0_4_ + fVar72 * auVar120._0_4_ + fVar61 * auVar120._4_4_ < 0.0)))) {
      uVar22 = CONCAT44(fVar66 * fVar66 + fVar72 * fVar72 + fVar61 * fVar61,
                        fVar66 * fVar66 + fVar72 * fVar72 + fVar61 * fVar61);
      fVar72 = fVar72 * fVar71;
      fVar61 = fVar61 * fVar75;
      fVar66 = fVar66 * fVar55;
      goto LAB_030f79d0;
    }
    auVar84._0_4_ = fVar56 * fVar71;
    auVar84._4_4_ = fVar58 * fVar75;
    auVar84._8_4_ = fVar57 * fVar55;
    auVar84._12_4_ = fVar59 * fVar64;
    auVar95._0_4_ = auVar52._0_4_ * auVar74._0_4_;
    auVar95._4_4_ = auVar52._4_4_ * auVar74._4_4_;
    auVar95._8_4_ = auVar52._8_4_ * auVar74._8_4_;
    auVar95._12_4_ = auVar52._12_4_ * auVar74._12_4_;
    auVar105._0_4_ = auVar70._0_4_ * auVar36._0_4_;
    auVar105._4_4_ = auVar70._4_4_ * auVar36._4_4_;
    auVar105._8_4_ = auVar70._8_4_ * auVar36._8_4_;
    auVar105._12_4_ = auVar70._12_4_ * auVar36._12_4_;
    auVar114._0_4_ = fVar30 * fVar62;
    auVar114._4_4_ = fVar46 * fVar27;
    auVar114._8_4_ = fVar47 * fVar28;
    auVar114._12_4_ = fVar54 * fVar29;
    auVar78 = NEON_ext(auVar84,auVar84,8,1);
    auVar98 = NEON_ext(auVar95,auVar95,8,1);
    auVar99 = NEON_ext(auVar105,auVar105,8,1);
    auVar119 = NEON_ext(auVar114,auVar114,8,1);
    auVar116._0_4_ = fVar30 * fVar30;
    auVar116._4_4_ = fVar46 * fVar46;
    auVar116._8_4_ = fVar47 * fVar47;
    auVar116._12_4_ = fVar54 * fVar54;
    auVar106._0_4_ = auVar52._0_4_ * auVar52._0_4_;
    auVar106._4_4_ = auVar52._4_4_ * auVar52._4_4_;
    auVar106._8_4_ = auVar52._8_4_ * auVar52._8_4_;
    auVar106._12_4_ = auVar52._12_4_ * auVar52._12_4_;
    auVar96._0_4_ = fVar56 * fVar56;
    auVar96._4_4_ = fVar58 * fVar58;
    auVar96._8_4_ = fVar57 * fVar57;
    auVar96._12_4_ = fVar59 * fVar59;
    auVar115._0_4_ = auVar36._0_4_ * auVar36._0_4_;
    auVar115._4_4_ = auVar36._4_4_ * auVar36._4_4_;
    auVar115._8_4_ = auVar36._8_4_ * auVar36._8_4_;
    auVar115._12_4_ = auVar36._12_4_ * auVar36._12_4_;
    auVar88 = NEON_ext(auVar96,auVar96,8,1);
    auVar118 = NEON_ext(auVar106,auVar106,8,1);
    auVar120 = NEON_ext(auVar115,auVar115,8,1);
    auVar117 = NEON_ext(auVar116,auVar116,8,1);
    auVar97._0_4_ = auVar88._0_4_ + auVar96._0_4_ + auVar96._4_4_;
    auVar97._4_4_ = auVar118._0_4_ + auVar106._0_4_ + auVar106._4_4_;
    auVar97._12_4_ = auVar117._0_4_ + auVar116._0_4_ + auVar116._4_4_;
    auVar97._8_4_ = auVar120._0_4_ + auVar115._0_4_ + auVar115._4_4_;
    auVar88 = NEON_frecpe(auVar97,4);
    auVar118 = NEON_frecps(auVar97,auVar88,4);
    auVar107._0_4_ = auVar88._0_4_ * auVar118._0_4_;
    auVar107._4_4_ = auVar88._4_4_ * auVar118._4_4_;
    auVar107._8_4_ = auVar88._8_4_ * auVar118._8_4_;
    auVar107._12_4_ = auVar88._12_4_ * auVar118._12_4_;
    auVar88 = NEON_frecps(auVar97,auVar107,4);
    auVar85._0_4_ = (auVar78._0_4_ + auVar84._0_4_ + auVar84._4_4_) * auVar107._0_4_ * auVar88._0_4_
    ;
    auVar85._4_4_ = (auVar98._0_4_ + auVar95._0_4_ + auVar95._4_4_) * auVar107._4_4_ * auVar88._4_4_
    ;
    auVar85._8_4_ =
         (auVar99._0_4_ + auVar105._0_4_ + auVar105._4_4_) * auVar107._8_4_ * auVar88._8_4_;
    auVar85._12_4_ =
         (auVar119._0_4_ + auVar114._0_4_ + auVar114._4_4_) * auVar107._12_4_ * auVar88._12_4_;
    auVar78 = NEON_fmov(0x3f800000,4);
    auVar78 = NEON_fminnm(auVar85,auVar78,4);
    auVar78 = NEON_fmax(auVar78,ZEXT816(0),4);
    fVar64 = auVar78._0_4_;
    fVar65 = auVar78._4_4_;
    fVar71 = fVar71 - fVar56 * fVar64;
    fVar75 = fVar75 - fVar58 * fVar64;
    fVar55 = fVar55 - fVar57 * fVar64;
    fVar72 = auVar78._12_4_;
    auVar50._0_4_ = auVar74._0_4_ - auVar52._0_4_ * fVar65;
    auVar50._4_4_ = auVar74._4_4_ - auVar52._4_4_ * fVar65;
    auVar50._8_4_ = auVar74._8_4_ - auVar52._8_4_ * fVar65;
    fVar64 = auVar78._8_4_;
    fVar62 = fVar62 - fVar30 * fVar72;
    fVar27 = fVar27 - fVar46 * fVar72;
    fVar28 = fVar28 - fVar47 * fVar72;
    auVar33._0_4_ = auVar70._0_4_ - auVar36._0_4_ * fVar64;
    auVar33._4_4_ = auVar70._4_4_ - auVar36._4_4_ * fVar64;
    auVar33._8_4_ = auVar70._8_4_ - auVar36._8_4_ * fVar64;
    fVar64 = fVar71 * fVar71 + fVar75 * fVar75 + fVar55 * fVar55;
    fVar65 = fVar71 * fVar71 + fVar75 * fVar75 + fVar55 * fVar55;
    fVar72 = auVar50._0_4_ * auVar50._0_4_ + auVar50._4_4_ * auVar50._4_4_ +
             auVar50._8_4_ * auVar50._8_4_;
    fVar60 = auVar50._0_4_ * auVar50._0_4_ + auVar50._4_4_ * auVar50._4_4_ +
             auVar50._8_4_ * auVar50._8_4_;
    fVar63 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
             auVar33._8_4_ * auVar33._8_4_;
    fVar61 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
             auVar33._8_4_ * auVar33._8_4_;
    fVar66 = fVar62 * fVar62 + fVar27 * fVar27 + fVar28 * fVar28;
    fVar76 = fVar62 * fVar62 + fVar27 * fVar27 + fVar28 * fVar28;
    auVar86._0_8_ = CONCAT44(-(uint)(fVar65 < fVar60),-(uint)(fVar64 < fVar72));
    auVar86._8_8_ = auVar86._0_8_;
    auVar8[4] = SUB41(fVar75,0);
    auVar8._0_4_ = fVar71;
    auVar8[5] = (char)((uint)fVar75 >> 8);
    auVar8[6] = (char)((uint)fVar75 >> 0x10);
    auVar8[7] = (char)((uint)fVar75 >> 0x18);
    auVar8._8_4_ = fVar55;
    auVar53._0_8_ = CONCAT44(-(uint)(fVar61 < fVar76),-(uint)(fVar63 < fVar66));
    auVar53._8_8_ = auVar53._0_8_;
    uVar31 = NEON_fmin(CONCAT44(fVar65,fVar64),CONCAT44(fVar60,fVar72),4);
    auVar23._4_4_ = fVar27;
    auVar23._0_4_ = fVar62;
    auVar23._8_4_ = fVar28;
    auVar16._4_4_ = fVar27;
    auVar16._0_4_ = fVar62;
    auVar16._8_4_ = fVar28;
    auVar16 = auVar16 ^ (auVar23 ^ auVar33) & auVar53._0_12_;
    uVar22 = NEON_fmin(CONCAT44(fVar61,fVar63),CONCAT44(fVar76,fVar66),4);
    auVar37._0_8_ =
         CONCAT44(-(uint)((float)((ulong)uVar31 >> 0x20) < (float)((ulong)uVar22 >> 0x20)),
                  -(uint)((float)uVar31 < (float)uVar22));
    uVar22 = NEON_fmin(uVar31,uVar22,4);
    uVar38 = (undefined1)uVar22;
    uVar39 = (undefined1)((ulong)uVar22 >> 8);
    uVar40 = (undefined1)((ulong)uVar22 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar22 >> 0x18);
    uVar42 = (undefined1)((ulong)uVar22 >> 0x20);
    uVar43 = (undefined1)((ulong)uVar22 >> 0x28);
    uVar44 = (undefined1)((ulong)uVar22 >> 0x30);
    uVar45 = (undefined1)((ulong)uVar22 >> 0x38);
    auVar37._8_8_ = auVar37._0_8_;
    auVar16 = auVar16 ^ (auVar16 ^ auVar50 ^ (auVar50 ^ auVar8) & auVar86._0_12_) & auVar37._0_12_;
    auVar23 = auVar32;
LAB_030f7584:
    auVar32 = auVar16;
    uVar22 = NEON_fmov(0x3f800000,4);
    fVar64 = (float)uVar22;
    fVar65 = (float)((ulong)uVar22 >> 0x20);
  }
  if ((float)local_50 * (float)local_50 <=
      (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)))) {
    return;
  }
  if (NAN((float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)))) ||
      (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) != 0.0) {
    uVar22 = NEON_frsqrte(CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,CONCAT13(
                                                  uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)))))
                                                  )),4);
    fStack_58 = (float)uVar22;
    fVar72 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar42,CONCAT13(
                                                  uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)))))
                                                  )),CONCAT44(fVar72 * fVar72,fStack_58 * fStack_58)
                          ,4);
    fStack_58 = fStack_58 * (float)uVar22;
    fVar72 = fVar72 * (float)((ulong)uVar22 >> 0x20);
    local_50 = CONCAT44((float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * fVar72,
                        (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) * fStack_58
                       );
    uStack_60 = CONCAT44(auVar32._4_4_ * fVar65 * fVar72,auVar32._0_4_ * fVar64 * fStack_58);
    fStack_58 = auVar32._8_4_ * fVar64 * fStack_58;
  }
  else {
    fVar60 = auVar23._0_4_;
    fVar71 = auVar23._4_4_;
    fStack_58 = auVar23._8_4_;
    uVar22 = CONCAT44(fStack_58 * fStack_58 + fVar60 * fVar60 + fVar71 * fVar71,
                      fStack_58 * fStack_58 + fVar60 * fVar60 + fVar71 * fVar71);
    uVar31 = NEON_frsqrte(uVar22,4);
    fVar72 = (float)uVar31;
    fVar63 = (float)((ulong)uVar31 >> 0x20);
    fVar65 = fVar63 * fVar63;
    uVar22 = NEON_frsqrts(uVar22,CONCAT17((char)((uint)fVar65 >> 0x18),
                                          CONCAT16((char)((uint)fVar65 >> 0x10),
                                                   CONCAT15((char)((uint)fVar65 >> 8),
                                                            CONCAT14(SUB41(fVar65,0),fVar72 * fVar72
                                                                    )))),4);
    fVar72 = fVar72 * (float)uVar22;
    uStack_60 = CONCAT44(fVar71 * fVar63 * (float)((ulong)uVar22 >> 0x20),fVar60 * fVar72);
    fStack_58 = fStack_58 * fVar72;
    local_50 = 0;
  }
  local_70 = (float)*(undefined8 *)(param_10 + 0x30) - (float)local_50 * (float)uStack_60;
  fStack_6c = (float)((ulong)*(undefined8 *)(param_10 + 0x30) >> 0x20) -
              (float)((ulong)local_50 >> 0x20) * (float)((ulong)uStack_60 >> 0x20);
  fStack_68 = (float)*(undefined8 *)(param_10 + 0x38) - (float)local_50 * fStack_58;
  *(bool *)(param_1 + 0xa8) = fVar64 != 1.0;
LAB_030f7630:
  *(undefined8 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x98) = 5;
  *(int *)(param_1 + 0x40) = (int)local_50;
  pfVar20 = (float *)param_9[4];
  fVar64 = *pfVar20;
  fVar65 = pfVar20[1];
  fVar72 = pfVar20[3];
  uVar31 = *(undefined8 *)(pfVar20 + 6);
  uVar22 = *(undefined8 *)(pfVar20 + 4);
  uVar11 = *(undefined8 *)(pfVar20 + 10);
  uVar48 = *(undefined8 *)(pfVar20 + 8);
  fVar60 = pfVar20[0xc];
  fVar71 = pfVar20[0xd];
  fVar63 = pfVar20[0xf];
  *(float *)(param_1 + 0x28) =
       pfVar20[0xe] + (float)uVar11 * fStack_68 + pfVar20[2] * local_70 + (float)uVar31 * fStack_6c;
  *(float *)(param_1 + 0x2c) =
       fVar63 + (float)((ulong)uVar11 >> 0x20) * fStack_68 +
                fVar72 * local_70 + (float)((ulong)uVar31 >> 0x20) * fStack_6c;
  *(float *)(param_1 + 0x20) =
       fVar60 + (float)uVar48 * fStack_68 + fVar64 * local_70 + (float)uVar22 * fStack_6c;
  *(float *)(param_1 + 0x24) =
       fVar71 + (float)((ulong)uVar48 >> 0x20) * fStack_68 +
                fVar65 * local_70 + (float)((ulong)uVar22 >> 0x20) * fStack_6c;
  pfVar20 = (float *)param_9[4];
  fVar64 = pfVar20[8];
  fVar65 = pfVar20[9];
  fVar72 = *pfVar20;
  fVar60 = pfVar20[1];
  uVar22 = *(undefined8 *)(pfVar20 + 4);
  fVar63 = (float)((ulong)uStack_60 >> 0x20);
  fVar71 = (float)uStack_60;
  *(ulong *)(param_1 + 0x38) =
       CONCAT44(pfVar20[0xb] * fStack_58 +
                pfVar20[3] * fVar71 + (float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) * fVar63,
                pfVar20[10] * fStack_58 +
                pfVar20[2] * fVar71 + (float)*(undefined8 *)(pfVar20 + 6) * fVar63);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(fVar65 * fStack_58 + fVar60 * fVar71 + (float)((ulong)uVar22 >> 0x20) * fVar63,
                fVar64 * fStack_58 + fVar72 * fVar71 + (float)uVar22 * fVar63);
  lVar21 = *param_6;
  if (lVar21 == 0) {
    uVar18 = 0xffffff;
    uVar22 = 0xffffffffffffffff;
  }
  else {
    uVar22 = *(undefined8 *)(lVar21 + 0xb0);
    uVar18 = *(undefined4 *)(lVar21 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar22;
  *(undefined4 *)(param_1 + 0x50) = uVar18;
  *(int *)(param_1 + 0x58) = (int)param_6[3];
  *(undefined2 *)(param_1 + 0x60) = *param_5;
  uVar18 = *(undefined4 *)(param_5 + 6);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_5 + 2);
  *(undefined4 *)(param_1 + 0x6c) = uVar18;
  *(undefined1 *)(param_1 + 0x5c) = 0xf;
  lVar21 = *param_9;
  if (lVar21 == 0) {
    uVar18 = 0xffffff;
    uVar22 = 0xffffffffffffffff;
  }
  else {
    uVar22 = *(undefined8 *)(lVar21 + 0xb0);
    uVar18 = *(undefined4 *)(lVar21 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar22;
  *(undefined4 *)(param_1 + 0x78) = uVar18;
  *(int *)(param_1 + 0x80) = (int)param_9[3];
  *(undefined2 *)(param_1 + 0x88) = *param_8;
  uVar22 = *(undefined8 *)(param_8 + 2);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_8 + 6);
  *(undefined8 *)(param_1 + 0x8c) = uVar22;
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_3 + 0x20);
  return;
}


