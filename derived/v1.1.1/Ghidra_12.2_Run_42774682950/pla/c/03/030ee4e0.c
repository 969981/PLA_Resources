/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ee4e0; name: FUN_030ee4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ee4e0(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6,long param_7)

{
  bool bVar1;
  float *pfVar2;
  double *pdVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  long lVar30;
  long *plVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined4 *puVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  int iVar75;
  float fVar77;
  uint *puVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  int iVar85;
  int iVar87;
  int iVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar76;
  float fVar86;
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar98;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar99;
  uint local_52c;
  undefined8 *local_528;
  ulong local_450;
  undefined *puStack_448;
  uint *local_440;
  undefined8 uStack_438;
  float local_430;
  long local_428;
  long local_420;
  undefined8 local_418;
  long local_410;
  int local_408;
  double local_400;
  undefined *puStack_3f8;
  undefined8 local_3f0;
  double dStack_3e8;
  undefined8 local_3e0;
  double dStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  long lStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined **local_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined1 local_338;
  undefined1 *local_330;
  undefined4 local_328;
  uint local_324;
  undefined1 auStack_320 [256];
  long *local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined **local_200;
  undefined1 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined1 auStack_1d0 [256];
  long *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  int local_98;
  ulong local_90;
  uint local_84;
  
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x38d490) == 0) {
    lVar30 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar30;
    lVar30 = *(long *)(lVar30 + 0x10);
    if (lVar30 != 0) goto LAB_030ee550;
LAB_030efc18:
    if (_DAT_00000008 < _DAT_00000018) {
LAB_030efc30:
      iVar11 = *(int *)(param_1 + 0x100);
      if (iVar11 != 0) {
        puVar33 = *(undefined8 **)(param_1 + 0xf8);
        (**(code **)(*(long *)*puVar33 + 0x60))((long *)*puVar33,param_1);
        if (iVar11 != 1) {
          lVar19 = (long)iVar11 * 8 + -8;
          do {
            puVar33 = puVar33 + 1;
            (**(code **)(*(long *)*puVar33 + 0x60))((long *)*puVar33,param_1);
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
      }
    }
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
    if (lVar30 == 0) goto LAB_030efc18;
LAB_030ee550:
    puVar33 = *(undefined8 **)(lVar30 + 8);
    uVar18 = (ulong)((long)puVar33 + 0x1f) & 0xfffffffffffffff8;
    if (uVar18 <= *(ulong *)(lVar30 + 0x10)) {
      *(ulong *)(lVar30 + 8) = uVar18;
      if (puVar33 == (undefined8 *)0x0) {
        puVar33 = (undefined8 *)&DAT_00000018;
      }
      else {
        *puVar33 = "LtCharacterProxyIntegrate";
        puVar33[2] = "StCast";
        uVar12 = nn::os::GetSystemTick();
        puVar33[1] = uVar12;
        puVar33 = *(undefined8 **)(lVar30 + 8);
      }
    }
    if (puVar33 < *(undefined8 **)(lVar30 + 0x18)) goto LAB_030efc30;
  }
  local_a8 = 0x8000000000000000;
  local_b0 = 0;
  local_98 = 8;
  lVar19 = *(long *)(lVar14 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar19;
  }
  lVar19 = *(long *)(lVar19 + 8);
  if (0x17f < *(ulong *)(lVar19 + 0x10)) {
    local_a0 = *(long *)(lVar19 + 0x18);
    if (local_a0 + 0x180U <= *(ulong *)(lVar19 + 0x20)) {
      *(ulong *)(lVar19 + 0x18) = local_a0 + 0x180U;
      goto LAB_030ee5c4;
    }
  }
  local_a0 = FUN_032ce670(lVar19,0x180);
LAB_030ee5c4:
  local_a8 = CONCAT44(0x80000008,(int)local_a8);
  fVar36 = *(float *)(param_2 + 0xc) * 0.001;
  auVar91 = *(undefined1 (*) [16])(param_1 + 0xc0);
  fVar99 = *(float *)(param_2 + 8);
  uVar12 = auVar91._0_8_;
  uVar40 = auVar91._8_8_;
  if (fVar36 < ABS(auVar91._8_4_ - *(float *)(param_1 + 0xe8)) ||
      (fVar36 < ABS(auVar91._0_4_ - *(float *)(param_1 + 0xe0)) ||
      fVar36 < ABS(auVar91._4_4_ - *(float *)(param_1 + 0xe4)))) {
    uVar80 = uVar12;
    uVar79 = uVar40;
    if (*(char *)(param_3 + 1) == '\x02') {
      fVar36 = (float)*(undefined8 *)(param_3 + 0x20);
      fVar76 = auVar91._0_4_ - fVar36;
      fVar44 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
      fVar86 = auVar91._4_4_ - fVar44;
      fVar37 = (float)*(undefined8 *)(param_3 + 0x28);
      fVar88 = auVar91._8_4_ - fVar37;
      fVar43 = (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
      fVar39 = *(float *)(param_3 + 0x10) * fVar76;
      fVar90 = *(float *)(param_3 + 0x14) * fVar86;
      fVar98 = *(float *)(param_3 + 0x18) * fVar88;
      fVar77 = fVar39 + fVar90 + fVar98;
      fVar98 = fVar39 + fVar90 + fVar98;
      if (fVar77 < 0.0) {
        uVar80 = CONCAT44(fVar44 + (fVar86 - *(float *)(param_3 + 0x14) * fVar98),
                          fVar36 + (fVar76 - *(float *)(param_3 + 0x10) * fVar77));
        uVar79 = CONCAT44(fVar43 + ((auVar91._12_4_ - fVar43) - *(float *)(param_3 + 0x1c) * fVar98)
                          ,fVar37 + (fVar88 - *(float *)(param_3 + 0x18) * fVar77));
      }
    }
    fVar36 = (float)uVar80 * fVar99;
    uVar45 = SUB41(fVar36,0);
    uVar48 = (undefined1)((uint)fVar36 >> 8);
    uVar51 = (undefined1)((uint)fVar36 >> 0x10);
    uVar54 = (undefined1)((uint)fVar36 >> 0x18);
    fVar36 = (float)((ulong)uVar80 >> 0x20) * fVar99;
    uVar47 = SUB41(fVar36,0);
    uVar50 = (undefined1)((uint)fVar36 >> 8);
    uVar53 = (undefined1)((uint)fVar36 >> 0x10);
    uVar56 = (undefined1)((uint)fVar36 >> 0x18);
    fVar36 = (float)uVar79 * fVar99;
    uVar61 = SUB41(fVar36,0);
    uVar63 = (undefined1)((uint)fVar36 >> 8);
    uVar65 = (undefined1)((uint)fVar36 >> 0x10);
    uVar67 = (undefined1)((uint)fVar36 >> 0x18);
    fVar36 = (float)((ulong)uVar79 >> 0x20) * fVar99;
    uVar69 = SUB41(fVar36,0);
    uVar70 = (undefined1)((uint)fVar36 >> 8);
    uVar71 = (undefined1)((uint)fVar36 >> 0x10);
    uVar73 = (undefined1)((uint)fVar36 >> 0x18);
  }
  else {
    fVar36 = fVar99 * *(float *)(param_1 + 0xf0);
    fVar44 = *(float *)(param_1 + 0xd0) * fVar36;
    uVar45 = SUB41(fVar44,0);
    uVar48 = (undefined1)((uint)fVar44 >> 8);
    uVar51 = (undefined1)((uint)fVar44 >> 0x10);
    uVar54 = (undefined1)((uint)fVar44 >> 0x18);
    fVar44 = *(float *)(param_1 + 0xd4) * fVar36;
    uVar47 = SUB41(fVar44,0);
    uVar50 = (undefined1)((uint)fVar44 >> 8);
    uVar53 = (undefined1)((uint)fVar44 >> 0x10);
    uVar56 = (undefined1)((uint)fVar44 >> 0x18);
    fVar44 = *(float *)(param_1 + 0xd8) * fVar36;
    uVar61 = SUB41(fVar44,0);
    uVar63 = (undefined1)((uint)fVar44 >> 8);
    uVar65 = (undefined1)((uint)fVar44 >> 0x10);
    uVar67 = (undefined1)((uint)fVar44 >> 0x18);
    fVar36 = *(float *)(param_1 + 0xdc) * fVar36;
    uVar69 = SUB41(fVar36,0);
    uVar70 = (undefined1)((uint)fVar36 >> 8);
    uVar71 = (undefined1)((uint)fVar36 >> 0x10);
    uVar73 = (undefined1)((uint)fVar36 >> 0x18);
  }
  *(ulong *)(param_1 + 0xd8) =
       CONCAT17(uVar73,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(uVar69,CONCAT13(uVar67,CONCAT12(
                                                  uVar65,CONCAT11(uVar63,uVar61)))))));
  *(ulong *)(param_1 + 0xd0) =
       CONCAT17(uVar56,CONCAT16(uVar53,CONCAT15(uVar50,CONCAT14(uVar47,CONCAT13(uVar54,CONCAT12(
                                                  uVar51,CONCAT11(uVar48,uVar45)))))));
  *(undefined8 *)(param_1 + 0xe8) = uVar40;
  *(undefined8 *)(param_1 + 0xe0) = uVar12;
  uVar18 = (ulong)*(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xc);
  local_b0 = local_a0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      while( true ) {
        uVar18 = uVar18 - 1;
        iVar11 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                           (*(long **)(param_1 + 0x48),
                            *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar18 * 0x40 + 0x28));
        if (iVar11 == 0) break;
LAB_030ee678:
        if ((long)uVar18 < 1) goto LAB_030ee680;
      }
      iVar11 = *(int *)(param_1 + 0x100);
      lVar19 = *(long *)(param_1 + 0x18);
      if (0 < iVar11) {
        lVar21 = (long)iVar11 + -1;
        plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
        (**(code **)(*plVar31 + 0x30))(plVar31,param_1);
        if (0 < lVar21) {
          lVar21 = (long)iVar11 + -2;
          do {
            plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
            (**(code **)(*plVar31 + 0x30))(plVar31,param_1,lVar19 + uVar18 * 0x40);
            bVar1 = 0 < lVar21;
            lVar21 = lVar21 + -1;
          } while (bVar1);
        }
        lVar19 = *(long *)(param_1 + 0x18);
      }
      uVar15 = (long)*(int *)(param_1 + 0x20) - 1;
      *(int *)(param_1 + 0x20) = (int)uVar15;
      if (uVar18 == (uVar15 & 0xffffffff)) goto LAB_030ee678;
      puVar33 = (undefined8 *)(lVar19 + uVar18 * 0x40);
      puVar22 = (undefined8 *)(lVar19 + uVar15 * 0x40);
      uVar12 = puVar22[5];
      puVar33[3] = puVar22[3];
      puVar33[5] = uVar12;
      puVar33[1] = puVar22[1];
      uVar12 = *puVar22;
      puVar33[2] = puVar22[2];
      *puVar33 = uVar12;
      uVar12 = puVar22[4];
      puVar33[6] = puVar22[6];
      puVar33[4] = uVar12;
    } while (0 < (long)uVar18);
  }
