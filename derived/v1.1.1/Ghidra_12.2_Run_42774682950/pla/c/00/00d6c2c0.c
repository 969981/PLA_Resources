/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6c2c0; name: FUN_00d6c2c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6c2c0(long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  float *pfVar2;
  uint uVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  uint uVar31;
  uint uVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  uint uVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  
  lVar25 = FUN_002443dc(param_2,"OptionGuideBasePos");
  uVar43 = param_4;
  if (((lVar25 != 0) && (*(char *)(lVar25 + 10) == '\x01')) &&
     (uVar43 = *(uint *)(lVar25 + (ulong)*(uint *)(lVar25 + 4)), 2 < uVar43)) {
    uVar43 = param_4;
  }
  lVar25 = FUN_002443dc(param_2,"OptionGuideIconType");
  uVar32 = param_5;
  if (((lVar25 != 0) && (*(char *)(lVar25 + 10) == '\x01')) &&
     (uVar32 = *(uint *)(lVar25 + (ulong)*(uint *)(lVar25 + 4)), 0x11 < uVar32)) {
    uVar32 = param_5;
  }
  if ((uVar43 == 3) || (uVar32 == 0x12)) {
    return;
  }
  if (param_2 == 0) {
    fVar41 = 0.0;
    fVar42 = 0.0;
  }
  else {
    fVar42 = 0.0;
    fVar41 = 0.0;
    do {
      pfVar2 = (float *)(param_2 + 0x30);
      fVar41 = fVar41 + *(float *)(param_2 + 0x34);
      param_2 = *(long *)(param_2 + 0x18);
      fVar42 = fVar42 + *pfVar2;
    } while (param_2 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x5ac);
  if ((uVar6 != 0xf) && (*(uint *)(param_1 + 0x5b0) == uVar32)) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x5b8);
  if ((uVar7 != 0xf) && (*(uint *)(param_1 + 0x5bc) == uVar32)) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x5c4);
  if ((uVar8 != 0xf) && (*(uint *)(param_1 + 0x5c8) == uVar32)) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x5d0);
  if ((uVar9 != 0xf) && (*(uint *)(param_1 + 0x5d4) == uVar32)) {
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x5dc);
  if ((uVar10 != 0xf) && (*(uint *)(param_1 + 0x5e0) == uVar32)) {
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x5e8);
  if ((uVar11 != 0xf) && (*(uint *)(param_1 + 0x5ec) == uVar32)) {
    return;
  }
  uVar12 = *(uint *)(param_1 + 0x5f4);
  if ((uVar12 != 0xf) && (*(uint *)(param_1 + 0x5f8) == uVar32)) {
    return;
  }
  uVar13 = *(uint *)(param_1 + 0x600);
  if ((uVar13 != 0xf) && (*(uint *)(param_1 + 0x604) == uVar32)) {
    return;
  }
  uVar14 = *(uint *)(param_1 + 0x60c);
  if ((uVar14 != 0xf) && (*(uint *)(param_1 + 0x610) == uVar32)) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x618);
  if ((uVar15 != 0xf) && (*(uint *)(param_1 + 0x61c) == uVar32)) {
    return;
  }
  uVar16 = *(uint *)(param_1 + 0x624);
  if ((uVar16 != 0xf) && (*(uint *)(param_1 + 0x628) == uVar32)) {
    return;
  }
  uVar17 = *(uint *)(param_1 + 0x630);
  if ((uVar17 != 0xf) && (*(uint *)(param_1 + 0x634) == uVar32)) {
    return;
  }
  uVar18 = *(uint *)(param_1 + 0x63c);
  if ((uVar18 != 0xf) && (*(uint *)(param_1 + 0x640) == uVar32)) {
    return;
  }
  uVar19 = *(uint *)(param_1 + 0x648);
  if ((uVar19 != 0xf) && (*(uint *)(param_1 + 0x64c) == uVar32)) {
    return;
  }
  uVar20 = *(uint *)(param_1 + 0x654);
  if ((uVar20 != 0xf) && (*(uint *)(param_1 + 0x658) == uVar32)) {
    return;
  }
  uVar22 = uVar43 * 5;
  uVar3 = uVar22 + 5;
  uVar36 = (uint)(uVar22 <= uVar6 && uVar6 < uVar3);
  if (uVar36 == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = 1 << (ulong)(uVar6 + uVar43 * -5 & 0x1f);
  }
  if ((uVar22 <= uVar7) && (uVar7 < uVar3)) {
    bVar23 = uVar36 != 0;
    uVar36 = 1;
    if (bVar23) {
      uVar36 = 2;
    }
    uVar31 = 1 << (ulong)(uVar7 + uVar43 * -5 & 0x1f) | uVar31;
  }
  if ((uVar22 <= uVar8) && (uVar8 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar8 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar9) && (uVar9 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar9 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar10) && (uVar10 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar10 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar11) && (uVar11 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar11 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar12) && (uVar12 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar12 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar13) && (uVar13 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar13 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar14) && (uVar14 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar14 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar15) && (uVar15 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar15 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar16) && (uVar16 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar16 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar17) && (uVar17 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar17 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar18) && (uVar18 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar18 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar19) && (uVar19 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar19 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if ((uVar22 <= uVar20) && (uVar20 < uVar3)) {
    uVar31 = uVar31 | 1 << (ulong)(uVar20 + uVar43 * -5 & 0x1f);
    uVar36 = uVar36 + 1;
  }
  if (4 < uVar36) {
    return;
  }
  if (uVar6 == 0xf) {
    lVar25 = 0;
    puVar40 = (uint *)(param_1 + 0x5ac);
    goto joined_r0x00d6d814;
  }
  if (uVar7 == 0xf) {
    puVar40 = (uint *)(param_1 + 0x5b8);
    lVar25 = 1;
joined_r0x00d6d7b4:
    if ((uVar31 & 1) != 0) goto LAB_00d6c9e4;
LAB_00d6c564:
    iVar24 = 0;
LAB_00d6c568:
    *puVar40 = iVar24 + uVar22;
    *(uint *)(param_1 + lVar25 * 0xc + 0x5b0) = uVar32;
  }
  else {
    if (uVar8 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x5c4);
      lVar25 = 2;
      goto joined_r0x00d6d7b4;
    }
    if (uVar9 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x5d0);
      lVar25 = 3;
      goto joined_r0x00d6d7b4;
    }
    if (uVar10 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x5dc);
      lVar25 = 4;
      goto joined_r0x00d6d7b4;
    }
    if (uVar11 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x5e8);
      lVar25 = 5;
      goto joined_r0x00d6d7b4;
    }
    if (uVar12 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x5f4);
      lVar25 = 6;
      goto joined_r0x00d6d7b4;
    }
    if (uVar13 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x600);
      lVar25 = 7;
      goto joined_r0x00d6d7b4;
    }
    if (uVar14 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x60c);
      lVar25 = 8;
      goto joined_r0x00d6d7b4;
    }
    if (uVar15 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x618);
      lVar25 = 9;
      goto joined_r0x00d6d7b4;
    }
    if (uVar16 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x624);
      lVar25 = 10;
      goto joined_r0x00d6d7b4;
    }
    if (uVar17 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x630);
      lVar25 = 0xb;
      goto joined_r0x00d6d7b4;
    }
    if (uVar18 == 0xf) {
      puVar40 = (uint *)(param_1 + 0x63c);
      lVar25 = 0xc;
    }
    else {
      if (uVar19 != 0xf) {
        if (uVar20 != 0xf) goto LAB_00d6d764;
        puVar40 = (uint *)(param_1 + 0x654);
        lVar25 = 0xe;
        goto joined_r0x00d6d7b4;
      }
      puVar40 = (uint *)(param_1 + 0x648);
      lVar25 = 0xd;
    }
