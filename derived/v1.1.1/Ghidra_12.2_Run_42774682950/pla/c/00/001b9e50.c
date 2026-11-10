/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b9e50; name: FUN_001b9e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_001b9e50(undefined1 param_1 [16],long param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  undefined8 *puVar26;
  byte bVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar52;
  undefined8 uVar46;
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar54;
  uint uVar55;
  float fVar56;
  int iVar64;
  undefined1 auVar57 [12];
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  float fVar75;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar77;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar76;
  undefined1 auVar74 [16];
  float fVar78;
  undefined8 uVar79;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2cc;
  float *local_2c0;
  undefined8 local_2b8;
  float *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  puVar9 = PTR_DAT_04372370;
  puVar26 = *(undefined8 **)(param_2 + 0x18);
  local_98 = puVar26[3];
  local_88 = puVar26[5];
  local_a8 = puVar26[1];
  local_b0 = *puVar26;
  local_a0 = puVar26[2];
  local_90 = puVar26[4];
  cVar2 = *(char *)((long)puVar26 + 0x1fe);
  cVar3 = *(char *)((long)puVar26 + 0x1fc);
  if (3 < *(uint *)(puVar26 + 0x3e)) {
    FUN_0331fefc(&local_c0,&local_2c0,0x200);
    FUN_0332448c(&local_c0,"Invalid dimemsions for that operation");
    iVar14 = FUN_03320b30(0x172cdf48,&local_2c0,
                          "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp"
                          ,0x696);
    if (iVar14 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(&local_c0);
    lVar17 = *(long *)(param_2 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x1f0);
    goto joined_r0x001ba01c;
  }
  fVar43 = param_1._0_4_;
  fVar56 = (float)*(undefined8 *)(PTR_DAT_04372370 + 0x150) * fVar43;
  fVar50 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x150) >> 0x20) * fVar43;
  uVar13 = (undefined1)((uint)fVar50 >> 8);
  uVar29 = (undefined1)((uint)fVar50 >> 0x10);
  uVar31 = (undefined1)((uint)fVar50 >> 0x18);
  switch(*(uint *)(puVar26 + 0x3e)) {
  case 0:
    local_2c0 = (float *)0x0;
    local_2b8._0_4_ = 0;
    local_2b8._4_4_ = 0x80000000;
    fStack_2cc = (float)(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar13,CONCAT14(SUB41(fVar50,0),
                                                                                  fVar56)))) >> 0x20
                        );
    uVar88 = *(undefined8 *)(puVar26[0xb] + 0x18);
    uVar22 = *(undefined8 *)(puVar26[0xb] + 0x10);
    fStack_2d8 = (float)uVar88;
    fStack_2d4 = (float)((ulong)uVar88 >> 0x20);
    local_2e0 = (float)uVar22;
    fStack_2dc = (float)((ulong)uVar22 >> 0x20);
    uVar22 = *(undefined8 *)PTR_PTR_04372408;
    local_c0 = (float *)FUN_032bd1d4(uVar22,6,0x10,0,0,(long)&local_2b8 + 4);
    if ((uint)local_2b8 != 6) {
      local_2b8._0_4_ = 6;
    }
    fVar43 = *(float *)(puVar9 + 0x200);
    fVar50 = *(float *)(puVar9 + 0x204);
    fVar51 = *(float *)(puVar9 + 0x208);
    fVar42 = *(float *)(puVar9 + 0x20c);
    fVar44 = *(float *)(puVar9 + 0x210);
    fVar78 = *(float *)(puVar9 + 0x214);
    fVar45 = *(float *)(puVar9 + 0x218);
    fVar52 = *(float *)(puVar9 + 0x21c);
    fVar53 = -fVar56;
    fVar54 = -fStack_2cc;
    local_c0[2] = fStack_2d8 + fVar56 * fVar51;
    local_c0[3] = fStack_2d4 + fStack_2cc * fVar42;
    *local_c0 = local_2e0 + fVar56 * fVar43;
    local_c0[1] = fStack_2dc + fStack_2cc * fVar50;
    local_c0[6] = fStack_2d8 + fVar53 * fVar51;
    local_c0[7] = fStack_2d4 + fVar54 * fVar42;
    local_c0[4] = local_2e0 + fVar53 * fVar43;
    local_c0[5] = fStack_2dc + fVar54 * fVar50;
    local_c0[10] = fStack_2d8 + fVar56 * fVar45;
    local_c0[0xb] = fStack_2d4 + fStack_2cc * fVar52;
    local_c0[8] = local_2e0 + fVar56 * fVar44;
    local_c0[9] = fStack_2dc + fStack_2cc * fVar78;
    fVar50 = *(float *)(puVar9 + 0x220);
    fVar51 = *(float *)(puVar9 + 0x224);
    fVar42 = *(float *)(puVar9 + 0x228);
    fVar83 = *(float *)(puVar9 + 0x22c);
    fVar43 = fStack_2dc + fStack_2cc * fVar51;
    local_c0[0xe] = fStack_2d8 + fVar53 * fVar45;
    local_c0[0xf] = fStack_2d4 + fVar54 * fVar52;
    local_c0[0xc] = local_2e0 + fVar53 * fVar44;
    local_c0[0xd] = fStack_2dc + fVar54 * fVar78;
    *(ulong *)(local_c0 + 0x12) =
         CONCAT44(fStack_2d4 + fStack_2cc * fVar83,fStack_2d8 + fVar56 * fVar42);
    *(ulong *)(local_c0 + 0x10) =
         CONCAT17((char)((uint)fVar43 >> 0x18),
                  CONCAT16((char)((uint)fVar43 >> 0x10),
                           CONCAT15((char)((uint)fVar43 >> 8),
                                    CONCAT14(SUB41(fVar43,0),local_2e0 + fVar56 * fVar50))));
    fStack_2dc = fStack_2dc + fVar54 * fVar51;
    *(ulong *)(local_c0 + 0x16) =
         CONCAT44(fStack_2d4 + fVar54 * fVar83,fStack_2d8 + fVar53 * fVar42);
    *(ulong *)(local_c0 + 0x14) =
         CONCAT17((char)((uint)fStack_2dc >> 0x18),
                  CONCAT16((char)((uint)fStack_2dc >> 0x10),
                           CONCAT15((char)((uint)fStack_2dc >> 8),
                                    CONCAT14(SUB41(fStack_2dc,0),local_2e0 + fVar53 * fVar50))));
    break;
  case 1:
    local_2c0 = (float *)0x0;
    local_2b8 = 0x8000000000000000;
    fStack_2cc = (float)(CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar13,CONCAT14(SUB41(fVar50,0),
                                                                                  fVar56)))) >> 0x20
                        );
    lVar17 = (long)&local_2b8 + 4;
    uVar22 = *(undefined8 *)PTR_PTR_04372408;
    pfVar15 = (float *)FUN_032bd1d4(uVar22,10,0x10,0,0,lVar17);
    uVar11 = local_2b8;
    lVar21 = *(long *)(param_2 + 0x18);
    lVar24 = (long)(int)(uint)local_2b8;
    uVar25 = (uint)local_2b8 + *(int *)(lVar21 + 0x60);
    local_2c0 = pfVar15;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) < (int)uVar25) {
      if (0x3fffffff < (int)uVar25) {
        FUN_032bd0a8(uVar25);
      }
      uVar55 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar55) {
        uVar55 = 0x3fffffff;
      }
      uVar23 = uVar25;
      if ((int)uVar25 <= (int)uVar55) {
        uVar23 = uVar55;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar23,0x10,pfVar15,uVar11 & 0xffffffff,lVar17);
    }
    pfVar15 = local_2c0;
    plVar18 = *(long **)(lVar21 + 0x58);
    if (plVar18 != (long *)0x0) {
      pfVar19 = local_2c0 + lVar24 * 4;
      do {
        lVar21 = plVar18[2];
        *(long *)(pfVar19 + 2) = plVar18[3];
        *(long *)pfVar19 = lVar21;
        plVar18 = (long *)*plVar18;
        pfVar19 = pfVar19 + 4;
      } while (plVar18 != (long *)0x0);
    }
    fVar45 = (float)*(undefined8 *)(local_2c0 + 6);
    fVar52 = (float)((ulong)*(undefined8 *)(local_2c0 + 6) >> 0x20);
    local_2e0 = (float)*(undefined8 *)(local_2c0 + 4);
    fStack_2dc = (float)((ulong)*(undefined8 *)(local_2c0 + 4) >> 0x20);
    fVar85 = (float)*(undefined8 *)local_2c0;
    fVar43 = local_2e0 - fVar85;
    fVar44 = (float)((ulong)*(undefined8 *)local_2c0 >> 0x20);
    fVar51 = fStack_2dc - fVar44;
    uVar13 = SUB41(fVar51,0);
    uVar31 = (undefined1)((uint)fVar51 >> 8);
    uVar35 = (undefined1)((uint)fVar51 >> 0x10);
    uVar39 = (undefined1)((uint)fVar51 >> 0x18);
    fVar86 = (float)*(undefined8 *)(local_2c0 + 2);
    fVar42 = fVar45 - fVar86;
    fVar87 = (float)((ulong)*(undefined8 *)(local_2c0 + 2) >> 0x20);
    fVar78 = fVar52 - fVar87;
    auVar58._12_4_ = fVar78;
    auVar58._8_4_ = fVar42;
    auVar58[4] = uVar13;
    auVar58._0_4_ = fVar43;
    auVar58[5] = uVar31;
    auVar58[6] = uVar35;
    auVar58[7] = uVar39;
    uVar55 = uVar25 + 1;
    auVar59._0_12_ = auVar58._0_12_;
    auVar59._12_4_ = 0;
    auVar47._8_8_ = _UNK_03889038;
    auVar47._0_8_ = _DAT_03889030;
    auVar67._8_8_ = _UNK_03889f18;
    auVar67._0_8_ = _DAT_03889f10;
    auVar61 = a64_TBL(ZEXT816(0),auVar59,auVar47);
    auVar74 = a64_TBL(ZEXT816(0),auVar59,auVar67);
    fVar83 = auVar74._0_4_;
    auVar80._0_4_ = fVar83 * fVar83;
    auVar80._4_4_ = auVar74._4_4_ * auVar74._4_4_;
    auVar80._8_4_ = auVar74._8_4_ * auVar74._8_4_;
    auVar80._12_4_ = auVar74._12_4_ * auVar74._12_4_;
    auVar84 = NEON_ext(auVar80,auVar80,8,1);
    fVar50 = auVar84._0_4_ + auVar84._4_4_;
    auVar69._4_12_ = auVar61._4_12_;
    auVar69._0_4_ = -auVar61._0_4_;
    auVar60._4_12_ = auVar74._4_12_;
    auVar60._0_4_ = -fVar83;
    auVar68._0_8_ =
         CONCAT44(-(uint)(fVar43 * fVar43 + fVar51 * fVar51 < auVar80._0_4_ + auVar80._4_4_ + fVar50
                         ),-(uint)(fVar43 * fVar43 + fVar51 * fVar51 <
                                  auVar80._0_4_ + auVar80._4_4_ + fVar50));
    auVar68._8_8_ = auVar68._0_8_;
    auVar69 = auVar69 ^ (auVar69 ^ auVar60) & auVar68;
    auVar4[4] = uVar13;
    auVar4._0_4_ = fVar43;
    auVar4[5] = uVar31;
    auVar4[6] = uVar35;
    auVar4[7] = uVar39;
    auVar4._8_4_ = fVar42;
    auVar4._12_4_ = fVar78;
    auVar5[4] = uVar13;
    auVar5._0_4_ = fVar43;
    auVar5[5] = uVar31;
    auVar5[6] = uVar35;
    auVar5[7] = uVar39;
    auVar5._8_4_ = fVar42;
    auVar5._12_4_ = fVar78;
    auVar61 = NEON_ext(auVar4,auVar5,4,1);
    auVar74 = NEON_ext(auVar69,auVar69,8,1);
    uVar88 = NEON_ext(auVar69._0_8_,auVar74._0_8_,4,1);
    fVar63 = auVar69._0_4_;
    fVar75 = auVar69._4_4_;
    fVar77 = auVar69._8_4_;
    fVar54 = fVar63 * fVar63 + fVar75 * fVar75 + fVar77 * fVar77;
    fVar62 = fVar63 * fVar63 + fVar75 * fVar75 + fVar77 * fVar77;
    uVar46 = CONCAT44(fVar62,fVar54);
    uVar79 = NEON_frsqrte(uVar46,4);
    fVar50 = fVar43 * (float)uVar88 - auVar61._0_4_ * fVar63;
    fVar51 = fVar51 * (float)((ulong)uVar88 >> 0x20) - auVar61._4_4_ * fVar75;
    uVar29 = SUB41(fVar51,0);
    uVar33 = (undefined1)((uint)fVar51 >> 8);
    uVar37 = (undefined1)((uint)fVar51 >> 0x10);
    uVar41 = (undefined1)((uint)fVar51 >> 0x18);
    fVar51 = fVar42 * fVar63 - fVar43 * fVar77;
    fVar43 = fVar78 * fVar75 -
             (float)(CONCAT17(uVar39,CONCAT16(uVar35,CONCAT15(uVar31,CONCAT14(uVar13,fVar43)))) >>
                    0x20) * auVar69._12_4_;
    auVar6[4] = uVar29;
    auVar6._0_4_ = fVar50;
    auVar6[5] = uVar33;
    auVar6[6] = uVar37;
    auVar6[7] = uVar41;
    auVar6._8_4_ = fVar51;
    auVar6._12_4_ = fVar43;
    auVar7[4] = uVar29;
    auVar7._0_4_ = fVar50;
    auVar7[5] = uVar33;
    auVar7[6] = uVar37;
    auVar7[7] = uVar41;
    auVar7._8_4_ = fVar51;
    auVar7._12_4_ = fVar43;
    auVar61 = NEON_ext(auVar6,auVar7,4,1);
    fVar83 = auVar61._0_4_;
    fVar53 = auVar61._4_4_;
    fVar43 = (float)uVar79;
    fVar78 = (float)((ulong)uVar79 >> 0x20);
    uVar88 = NEON_frsqrts(uVar46,CONCAT44(fVar78 * fVar78,fVar43 * fVar43),4);
    fVar43 = fVar43 * (float)uVar88;
    fVar78 = fVar78 * (float)((ulong)uVar88 >> 0x20);
    iVar14 = -(uint)(fVar54 <= 0.0);
    iVar76 = -(uint)(fVar62 <= 0.0);
    uVar88 = NEON_frsqrts(uVar46,CONCAT44(fVar78 * fVar78,fVar43 * fVar43),4);
    fVar43 = (float)uVar88 * fVar43;
    fVar78 = (float)((ulong)uVar88 >> 0x20) * fVar78;
    fVar42 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                      CONCAT11((byte)((uint)fVar43 >> 8) &
                                               ~(byte)((uint)iVar14 >> 8),
                                               SUB41(fVar43,0) & ~(byte)iVar14)));
    fVar43 = fVar83 * fVar83 + fVar53 * fVar53 + fVar50 * fVar50;
    fVar51 = fVar83 * fVar83 + fVar53 * fVar53 + fVar50 * fVar50;
    uVar13 = SUB41(fVar51,0);
    uVar31 = (undefined1)((uint)fVar51 >> 8);
    uVar35 = (undefined1)((uint)fVar51 >> 0x10);
    uVar39 = (undefined1)((uint)fVar51 >> 0x18);
    fVar62 = (float)(CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                              CONCAT16((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                       CONCAT15((byte)((uint)fVar78 >> 8) &
                                                ~(byte)((uint)iVar76 >> 8),
                                                CONCAT14(SUB41(fVar78,0) & ~(byte)iVar76,fVar42))))
                    >> 0x20);
    iVar14 = -(uint)(fVar43 <= 0.0);
    iVar76 = -(uint)(fVar51 <= 0.0);
    fVar54 = fVar56 * fVar63 * fVar42;
    fVar78 = fStack_2cc * fVar75 * fVar62;
    fVar63 = fVar56 * fVar77 * fVar42;
    fVar62 = fStack_2cc * auVar69._12_4_ * fVar62;
    uVar88 = NEON_frsqrte(CONCAT17(uVar39,CONCAT16(uVar35,CONCAT15(uVar31,CONCAT14(uVar13,fVar43))))
                          ,4);
    fVar51 = (float)uVar88;
    fVar42 = (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frsqrts(CONCAT17(uVar39,CONCAT16(uVar35,CONCAT15(uVar31,CONCAT14(uVar13,fVar43))))
                          ,CONCAT44(fVar42 * fVar42,fVar51 * fVar51),4);
    fVar51 = fVar51 * (float)uVar88;
    fVar42 = fVar42 * (float)((ulong)uVar88 >> 0x20);
    uVar88 = NEON_frsqrts(CONCAT17(uVar39,CONCAT16(uVar35,CONCAT15(uVar31,CONCAT14(uVar13,fVar43))))
                          ,CONCAT44(fVar42 * fVar42,fVar51 * fVar51),4);
    fVar51 = (float)uVar88 * fVar51;
    fVar42 = (float)((ulong)uVar88 >> 0x20) * fVar42;
    bVar27 = SUB41(fVar51,0) & ~(byte)iVar14;
    bVar28 = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar14 >> 8);
    bVar30 = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
    bVar32 = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
    bVar34 = SUB41(fVar42,0) & ~(byte)iVar76;
    bVar36 = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar76 >> 8);
    bVar38 = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
    bVar40 = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
    fVar43 = (float)CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar27)));
    local_2b8._0_4_ = uVar25;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar25) {
      if (0x3ffffffe < (int)uVar25) {
        FUN_032bd0a8(uVar55);
      }
      uVar23 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar23) {
        uVar23 = 0x3fffffff;
      }
      uVar16 = uVar55;
      if ((int)uVar55 <= (int)uVar23) {
        uVar16 = uVar23;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar25,lVar17);
    }
    pfVar15 = local_2c0;
    auVar81._12_4_ = fStack_2cc;
    auVar81._8_4_ = fVar56;
    auVar81._0_8_ = CONCAT44(fStack_2cc,fVar56);
    auVar48._0_4_ = fVar83 * (float)CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar27)));
    auVar48._4_4_ = fVar53 * (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
    auVar48._8_4_ = fVar50 * fVar43;
    auVar48._12_4_ =
         (float)(CONCAT17(uVar41,CONCAT16(uVar37,CONCAT15(uVar33,CONCAT14(uVar29,fVar50)))) >> 0x20)
         * (float)(CONCAT17(bVar40,CONCAT16(bVar38,CONCAT15(bVar36,CONCAT14(bVar34,fVar43)))) >>
                  0x20);
    fVar43 = fVar44 + fVar78;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar87 + fVar62,fVar86 + fVar63);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar43 >> 0x18),
                  CONCAT16((char)((uint)fVar43 >> 0x10),
                           CONCAT15((char)((uint)fVar43 >> 8),
                                    CONCAT14(SUB41(fVar43,0),fVar85 + fVar54))));
    uVar23 = uVar25 + 2;
    local_2b8._0_4_ = uVar55;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar55) {
      uVar88 = auVar48._8_8_;
      if (0x3ffffffe < (int)uVar55) {
        FUN_032bd0a8(uVar23);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar23;
      if ((int)uVar23 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar55,lVar17);
      auVar48._8_8_ = uVar88;
      auVar81._4_4_ = fStack_2cc;
      auVar81._0_4_ = fVar56;
      auVar81._8_8_ = CONCAT44(fStack_2cc,fVar56);
    }
    pfVar15 = local_2c0;
    fVar43 = auVar81._0_4_ * auVar48._0_4_;
    fVar56 = auVar81._4_4_ * auVar48._4_4_;
    fVar50 = auVar81._8_4_ * auVar48._8_4_;
    fVar51 = auVar81._12_4_ * auVar48._12_4_;
    fStack_2cc = (float)(CONCAT17((char)((uint)fVar56 >> 0x18),
                                  CONCAT16((char)((uint)fVar56 >> 0x10),
                                           CONCAT15((char)((uint)fVar56 >> 8),
                                                    CONCAT14(SUB41(fVar56,0),fVar43)))) >> 0x20);
    fVar56 = fVar44 - fVar78;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar87 - fVar62,fVar86 - fVar63);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar56 >> 0x18),
                  CONCAT16((char)((uint)fVar56 >> 0x10),
                           CONCAT15((char)((uint)fVar56 >> 8),
                                    CONCAT14(SUB41(fVar56,0),fVar85 - fVar54))));
    uVar55 = uVar25 + 3;
    local_2b8._0_4_ = uVar23;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar23) {
      if (0x3ffffffe < (int)uVar23) {
        FUN_032bd0a8(uVar55);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar55;
      if ((int)uVar55 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar23,lVar17);
    }
    pfVar15 = local_2c0;
    fVar56 = fVar44 + fStack_2cc;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar87 + fVar51,fVar86 + fVar50);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar56 >> 0x18),
                  CONCAT16((char)((uint)fVar56 >> 0x10),
                           CONCAT15((char)((uint)fVar56 >> 8),
                                    CONCAT14(SUB41(fVar56,0),fVar85 + fVar43))));
    uVar23 = uVar25 + 4;
    local_2b8._0_4_ = uVar55;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar55) {
      if (0x3ffffffe < (int)uVar55) {
        FUN_032bd0a8(uVar23);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar23;
      if ((int)uVar23 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar55,lVar17);
    }
    pfVar15 = local_2c0;
    fVar44 = fVar44 - fStack_2cc;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar87 - fVar51,fVar86 - fVar50);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar44 >> 0x18),
                  CONCAT16((char)((uint)fVar44 >> 0x10),
                           CONCAT15((char)((uint)fVar44 >> 8),
                                    CONCAT14(SUB41(fVar44,0),fVar85 - fVar43))));
    uVar55 = uVar25 + 5;
    local_2b8._0_4_ = uVar23;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar23) {
      if (0x3ffffffe < (int)uVar23) {
        FUN_032bd0a8(uVar55);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar55;
      if ((int)uVar55 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar23,lVar17);
    }
    pfVar15 = local_2c0;
    fVar56 = fStack_2dc + fVar78;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar52 + fVar62,fVar45 + fVar63);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar56 >> 0x18),
                  CONCAT16((char)((uint)fVar56 >> 0x10),
                           CONCAT15((char)((uint)fVar56 >> 8),
                                    CONCAT14(SUB41(fVar56,0),local_2e0 + fVar54))));
    uVar23 = uVar25 + 6;
    local_2b8._0_4_ = uVar55;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar55) {
      if (0x3ffffffe < (int)uVar55) {
        FUN_032bd0a8(uVar23);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar23;
      if ((int)uVar23 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar55,lVar17);
    }
    pfVar15 = local_2c0;
    fVar78 = fStack_2dc - fVar78;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar52 - fVar62,fVar45 - fVar63);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar78 >> 0x18),
                  CONCAT16((char)((uint)fVar78 >> 0x10),
                           CONCAT15((char)((uint)fVar78 >> 8),
                                    CONCAT14(SUB41(fVar78,0),local_2e0 - fVar54))));
    uVar55 = uVar25 + 7;
    local_2b8._0_4_ = uVar23;
    if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar23) {
      if (0x3ffffffe < (int)uVar23) {
        FUN_032bd0a8(uVar55);
      }
      uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar55;
      if ((int)uVar55 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar23,lVar17);
    }
    pfVar15 = local_2c0;
    fVar56 = fStack_2dc + fStack_2cc;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar52 + fVar51,fVar45 + fVar50);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fVar56 >> 0x18),
                  CONCAT16((char)((uint)fVar56 >> 0x10),
                           CONCAT15((char)((uint)fVar56 >> 8),
                                    CONCAT14(SUB41(fVar56,0),local_2e0 + fVar43))));
    uVar25 = uVar25 + 8;
    local_2b8._0_4_ = uVar55;
    if ((int)uVar55 < (int)(local_2b8._4_4_ & 0x3fffffff)) {
    }
    else {
      if (0x3ffffffe < (int)uVar55) {
        FUN_032bd0a8(uVar25);
      }
      uVar23 = (local_2b8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar23) {
        uVar23 = 0x3fffffff;
      }
      uVar16 = uVar25;
      if ((int)uVar25 <= (int)uVar23) {
        uVar16 = uVar23;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar55,lVar17);
    }
    fStack_2dc = fStack_2dc - fStack_2cc;
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
         CONCAT44(fVar52 - fVar51,fVar45 - fVar50);
    *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
         CONCAT17((char)((uint)fStack_2dc >> 0x18),
                  CONCAT16((char)((uint)fStack_2dc >> 0x10),
                           CONCAT15((char)((uint)fStack_2dc >> 8),
                                    CONCAT14(SUB41(fStack_2dc,0),local_2e0 - fVar43))));
    local_c0 = local_2c0;
    local_2b8._0_4_ = uVar25;
    break;
  case 2:
    local_2c0 = (float *)0x0;
    local_2b8 = 0x8000000000000000;
    auVar72 = *(undefined1 (*) [16])(puVar26 + 0x16);
    lVar17 = (long)&local_2b8 + 4;
    if (auVar72._12_4_ == *(float *)(PTR_DAT_04372370 + 0x240)) {
      plVar18 = (long *)puVar26[0xb];
      auVar70 = ZEXT816(0);
      puVar26[0x17] = 0;
      puVar26[0x16] = 0;
      if (plVar18 != (long *)0x0) {
        auVar61 = ZEXT816(0);
        do {
          auVar70._0_8_ =
               CONCAT44(auVar61._4_4_ + (float)((ulong)plVar18[2] >> 0x20),
                        auVar61._0_4_ + (float)plVar18[2]);
          auVar70._8_4_ = auVar61._8_4_ + (float)plVar18[3];
          auVar70._12_4_ = auVar61._12_4_ + (float)((ulong)plVar18[3] >> 0x20);
          puVar26[0x17] = auVar70._8_8_;
          puVar26[0x16] = auVar70._0_8_;
          plVar18 = (long *)*plVar18;
          auVar61 = auVar70;
        } while (plVar18 != (long *)0x0);
      }
      auVar65 = auVar70._0_12_;
      iVar14 = *(int *)(puVar26 + 0xc);
      if (iVar14 != 0) {
        uVar22 = NEON_scvtf(CONCAT17((char)((uint)iVar14 >> 0x18),
                                     CONCAT16((char)((uint)iVar14 >> 0x10),
                                              CONCAT15((char)((uint)iVar14 >> 8),
                                                       CONCAT14((char)iVar14,iVar14)))),4);
        uVar88 = NEON_frecpe(uVar22,4);
        uVar46 = NEON_frecps(uVar22,uVar88,4);
        fVar56 = (float)uVar88 * (float)uVar46;
        fVar50 = (float)((ulong)uVar88 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
        uVar22 = NEON_frecps(uVar22,CONCAT44(fVar50,fVar56),4);
        fVar56 = fVar56 * (float)uVar22;
        fVar50 = fVar50 * (float)((ulong)uVar22 >> 0x20);
        auVar65._0_8_ = CONCAT44(auVar70._4_4_ * fVar50,auVar70._0_4_ * fVar56);
        auVar65._8_4_ = auVar70._8_4_ * fVar56;
        auVar71._12_4_ =
             auVar70._12_4_ *
             (float)(CONCAT17((char)((uint)fVar50 >> 0x18),
                              CONCAT16((char)((uint)fVar50 >> 0x10),
                                       CONCAT15((char)((uint)fVar50 >> 8),
                                                CONCAT14(SUB41(fVar50,0),fVar56)))) >> 0x20);
        auVar71._0_12_ = auVar65;
        puVar26[0x17] = auVar71._8_8_;
        puVar26[0x16] = auVar65._0_8_;
      }
      auVar72._12_4_ = 0;
      auVar72._0_12_ = auVar65;
      puVar26[0x17] = (ulong)auVar65._8_4_;
      puVar26[0x16] = auVar65._0_8_;
      puVar26 = *(undefined8 **)(param_2 + 0x18);
    }
    fStack_2d8 = (float)puVar26[0x25];
    fStack_2d4 = (float)((ulong)puVar26[0x25] >> 0x20);
    local_2e0 = (float)puVar26[0x24];
    fStack_2dc = (float)((ulong)puVar26[0x24] >> 0x20);
    uVar25 = *(uint *)(puVar26 + 0xc);
    uVar22 = *(undefined8 *)PTR_PTR_04372408;
    if ((int)uVar25 < 1) {
      iVar14 = 0;
      uVar55 = 0;
      if (0 < (int)uVar25) goto LAB_001ba3a0;
LAB_001ba7e8:
      plVar18 = (long *)puVar26[0xb];
    }
    else {
      uVar25 = uVar25 * 3;
      if (0x3fffffff < (int)uVar25) {
        FUN_032bd0a8(uVar25);
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU),0x10,0,0
                                        ,lVar17);
      puVar26 = *(undefined8 **)(param_2 + 0x18);
      uVar25 = (uint)local_2b8 + *(int *)(puVar26 + 0xc);
      iVar14 = (uint)local_2b8;
      uVar55 = local_2b8._4_4_;
      if ((int)uVar25 <= (int)(local_2b8._4_4_ & 0x3fffffff)) goto LAB_001ba7e8;
LAB_001ba3a0:
      pfVar15 = local_2c0;
      if (0x3fffffff < (int)uVar25) {
        FUN_032bd0a8(uVar25);
        uVar55 = local_2b8._4_4_;
      }
      uVar55 = (uVar55 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar55) {
        uVar55 = 0x3fffffff;
      }
      uVar23 = uVar25;
      if ((int)uVar25 <= (int)uVar55) {
        uVar23 = uVar55;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar23,0x10,pfVar15,iVar14,lVar17);
      plVar18 = (long *)puVar26[0xb];
    }
    if (plVar18 != (long *)0x0) {
      pfVar15 = local_2c0 + (long)iVar14 * 4;
      do {
        lVar21 = plVar18[2];
        *(long *)(pfVar15 + 2) = plVar18[3];
        *(long *)pfVar15 = lVar21;
        plVar18 = (long *)*plVar18;
        pfVar15 = pfVar15 + 4;
      } while (plVar18 != (long *)0x0);
    }
    plVar18 = *(long **)(*(long *)(param_2 + 0x18) + 0x58);
    local_2b8._0_4_ = uVar25;
    if (plVar18 != (long *)0x0) {
      fVar51 = fStack_2dc * fVar43;
      fVar56 = -fVar43;
      fVar50 = -fVar43;
      fStack_2dc = fVar50 * fStack_2dc;
      fStack_2dc = (float)(CONCAT17((char)((uint)fStack_2dc >> 0x18),
                                    CONCAT16((char)((uint)fStack_2dc >> 0x10),
                                             CONCAT15((char)((uint)fStack_2dc >> 8),
                                                      CONCAT14(SUB41(fStack_2dc,0),
                                                               fVar56 * local_2e0)))) >> 0x20);
      do {
        uVar55 = (uint)local_2b8;
        pfVar15 = local_2c0;
        uVar25 = (uint)local_2b8 + 1;
        if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)(uint)local_2b8) {
          if (0x3ffffffe < (int)(uint)local_2b8) {
            FUN_032bd0a8(uVar25);
          }
          uVar23 = (local_2b8._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar23) {
            uVar23 = 0x3fffffff;
          }
          uVar16 = uVar25;
          if ((int)uVar25 <= (int)uVar23) {
            uVar16 = uVar23;
          }
          local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar55,lVar17);
        }
        pfVar15 = local_2c0;
        lVar21 = plVar18[2];
        fVar42 = fVar51 + (float)((ulong)lVar21 >> 0x20);
        *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
             CONCAT44(fStack_2d4 * fVar43 + (float)((ulong)plVar18[3] >> 0x20),
                      fStack_2d8 * fVar43 + (float)plVar18[3]);
        *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
             CONCAT17((char)((uint)fVar42 >> 0x18),
                      CONCAT16((char)((uint)fVar42 >> 0x10),
                               CONCAT15((char)((uint)fVar42 >> 8),
                                        CONCAT14(SUB41(fVar42,0),local_2e0 * fVar43 + (float)lVar21)
                                       )));
        uVar55 = uVar55 + 2;
        if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar25) {
          local_2b8._0_4_ = uVar25;
          if (0x3ffffffe < (int)uVar25) {
            FUN_032bd0a8(uVar55);
          }
          uVar23 = (local_2b8._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar23) {
            uVar23 = 0x3fffffff;
          }
          uVar16 = uVar55;
          if ((int)uVar55 <= (int)uVar23) {
            uVar16 = uVar23;
          }
          local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar25,lVar17);
          uVar25 = (uint)local_2b8;
        }
        lVar21 = plVar18[2];
        fVar42 = fStack_2dc + (float)((ulong)lVar21 >> 0x20);
        *(ulong *)(local_2c0 + (long)(int)uVar25 * 4 + 2) =
             CONCAT44((float)(CONCAT17((char)((uint)fVar50 >> 0x18),
                                       CONCAT16((char)((uint)fVar50 >> 0x10),
                                                CONCAT15((char)((uint)fVar50 >> 8),
                                                         CONCAT14(SUB41(fVar50,0),fVar56)))) >> 0x20
                             ) * fStack_2d4 + (float)((ulong)plVar18[3] >> 0x20),
                      fVar56 * fStack_2d8 + (float)plVar18[3]);
        *(ulong *)(local_2c0 + (long)(int)uVar25 * 4) =
             CONCAT17((char)((uint)fVar42 >> 0x18),
                      CONCAT16((char)((uint)fVar42 >> 0x10),
                               CONCAT15((char)((uint)fVar42 >> 8),
                                        CONCAT14(SUB41(fVar42,0),fVar56 * local_2e0 + (float)lVar21)
                                       )));
        plVar18 = (long *)*plVar18;
        local_2b8._0_4_ = uVar55;
      } while (plVar18 != (long *)0x0);
    }
    local_c0 = local_2c0;
    local_b8 = CONCAT44(0x10,(uint)local_2b8);
    iVar14 = FUN_001b2c70(param_2,&local_c0,&local_b0);
    uVar25 = local_2b8._4_4_;
    local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
    if (iVar14 != 3) {
      if ((uVar25 & 0x3fffffff) == 0) {
        uVar25 = (uVar25 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar25) {
          uVar25 = 0x3fffffff;
        }
        if (uVar25 < 2) {
          uVar25 = 1;
        }
        local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar25,0x10,local_2c0,0,lVar17);
        lVar17 = (long)(int)(uint)local_2b8;
      }
      else {
        lVar17 = 0;
      }
      *(long *)(local_2c0 + lVar17 * 4 + 2) = auVar72._8_8_;
      *(long *)(local_2c0 + lVar17 * 4) = auVar72._0_8_;
      local_2b8._0_4_ = 1;
      local_c0 = local_2c0;
      local_b8 = 0x1000000001;
      FUN_001b2c70(param_2,&local_c0,&local_b0);
      uVar13 = FUN_001b9e50(param_1[0],param_2);
      uVar25 = local_2b8._4_4_;
      local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
      if ((-1 < (int)uVar25) && (local_2c0 != (float *)0x0)) {
        FUN_032cf244(uVar22,local_2c0,0x10,uVar25 & 0x3fffffff);
      }
      return uVar13;
    }
    if (((int)uVar25 < 0) || (local_2c0 == (float *)0x0)) goto LAB_001bad80;
    goto LAB_001ba7b0;
  case 3:
    local_2c0 = (float *)0x0;
    local_2b8 = 0x8000000000000000;
    lVar17 = (long)&local_2b8 + 4;
    uVar22 = *(undefined8 *)PTR_PTR_04372408;
    if (*(int *)(puVar26 + 0xf) < 1) {
      iVar14 = 0;
      uVar25 = 0;
    }
    else {
      uVar25 = *(int *)(puVar26 + 0xf) * 6;
      if (0x3fffffff < (int)uVar25) {
        FUN_032bd0a8(uVar25);
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU),0x10,0,0
                                        ,lVar17);
      puVar26 = *(undefined8 **)(param_2 + 0x18);
      iVar14 = (uint)local_2b8;
      uVar25 = local_2b8._4_4_;
    }
    pfVar15 = local_2c0;
    uVar55 = iVar14 + *(int *)(puVar26 + 0xc);
    if ((int)(uVar25 & 0x3fffffff) < (int)uVar55) {
      if (0x3fffffff < (int)uVar55) {
        FUN_032bd0a8(uVar55);
        uVar25 = local_2b8._4_4_;
      }
      uVar25 = (uVar25 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar25) {
        uVar25 = 0x3fffffff;
      }
      uVar23 = uVar55;
      if ((int)uVar55 <= (int)uVar25) {
        uVar23 = uVar25;
      }
      local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar23,0x10,pfVar15,iVar14,lVar17);
    }
    plVar18 = (long *)puVar26[0xb];
    if (plVar18 != (long *)0x0) {
      pfVar15 = local_2c0 + (long)iVar14 * 4;
      do {
        lVar21 = plVar18[2];
        *(long *)(pfVar15 + 2) = plVar18[3];
        *(long *)pfVar15 = lVar21;
        plVar18 = (long *)*plVar18;
        pfVar15 = pfVar15 + 4;
      } while (plVar18 != (long *)0x0);
    }
    puVar10 = PTR_PTR_04372570;
    plVar18 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
    local_2b8._0_4_ = uVar55;
    if (plVar18 != (long *)0x0) {
      uVar88 = *(undefined8 *)(puVar9 + 0x60);
      fStack_2dc = (float)(CONCAT17(param_1[3],
                                    CONCAT16(param_1[2],
                                             CONCAT15(param_1[1],CONCAT14(param_1[0],fVar43)))) >>
                          0x20);
      do {
        uVar25 = (uint)local_2b8;
        pfVar15 = local_2c0;
        lVar21 = plVar18[2];
        lVar24 = plVar18[3];
        lVar20 = plVar18[4];
        fVar51 = (float)*(undefined8 *)(lVar21 + 0x18);
        fVar42 = (float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20);
        uVar46 = *(undefined8 *)(lVar21 + 0x10);
        uVar13 = (undefined1)uVar46;
        uVar29 = (undefined1)((ulong)uVar46 >> 8);
        uVar31 = (undefined1)((ulong)uVar46 >> 0x10);
        uVar33 = (undefined1)((ulong)uVar46 >> 0x18);
        uVar35 = (undefined1)((ulong)uVar46 >> 0x20);
        uVar37 = (undefined1)((ulong)uVar46 >> 0x28);
        uVar39 = (undefined1)((ulong)uVar46 >> 0x30);
        uVar41 = (undefined1)((ulong)uVar46 >> 0x38);
        fVar56 = (float)uVar46;
        auVar61._0_4_ = *(float *)(lVar24 + 0x10) - fVar56;
        fVar50 = (float)((ulong)uVar46 >> 0x20);
        auVar61._4_4_ = *(float *)(lVar24 + 0x14) - fVar50;
        auVar61._8_4_ = *(float *)(lVar24 + 0x18) - fVar51;
        auVar61._12_4_ = *(float *)(lVar24 + 0x1c) - fVar42;
        auVar73 = NEON_ext(auVar61,auVar61,4,1);
        auVar84._0_4_ = *(float *)(lVar20 + 0x10) - fVar56;
        auVar84._4_4_ = *(float *)(lVar20 + 0x14) - fVar50;
        auVar84._8_4_ = *(float *)(lVar20 + 0x18) - fVar51;
        auVar84._12_4_ = *(float *)(lVar20 + 0x1c) - fVar42;
        auVar82 = NEON_ext(auVar84,auVar84,4,1);
        auVar74._0_4_ = auVar61._0_4_ * auVar82._0_4_ - auVar84._0_4_ * auVar73._0_4_;
        auVar74._4_4_ = auVar61._4_4_ * auVar82._4_4_ - auVar84._4_4_ * auVar73._4_4_;
        auVar74._8_4_ = auVar61._8_4_ * auVar84._0_4_ - auVar84._8_4_ * auVar61._0_4_;
        auVar74._12_4_ = auVar61._12_4_ * auVar84._4_4_ - auVar84._12_4_ * auVar61._4_4_;
        auVar61 = NEON_ext(auVar74,auVar74,4,1);
        fVar45 = auVar61._0_4_;
        fVar53 = auVar61._4_4_;
        fVar44 = fVar45 * fVar45 + fVar53 * fVar53 + auVar74._0_4_ * auVar74._0_4_;
        fVar52 = fVar45 * fVar45 + fVar53 * fVar53 + auVar74._0_4_ * auVar74._0_4_;
        uVar46 = CONCAT44(fVar52,fVar44);
        uVar79 = NEON_frsqrte(uVar46,4);
        fVar78 = (float)uVar79;
        fVar83 = (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frsqrts(uVar46,CONCAT44(fVar83 * fVar83,fVar78 * fVar78),4);
        fVar78 = fVar78 * (float)uVar79;
        fVar83 = fVar83 * (float)((ulong)uVar79 >> 0x20);
        iVar14 = -(uint)(fVar44 <= 0.0);
        iVar76 = -(uint)(fVar52 <= 0.0);
        uVar46 = NEON_frsqrts(uVar46,CONCAT44(fVar83 * fVar83,fVar78 * fVar78),4);
        fVar78 = (float)uVar46 * fVar78;
        fVar83 = (float)((ulong)uVar46 >> 0x20) * fVar83;
        fVar44 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                 CONCAT12((byte)((uint)fVar78 >> 0x10) &
                                          ~(byte)((uint)iVar14 >> 0x10),
                                          CONCAT11((byte)((uint)fVar78 >> 8) &
                                                   ~(byte)((uint)iVar14 >> 8),
                                                   SUB41(fVar78,0) & ~(byte)iVar14)));
        fVar45 = fVar45 * fVar44;
        fVar78 = (float)(CONCAT17((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                                  CONCAT16((byte)((uint)fVar83 >> 0x10) &
                                           ~(byte)((uint)iVar76 >> 0x10),
                                           CONCAT15((byte)((uint)fVar83 >> 8) &
                                                    ~(byte)((uint)iVar76 >> 8),
                                                    CONCAT14(SUB41(fVar83,0) & ~(byte)iVar76,fVar44)
                                                   ))) >> 0x20);
        fVar53 = fVar53 * fVar78;
        fVar44 = auVar74._0_4_ * fVar44;
        auVar73._0_4_ = fVar56 * fVar45;
        auVar73._4_4_ = fVar50 * fVar53;
        auVar73._8_4_ = fVar51 * fVar44;
        auVar73._12_4_ = fVar42 * auVar74._4_4_ * fVar78;
        auVar74 = NEON_ext(auVar73,auVar73,8,1);
        auVar61 = **(undefined1 (**) [16])puVar10;
        iVar14 = CONCAT13(auVar61[3] & (byte)((uint)fVar45 >> 0x18),
                          CONCAT12(auVar61[2] & (byte)((uint)fVar45 >> 0x10),
                                   CONCAT11(auVar61[1] & (byte)((uint)fVar45 >> 8),
                                            auVar61[0] & SUB41(fVar45,0))));
        auVar66._0_8_ =
             CONCAT17(auVar61[7] & (byte)((uint)fVar53 >> 0x18),
                      CONCAT16(auVar61[6] & (byte)((uint)fVar53 >> 0x10),
                               CONCAT15(auVar61[5] & (byte)((uint)fVar53 >> 8),
                                        CONCAT14(auVar61[4] & SUB41(fVar53,0),iVar14))));
        auVar66[8] = auVar61[8] & SUB41(fVar44,0);
        auVar66[9] = auVar61[9] & (byte)((uint)fVar44 >> 8);
        auVar66[10] = auVar61[10] & (byte)((uint)fVar44 >> 0x10);
        auVar66[0xb] = auVar61[0xb] & (byte)((uint)fVar44 >> 0x18);
        iVar14 = -(uint)(iVar14 == auVar61._0_4_);
        iVar76 = -(uint)((int)((ulong)auVar66._0_8_ >> 0x20) == auVar61._4_4_);
        iVar64 = -(uint)(auVar66._8_4_ == auVar61._8_4_);
        uVar55 = CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)));
        auVar57._0_8_ =
             CONCAT17(~(byte)((uint)iVar76 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar76 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar76 >> 8),CONCAT14(~(byte)iVar76,uVar55))))
        ;
        auVar57[8] = ~(byte)iVar64;
        auVar57[9] = ~(byte)((uint)iVar64 >> 8);
        auVar57[10] = ~(byte)((uint)iVar64 >> 0x10);
        auVar57[0xb] = ~(byte)((uint)iVar64 >> 0x18);
        fVar56 = ABS((fVar44 * fVar44 + fVar45 * fVar45 + fVar53 * fVar53) - (float)uVar88);
        bVar12 = false;
        if (((uVar55 & (uint)((ulong)auVar57._0_8_ >> 0x20) & auVar57._8_4_) != 0) &&
           (bVar12 = false, !NAN(fVar56))) {
          bVar12 = fVar56 < 0.0001;
        }
        if (bVar12) {
          auVar82._0_4_ = fVar43 * fVar45;
          auVar82._4_4_ = fStack_2dc * fVar53;
          auVar82._8_4_ = fVar43 * fVar44;
          auVar82._12_4_ = fVar43 * -(auVar73._0_4_ + auVar73._4_4_ + auVar74._0_4_);
          uVar55 = (uint)local_2b8 + 1;
          uVar46 = auVar82._8_8_;
          if ((int)(uint)local_2b8 < (int)(local_2b8._4_4_ & 0x3fffffff)) {
            auVar49 = auVar82;
          }
          else {
            if (0x3ffffffe < (int)(uint)local_2b8) {
              FUN_032bd0a8(uVar55);
            }
            uVar23 = (local_2b8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar16 = uVar55;
            if ((int)uVar55 <= (int)uVar23) {
              uVar16 = uVar23;
            }
            local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar25,lVar17);
            fVar51 = (float)*(undefined8 *)(lVar21 + 0x18);
            fVar42 = (float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20);
            uVar79 = *(undefined8 *)(lVar21 + 0x10);
            uVar13 = (undefined1)uVar79;
            uVar29 = (undefined1)((ulong)uVar79 >> 8);
            uVar31 = (undefined1)((ulong)uVar79 >> 0x10);
            uVar33 = (undefined1)((ulong)uVar79 >> 0x18);
            uVar35 = (undefined1)((ulong)uVar79 >> 0x20);
            uVar37 = (undefined1)((ulong)uVar79 >> 0x28);
            uVar39 = (undefined1)((ulong)uVar79 >> 0x30);
            uVar41 = (undefined1)((ulong)uVar79 >> 0x38);
            auVar49._4_4_ = auVar82._4_4_;
            auVar49._0_4_ = auVar82._0_4_;
            auVar49._8_8_ = uVar46;
          }
          pfVar15 = local_2c0;
          fVar56 = auVar49._4_4_ + (float)CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar35)));
          *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
               CONCAT44(auVar49._12_4_ + fVar42,auVar49._8_4_ + fVar51);
          *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
               CONCAT17((char)((uint)fVar56 >> 0x18),
                        CONCAT16((char)((uint)fVar56 >> 0x10),
                                 CONCAT15((char)((uint)fVar56 >> 8),
                                          CONCAT14(SUB41(fVar56,0),
                                                   auVar49._0_4_ +
                                                   (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(
                                                  uVar29,uVar13)))))));
          lVar21 = plVar18[3];
          uVar23 = uVar25 + 2;
          local_2b8._0_4_ = uVar55;
          if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar55) {
            if (0x3ffffffe < (int)uVar55) {
              FUN_032bd0a8(uVar23);
            }
            uVar16 = (local_2b8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar16) {
              uVar16 = 0x3fffffff;
            }
            uVar1 = uVar23;
            if ((int)uVar23 <= (int)uVar16) {
              uVar1 = uVar16;
            }
            local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar1,0x10,pfVar15,uVar55,lVar17);
            auVar49._4_4_ = auVar82._4_4_;
            auVar49._0_4_ = auVar82._0_4_;
            auVar49._8_8_ = uVar46;
          }
          pfVar15 = local_2c0;
          uVar8 = *(undefined8 *)(lVar21 + 0x18);
          uVar79 = *(undefined8 *)(lVar21 + 0x10);
          fVar56 = auVar49._4_4_ + (float)((ulong)uVar79 >> 0x20);
          *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4 + 2) =
               CONCAT44(auVar49._12_4_ + (float)((ulong)uVar8 >> 0x20),auVar49._8_4_ + (float)uVar8)
          ;
          *(ulong *)(local_2c0 + (long)(int)(uint)local_2b8 * 4) =
               CONCAT17((char)((uint)fVar56 >> 0x18),
                        CONCAT16((char)((uint)fVar56 >> 0x10),
                                 CONCAT15((char)((uint)fVar56 >> 8),
                                          CONCAT14(SUB41(fVar56,0),auVar49._0_4_ + (float)uVar79))))
          ;
          lVar21 = plVar18[4];
          uVar25 = uVar25 + 3;
          if ((int)(local_2b8._4_4_ & 0x3fffffff) <= (int)uVar23) {
            local_2b8._0_4_ = uVar23;
            if (0x3ffffffe < (int)uVar23) {
              FUN_032bd0a8(uVar25);
            }
            uVar55 = (local_2b8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar55) {
              uVar55 = 0x3fffffff;
            }
            uVar16 = uVar25;
            if ((int)uVar25 <= (int)uVar55) {
              uVar16 = uVar55;
            }
            local_2c0 = (float *)FUN_032bd1d4(uVar22,uVar16,0x10,pfVar15,uVar23,lVar17);
            auVar49._4_4_ = auVar82._4_4_;
            auVar49._0_4_ = auVar82._0_4_;
            auVar49._8_8_ = uVar46;
            uVar23 = (uint)local_2b8;
          }
          uVar79 = *(undefined8 *)(lVar21 + 0x18);
          uVar46 = *(undefined8 *)(lVar21 + 0x10);
          fVar56 = auVar49._4_4_ + (float)((ulong)uVar46 >> 0x20);
          *(ulong *)(local_2c0 + (long)(int)uVar23 * 4 + 2) =
               CONCAT44(auVar49._12_4_ + (float)((ulong)uVar79 >> 0x20),
                        auVar49._8_4_ + (float)uVar79);
          *(ulong *)(local_2c0 + (long)(int)uVar23 * 4) =
               CONCAT17((char)((uint)fVar56 >> 0x18),
                        CONCAT16((char)((uint)fVar56 >> 0x10),
                                 CONCAT15((char)((uint)fVar56 >> 8),
                                          CONCAT14(SUB41(fVar56,0),auVar49._0_4_ + (float)uVar46))))
          ;
          local_2b8._0_4_ = uVar25;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
    local_c0 = local_2c0;
    local_b8 = CONCAT44(0x10,(uint)local_2b8);
    FUN_001b2c70(param_2,&local_c0,&local_b0);
    uVar25 = local_2b8._4_4_;
    local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
    if ((-1 < (int)uVar25) && (local_2c0 != (float *)0x0)) {
      FUN_032cf244(uVar22,local_2c0,0x10,uVar25 & 0x3fffffff);
    }
    goto LAB_001bad80;
  }
  local_b8 = CONCAT44(0x10,(uint)local_2b8);
  local_2c0 = local_c0;
  FUN_001b2c70(param_2,&local_c0,&local_b0);
  uVar25 = local_2b8._4_4_;
  local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
  if (((int)uVar25 < 0) || (local_2c0 == (float *)0x0)) {
LAB_001bad80:
    lVar17 = *(long *)(param_2 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x1f0);
  }
  else {
LAB_001ba7b0:
    FUN_032cf244(uVar22,local_2c0,0x10,uVar25 & 0x3fffffff);
    lVar17 = *(long *)(param_2 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x1f0);
  }
joined_r0x001ba01c:
  if (iVar14 == 3) {
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar17 + 4) = 0x3f7fff58;
      FUN_001c1544(*(undefined8 *)(param_2 + 0x18));
    }
    if (cVar3 != '\0') {
      FUN_001c27b4(*(undefined8 *)(param_2 + 0x18));
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  return uVar13;
}