LAB_030ee680:
  local_218 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
  local_1f4 = 0;
  local_1e0 = auStack_1d0;
  local_c0 = 1;
  local_1f0 = 0x5f7ffff05f7ffff0;
  local_1e8 = 0;
  local_200 = &PTR_LAB_042b5268;
  local_1d4 = 0x80000004;
  local_1d8 = 0;
  local_1f8 = (undefined1)param_5[1];
  local_330 = auStack_320;
  local_344 = 0;
  local_340 = 0x5f7ffff05f7ffff0;
  local_338 = 0;
  local_350 = &PTR_LAB_042b5268;
  local_324 = 0x80000004;
  local_328 = 0;
  local_210 = 1;
  local_348 = (undefined1)param_6[1];
  local_220 = param_6;
  local_d0 = param_5;
  local_c8 = local_218;
  if (*(long *)(param_1 + 0x38) == -1) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
  }
  puVar9 = PTR_PTR_0434a080;
  uVar45 = SUB41(fVar99,0);
  uVar48 = (undefined1)((uint)fVar99 >> 8);
  uVar51 = (undefined1)((uint)fVar99 >> 0x10);
  uVar54 = (undefined1)((uint)fVar99 >> 0x18);
  puVar78 = (uint *)0x0;
  uVar40 = 0;
  if ((1.1920929e-07 < fVar99) && (0 < *(int *)(param_1 + 0x160))) {
    pfVar2 = (float *)(param_1 + 0xd0);
    lVar19 = param_1 + 0x18;
    iVar11 = 0;
    do {
      if (lVar30 != 0) {
        puVar33 = *(undefined8 **)(lVar30 + 8);
        uVar18 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= *(ulong *)(lVar30 + 0x10)) &&
           (*(ulong *)(lVar30 + 8) = uVar18, puVar33 != (undefined8 *)0x0)) {
          *puVar33 = "StInitialCast";
          uVar40 = nn::os::GetSystemTick();
          puVar33[1] = uVar40;
        }
      }
      (**(code **)(*local_d0 + 0x18))();
      local_1d8 = 0;
      (**(code **)(*local_220 + 0x18))();
      local_328 = 0;
      auVar6 = *(undefined1 (*) [16])(param_1 + 0x90);
      auVar91 = ZEXT816(0x3f800000);
      fVar36 = (auVar6._0_4_ + (float)*(undefined8 *)(param_1 + 0xd0)) - auVar6._0_4_;
      fVar44 = (auVar6._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20)) -
               auVar6._4_4_;
      fVar37 = (auVar6._8_4_ + (float)*(undefined8 *)(param_1 + 0xd8)) - auVar6._8_4_;
      dStack_3d8 = *(double *)(param_1 + 0x28);
      local_400 = 0.0;
      puStack_3f8 = (undefined *)0x0;
      local_3f0 = (long *)CONCAT62(local_3f0._2_6_,0xffff);
      iVar75 = -(uint)(fVar36 == 0.0);
      iVar85 = -(uint)(fVar44 == 0.0);
      iVar87 = -(uint)(fVar37 == 0.0);
      iVar89 = -(uint)(auVar91._0_4_ == 0.0);
      bVar46 = SUB41(fVar36,0) & ~(byte)iVar75;
      bVar49 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar75 >> 8);
      bVar52 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
      bVar55 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
      bVar57 = SUB41(fVar44,0) & ~(byte)iVar85;
      bVar58 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar85 >> 8);
      bVar59 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
      bVar60 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
      bVar62 = SUB41(fVar37,0) & ~(byte)iVar87;
      bVar64 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar87 >> 8);
      bVar66 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
      bVar68 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
      bVar72 = auVar91[2] & ~(byte)((uint)iVar89 >> 0x10);
      bVar74 = auVar91[3] & ~(byte)((uint)iVar89 >> 0x18);
      auVar91[1] = bVar49;
      auVar91[0] = bVar46;
      auVar91[2] = bVar52;
      auVar91[3] = bVar55;
      auVar91[4] = bVar57;
      auVar91[5] = bVar58;
      auVar91[6] = bVar59;
      auVar91[7] = bVar60;
      auVar91[8] = bVar62;
      auVar91[9] = bVar64;
      auVar91[10] = bVar66;
      auVar91[0xb] = bVar68;
      auVar91._12_2_ = 0;
      auVar91[0xe] = bVar72;
      auVar91[0xf] = bVar74;
      auVar91 = NEON_frecpe(auVar91,4);
      iVar75 = -(uint)((float)CONCAT13(bVar55,CONCAT12(bVar52,CONCAT11(bVar49,bVar46))) == 0.0);
      iVar85 = -(uint)((float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57))) == 0.0);
      iVar87 = -(uint)((float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62))) == 0.0);
      iVar89 = -(uint)((float)((uint)CONCAT11(bVar74,bVar72) << 0x10) == 0.0);
      auVar81[0] = ~(byte)iVar75;
      auVar81[1] = ~(byte)((uint)iVar75 >> 8);
      auVar81[2] = ~(byte)((uint)iVar75 >> 0x10);
      auVar81[3] = ~(byte)((uint)iVar75 >> 0x18);
      auVar81[4] = ~(byte)iVar85;
      auVar81[5] = ~(byte)((uint)iVar85 >> 8);
      auVar81[6] = ~(byte)((uint)iVar85 >> 0x10);
      auVar81[7] = ~(byte)((uint)iVar85 >> 0x18);
      auVar81[8] = ~(byte)iVar87;
      auVar81[9] = ~(byte)((uint)iVar87 >> 8);
      auVar81[10] = ~(byte)((uint)iVar87 >> 0x10);
      auVar81[0xb] = ~(byte)((uint)iVar87 >> 0x18);
      auVar81[0xc] = ~(byte)iVar89;
      auVar81[0xd] = ~(byte)((uint)iVar89 >> 8);
      auVar81[0xe] = ~(byte)((uint)iVar89 >> 0x10);
      auVar81[0xf] = ~(byte)((uint)iVar89 >> 0x18);
      auVar96[1] = bVar49;
      auVar96[0] = bVar46;
      auVar96[2] = bVar52;
      auVar96[3] = bVar55;
      auVar96[4] = bVar57;
      auVar96[5] = bVar58;
      auVar96[6] = bVar59;
      auVar96[7] = bVar60;
      auVar96[8] = bVar62;
      auVar96[9] = bVar64;
      auVar96[10] = bVar66;
      auVar96[0xb] = bVar68;
      auVar96._12_2_ = 0;
      auVar96[0xe] = bVar72;
      auVar96[0xf] = bVar74;
      auVar96 = NEON_frecps(auVar96,auVar91,4);
      auVar92._0_4_ = auVar91._0_4_ * auVar96._0_4_;
      auVar92._4_4_ = auVar91._4_4_ * auVar96._4_4_;
      auVar92._8_4_ = auVar91._8_4_ * auVar96._8_4_;
      auVar92._12_4_ = auVar91._12_4_ * auVar96._12_4_;
      auVar97[1] = bVar49;
      auVar97[0] = bVar46;
      auVar97[2] = bVar52;
      auVar97[3] = bVar55;
      auVar97[4] = bVar57;
      auVar97[5] = bVar58;
      auVar97[6] = bVar59;
      auVar97[7] = bVar60;
      auVar97[8] = bVar62;
      auVar97[9] = bVar64;
      auVar97[10] = bVar66;
      auVar97[0xb] = bVar68;
      auVar97._12_2_ = 0;
      auVar97[0xe] = bVar72;
      auVar97[0xf] = bVar74;
      auVar91 = NEON_frecps(auVar97,auVar92,4);
      local_3e0 = (double)CONCAT53(local_3e0._3_5_,0xfb0001);
      auVar93._0_4_ = auVar92._0_4_ * auVar91._0_4_;
      auVar93._4_4_ = auVar92._4_4_ * auVar91._4_4_;
      auVar93._8_4_ = auVar92._8_4_ * auVar91._8_4_;
      auVar93._12_4_ = auVar92._12_4_ * auVar91._12_4_;
      auVar82._8_4_ = 0x7f7fffee;
      auVar82._0_8_ = 0x7f7fffee7f7fffee;
      auVar82._12_4_ = 0x7f7fffee;
      auVar82 = auVar82 ^ (auVar82 ^ auVar93) & auVar81;
      local_3a0 = 0x3a83126f;
      local_398 = 0x10000000000;
      local_3f0 = (long *)((ulong)local_3f0 & 0xffffffff);
      dStack_3e8 = 0.0;
      local_390 = 0;
      local_380 = 0;
      uStack_378 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_388 = 0x7f7fffee;
      lStack_3b8 = CONCAT17(bVar74,CONCAT16(bVar72,(uint6)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(
                                                  bVar64,bVar62)))));
      local_3c0 = CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(bVar55,
                                                  CONCAT12(bVar52,CONCAT11(bVar49,bVar46)))))));
      uStack_3a8 = auVar82._8_8_;
      local_3b0 = auVar82._0_8_;
      uStack_3c8 = auVar6._8_8_;
      local_3d0 = auVar6._0_8_;
      puStack_3f8 = (undefined *)(**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      local_400 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
      local_3f0 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0x40),(undefined4)local_3f0);
      local_398 = CONCAT44(local_398._4_4_,*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144)
                          );
      local_3e0 = (double)CONCAT71(local_3e0._1_7_,*(undefined1 *)(param_1 + 0x11c));
      local_390 = uVar12;
      (**(code **)(**(long **)(param_1 + 0x48) + 0x1c0))
                (*(long **)(param_1 + 0x48),&local_400,param_1 + 0x60,&local_200,&local_350);
      if (lVar30 == 0) {
LAB_030eec34:
        iVar75 = *(int *)((long)param_5 + 0xc);
      }
      else {
        puVar33 = *(undefined8 **)(lVar30 + 8);
        uVar18 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
        if ((*(ulong *)(lVar30 + 0x10) < uVar18) ||
           (*(ulong *)(lVar30 + 8) = uVar18, puVar33 == (undefined8 *)0x0)) goto LAB_030eec34;
        *puVar33 = "StUpdateManifold";
        uVar40 = nn::os::GetSystemTick();
        puVar33[1] = uVar40;
        iVar75 = *(int *)((long)param_5 + 0xc);
      }
      if ((iVar75 != 0) && (1 < (int)param_5[5])) {
        FUN_02f6c0d0(param_5[4],0,(int)param_5[5] + -1);
      }
      FUN_030f1cb0(param_1,param_6,param_5,pfVar2);
      iVar75 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14c) + 10;
      local_420 = 0;
      local_418 = 0x8000000000000000;
      local_408 = iVar75;
      if (iVar75 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = *(long *)(lVar14 + 0x38d490);
        if (lVar21 == 0) {
          lVar21 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar21;
        }
        lVar23 = *(long *)(lVar21 + 8);
        uVar18 = (ulong)(int)(iVar75 * 0x50 + 0x7fU & 0xffffff80);
        if (uVar18 <= *(ulong *)(lVar23 + 0x10)) {
          lVar21 = *(long *)(lVar23 + 0x18);
          uVar18 = lVar21 + uVar18;
          if (uVar18 <= *(ulong *)(lVar23 + 0x20)) {
            *(ulong *)(lVar23 + 0x18) = uVar18;
            goto LAB_030eecc8;
          }
        }
        lVar21 = FUN_032ce670(lVar23);
      }