joined_r0x00d6d814:
    if ((uVar31 & 1) == 0) goto LAB_00d6c564;
LAB_00d6c9e4:
    if ((uVar31 >> 1 & 1) == 0) {
      iVar24 = 1;
      goto LAB_00d6c568;
    }
    if ((uVar31 >> 2 & 1) == 0) {
      iVar24 = 2;
      goto LAB_00d6c568;
    }
    if ((uVar31 >> 3 & 1) == 0) {
      iVar24 = 3;
      goto LAB_00d6c568;
    }
    if ((uVar31 >> 4 & 1) == 0) {
      iVar24 = 4;
      goto LAB_00d6c568;
    }
  }
  FUN_00d6b710(param_1,*puVar40,1);
  if (((DAT_043ac1f8 & 1) == 0) && (iVar24 = __cxa_guard_acquire(&DAT_043ac1f8), iVar24 != 0)) {
    DAT_043ac018 = 0x84bc48266467453d;
    DAT_043ac020 = "anime_L_optionguide_l_00_icon_pattern";
    DAT_043ac038 = 0xdb1fbe4fff7e5fb0;
    DAT_043ac040 = "anime_L_optionguide_l_01_icon_pattern";
    DAT_043ac058 = 0xeba41ce869000783;
    DAT_043ac060 = "anime_L_optionguide_l_02_icon_pattern";
    DAT_043ac078 = 0x23e11279caf7af9e;
    DAT_043ac080 = "anime_L_optionguide_l_03_icon_pattern";
    DAT_043ac028 = 0x25;
    DAT_043ac030 = 0;
    DAT_043ac048 = 0x25;
    DAT_043ac050 = 0;
    DAT_043ac068 = 0x25;
    DAT_043ac070 = 0;
    DAT_043ac098 = 0x7b446a746538b1e9;
    DAT_043ac0a0 = "anime_L_optionguide_l_04_icon_pattern";
    DAT_043ac088 = 0x25;
    DAT_043ac090 = 0;
    DAT_043ac0b8 = 0x29597778f1fa9807;
    DAT_043ac0c0 = "anime_L_optionguide_r_00_icon_pattern";
    DAT_043ac0a8 = 0x25;
    DAT_043ac0b0 = 0;
    DAT_043ac0d8 = 0x1c3a03cdbb02aff2;
    DAT_043ac0e0 = "anime_L_optionguide_r_01_icon_pattern";
    DAT_043ac0c8 = 0x25;
    DAT_043ac0d0 = 0;
    DAT_043ac0f8 = 0x47838d67051813b1;
    DAT_043ac100 = "anime_L_optionguide_r_02_icon_pattern";
    DAT_043ac0e8 = 0x25;
    DAT_043ac0f0 = 0;
    DAT_043ac118 = 0xb22d7d22f84eacb4;
    DAT_043ac120 = "anime_L_optionguide_r_03_icon_pattern";
    DAT_043ac138 = 0xaf6cb2645535ff6b;
    DAT_043ac140 = "anime_L_optionguide_r_04_icon_pattern";
    DAT_043ac158 = 0x7f8bd5a54cfc70;
    DAT_043ac160 = "anime_L_optionguide_c_00_icon_pattern";
    DAT_043ac178 = 0x46735ec2c483afd;
    DAT_043ac180 = "anime_L_optionguide_c_01_icon_pattern";
    DAT_043ac198 = 0x79fb5210ee2a0e5e;
    DAT_043ac1a0 = "anime_L_optionguide_c_02_icon_pattern";
    DAT_043ac1b8 = 0x4d9a5021cceac343;
    DAT_043ac1c0 = "anime_L_optionguide_c_03_icon_pattern";
    DAT_043ac108 = 0x25;
    DAT_043ac110 = 0;
    DAT_043ac128 = 0x25;
    DAT_043ac130 = 0;
    DAT_043ac148 = 0x25;
    DAT_043ac150 = 0;
    DAT_043ac168 = 0x25;
    DAT_043ac170 = 0;
    DAT_043ac188 = 0x25;
    DAT_043ac190 = 0;
    DAT_043ac1a8 = 0x25;
    DAT_043ac1b0 = 0;
    DAT_043ac1c8 = 0x25;
    DAT_043ac1d0 = 0;
    DAT_043ac1d8 = 0xcbb6f7a2619f326c;
    DAT_043ac1e0 = "anime_L_optionguide_c_04_icon_pattern";
    DAT_043ac1e8 = 0x25;
    DAT_043ac1f0 = 0;
    FUN_00100250(FUN_00d6d840,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ac1f8);
  }
  uVar43 = *puVar40;
  if (uVar43 < 0xf) {
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043ac018 + (ulong)uVar43 * 4);
      if (*(long *)(param_1 + 0x2c8) != 0) {
        puVar5 = &DAT_043ac018 + (ulong)*puVar40 * 4;
        uVar43 = puVar40[1];
        uVar26 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),puVar5);
        if ((uVar26 & 1) != 0) {
          if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d6c5f0;
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),puVar5);
        }
        FUN_0283b748((float)(int)uVar43,*(undefined8 *)(param_1 + 0x2c8),puVar5);
      }
    }