LAB_030eecc8:
      local_418 = CONCAT44(iVar75,(int)local_418) | 0x8000000000000000;
      local_420 = lVar21;
      local_410 = lVar21;
      FUN_030f314c(*(float *)(param_2 + 8) -
                   (float)CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,uVar45))),uVar45,param_1,
                   param_2,&local_420);
      if (*(int *)((long)param_5 + 0xc) != 0) {
        (**(code **)(*param_5 + 0x20))(param_5);
      }
      FUN_030ed904(&local_200,&local_350,&local_b0);
      if (lVar30 != 0) {
        puVar33 = *(undefined8 **)(lVar30 + 8);
        uVar18 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= *(ulong *)(lVar30 + 0x10)) &&
           (*(ulong *)(lVar30 + 8) = uVar18, puVar33 != (undefined8 *)0x0)) {
          *puVar33 = "StSlexMove";
          uVar40 = nn::os::GetSystemTick();
          puVar33[1] = uVar40;
        }
      }
      lStack_3b8 = local_420;
      local_3b0 = CONCAT44(local_3b0._4_4_,(int)local_418);
      fVar36 = *(float *)(param_1 + 0xc0);
      local_3f0 = *(long **)(param_1 + 0xc0);
      fVar44 = *(float *)(param_1 + 200);
      dStack_3e8 = *(double *)(param_1 + 200);
      fVar36 = fVar36 * fVar36;
      fVar43 = *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4);
      fVar44 = fVar44 * fVar44;
      fVar37 = fVar44 + fVar36 + fVar43;
      uVar40 = CONCAT44(fVar44 + fVar36 + fVar43,fVar37);
      uVar47 = 0;
      uVar50 = 0;
      uVar53 = 0;
      uVar56 = 0;
      if (fVar37 != 0.0) {
        uVar80 = NEON_frsqrte(uVar40,4);
        fVar36 = (float)uVar80;
        fVar44 = (float)((ulong)uVar80 >> 0x20);
        uVar80 = NEON_frsqrts(uVar40,CONCAT44(fVar44 * fVar44,fVar36 * fVar36),4);
        fVar36 = fVar36 * (float)uVar80;
        fVar44 = fVar44 * (float)((ulong)uVar80 >> 0x20);
        iVar75 = -(uint)(fVar37 <= 0.0);
        uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar44 * fVar44,fVar36 * fVar36),4);
        fVar36 = (float)uVar40 * fVar36;
        fVar36 = *(float *)(param_1 + 0x140) * 0.5 *
                 (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar75 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar75 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar75)));
        uVar47 = SUB41(fVar36,0);
        uVar50 = (undefined1)((uint)fVar36 >> 8);
        uVar53 = (undefined1)((uint)fVar36 >> 0x10);
        uVar56 = (undefined1)((uint)fVar36 >> 0x18);
      }
      local_3c0 = CONCAT44(CONCAT13(uVar56,CONCAT12(uVar53,CONCAT11(uVar50,uVar47))),fVar99);
      local_400 = 0.0;
      puStack_3f8 = (undefined *)0x0;
      local_3d0 = *(double *)(param_1 + 0x130);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x138);
      uVar38 = *(uint *)(param_1 + 0x150);
      dStack_3d8 = (double)CONCAT17(0x34,(uint7)uVar38);
      local_3e0 = (double)CONCAT17((char)(uVar38 >> 0x18),
                                   CONCAT16((char)(uVar38 >> 0x10),
                                            CONCAT15((char)(uVar38 >> 8),
                                                     CONCAT14((char)uVar38,uVar38))));
      iVar75 = *(int *)(param_1 + 0x100);
      iVar85 = (int)local_418;
      if (0 < iVar75) {
        lVar21 = (long)iVar75 + -1;
        plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
        (**(code **)(*plVar31 + 0x20))(plVar31,param_1,lVar19,&local_400);
        if (0 < lVar21) {
          lVar21 = (long)iVar75 + -2;
          do {
            plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
            (**(code **)(*plVar31 + 0x20))(plVar31,param_1,lVar19,&local_400);
            bVar1 = 0 < lVar21;
            lVar21 = lVar21 + -1;
          } while (bVar1);
        }
        iVar85 = (int)local_3b0;
      }
      if (iVar85 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = *(long *)(lVar14 + 0x38d490);
        if (lVar21 == 0) {
          lVar21 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar21;
        }
        lVar23 = *(long *)(lVar21 + 8);
        uVar18 = (ulong)(int)(iVar85 * 0x10 + 0x7fU & 0xffffff80);
        if (uVar18 <= *(ulong *)(lVar23 + 0x10)) {
          lVar21 = *(long *)(lVar23 + 0x18);
          uVar18 = lVar21 + uVar18;
          if (uVar18 <= *(ulong *)(lVar23 + 0x20)) {
            *(ulong *)(lVar23 + 0x18) = uVar18;
            goto LAB_030eee5c;
          }
        }
        lVar21 = FUN_032ce670();
      }
LAB_030eee5c:
      local_428 = lVar21;
      FUN_0335d590(&local_400,&local_450);
      fVar99 = local_430;
      uVar40 = uStack_438;
      puVar78 = local_440;
      puVar10 = puStack_448;
      uVar18 = local_450;
      lVar23 = *(long *)(lVar14 + 0x38d490);
      if (lVar23 == 0) {
        lVar23 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar23;
      }
      lVar23 = *(long *)(lVar23 + 8);
      uVar15 = (ulong)(int)(iVar85 * 0x10 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar23 + 0x10) < uVar15) || (*(long *)(lVar23 + 0x18) != lVar21 + uVar15)) ||
         (*(long *)(lVar23 + 0x28) == lVar21)) {
        if (lVar21 == 0) goto joined_r0x030ef3b0;
        if (*(ulong *)(lVar23 + 0x10) < uVar15) {
          *(int *)(*(long *)(lVar23 + 8) + 0x20) = *(int *)(*(long *)(lVar23 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar23 + 0x40) + 0x18))(*(long **)(lVar23 + 0x40),lVar21);
          goto joined_r0x030ef3b0;
        }
        if (*(long *)(lVar23 + 0x18) != lVar21 + uVar15) {
          FUN_032ceaf0(lVar23,lVar21);
          goto joined_r0x030ef3b0;
        }
        *(long *)(lVar23 + 0x18) = lVar21;
        FUN_032ce944();
        if (lVar30 != 0) goto LAB_030eeedc;