LAB_00d6c5f0:
    uVar43 = *puVar40;
  }
  if (((DAT_043ac3e0 & 1) == 0) && (iVar24 = __cxa_guard_acquire(&DAT_043ac3e0), iVar24 != 0)) {
    DAT_043ac200 = 0x14561b0af593336e;
    DAT_043ac208 = "pane_L_optionguide_l_00_T_option_00";
    DAT_043ac220 = 0x6ddba32ced3e471;
    DAT_043ac228 = "pane_L_optionguide_l_01_T_option_00";
    DAT_043ac240 = 0xfda6b98bd733b19c;
    DAT_043ac248 = "pane_L_optionguide_l_02_T_option_00";
    DAT_043ac260 = 0x29aab74b5d0100df;
    DAT_043ac268 = "pane_L_optionguide_l_03_T_option_00";
    DAT_043ac210 = 0x23;
    DAT_043ac218 = 0;
    DAT_043ac230 = 0x23;
    DAT_043ac238 = 0;
    DAT_043ac250 = 0x23;
    DAT_043ac258 = 0;
    DAT_043ac280 = 0x3fa326f104db448a;
    DAT_043ac288 = "pane_L_optionguide_l_04_T_option_00";
    DAT_043ac270 = 0x23;
    DAT_043ac278 = 0;
    DAT_043ac2a0 = 0xa6c35f0c5d54cb30;
    DAT_043ac2a8 = "pane_L_optionguide_r_00_T_option_00";
    DAT_043ac290 = 0x23;
    DAT_043ac298 = 0;
    DAT_043ac2c0 = 0xf23d3036998b0cb3;
    DAT_043ac2c8 = "pane_L_optionguide_r_01_T_option_00";
    DAT_043ac2b0 = 0x23;
    DAT_043ac2b8 = 0;
    DAT_043ac2e0 = 0xa455849d0cacfcb2;
    DAT_043ac2e8 = "pane_L_optionguide_r_02_T_option_00";
    DAT_043ac2d0 = 0x23;
    DAT_043ac2d8 = 0;
    DAT_043ac300 = 0xa06fc2fb072b45;
    DAT_043ac308 = "pane_L_optionguide_r_03_T_option_00";
    DAT_043ac320 = 0xd9f2e8b250619b44;
    DAT_043ac328 = "pane_L_optionguide_r_04_T_option_00";
    DAT_043ac340 = 0x83aed1fe6e3afb39;
    DAT_043ac348 = "pane_L_optionguide_c_00_T_option_00";
    DAT_043ac360 = 0x4becc2492d7e8416;
    DAT_043ac368 = "pane_L_optionguide_c_01_T_option_00";
    DAT_043ac380 = 0xd4811a4c1c1961c7;
    DAT_043ac388 = "pane_L_optionguide_c_02_T_option_00";
    DAT_043ac3a0 = 0x78a265ad64383da4;
    DAT_043ac3a8 = "pane_L_optionguide_c_03_T_option_00";
    DAT_043ac2f0 = 0x23;
    DAT_043ac2f8 = 0;
    DAT_043ac310 = 0x23;
    DAT_043ac318 = 0;
    DAT_043ac330 = 0x23;
    DAT_043ac338 = 0;
    DAT_043ac350 = 0x23;
    DAT_043ac358 = 0;
    DAT_043ac370 = 0x23;
    DAT_043ac378 = 0;
    DAT_043ac390 = 0x23;
    DAT_043ac398 = 0;
    DAT_043ac3b0 = 0x23;
    DAT_043ac3b8 = 0;
    DAT_043ac3c0 = 0xc3bf3ac76e676c25;
    DAT_043ac3c8 = "pane_L_optionguide_c_04_T_option_00";
    DAT_043ac3d0 = 0x23;
    DAT_043ac3d8 = 0;
    FUN_00100250(0xd6d9c0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ac3e0);
  }
  if (0xe < uVar43) goto LAB_00d6c7ac;
  plVar33 = *(long **)(param_1 + 0x2c8);
  if (plVar33 != (long *)0x0) {
    plVar37 = plVar33 + 10;
    do {
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar23) {
        *(int *)plVar37 = (int)*plVar37 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  if (*(uint *)(param_1 + 0x660) < 0x10) {
    plVar37 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) +
                         (ulong)*(uint *)(param_1 + 0x660) * 0x18 + 0x18);
    if (plVar37 != (long *)0x0) {
      lVar28 = plVar37[0xb];
      if (*(undefined8 **)(lVar28 + 0x18) == (undefined8 *)0x0) {
LAB_00d6d764:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar28 + 0x10) == 0) {
        uVar27 = (**(code **)**(undefined8 **)(lVar28 + 0x18))();
        *(undefined8 *)(lVar28 + 0x10) = uVar27;
      }
      piVar4 = (int *)(lVar28 + 0xc);
      do {
        cVar21 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar23) {
          *piVar4 = *piVar4 + 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
    }
  }
  else {
    plVar37 = (long *)0x0;
  }
  plVar35 = (long *)plVar37[0xd];
  if (plVar35 != (long *)0x0) {
    plVar34 = plVar35 + 10;
    do {
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar23) {
        *(int *)plVar34 = (int)*plVar34 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
  }
  if (plVar37 == (long *)0x0) {
LAB_00d6c674:
    plVar37 = (long *)plVar33[0x38];
    if (plVar37 != (long *)0x0) goto LAB_00d6c67c;
LAB_00d6ca0c:
    lVar28 = plVar35[0x16];
    if (lVar28 != 0) {
      plVar37 = *(long **)(lVar28 + 0x270);
      if (plVar37 != *(long **)(lVar28 + 0x278)) {
        iVar24 = 0;
        do {
          plVar34 = (long *)PTR_DAT_04379c88;
          if (*plVar37 != 0) {
            plVar34 = (long *)(*plVar37 + 0x58);
          }
          if (*plVar34 == param_3) goto LAB_00d6ca60;
          plVar37 = plVar37 + 1;
          iVar24 = iVar24 + 1;
        } while (*(long **)(lVar28 + 0x278) != plVar37);
      }
    }
    iVar24 = 0;
LAB_00d6ca60:
    FUN_02c2e33c(plVar35,iVar24,0);
  }
  else {
    lVar28 = plVar37[0xb];
    piVar4 = (int *)(lVar28 + 0xc);
    do {
      iVar24 = *piVar4;
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar23) {
        *piVar4 = iVar24 + -1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar24 + -1 != 0) goto LAB_00d6c674;
    *(undefined8 *)(lVar28 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
    plVar37 = (long *)plVar33[0x38];
    if (plVar37 == (long *)0x0) goto LAB_00d6ca0c;
LAB_00d6c67c:
    plVar34 = plVar37 + 10;
    do {
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar23) {
        *(int *)plVar34 = (int)*plVar34 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar28 = plVar35[0x16];
    if (lVar28 != 0) {
      plVar29 = *(long **)(lVar28 + 0x270);
      if (plVar29 != *(long **)(lVar28 + 0x278)) {
        iVar24 = 0;
        do {
          plVar30 = (long *)PTR_DAT_04379c88;
          if (*plVar29 != 0) {
            plVar30 = (long *)(*plVar29 + 0x58);
          }
          if (*plVar30 == param_3) goto LAB_00d6c6e4;
          plVar29 = plVar29 + 1;
          iVar24 = iVar24 + 1;
        } while (*(long **)(lVar28 + 0x278) != plVar29);
      }
    }
    iVar24 = 0;
LAB_00d6c6e4:
    FUN_02c2e33c(plVar35,iVar24,plVar37);
    do {
      iVar24 = (int)*plVar34 + -1;
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar23) {
        *(int *)plVar34 = iVar24;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar24 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
  }
  lVar28 = plVar33[0x38];
  lVar38 = plVar33[0x39];
  lVar39 = plVar33[0x37];
  *(undefined4 *)(lVar39 + 0x124) = 0;
  *(undefined2 *)(lVar39 + 0x128) = 0;
  *(undefined4 *)(lVar39 + 300) = 0;
  *(undefined4 *)(lVar39 + 0x134) = 0;
  FUN_02c33414(lVar39,lVar28);
  if (*(char *)(lVar38 + 0x7c) != '\0') {
    **(undefined2 **)(lVar38 + 0x58) = 0;
    *(undefined2 *)(lVar38 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar39,lVar38,lVar28,0,0);
  FUN_0283ce7c(plVar33,&DAT_043ac200 + (ulong)uVar43 * 4,plVar33[0x39],10);
  if (plVar35 != (long *)0x0) {
    plVar37 = plVar35 + 10;
    do {
      iVar24 = (int)*plVar37 + -1;
      cVar21 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar23) {
        *(int *)plVar37 = iVar24;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (iVar24 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
    }
  }
  plVar37 = plVar33 + 10;
  do {
    iVar24 = (int)*plVar37 + -1;
    cVar21 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar37,0x10);
    if (bVar23) {
      *(int *)plVar37 = iVar24;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  if (iVar24 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
  }
LAB_00d6c7ac:
  uVar43 = *puVar40;
  if (((DAT_043ac5c8 & 1) == 0) && (iVar24 = __cxa_guard_acquire(&DAT_043ac5c8), iVar24 != 0)) {
    DAT_043ac3f8 = 0;
    DAT_043ac400 = 0;
    DAT_043ac3e8 = &DAT_cbf29ce484222645;
    DAT_043ac3f0 = &DAT_03996322;
    DAT_043ac408 = &DAT_cbf29ce484222645;
    DAT_043ac410 = &DAT_03996322;
    DAT_043ac428 = &DAT_cbf29ce484222645;
    DAT_043ac430 = &DAT_03996322;
    DAT_043ac448 = &DAT_cbf29ce484222645;
    DAT_043ac450 = &DAT_03996322;
    DAT_043ac468 = &DAT_cbf29ce484222645;
    DAT_043ac470 = &DAT_03996322;
    DAT_043ac488 = 0x1dd870692055bfed;
    DAT_043ac490 = "pane_L_optionguide_r_00_A_alignment_00";
    DAT_043ac4a8 = 0x631e7c445129c4c4;
    DAT_043ac4b0 = "pane_L_optionguide_r_01_A_alignment_00";
    DAT_043ac4c8 = 0x54d3e0ceed97953;
    DAT_043ac4d0 = "pane_L_optionguide_r_02_A_alignment_00";
    DAT_043ac4e8 = 0x32f72da02667726a;
    DAT_043ac4f0 = "pane_L_optionguide_r_03_A_alignment_00";
    DAT_043ac508 = 0x810c86f570bfbd09;
    DAT_043ac510 = "pane_L_optionguide_r_04_A_alignment_00";
    DAT_043ac528 = 0xefe29ca90ff3b996;
    DAT_043ac530 = "pane_L_optionguide_c_00_A_alignment_00";
    DAT_043ac548 = 0x4f5ef044f8c8b2cf;
    DAT_043ac550 = "pane_L_optionguide_c_01_A_alignment_00";
    DAT_043ac568 = 0x8eaf8cd54c36e80;
    DAT_043ac570 = "pane_L_optionguide_c_02_A_alignment_00";
    DAT_043ac588 = 0xc4d147714c9ad3e9;
    DAT_043ac590 = "pane_L_optionguide_c_03_A_alignment_00";
    DAT_043ac418 = 0;
    DAT_043ac420 = 0;
    DAT_043ac438 = 0;
    DAT_043ac440 = 0;
    DAT_043ac458 = 0;
    DAT_043ac460 = 0;
    DAT_043ac478 = 0;
    DAT_043ac480 = 0;
    DAT_043ac498 = 0x26;
    DAT_043ac4a0 = 0;
    DAT_043ac4b8 = 0x26;
    DAT_043ac4c0 = 0;
    DAT_043ac4d8 = 0x26;
    DAT_043ac4e0 = 0;
    DAT_043ac4f8 = 0x26;
    DAT_043ac500 = 0;
    DAT_043ac518 = 0x26;
    DAT_043ac520 = 0;
    DAT_043ac538 = 0x26;
    DAT_043ac540 = 0;
    DAT_043ac558 = 0x26;
    DAT_043ac560 = 0;
    DAT_043ac578 = 0x26;
    DAT_043ac580 = 0;
    DAT_043ac598 = 0x26;
    DAT_043ac5a0 = 0;
    DAT_043ac5a8 = 0x4bf4d1faea80d5ca;
    DAT_043ac5b0 = "pane_L_optionguide_c_04_A_alignment_00";
    DAT_043ac5b8 = 0x26;
    DAT_043ac5c0 = 0;
    FUN_00100250(0xd6db40,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ac5c8);
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar24 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar24 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if ((uVar43 < 0xf) &&
     ((&DAT_043ac3e8)[(ulong)uVar43 * 4] != (undefined1 *)*(long *)PTR_DAT_0437a0d8)) {
    if (*(&DAT_043ac3f0)[(ulong)uVar43 * 4] == '\0') {
      uVar27 = 0;
    }
    else {
      uVar27 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8));
    }
    FUN_00256608(uVar27);
  }
  uVar43 = *puVar40;
  uVar26 = (ulong)uVar43;
  plVar33 = _DAT_00000148;
  lVar28 = _DAT_00000150;
  if ((DAT_043ac7b0 & 1) == 0) {
    iVar24 = __cxa_guard_acquire(&DAT_043ac7b0);
    plVar33 = _DAT_00000148;
    lVar28 = _DAT_00000150;
    if (iVar24 != 0) {
      DAT_043ac5d0 = 0x9caf0c9360076368;
      DAT_043ac5d8 = "pane_L_optionguide_l_00_N_option_00";
      DAT_043ac5f0 = 0x4cfa4f2e2c9ff89b;
      DAT_043ac5f8 = "pane_L_optionguide_l_01_N_option_00";
      DAT_043ac610 = 0xf8bff7cf10d6d712;
      DAT_043ac618 = "pane_L_optionguide_l_02_N_option_00";
      DAT_043ac630 = 0x8b4d90cd72bdf8b5;
      DAT_043ac638 = "pane_L_optionguide_l_03_N_option_00";
      DAT_043ac5e0 = 0x23;
      DAT_043ac5e8 = 0;
      DAT_043ac600 = 0x23;
      DAT_043ac608 = 0;
      DAT_043ac620 = 0x23;
      DAT_043ac628 = 0;
      DAT_043ac650 = 0xb6eebe45dd12afe4;
      DAT_043ac658 = "pane_L_optionguide_l_04_N_option_00";
      DAT_043ac640 = 0x23;
      DAT_043ac648 = 0;
      DAT_043ac670 = 0x65988abe03235386;
      DAT_043ac678 = "pane_L_optionguide_r_00_N_option_00";
      DAT_043ac660 = 0x23;
      DAT_043ac668 = 0;
      DAT_043ac690 = 0x2571c2b98fd07779;
      DAT_043ac698 = "pane_L_optionguide_r_01_N_option_00";
      DAT_043ac680 = 0x23;
      DAT_043ac688 = 0;
      DAT_043ac6b0 = 0xed89f5c6e73b883c;
      DAT_043ac6b8 = "pane_L_optionguide_r_02_N_option_00";
      DAT_043ac6a0 = 0x23;
      DAT_043ac6a8 = 0;
      DAT_043ac6d0 = 0x3267c95092e9f2cf;
      DAT_043ac6d8 = "pane_L_optionguide_r_03_N_option_00";
      DAT_043ac6f0 = 0xbef9fa191f836e6a;
      DAT_043ac6f8 = "pane_L_optionguide_r_04_N_option_00";
      DAT_043ac710 = 0xdd9b036ec1c05973;
      DAT_043ac718 = "pane_L_optionguide_c_00_N_option_00";
      DAT_043ac730 = 0x166ebc20a3572560;
      DAT_043ac738 = "pane_L_optionguide_c_01_N_option_00";
      DAT_043ac750 = 0x8b14cb964ae5cccd;
      DAT_043ac758 = "pane_L_optionguide_c_02_N_option_00";
      DAT_043ac770 = 0x4001fb10dcdeef4a;
      DAT_043ac778 = "pane_L_optionguide_c_03_N_option_00";
      DAT_043ac6c0 = 0x23;
      DAT_043ac6c8 = 0;
      DAT_043ac6e0 = 0x23;
      DAT_043ac6e8 = 0;
      DAT_043ac700 = 0x23;
      DAT_043ac708 = 0;
      DAT_043ac720 = 0x23;
      DAT_043ac728 = 0;
      DAT_043ac740 = 0x23;
      DAT_043ac748 = 0;
      DAT_043ac760 = 0x23;
      DAT_043ac768 = 0;
      DAT_043ac780 = 0x23;
      DAT_043ac788 = 0;
      DAT_043ac790 = 0x84453fcb592cad2f;
      DAT_043ac798 = "pane_L_optionguide_c_04_N_option_00";
      DAT_043ac7a0 = 0x23;
      DAT_043ac7a8 = 0;
      FUN_00100250(0xd6dcc0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ac7b0);
      plVar33 = _DAT_00000148;
      lVar28 = _DAT_00000150;
    }
  }
  _DAT_00000148 = plVar33;
  _DAT_00000150 = lVar28;
  if (uVar43 < 0xf) {
    plVar37 = *(long **)(param_1 + 0x2c8);
    if (plVar37 == (long *)0x0) {
      lVar38 = (&DAT_043ac5d0)[uVar26 * 4];
      plVar37 = (long *)(&DAT_043ac5e8)[uVar26 * 4];
      if (plVar37 != (long *)0x0) {
        (**(code **)(*plVar37 + 0x18))(plVar37);
      }
      plVar35 = plVar33;
      if ((lVar28 != 0) && (*plVar33 != lVar38)) {
        lVar39 = lVar28 * 0x30;
        plVar34 = plVar33 + lVar28 * 6;
        do {
          lVar39 = lVar39 + -0x30;
          plVar35 = plVar34;
          if (lVar39 == 0) break;
          plVar29 = plVar33 + 6;
          plVar33 = plVar33 + 6;
          plVar35 = plVar33;
        } while (*plVar29 != lVar38);
      }
      if (plVar37 != (long *)0x0) {
        (**(code **)(*plVar37 + 0x20))(plVar37);
      }
      lVar28 = plVar35[4];
      *(float *)(lVar28 + 0x30) = fVar42;
      *(float *)(lVar28 + 0x34) = fVar41;
      *(undefined4 *)(lVar28 + 0x38) = 0;
      *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 0x10;
    }
    else {
      plVar33 = plVar37 + 10;
      do {
        cVar21 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar23) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      plVar35 = (long *)plVar37[0x29];
      lVar28 = plVar37[0x2a];
      lVar38 = (&DAT_043ac5d0)[uVar26 * 4];
      plVar34 = (long *)(&DAT_043ac5e8)[uVar26 * 4];
      if (plVar34 != (long *)0x0) {
        (**(code **)(*plVar34 + 0x18))(plVar34);
      }
      plVar29 = plVar35;
      if ((lVar28 != 0) && (*plVar35 != lVar38)) {
        lVar39 = lVar28 * 0x30;
        plVar30 = plVar35 + lVar28 * 6;
        do {
          lVar39 = lVar39 + -0x30;
          plVar29 = plVar30;
          if (lVar39 == 0) break;
          plVar1 = plVar35 + 6;
          plVar35 = plVar35 + 6;
          plVar29 = plVar35;
        } while (*plVar1 != lVar38);
      }
      if (plVar34 != (long *)0x0) {
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
      lVar28 = plVar29[4];
      *(float *)(lVar28 + 0x30) = fVar42;
      *(float *)(lVar28 + 0x34) = fVar41;
      *(undefined4 *)(lVar28 + 0x38) = 0;
      *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 0x10;
      do {
        iVar24 = (int)*plVar33 + -1;
        cVar21 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar23) {
          *(int *)plVar33 = iVar24;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*plVar37 + 0x10))(plVar37);
      }
    }
  }
  lVar25 = param_1 + lVar25 * 0xc;
  FUN_00d6bb6c(param_1,*(undefined4 *)(lVar25 + 0x5b0),*(undefined1 *)(lVar25 + 0x5b4));
  return;
}