LAB_030ef118:
        FUN_030f0138(param_1,param_2,param_4,param_7);
      }
      else {
        *(long *)(lVar23 + 0x18) = lVar21;
joined_r0x030ef3b0:
        if (lVar30 == 0) goto LAB_030ef118;
LAB_030eeedc:
        puVar33 = *(undefined8 **)(lVar30 + 8);
        uVar15 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= *(ulong *)(lVar30 + 0x10)) &&
           (*(ulong *)(lVar30 + 8) = uVar15, puVar33 != (undefined8 *)0x0)) {
          *puVar33 = "StApplySurf";
          uVar80 = nn::os::GetSystemTick();
          puVar33[1] = uVar80;
        }
        FUN_030f0138(param_1,param_2,param_4,param_7);
        puVar33 = *(undefined8 **)(lVar30 + 8);
        uVar15 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= *(ulong *)(lVar30 + 0x10)) &&
           (*(ulong *)(lVar30 + 8) = uVar15, puVar33 != (undefined8 *)0x0)) {
          *puVar33 = "StCastMove";
          uVar80 = nn::os::GetSystemTick();
          puVar33[1] = uVar80;
        }
      }
      fVar37 = (float)uVar18;
      fVar43 = (float)(uVar18 >> 0x20);
      fVar76 = SUB84(puVar10,0);
      fVar36 = fVar76 * fVar76 + fVar37 * fVar37 + fVar43 * fVar43;
      fVar44 = fVar76 * fVar76 + fVar37 * fVar37 + fVar43 * fVar43;
      uVar80 = CONCAT44(fVar44,fVar36);
      fVar86 = (float)((ulong)puVar10 >> 0x20);
      if ((1.4210855e-14 < fVar36) &&
         (0.001 < ABS(*(float *)(param_1 + 0xd8) - fVar76) ||
          (0.001 < ABS(*pfVar2 - fVar37) || 0.001 < ABS(*(float *)(param_1 + 0xd4) - fVar43)))) {
        (**(code **)(*local_d0 + 0x18))();
        local_1d8 = 0;
        (**(code **)(*local_220 + 0x18))();
        local_328 = 0;
        auVar91 = *(undefined1 (*) [16])(param_1 + 0x90);
        auVar96 = ZEXT816(0x3f800000);
        fVar88 = (fVar37 + auVar91._0_4_) - auVar91._0_4_;
        fVar39 = (fVar43 + auVar91._4_4_) - auVar91._4_4_;
        fVar77 = (fVar76 + auVar91._8_4_) - auVar91._8_4_;
        dStack_3d8 = *(double *)(param_1 + 0x28);
        local_400 = 0.0;
        puStack_3f8 = (undefined *)0x0;
        local_3f0 = (long *)CONCAT62(local_3f0._2_6_,0xffff);
        iVar75 = -(uint)(fVar88 == 0.0);
        iVar85 = -(uint)(fVar39 == 0.0);
        iVar87 = -(uint)(fVar77 == 0.0);
        iVar89 = -(uint)(auVar96._0_4_ == 0.0);
        bVar46 = SUB41(fVar88,0) & ~(byte)iVar75;
        bVar49 = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar75 >> 8);
        bVar52 = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
        bVar55 = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
        bVar57 = SUB41(fVar39,0) & ~(byte)iVar85;
        bVar58 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar85 >> 8);
        bVar59 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
        bVar60 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        bVar62 = SUB41(fVar77,0) & ~(byte)iVar87;
        bVar64 = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar87 >> 8);
        bVar66 = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
        bVar68 = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
        bVar72 = auVar96[2] & ~(byte)((uint)iVar89 >> 0x10);
        bVar74 = auVar96[3] & ~(byte)((uint)iVar89 >> 0x18);
        auVar6[1] = bVar49;
        auVar6[0] = bVar46;
        auVar6[2] = bVar52;
        auVar6[3] = bVar55;
        auVar6[4] = bVar57;
        auVar6[5] = bVar58;
        auVar6[6] = bVar59;
        auVar6[7] = bVar60;
        auVar6[8] = bVar62;
        auVar6[9] = bVar64;
        auVar6[10] = bVar66;
        auVar6[0xb] = bVar68;
        auVar6._12_2_ = 0;
        auVar6[0xe] = bVar72;
        auVar6[0xf] = bVar74;
        auVar96 = NEON_frecpe(auVar6,4);
        iVar75 = -(uint)((float)CONCAT13(bVar55,CONCAT12(bVar52,CONCAT11(bVar49,bVar46))) == 0.0);
        iVar85 = -(uint)((float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57))) == 0.0);
        iVar87 = -(uint)((float)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62))) == 0.0);
        iVar89 = -(uint)((float)((uint)CONCAT11(bVar74,bVar72) << 0x10) == 0.0);
        auVar83[0] = ~(byte)iVar75;
        auVar83[1] = ~(byte)((uint)iVar75 >> 8);
        auVar83[2] = ~(byte)((uint)iVar75 >> 0x10);
        auVar83[3] = ~(byte)((uint)iVar75 >> 0x18);
        auVar83[4] = ~(byte)iVar85;
        auVar83[5] = ~(byte)((uint)iVar85 >> 8);
        auVar83[6] = ~(byte)((uint)iVar85 >> 0x10);
        auVar83[7] = ~(byte)((uint)iVar85 >> 0x18);
        auVar83[8] = ~(byte)iVar87;
        auVar83[9] = ~(byte)((uint)iVar87 >> 8);
        auVar83[10] = ~(byte)((uint)iVar87 >> 0x10);
        auVar83[0xb] = ~(byte)((uint)iVar87 >> 0x18);
        auVar83[0xc] = ~(byte)iVar89;
        auVar83[0xd] = ~(byte)((uint)iVar89 >> 8);
        auVar83[0xe] = ~(byte)((uint)iVar89 >> 0x10);
        auVar83[0xf] = ~(byte)((uint)iVar89 >> 0x18);
        auVar7[1] = bVar49;
        auVar7[0] = bVar46;
        auVar7[2] = bVar52;
        auVar7[3] = bVar55;
        auVar7[4] = bVar57;
        auVar7[5] = bVar58;
        auVar7[6] = bVar59;
        auVar7[7] = bVar60;
        auVar7[8] = bVar62;
        auVar7[9] = bVar64;
        auVar7[10] = bVar66;
        auVar7[0xb] = bVar68;
        auVar7._12_2_ = 0;
        auVar7[0xe] = bVar72;
        auVar7[0xf] = bVar74;
        auVar97 = NEON_frecps(auVar7,auVar96,4);
        auVar94._0_4_ = auVar96._0_4_ * auVar97._0_4_;
        auVar94._4_4_ = auVar96._4_4_ * auVar97._4_4_;
        auVar94._8_4_ = auVar96._8_4_ * auVar97._8_4_;
        auVar94._12_4_ = auVar96._12_4_ * auVar97._12_4_;
        auVar8[1] = bVar49;
        auVar8[0] = bVar46;
        auVar8[2] = bVar52;
        auVar8[3] = bVar55;
        auVar8[4] = bVar57;
        auVar8[5] = bVar58;
        auVar8[6] = bVar59;
        auVar8[7] = bVar60;
        auVar8[8] = bVar62;
        auVar8[9] = bVar64;
        auVar8[10] = bVar66;
        auVar8[0xb] = bVar68;
        auVar8._12_2_ = 0;
        auVar8[0xe] = bVar72;
        auVar8[0xf] = bVar74;
        auVar96 = NEON_frecps(auVar8,auVar94,4);
        local_3e0 = (double)CONCAT53(local_3e0._3_5_,0xfb0001);
        auVar95._0_4_ = auVar94._0_4_ * auVar96._0_4_;
        auVar95._4_4_ = auVar94._4_4_ * auVar96._4_4_;
        auVar95._8_4_ = auVar94._8_4_ * auVar96._8_4_;
        auVar95._12_4_ = auVar94._12_4_ * auVar96._12_4_;
        auVar84._8_4_ = 0x7f7fffee;
        auVar84._0_8_ = 0x7f7fffee7f7fffee;
        auVar84._12_4_ = 0x7f7fffee;
        auVar84 = auVar84 ^ (auVar84 ^ auVar95) & auVar83;
        local_3a0 = 0x3a83126f;
        local_398 = 0x10000000000;
        local_3f0 = (long *)((ulong)local_3f0 & 0xffffffff);
        dStack_3e8 = 0.0;
        local_390 = 0;
        local_380 = 0;
        uStack_378 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_388 = 0x7f7fffee;
        lStack_3b8 = CONCAT17(bVar74,CONCAT16(bVar72,(uint6)CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11
                                                  (bVar64,bVar62)))));
        local_3c0 = CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(bVar55,
                                                  CONCAT12(bVar52,CONCAT11(bVar49,bVar46)))))));
        uStack_3a8 = auVar84._8_8_;
        local_3b0 = auVar84._0_8_;
        uStack_3c8 = auVar91._8_8_;
        local_3d0 = auVar91._0_8_;
        puStack_3f8 = (undefined *)(**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
        local_400 = (double)(**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
        local_3f0 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0x40),(undefined4)local_3f0);
        local_3e0 = (double)CONCAT71(local_3e0._1_7_,*(undefined1 *)(param_1 + 0x11c));
        local_390 = uVar12;
        (**(code **)(**(long **)(param_1 + 0x48) + 0x1c0))
                  (*(long **)(param_1 + 0x48),&local_400,param_1 + 0x60,&local_200,&local_350);
        uVar15 = (ulong)*(uint *)((long)param_5 + 0xc);
        if (0 < (int)*(uint *)((long)param_5 + 0xc)) {
          if (1 < (int)param_5[5]) {
            FUN_02f6c0d0(param_5[4],0,(int)param_5[5] + -1);
          }
          lVar21 = (**(code **)(*param_5 + 0x20))(param_5);
          puVar35 = (undefined4 *)(lVar21 + 0x60);
LAB_030ef7bc:
          local_400 = *(double *)(puVar35 + -0x18);
          puStack_3f8 = *(undefined **)(puVar35 + -0x16);
          fVar88 = *(float *)(param_1 + 0x140);
          uVar47 = SUB41(fVar88,0);
          uVar50 = (undefined1)((uint)fVar88 >> 8);
          uVar53 = (undefined1)((uint)fVar88 >> 0x10);
          uVar56 = (undefined1)((uint)fVar88 >> 0x18);
          local_3f0 = *(long **)(puVar35 + -0x14);
          dStack_3e8 = *(double *)(puVar35 + -0x12);
          auVar42._0_4_ = fVar37 * (float)puVar35[-0x14];
          auVar42._4_4_ = fVar43 * (float)puVar35[-0x13];
          auVar42._8_4_ = fVar76 * (float)puVar35[-0x12];
          auVar42._12_4_ = fVar86 * (float)puVar35[-0x11];
          dStack_3d8 = *(double *)(puVar35 + -4);
          auVar91 = NEON_ext(auVar42,auVar42,8,1);
          fVar39 = auVar91._0_4_ + auVar42._0_4_ + auVar42._4_4_;
          fVar77 = (float)puVar35[-0x10];
          fVar90 = fVar88 + fVar77 * fVar39;
          if (fVar90 <= fVar88) {
            uVar47 = SUB41(fVar90,0);
            uVar50 = (undefined1)((uint)fVar90 >> 8);
            uVar53 = (undefined1)((uint)fVar90 >> 0x10);
            uVar56 = (undefined1)((uint)fVar90 >> 0x18);
          }
          local_3e0 = (double)CONCAT44(fVar77,-(fVar77 * fVar39));
          uVar61 = 0;
          uVar63 = 0;
          uVar65 = 0;
          uVar67 = 0;
          if (0.0 <= fVar90) {
            uVar61 = uVar47;
            uVar63 = uVar50;
            uVar65 = uVar53;
            uVar67 = uVar56;
          }
          local_3d0 = (double)CONCAT44(CONCAT13(uVar67,CONCAT12(uVar65,CONCAT11(uVar63,uVar61))),
                                       *puVar35);
          iVar75 = FUN_030f2e18(param_1,&local_400,lVar19);
          if (iVar75 != -1) goto code_r0x030ef840;
          iVar75 = *(int *)(param_1 + 0x100);
          if ((0 < iVar75) &&
             (lVar21 = (long)iVar75 + -1,
             plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8),
             (**(code **)(*plVar31 + 0x28))(plVar31,param_1,&local_400), 0 < lVar21)) {
            lVar21 = (long)iVar75 + -2;
            do {
              plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
              (**(code **)(*plVar31 + 0x28))(plVar31,param_1,&local_400);
              bVar1 = 0 < lVar21;
              lVar21 = lVar21 + -1;
            } while (bVar1);
          }
          uVar34 = *(uint *)(param_1 + 0x20);
          uVar15 = (ulong)uVar34;
          local_52c = *(uint *)(param_1 + 0x24);
          uVar29 = local_52c & 0x3fffffff;
          puVar33 = *(undefined8 **)(param_1 + 0x18);
          uVar38 = uVar34 + 1;
          if ((int)uVar34 < (int)uVar29) {
            uVar29 = uVar34;
            local_528 = puVar33;
          }
          else {
            if (0x3ffffffe < (int)uVar34) {
              FUN_032bd0a8(uVar38);
              local_52c = *(uint *)(param_1 + 0x24);
              uVar29 = local_52c & 0x3fffffff;
            }
            uVar32 = (local_52c & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar32) {
              uVar32 = 0x3fffffff;
            }
            local_84 = uVar38;
            if ((int)uVar38 <= (int)uVar32) {
              local_84 = uVar32;
            }
            local_90 = (ulong)local_84 << 6;
            if (((int)local_84 < (int)uVar29) || (0x3fffffff < (int)local_84)) {
              local_450 = 1;
              local_440 = &local_84;
              puStack_448 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_450);
              local_52c = *(uint *)(param_1 + 0x24);
              uVar29 = local_52c & 0x3fffffff;
            }
            local_528 = (undefined8 *)
                        (**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_90,&local_90);
            if (0 < (int)uVar34) {
              puVar20 = local_528;
              puVar22 = puVar33;
              do {
                uVar79 = puVar22[5];
                uVar15 = uVar15 - 1;
                puVar20[3] = puVar22[3];
                puVar20[5] = uVar79;
                puVar20[1] = puVar22[1];
                uVar79 = *puVar22;
                puVar20[2] = puVar22[2];
                *puVar20 = uVar79;
                uVar79 = puVar22[4];
                puVar20[6] = puVar22[6];
                puVar20[4] = uVar79;
                puVar22 = puVar22 + 8;
                puVar20 = puVar20 + 8;
              } while (uVar15 != 0);
            }
            if (-1 < (int)local_52c) {
              (**(code **)(*(long *)puVar9 + 0x18))(puVar9,puVar33,(ulong)uVar29 << 6);
            }
            if (local_90 < 0xfffffffc0) {
              uVar17 = (undefined4)(local_90 >> 6);
            }
            else {
              uVar17 = 0x3fffffff;
            }
            *(undefined4 *)(param_1 + 0x24) = uVar17;
            uVar29 = *(uint *)(param_1 + 0x20);
            *(undefined8 **)(param_1 + 0x18) = local_528;
          }
          pdVar3 = (double *)(local_528 + (long)(int)uVar29 * 8);
          pdVar3[3] = dStack_3e8;
          pdVar3[5] = dStack_3d8;
          pdVar3[1] = (double)puStack_3f8;
          pdVar3[2] = (double)local_3f0;
          *pdVar3 = local_400;
          pdVar3[6] = local_3d0;
          pdVar3[4] = local_3e0;
          *(uint *)(param_1 + 0x20) = uVar38;
          FUN_030ed904(&local_200,&local_350,&local_b0);
          if ((int)uVar34 < 0) goto LAB_030eef3c;
          uVar79 = NEON_frsqrte(uVar80,4);
          fVar88 = (float)uVar79;
          fVar39 = (float)((ulong)uVar79 >> 0x20);
          uVar79 = NEON_frsqrts(uVar80,CONCAT44(fVar39 * fVar39,fVar88 * fVar88),4);
          fVar88 = fVar88 * (float)uVar79;
          fVar39 = fVar39 * (float)((ulong)uVar79 >> 0x20);
          uVar80 = NEON_frsqrts(uVar80,CONCAT44(fVar39 * fVar39,fVar88 * fVar88),4);
          lVar21 = *(long *)(param_1 + 0x18) + (long)(int)uVar34 * 0x40;
          fVar88 = (float)uVar80 * fVar88;
          fVar39 = (float)((ulong)uVar80 >> 0x20) * fVar39;
          iVar75 = -(uint)(fVar36 <= 0.0);
          iVar85 = -(uint)(fVar44 <= 0.0);
          fVar44 = fVar37 * *(float *)(lVar21 + 0x10);
          fVar77 = fVar43 * *(float *)(lVar21 + 0x14);
          fVar90 = fVar76 * *(float *)(lVar21 + 0x18);
          fVar88 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                                   CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                            ~(byte)((uint)iVar75 >> 0x10),
                                            CONCAT11((byte)((uint)fVar88 >> 8) &
                                                     ~(byte)((uint)iVar75 >> 8),
                                                     SUB41(fVar88,0) & ~(byte)iVar75)));
          fVar39 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18),
                                    CONCAT16((byte)((uint)fVar39 >> 0x10) &
                                             ~(byte)((uint)iVar85 >> 0x10),
                                             CONCAT15((byte)((uint)fVar39 >> 8) &
                                                      ~(byte)((uint)iVar85 >> 8),
                                                      CONCAT14(SUB41(fVar39,0) & ~(byte)iVar85,
                                                               fVar88)))) >> 0x20);
          fVar36 = -(fVar88 * (fVar44 + fVar77 + fVar90));
          fVar44 = -(fVar39 * (fVar44 + fVar77 + fVar90));
          uVar47 = SUB41(fVar44,0);
          uVar50 = (undefined1)((uint)fVar44 >> 8);
          uVar53 = (undefined1)((uint)fVar44 >> 0x10);
          uVar56 = (undefined1)((uint)fVar44 >> 0x18);
          uVar80 = NEON_frecpe(CONCAT17(uVar56,CONCAT16(uVar53,CONCAT15(uVar50,CONCAT14(uVar47,
                                                  fVar36)))),4);
          uVar79 = NEON_frecps(CONCAT17(uVar56,CONCAT16(uVar53,CONCAT15(uVar50,CONCAT14(uVar47,
                                                  fVar36)))),uVar80,4);
          fVar44 = (float)uVar80 * (float)uVar79;
          fVar77 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar79 >> 0x20);
          uVar80 = NEON_frecps(CONCAT17(uVar56,CONCAT16(uVar53,CONCAT15(uVar50,CONCAT14(uVar47,
                                                  fVar36)))),CONCAT44(fVar77,fVar44),4);
          uVar79 = NEON_fmov(0x3f800000,4);
          uVar80 = NEON_fminnm(CONCAT44(*(float *)(lVar21 + 0x24) -
                                        fVar39 * fVar77 * (float)((ulong)uVar80 >> 0x20) *
                                                 *(float *)(param_1 + 0x140),
                                        *(float *)(lVar21 + 0x24) -
                                        fVar88 * fVar44 * (float)uVar80 *
                                                 *(float *)(param_1 + 0x140)),uVar79,4);
          uVar80 = NEON_fmax(uVar80,0,4);
          fVar44 = (float)uVar80;
          fVar99 = fVar99 * fVar44;
          fVar36 = (float)((ulong)uVar80 >> 0x20);
          auVar41._0_4_ = (float)*(undefined8 *)(param_1 + 0x90) + fVar37 * fVar44;
          auVar41._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + fVar43 * fVar36;
          auVar41._8_4_ = (float)*(undefined8 *)(param_1 + 0x98) + fVar76 * fVar44;
          auVar41._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) + fVar86 * fVar36
          ;
          goto LAB_030eef44;
        }
      }
LAB_030eef3c:
      auVar41._0_4_ = fVar37 + *(float *)(param_1 + 0x90);
      auVar41._4_4_ = fVar43 + *(float *)(param_1 + 0x94);
      auVar41._8_4_ = fVar76 + *(float *)(param_1 + 0x98);
      auVar41._12_4_ = fVar86 + *(float *)(param_1 + 0x9c);
LAB_030eef44:
      lVar21 = local_410;
      *(long *)(param_1 + 0x98) = auVar41._8_8_;
      *(long *)(param_1 + 0x90) = auVar41._0_8_;
      *(undefined **)(param_1 + 0xd8) = puVar10;
      *(ulong *)pfVar2 = uVar18;
      if (local_410 == local_420) {
        local_418 = local_418 & 0xffffffff00000000;
      }
      lVar26 = (long)local_408;
      lVar23 = *(long *)(lVar14 + 0x38d490);
      if (lVar23 == 0) {
        lVar23 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar23;
      }
      lVar23 = *(long *)(lVar23 + 8);
      uVar18 = lVar26 * 0x50 + 0x7fU & 0xffffffffffffff80;
      if (((*(ulong *)(lVar23 + 0x10) < uVar18) || (*(long *)(lVar23 + 0x18) != uVar18 + lVar21)) ||
         (*(long *)(lVar23 + 0x28) == lVar21)) {
        if (lVar21 != 0) {
          if (*(ulong *)(lVar23 + 0x10) < uVar18) {
            *(int *)(*(long *)(lVar23 + 8) + 0x20) = *(int *)(*(long *)(lVar23 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar23 + 0x40) + 0x18))(*(long **)(lVar23 + 0x40),lVar21);
          }
          else if (*(long *)(lVar23 + 0x18) == uVar18 + lVar21) {
            *(long *)(lVar23 + 0x18) = lVar21;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar23,lVar21);
          }
        }
      }
      else {
        *(long *)(lVar23 + 0x18) = lVar21;
      }
      uVar18 = local_418;
      fVar99 = (float)CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,uVar45))) - fVar99;
      uVar45 = SUB41(fVar99,0);
      uVar48 = (undefined1)((uint)fVar99 >> 8);
      uVar51 = (undefined1)((uint)fVar99 >> 0x10);
      uVar54 = (undefined1)((uint)fVar99 >> 0x18);
      uVar15 = (ulong)local_418._4_4_;
      local_418 = (ulong)local_418._4_4_ << 0x20;
      if ((-1 < (long)uVar18) && (local_420 != 0)) {
        (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_420,(uVar15 & 0x3fffffff) * 0x50);
      }
    } while ((1.1920929e-07 < fVar99) && (iVar11 = iVar11 + 1, iVar11 < *(int *)(param_1 + 0x160)));
  }
  *(undefined8 *)(param_1 + 200) = uVar40;
  *(uint **)(param_1 + 0xc0) = puVar78;
  if ((param_7 == 0) && (*(long *)(param_1 + 0x38) != -1)) {
    local_400 = (double)*(float *)(param_1 + 0x90);
    puStack_3f8 = (undefined *)(double)*(float *)(param_1 + 0x94);
    local_3f0 = (long *)(double)*(float *)(param_1 + 0x98);
    dStack_3e8 = (double)*(float *)(param_1 + 0x9c);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x88))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),param_1 + 0x60,&local_400,0);
  }
  lVar19 = local_b0;
  uVar18 = (ulong)*(uint *)(param_1 + 0x110);
  if (0 < (int)*(uint *)(param_1 + 0x110)) {
    *(undefined1 *)(*(long *)(param_1 + 0x108) + 0xc) = 0;
    uVar18 = (ulong)*(uint *)(param_1 + 0x110);
    if (1 < (int)*(uint *)(param_1 + 0x110)) {
      lVar21 = 1;
      lVar23 = 0x3c;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x108) + lVar23) = 0;
        uVar18 = (ulong)*(int *)(param_1 + 0x110);
        lVar21 = lVar21 + 1;
        lVar23 = lVar23 + 0x30;
      } while (lVar21 < (long)uVar18);
    }
  }
  uVar38 = (uint)uVar18;
  lVar21 = (long)(int)local_a8;
  if (0 < (int)local_a8) {
    lVar23 = 0;
    do {
      plVar31 = (long *)(lVar19 + lVar23 * 0x30);
      iVar11 = (int)uVar18;
      if (0 < iVar11) {
        lVar24 = *(long *)(param_1 + 0x108);
        lVar27 = 0;
        lVar26 = 0;
        piVar28 = (int *)(lVar24 + 8);
        do {
          if ((*(long *)(piVar28 + -2) == *plVar31) &&
             (*piVar28 == *(int *)(lVar19 + lVar23 * 0x30 + 8))) {
            cVar5 = *(char *)(lVar19 + lVar23 * 0x30 + 0xc);
            if ((int)lVar27 == 1) {
              iVar11 = *(int *)(param_1 + 0x100);
              if ((0 < iVar11) &&
                 (lVar26 = (long)iVar11 + -1,
                 plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8),
                 (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,0), 0 < lVar26)) {
                lVar26 = (long)iVar11 + -2;
                do {
                  plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8);
                  (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,0);
                  bVar1 = 0 < lVar26;
                  lVar26 = lVar26 + -1;
                } while (bVar1);
              }
              goto joined_r0x030f007c;
            }
            if (cVar5 == '\0') {
              *(int *)(param_1 + 0x110) = iVar11 + -1;
              if (iVar11 + (int)lVar27 != 1) {
                puVar22 = (undefined8 *)(lVar24 + (long)(iVar11 + -1) * 0x30);
                puVar33 = (undefined8 *)(lVar24 + (lVar26 >> 0x20) * 0x30);
                uVar12 = puVar22[5];
                puVar33[3] = puVar22[3];
                puVar33[5] = uVar12;
                puVar33[1] = puVar22[1];
                *puVar33 = *puVar22;
                uVar12 = puVar22[2];
                puVar33[4] = puVar22[4];
                puVar33[2] = uVar12;
              }
              iVar11 = *(int *)(param_1 + 0x100);
              if ((0 < iVar11) &&
                 (lVar26 = (long)iVar11 + -1,
                 plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8),
                 (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,1), 0 < lVar26)) {
                lVar26 = (long)iVar11 + -2;
                do {
                  plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8);
                  (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,1);
                  bVar1 = 0 < lVar26;
                  lVar26 = lVar26 + -1;
                } while (bVar1);
              }
            }
            else {
              *(undefined1 *)(lVar24 + (lVar26 >> 0x20) * 0x30 + 0xc) = 1;
            }
            goto LAB_030ee844;
          }
          lVar27 = lVar27 + -1;
          lVar26 = lVar26 + 0x100000000;
          piVar28 = piVar28 + 0xc;
        } while ((uVar18 & 0xffffffff) + lVar27 != 0);
      }
      iVar11 = *(int *)(param_1 + 0x100);
      cVar5 = *(char *)(lVar19 + lVar23 * 0x30 + 0xc);
      if ((0 < iVar11) &&
         (lVar26 = (long)iVar11 + -1, plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8),
         (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,0), 0 < lVar26)) {
        lVar26 = (long)iVar11 + -2;
        do {
          plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8);
          (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,0);
          bVar1 = 0 < lVar26;
          lVar26 = lVar26 + -1;
        } while (bVar1);
      }
joined_r0x030f007c:
      if (cVar5 == '\0') {
        iVar11 = *(int *)(param_1 + 0x100);
        if ((0 < iVar11) &&
           (lVar26 = (long)iVar11 + -1, plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8)
           , (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,1), 0 < lVar26)) {
          lVar26 = (long)iVar11 + -2;
          do {
            plVar13 = *(long **)(*(long *)(param_1 + 0xf8) + lVar26 * 8);
            (**(code **)(*plVar13 + 0x58))(plVar13,param_1,plVar31,1);
            bVar1 = 0 < lVar26;
            lVar26 = lVar26 + -1;
          } while (bVar1);
        }
      }
      else {
        uVar34 = *(uint *)(param_1 + 0x114);
        uVar29 = uVar34 & 0x3fffffff;
        uVar32 = *(uint *)(param_1 + 0x110);
        puVar33 = *(undefined8 **)(param_1 + 0x108);
        uVar38 = uVar32 + 1;
        if ((int)uVar29 <= (int)uVar32) {
          if (0x3ffffffe < (int)uVar32) {
            FUN_032bd0a8(uVar38);
            uVar34 = *(uint *)(param_1 + 0x114);
            uVar29 = uVar34 & 0x3fffffff;
          }
          puVar9 = PTR_PTR_0434a080;
          uVar16 = (uVar34 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar16) {
            uVar16 = 0x3fffffff;
          }
          uVar4 = uVar38;
          if ((int)uVar38 <= (int)uVar16) {
            uVar4 = uVar16;
          }
          local_450 = (ulong)uVar4 * 0x30;
          local_420 = CONCAT44(local_420._4_4_,uVar4);
          if (((int)uVar4 < (int)uVar29) || (0x3fffffff < (int)uVar4)) {
            local_400 = 4.94065645841247e-324;
            local_3f0 = &local_420;
            puStack_3f8 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_400);
            uVar34 = *(uint *)(param_1 + 0x114);
            uVar29 = uVar34 & 0x3fffffff;
          }
          puVar22 = (undefined8 *)(**(code **)(*(long *)puVar9 + 0x10))(puVar9,local_450,&local_450)
          ;
          if (0 < (int)uVar32) {
            uVar12 = puVar33[5];
            puVar22[3] = puVar33[3];
            puVar22[5] = uVar12;
            puVar22[1] = puVar33[1];
            *puVar22 = *puVar33;
            uVar12 = puVar33[2];
            puVar22[4] = puVar33[4];
            puVar22[2] = uVar12;
            if (uVar32 != 1) {
              uVar12 = puVar33[0xb];
              puVar22[9] = puVar33[9];
              puVar22[0xb] = uVar12;
              puVar22[7] = puVar33[7];
              puVar22[6] = puVar33[6];
              uVar12 = puVar33[8];
              puVar22[10] = puVar33[10];
              puVar22[8] = uVar12;
              if (uVar32 != 2) {
                uVar12 = puVar33[0x11];
                puVar22[0xf] = puVar33[0xf];
                puVar22[0x11] = uVar12;
                puVar22[0xd] = puVar33[0xd];
                puVar22[0xc] = puVar33[0xc];
                uVar12 = puVar33[0xe];
                puVar22[0x10] = puVar33[0x10];
                puVar22[0xe] = uVar12;
                if (uVar32 != 3) {
                  lVar26 = (ulong)uVar32 - 3;
                  puVar20 = puVar33 + 0x12;
                  puVar25 = puVar22 + 0x12;
                  do {
                    uVar12 = puVar20[5];
                    lVar26 = lVar26 + -1;
                    puVar25[3] = puVar20[3];
                    puVar25[5] = uVar12;
                    puVar25[1] = puVar20[1];
                    *puVar25 = *puVar20;
                    uVar12 = puVar20[2];
                    puVar25[4] = puVar20[4];
                    puVar25[2] = uVar12;
                    puVar20 = puVar20 + 6;
                    puVar25 = puVar25 + 6;
                  } while (lVar26 != 0);
                }
              }
            }
          }
          if (-1 < (int)uVar34) {
            (**(code **)(*(long *)puVar9 + 0x18))(puVar9,puVar33,(ulong)uVar29 * 0x30);
          }
          if (local_450 < 0xbffffffd0) {
            uVar17 = (undefined4)(local_450 / 0x30);
          }
          else {
            uVar17 = 0x3fffffff;
          }
          uVar32 = *(uint *)(param_1 + 0x110);
          *(undefined4 *)(param_1 + 0x114) = uVar17;
          *(undefined8 **)(param_1 + 0x108) = puVar22;
          puVar33 = puVar22;
        }
        lVar26 = plVar31[5];
        plVar13 = puVar33 + (long)(int)uVar32 * 6;
        plVar13[3] = plVar31[3];
        plVar13[5] = lVar26;
        plVar13[1] = plVar31[1];
        *plVar13 = *plVar31;
        lVar26 = plVar31[2];
        plVar13[4] = plVar31[4];
        plVar13[2] = lVar26;
        *(uint *)(param_1 + 0x110) = uVar38;
      }
LAB_030ee844:
      uVar38 = *(uint *)(param_1 + 0x110);
      uVar18 = (ulong)uVar38;
      lVar23 = lVar23 + 1;
    } while (lVar23 != lVar21);
  }
  if (0 < (int)uVar38) {
    uVar18 = (ulong)(int)uVar38;
    do {
      while( true ) {
        uVar18 = uVar18 - 1;
        if (*(char *)(*(long *)(param_1 + 0x108) + uVar18 * 0x30 + 0xc) == '\0') break;
LAB_030ee974:
        if ((long)uVar18 < 1) goto LAB_030ee97c;
      }
      iVar11 = *(int *)(param_1 + 0x100);
      if (0 < iVar11) {
        lVar21 = (long)iVar11 + -1;
        lVar19 = *(long *)(param_1 + 0x108) + uVar18 * 0x30;
        plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
        (**(code **)(*plVar31 + 0x58))(plVar31,param_1,lVar19,1);
        if (0 < lVar21) {
          lVar21 = (long)iVar11 + -2;
          do {
            plVar31 = *(long **)(*(long *)(param_1 + 0xf8) + lVar21 * 8);
            (**(code **)(*plVar31 + 0x58))(plVar31,param_1,lVar19,1);
            bVar1 = 0 < lVar21;
            lVar21 = lVar21 + -1;
          } while (bVar1);
        }
      }
      uVar15 = (long)*(int *)(param_1 + 0x110) - 1;
      *(int *)(param_1 + 0x110) = (int)uVar15;
      if (uVar18 == (uVar15 & 0xffffffff)) goto LAB_030ee974;
      puVar33 = (undefined8 *)(*(long *)(param_1 + 0x108) + uVar15 * 0x30);
      puVar22 = (undefined8 *)(*(long *)(param_1 + 0x108) + uVar18 * 0x30);
      uVar80 = puVar33[1];
      *puVar22 = *puVar33;
      uVar12 = puVar33[2];
      uVar79 = puVar33[3];
      uVar40 = puVar33[4];
      puVar22[5] = puVar33[5];
      puVar22[3] = uVar79;
      puVar22[4] = uVar40;
      puVar22[1] = uVar80;
      puVar22[2] = uVar12;
    } while (0 < (long)uVar18);
  }
LAB_030ee97c:
  if (lVar30 != 0) {
    puVar33 = *(undefined8 **)(lVar30 + 8);
    uVar18 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= *(ulong *)(lVar30 + 0x10)) &&
       (*(ulong *)(lVar30 + 8) = uVar18, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = &DAT_03922da5;
      uVar12 = nn::os::GetSystemTick();
      puVar33[1] = uVar12;
    }
  }
  puVar9 = PTR_PTR_0434a080;
  local_350 = &PTR_LAB_042b5268;
  local_328 = 0;
  if ((-1 < (int)local_324) && (local_330 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_330,((ulong)local_324 & 0x3fffffff) << 6);
  }
  local_200 = &PTR_LAB_042b5268;
  local_1d8 = 0;
  if ((-1 < (int)local_1d4) && (local_1e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_1e0,((ulong)local_1d4 & 0x3fffffff) << 6);
  }
  lVar19 = local_a0;
  lVar30 = local_b0;
  if (local_a0 == local_b0) {
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  lVar23 = (long)local_98;
  lVar21 = *(long *)(lVar14 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar21;
  }
  lVar14 = *(long *)(lVar21 + 8);
  uVar15 = lVar23 * 0x30 + 0x7fU & 0xffffffffffffff80;
  uVar18 = local_a8;
  if (((*(ulong *)(lVar14 + 0x10) < uVar15) || (*(long *)(lVar14 + 0x18) != uVar15 + lVar19)) ||
     (*(long *)(lVar14 + 0x28) == lVar19)) {
    if (lVar19 != 0) {
      if (*(ulong *)(lVar14 + 0x10) < uVar15) {
        *(int *)(*(long *)(lVar14 + 8) + 0x20) = *(int *)(*(long *)(lVar14 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar14 + 0x40) + 0x18))(*(long **)(lVar14 + 0x40),lVar19);
        uVar18 = local_a8;
      }
      else if (*(long *)(lVar14 + 0x18) == uVar15 + lVar19) {
        *(long *)(lVar14 + 0x18) = lVar19;
        FUN_032ce944();
        uVar18 = local_a8;
      }
      else {
        FUN_032ceaf0(lVar14,lVar19);
        uVar18 = local_a8;
      }
    }
  }
  else {
    *(long *)(lVar14 + 0x18) = lVar19;
  }
  if (lVar30 != 0) {
    local_a8 = uVar18 & 0xffffffff00000000;
    if (-1 < (long)local_a8) {
      (**(code **)(*(long *)puVar9 + 0x18))(puVar9,lVar30,(uVar18 >> 0x20 & 0x3fffffff) * 0x30);
    }
  }
  return;
code_r0x030ef840:
  uVar15 = uVar15 - 1;
  puVar35 = puVar35 + 0x20;
  if (uVar15 == 0) goto LAB_030eef3c;
  goto LAB_030ef7bc;
}


