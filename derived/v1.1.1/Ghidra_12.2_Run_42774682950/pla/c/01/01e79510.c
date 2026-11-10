/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e79510; name: FUN_01e79510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e79510(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  ulong uVar24;
  byte *pbVar25;
  long *plVar26;
  long *plVar27;
  byte *pbVar28;
  long *plVar29;
  ulong uVar30;
  int *piVar31;
  undefined1 *puVar32;
  long *plVar33;
  undefined1 *puVar34;
  char *pcVar35;
  long *unaff_x23;
  undefined1 *puVar36;
  uint *puVar37;
  long *plVar38;
  ushort *puVar39;
  undefined8 *puVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  uint uVar44;
  undefined4 local_404;
  undefined1 *local_400;
  undefined4 local_3f4;
  long *local_3f0;
  char *pcStack_3e8;
  size_t local_3e0;
  long *local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  long *local_3c0;
  long *local_3b8;
  long *local_3b0;
  char *local_3a8;
  undefined1 *puStack_3a0;
  long *local_398;
  long *local_390;
  undefined4 local_388;
  long *local_380;
  char *local_378;
  undefined1 *local_370;
  long *local_368;
  long *local_360;
  undefined4 local_358;
  long *local_350;
  char *local_348;
  undefined1 *local_340;
  long *local_338;
  long *local_330;
  undefined4 local_328;
  long *local_320;
  undefined2 local_318;
  undefined8 local_310;
  ulong uStack_308;
  undefined4 local_300;
  undefined8 local_2f0;
  ulong uStack_2e8;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined2 local_2d0;
  uint local_2cc;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  char *local_2b8;
  size_t local_2b0;
  long *local_2a8;
  undefined8 local_2a0;
  undefined1 *local_298 [6];
  undefined1 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  char *local_108;
  undefined1 *local_100;
  long *local_f8;
  long *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long *local_c0;
  char *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  long *local_a0;
  undefined4 local_98;
  undefined2 local_90;
  undefined1 *local_88;
  long local_68;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar22 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar22;
  plVar33 = *(long **)(lVar22 + 0x78);
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar8 = _UNK_03888d48;
  uVar16 = _DAT_03888d40;
  puVar23 = *(uint **)(*(long *)(plVar33[0xe] + 0x50) + 0x250);
  piVar1 = (int *)((long)puVar23 + (ulong)*puVar23);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar23 = puVar2 + 1;
  uVar24 = (ulong)*puVar2;
  if (uVar24 != 0) {
    puVar2 = puVar23 + uVar24;
    pbVar28 = PTR_DAT_04379cd0;
    puVar40 = (undefined8 *)PTR_DAT_04379cd8;
    do {
      puVar9 = PTR_DAT_04379ce0;
      local_3b8 = (long *)0x0;
      local_3b0 = (long *)0x0;
      piVar1 = (int *)((long)puVar23 + (ulong)*puVar23);
      local_3c0 = (long *)0x0;
      local_3a8 = &DAT_cbf29ce484222645;
      puStack_3a0 = &DAT_03996322;
      local_398 = (long *)0x0;
      local_390 = (long *)0x0;
      local_388 = 0;
      local_380 = (long *)0x0;
      local_378 = &DAT_cbf29ce484222645;
      local_370 = &DAT_03996322;
      local_358 = 0;
      local_368 = (long *)0x0;
      local_360 = (long *)0x0;
      local_340 = &DAT_03996322;
      local_350 = (long *)0x0;
      local_348 = &DAT_cbf29ce484222645;
      local_328 = 0;
      local_338 = (long *)0x0;
      local_330 = (long *)0x0;
      local_320 = (long *)0x0;
      local_318 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = 0;
      local_2d0 = 0;
      local_2c8 = &DAT_cbf29ce484222645;
      local_2b8 = "";
      local_2c0 = &DAT_cbf29ce484222645;
      uStack_2d8 = uVar8;
      local_2e0 = uVar16;
      local_2b0 = 0;
      local_2a8 = (long *)0x0;
      local_298[0] = &DAT_cbf29ce484222645;
      local_2a0 = 0x1800000018;
      local_298[2] = &DAT_03996322;
      local_298[1] = &DAT_cbf29ce484222645;
      local_298[3] = (undefined1 *)0x0;
      local_298[4] = (undefined1 *)0x0;
      local_268 = &DAT_03996322;
      local_298[5] = &DAT_cbf29ce484222645;
      local_260 = 0;
      local_258 = 0;
      local_248 = &DAT_cbf29ce484222645;
      local_250 = 0x1800000018;
      local_238 = &DAT_03996322;
      local_240 = &DAT_cbf29ce484222645;
      local_230 = 0;
      uStack_228 = 0;
      local_218 = &DAT_03996322;
      local_220 = &DAT_cbf29ce484222645;
      local_210 = 0;
      uStack_208 = 0;
      local_1f8 = &DAT_cbf29ce484222645;
      local_200 = 0x1800000018;
      local_1e8 = &DAT_03996322;
      local_1f0 = &DAT_cbf29ce484222645;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1c8 = &DAT_03996322;
      local_1d0 = &DAT_cbf29ce484222645;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1b0 = 0x1800000018;
      local_1a8 = &DAT_cbf29ce484222645;
      local_1a0 = &DAT_cbf29ce484222645;
      local_198 = &DAT_03996322;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = &DAT_cbf29ce484222645;
      local_178 = &DAT_03996322;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0x1800000018;
      local_158 = &DAT_cbf29ce484222645;
      local_150 = &DAT_cbf29ce484222645;
      local_148 = &DAT_03996322;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = &DAT_cbf29ce484222645;
      local_128 = &DAT_03996322;
      local_120 = 0;
      local_118 = 0;
      local_110 = (long *)0x0;
      local_108 = &DAT_cbf29ce484222645;
      local_100 = &DAT_03996322;
      local_e8 = 0;
      local_f8 = (long *)0x0;
      local_f0 = (long *)0x0;
      local_e0 = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      local_c0 = (long *)0x0;
      local_d8 = (long *)0x0;
      local_d0 = 0;
      local_cc = 0;
      local_b8 = &DAT_cbf29ce484222645;
      local_b0 = &DAT_03996322;
      local_98 = 0;
      local_a8 = (long *)0x0;
      local_a0 = (long *)0x0;
      local_90 = 1;
      local_88 = &DAT_cbf29ce484222645;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar24 == 0)) {
        pcVar35 = &DAT_00000004;
        if (DAT_00000004 != 0) goto LAB_01e798f0;
LAB_01e7aa54:
        plVar20 = (long *)FUN_00938550();
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
      }
      else {
        puVar37 = (uint *)((long)piVar1 + uVar24);
        pcVar35 = (char *)((long)puVar37 + (ulong)*puVar37 + 4);
        if (*pcVar35 == '\0') goto LAB_01e7aa54;
LAB_01e798f0:
        if (((*pbVar28 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar28), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar28);
        }
        uVar17 = *puVar40;
        *(undefined8 *)puVar9 = uVar17;
        FUN_02a47cd8(&local_3f0,uVar17,pcVar35);
        plVar20 = local_3f0;
      }
      plVar27 = local_3c0;
      local_3c0 = (long *)0x0;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))();
      }
      local_3c0 = plVar20;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar24 == 0)) {
        pcVar35 = &DAT_00000004;
        if (DAT_00000004 != 0) goto LAB_01e7995c;
LAB_01e7aa70:
        plVar20 = (long *)FUN_00938550();
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
      }
      else {
        puVar37 = (uint *)((long)piVar1 + uVar24);
        pcVar35 = (char *)((long)puVar37 + (ulong)*puVar37 + 4);
        if (*pcVar35 == '\0') goto LAB_01e7aa70;
LAB_01e7995c:
        if (((*pbVar28 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar28), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar28);
        }
        uVar17 = *puVar40;
        *(undefined8 *)puVar9 = uVar17;
        FUN_02a47cd8(&local_3f0,uVar17,pcVar35);
        plVar20 = local_3f0;
      }
      plVar27 = local_3b8;
      local_3b8 = (long *)0x0;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))();
      }
      if (plVar20 == (long *)0x0) {
        plVar27 = (long *)PTR_DAT_04379c88;
        if (local_3c0 != (long *)0x0) goto LAB_01e799a8;
LAB_01e7adc8:
        plVar38 = (long *)PTR_DAT_04379c88;
      }
      else {
        plVar27 = plVar20 + 0xb;
        if (local_3c0 == (long *)0x0) goto LAB_01e7adc8;
LAB_01e799a8:
        plVar38 = local_3c0 + 0xb;
      }
      local_90 = CONCAT11(local_90._1_1_,*plVar27 == *plVar38);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2b) {
        local_68 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15];
        local_68 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          local_68 = (long)puVar37 + (ulong)*puVar37;
        }
      }
      local_68 = local_68 + 4;
      local_3b8 = plVar20;
      FUN_009f1b84(&local_3f0,&local_68);
      plVar20 = local_3b0;
      local_3b0 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      plVar20 = local_390;
      uVar17 = local_3d0;
      local_3b0 = local_3f0;
      local_3f0 = (long *)0x0;
      local_3a8 = pcStack_3e8;
      puStack_3a0 = (undefined1 *)local_3e0;
      local_398 = local_3d8;
      local_390 = (long *)0x0;
      if (plVar20 == (long *)0x0) {
        local_3d0 = 0;
        local_390 = (long *)uVar17;
        local_388 = local_3c8;
      }
      else {
        (**(code **)(*plVar20 + 0x20))();
        local_390 = (long *)local_3d0;
        local_3d0 = 0;
        local_388 = local_3c8;
        if (local_3f0 != (long *)0x0) {
          (**(code **)(*local_3f0 + 0x20))();
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2d) {
        local_68 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x16];
        local_68 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          local_68 = (long)puVar37 + (ulong)*puVar37;
        }
      }
      local_68 = local_68 + 4;
      FUN_009f1b84(&local_3f0,&local_68);
      plVar20 = local_380;
      local_380 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      plVar20 = local_360;
      uVar17 = local_3d0;
      local_380 = local_3f0;
      local_3f0 = (long *)0x0;
      local_378 = pcStack_3e8;
      local_370 = (undefined1 *)local_3e0;
      local_368 = local_3d8;
      local_360 = (long *)0x0;
      if (plVar20 == (long *)0x0) {
        local_3d0 = 0;
        local_360 = (long *)uVar17;
        local_358 = local_3c8;
      }
      else {
        (**(code **)(*plVar20 + 0x20))();
        local_360 = (long *)local_3d0;
        local_3d0 = 0;
        local_358 = local_3c8;
        if (local_3f0 != (long *)0x0) {
          (**(code **)(*local_3f0 + 0x20))();
        }
      }
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
         (uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar24 == 0)) {
        pcVar35 = &DAT_00000004;
        if (DAT_00000004 != 0) goto LAB_01e79b40;
LAB_01e7aa8c:
        plVar20 = (long *)FUN_00938550();
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
      }
      else {
        puVar37 = (uint *)((long)piVar1 + uVar24);
        pcVar35 = (char *)((long)puVar37 + (ulong)*puVar37 + 4);
        if (*pcVar35 == '\0') goto LAB_01e7aa8c;
LAB_01e79b40:
        if (((*pbVar28 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar28), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar28);
        }
        uVar17 = *puVar40;
        *(undefined8 *)puVar9 = uVar17;
        FUN_02a47cd8(&local_3f0,uVar17,pcVar35);
        plVar20 = local_3f0;
      }
      plVar27 = local_320;
      local_320 = (long *)0x0;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))();
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x31) {
        bVar10 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x18];
        bVar10 = false;
        if (uVar24 != 0) {
          bVar10 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x33) {
        bVar11 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x19];
        bVar11 = false;
        if (uVar24 != 0) {
          bVar11 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      local_318 = CONCAT11(bVar11,bVar10);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x39) {
        local_68 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x1c];
        local_68 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          local_68 = (long)puVar37 + (ulong)*puVar37;
        }
      }
      local_68 = local_68 + 4;
      local_320 = plVar20;
      FUN_009f1b84(&local_3f0,&local_68);
      plVar20 = local_350;
      local_350 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      plVar20 = local_330;
      uVar17 = local_3d0;
      local_350 = local_3f0;
      local_3f0 = (long *)0x0;
      local_348 = pcStack_3e8;
      local_340 = (undefined1 *)local_3e0;
      local_338 = local_3d8;
      local_330 = (long *)0x0;
      if (plVar20 == (long *)0x0) {
        local_3d0 = 0;
        local_330 = (long *)uVar17;
        local_328 = local_3c8;
      }
      else {
        (**(code **)(*plVar20 + 0x20))();
        local_330 = (long *)local_3d0;
        local_3d0 = 0;
        local_328 = local_3c8;
        if (local_3f0 != (long *)0x0) {
          (**(code **)(*local_3f0 + 0x20))();
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x45) {
        lVar22 = 0;
        bVar5 = DAT_00000004;
        if (DAT_00000004 != 0) goto LAB_01e79cb4;
LAB_01e7aaf0:
        local_2cc = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x22];
        lVar22 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          lVar22 = (long)puVar37 + (ulong)*puVar37;
        }
        bVar5 = *(byte *)(lVar22 + 4);
        if (*(byte *)(lVar22 + 4) == 0) goto LAB_01e7aaf0;
LAB_01e79cb4:
        puVar32 = &DAT_cbf29ce484222645;
        pbVar25 = (byte *)(lVar22 + 5);
        do {
          puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar5 != 0);
        local_2cc = 2;
        if (puVar32 != (undefined1 *)0x3376077d2e189b59) {
          local_2cc = (uint)(puVar32 == (undefined1 *)0x3376047d2e189640);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x4f) {
        local_68 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x27];
        local_68 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          local_68 = (long)puVar37 + (ulong)*puVar37;
        }
      }
      local_68 = local_68 + 4;
      FUN_009f1b84(&local_3f0,&local_68);
      plVar20 = local_110;
      local_110 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      plVar20 = local_f0;
      uVar17 = local_3d0;
      local_110 = local_3f0;
      local_3f0 = (long *)0x0;
      local_108 = pcStack_3e8;
      local_100 = (undefined1 *)local_3e0;
      local_f8 = local_3d8;
      local_f0 = (long *)0x0;
      if (plVar20 == (long *)0x0) {
        local_3d0 = 0;
        local_f0 = (long *)uVar17;
        local_e8 = local_3c8;
      }
      else {
        (**(code **)(*plVar20 + 0x20))();
        local_f0 = (long *)local_3d0;
        local_3d0 = 0;
        local_e8 = local_3c8;
        if (local_3f0 != (long *)0x0) {
          (**(code **)(*local_3f0 + 0x20))();
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x5d) {
        local_e0 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2e];
        local_e0 = 0;
        if (uVar24 != 0) {
          local_e0 = *(undefined8 *)((long)piVar1 + uVar24);
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x6b) {
        local_68 = 0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x35];
        local_68 = 0;
        if (uVar24 != 0) {
          puVar37 = (uint *)((long)piVar1 + uVar24);
          local_68 = (long)puVar37 + (ulong)*puVar37;
        }
      }
      local_68 = local_68 + 4;
      FUN_009f1b84(&local_3f0,&local_68);
      plVar20 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      plVar20 = local_a0;
      uVar17 = local_3d0;
      local_c0 = local_3f0;
      local_3f0 = (long *)0x0;
      local_b8 = pcStack_3e8;
      local_b0 = (undefined1 *)local_3e0;
      local_a8 = local_3d8;
      local_a0 = (long *)0x0;
      if (plVar20 == (long *)0x0) {
        local_3d0 = 0;
        local_a0 = (long *)uVar17;
        local_98 = local_3c8;
      }
      else {
        (**(code **)(*plVar20 + 0x20))();
        local_a0 = (long *)local_3d0;
        local_3d0 = 0;
        local_98 = local_3c8;
        if (local_3f0 != (long *)0x0) {
          (**(code **)(*local_3f0 + 0x20))();
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x73) {
        bVar10 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x39];
        bVar10 = false;
        if (uVar24 != 0) {
          bVar10 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      local_90 = CONCAT11(bVar10,(undefined1)local_90);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x71) {
        local_88 = (undefined1 *)0x0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x38];
        local_88 = (undefined1 *)0x0;
        if (uVar24 != 0) {
          local_88 = *(undefined1 **)((long)piVar1 + uVar24);
        }
      }
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x47) ||
         (uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x23], uVar24 == 0)) {
        piVar31 = (int *)0x0;
      }
      else {
        puVar37 = (uint *)((long)piVar1 + uVar24);
        piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
      }
      if (*(ushort *)((long)piVar31 - (long)*piVar31) < 5) {
        local_2c8 = (undefined1 *)0x0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[2];
        local_2c8 = (undefined1 *)0x0;
        if (uVar24 != 0) {
          local_2c8 = *(undefined1 **)((long)piVar31 + uVar24);
        }
      }
      if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 7) ||
         (uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[3], uVar24 == 0)) {
        lVar22 = 0;
      }
      else {
        puVar37 = (uint *)((long)piVar31 + uVar24);
        lVar22 = (long)puVar37 + (ulong)*puVar37;
      }
      pcVar35 = (char *)(lVar22 + 4);
      local_2b0 = strlen(pcVar35);
      plVar20 = local_2a8;
      bVar5 = *(byte *)(lVar22 + 4);
      local_2c0 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_2c0 = &DAT_cbf29ce484222645;
        pbVar25 = (byte *)(lVar22 + 5);
        do {
          local_2c0 = (undefined1 *)(((ulong)local_2c0 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar5 != 0);
      }
      local_2a8 = (long *)0x0;
      local_2b8 = pcVar35;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))();
      }
      local_2a8 = (long *)0x0;
      puVar3 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (8 - (long)*piVar31)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar37 = puVar3 + 1;
      uVar24 = (ulong)*puVar3;
      if (uVar24 != 0) {
        puVar3 = puVar37 + uVar24;
        unaff_x23 = (long *)0x0;
        do {
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
          puVar39 = (ushort *)((long)piVar31 - (long)*piVar31);
          uVar6 = *puVar39;
          if (uVar6 < 5) {
            local_3f4 = 0;
LAB_01e7aa3c:
            local_400 = (undefined1 *)0x0;
            local_404 = 0;
            puVar32 = (undefined1 *)0x0;
          }
          else {
            if ((ulong)puVar39[2] == 0) {
              local_3f4 = 0;
            }
            else {
              local_3f4 = *(undefined4 *)((long)piVar31 + (ulong)puVar39[2]);
            }
            if (uVar6 < 7) goto LAB_01e7aa3c;
            if ((ulong)puVar39[3] == 0) {
              local_404 = 0;
              if (uVar6 < 0xd) goto LAB_01e7adec;
LAB_01e7a054:
              if ((ulong)puVar39[6] == 0) {
                local_400 = (undefined1 *)0x0;
              }
              else {
                local_400 = *(undefined1 **)((long)piVar31 + (ulong)puVar39[6]);
              }
LAB_01e7a060:
              if ((ulong)puVar39[4] == 0) {
                puVar32 = (undefined1 *)0x0;
              }
              else {
                puVar4 = (uint *)((long)piVar31 + (ulong)puVar39[4]);
                puVar32 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            else {
              local_404 = *(undefined4 *)((long)piVar31 + (ulong)puVar39[3]);
              if (0xc < uVar6) goto LAB_01e7a054;
LAB_01e7adec:
              puVar32 = (undefined1 *)0x0;
              local_400 = puVar32;
              if (8 < uVar6) goto LAB_01e7a060;
              local_400 = (undefined1 *)0x0;
            }
          }
          puVar18 = (undefined1 *)strlen(puVar32 + 4);
          bVar5 = puVar32[4];
          puVar34 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            puVar34 = &DAT_cbf29ce484222645;
            pbVar28 = puVar32 + 5;
            do {
              puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar5 != 0);
          }
          if ((uVar6 < 0xb) || ((ulong)puVar39[5] == 0)) {
            lVar22 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar31 + (ulong)puVar39[5]);
            lVar22 = (long)puVar4 + (ulong)*puVar4;
          }
          puVar19 = (undefined1 *)strlen((char *)(lVar22 + 4));
          bVar5 = *(byte *)(lVar22 + 4);
          puVar36 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            puVar36 = &DAT_cbf29ce484222645;
            pbVar28 = (byte *)(lVar22 + 5);
            do {
              puVar36 = (undefined1 *)(((ulong)puVar36 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar5 != 0);
          }
          *(undefined4 *)(local_298 + (long)unaff_x23 * 10 + -1) = local_3f4;
          local_298[(long)unaff_x23 * 10 + 2] = puVar32 + 4;
          local_298[(long)unaff_x23 * 10 + 3] = puVar18;
          *(undefined4 *)((long)local_298 + (long)unaff_x23 * 0x50 + -4) = local_404;
          plVar20 = (long *)local_298[(long)unaff_x23 * 10 + 4];
          local_298[(long)unaff_x23 * 10 + 4] = (undefined1 *)0x0;
          local_298[(long)unaff_x23 * 10] = local_400;
          local_298[(long)unaff_x23 * 10 + 1] = puVar34;
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))();
          }
          plVar20 = (long *)local_298[(long)unaff_x23 * 10 + 8];
          local_298[(long)unaff_x23 * 10 + 5] = puVar36;
          local_298[(long)unaff_x23 * 10 + 6] = (char *)(lVar22 + 4);
          local_298[(long)unaff_x23 * 10 + 7] = puVar19;
          local_298[(long)unaff_x23 * 10 + 8] = (undefined1 *)0x0;
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))();
          }
          pbVar28 = PTR_DAT_04379cd0;
          puVar40 = (undefined8 *)PTR_DAT_04379cd8;
          if (unaff_x23 == (long *)&DAT_00000004) break;
          puVar37 = puVar37 + 1;
          unaff_x23 = (long *)((long)unaff_x23 + 1);
        } while (puVar37 != puVar3);
      }
      puVar9 = PTR_DAT_04379ce0;
      puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar6 = *puVar39;
      if (uVar6 < 9) {
        piVar31 = (int *)0x0;
      }
      else {
        piVar31 = (int *)0x0;
        if ((ulong)puVar39[4] != 0) {
          puVar37 = (uint *)((long)piVar1 + (ulong)puVar39[4]);
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
        }
      }
      uVar41 = 0;
      if (4 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[2];
        uVar41 = 0;
        if (uVar24 != 0) {
          uVar41 = *(undefined4 *)((long)piVar31 + uVar24);
        }
      }
      if (uVar6 < 9) {
        piVar31 = (int *)0x0;
      }
      else {
        piVar31 = (int *)0x0;
        if ((ulong)puVar39[4] != 0) {
          puVar37 = (uint *)((long)piVar1 + (ulong)puVar39[4]);
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
        }
      }
      uVar43 = 0;
      if (6 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[3];
        uVar43 = 0;
        if (uVar24 != 0) {
          uVar43 = *(undefined4 *)((long)piVar31 + uVar24);
        }
      }
      if (uVar6 < 9) {
        piVar31 = (int *)0x0;
      }
      else {
        piVar31 = (int *)0x0;
        if ((ulong)puVar39[4] != 0) {
          puVar37 = (uint *)((long)piVar1 + (ulong)puVar39[4]);
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
        }
      }
      uVar44 = 0;
      if (8 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[4];
        uVar44 = 0;
        if (uVar24 != 0) {
          uVar44 = *(uint *)((long)piVar31 + uVar24);
        }
      }
      local_310 = CONCAT44(uVar43,uVar41);
      uStack_308 = (ulong)uVar44;
      puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar39 < 0x6d) {
        piVar31 = (int *)0x0;
      }
      else {
        piVar31 = (int *)0x0;
        if ((ulong)puVar39[0x36] != 0) {
          puVar37 = (uint *)((long)piVar1 + (ulong)puVar39[0x36]);
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
        }
      }
      uVar41 = 0;
      if (4 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[2];
        uVar41 = 0;
        if (uVar24 != 0) {
          uVar41 = *(undefined4 *)((long)piVar31 + uVar24);
        }
      }
      if (*puVar39 < 0x6d) {
        piVar31 = (int *)0x0;
      }
      else {
        piVar31 = (int *)0x0;
        if ((ulong)puVar39[0x36] != 0) {
          puVar37 = (uint *)((long)piVar1 + (ulong)puVar39[0x36]);
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
        }
      }
      uVar43 = 0;
      if (6 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[3];
        uVar43 = 0;
        if (uVar24 != 0) {
          uVar43 = *(undefined4 *)((long)piVar31 + uVar24);
        }
      }
      piVar31 = (int *)((long)((long)piVar1 + (ulong)puVar39[0x36]) +
                       (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[0x36]));
      uStack_2e8 = 0;
      if (8 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
        uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[4];
        uStack_2e8 = 0;
        if (uVar24 != 0) {
          uStack_2e8 = (ulong)*(uint *)((long)piVar31 + uVar24);
        }
      }
      piVar31 = (int *)((long)((long)piVar1 + (ulong)puVar39[0x37]) +
                       (ulong)*(uint *)((long)piVar1 + (ulong)puVar39[0x37]));
      puVar39 = (ushort *)((long)piVar31 - (long)*piVar31);
      local_2f0 = CONCAT44(uVar43,uVar41);
      uVar43 = 0;
      uVar6 = *puVar39;
      uVar41 = 0;
      uStack_2d8 = 0;
      if (4 < uVar6) {
        uVar41 = 0;
        if ((ulong)puVar39[2] != 0) {
          uVar41 = *(undefined4 *)((long)piVar31 + (ulong)puVar39[2]);
        }
        if (uVar6 < 7) {
          uVar43 = 0;
        }
        else {
          uVar43 = 0;
          if ((ulong)puVar39[3] != 0) {
            uVar43 = *(undefined4 *)((long)piVar31 + (ulong)puVar39[3]);
          }
          if ((8 < uVar6) && ((ulong)puVar39[4] != 0)) {
            uStack_2d8 = (ulong)*(uint *)((long)piVar31 + (ulong)puVar39[4]);
            goto LAB_01e7a434;
          }
        }
        uStack_2d8 = 0;
      }
LAB_01e7a434:
      local_2e0 = CONCAT44(uVar43,uVar41);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) {
        bVar10 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
        bVar10 = false;
        if (uVar24 != 0) {
          bVar10 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
        bVar11 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
        bVar11 = false;
        if (uVar24 != 0) {
          bVar11 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) {
        bVar12 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
        bVar12 = false;
        if (uVar24 != 0) {
          bVar12 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
        bVar13 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
        bVar13 = false;
        if (uVar24 != 0) {
          bVar13 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) {
        bVar14 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10];
        bVar14 = false;
        if (uVar24 != 0) {
          bVar14 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      local_2d0 = CONCAT11(bVar14,bVar13);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
        bVar13 = false;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
        bVar13 = false;
        if (uVar24 != 0) {
          bVar13 = *(char *)((long)piVar1 + uVar24) != '\0';
        }
      }
      local_300 = CONCAT22(CONCAT11(bVar12,bVar11),CONCAT11(bVar13,bVar10));
      puVar37 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x66 - (long)*piVar1)));
      pcVar35 = (char *)((long)puVar37 + (ulong)*puVar37 + 4);
      if (*pcVar35 == '\0') {
        plVar20 = (long *)FUN_00938550();
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
      }
      else {
        if (((*pbVar28 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar28), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar40,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar28);
        }
        uVar17 = *puVar40;
        *(undefined8 *)puVar9 = uVar17;
        FUN_02a47cd8(&local_3f0,uVar17,pcVar35);
        plVar20 = local_3f0;
      }
      plVar27 = local_d8;
      local_d8 = (long *)0x0;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))();
      }
      puVar39 = (ushort *)((long)piVar1 - (long)*piVar1);
      lVar22 = -(long)*piVar1;
      uVar6 = *puVar39;
      if (uVar6 < 0x69) {
LAB_01e7a6c4:
        if (4 < uVar6) goto LAB_01e7a6cc;
LAB_01e7aaac:
        lVar22 = 0;
      }
      else {
        uVar24 = (ulong)puVar39[0x34];
        if ((uVar24 != 0) &&
           (puVar37 = (uint *)((long)piVar1 + uVar24),
           piVar31 = (int *)((long)puVar37 + (ulong)*puVar37), piVar31 != (int *)0x0)) {
          if (*(ushort *)((long)piVar31 - (long)*piVar31) < 5) {
            local_d0 = 0;
          }
          else {
            uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[2];
            local_d0 = 0;
            if (uVar24 != 0) {
              local_d0 = *(undefined4 *)((long)piVar31 + uVar24);
            }
          }
          puVar37 = (uint *)((long)piVar1 +
                            (ulong)*(ushort *)((long)piVar1 + (0x68 - (long)*piVar1)));
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
          if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 7) ||
             (uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[3], uVar24 == 0)) {
            local_cc = 0;
          }
          else {
            local_cc = *(undefined4 *)((long)piVar31 + uVar24);
          }
          puVar37 = (uint *)((long)piVar1 +
                            (ulong)*(ushort *)((long)piVar1 + (0x68 - (long)*piVar1)));
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
          if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 9) ||
             (uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[4], uVar24 == 0)) {
            local_c8 = 0;
          }
          else {
            local_c8 = *(undefined4 *)((long)piVar31 + uVar24);
          }
          puVar37 = (uint *)((long)piVar1 +
                            (ulong)*(ushort *)((long)piVar1 + (0x68 - (long)*piVar1)));
          piVar31 = (int *)((long)puVar37 + (ulong)*puVar37);
          if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 0xb) ||
             (uVar24 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[5], uVar24 == 0)) {
            uStack_c4 = 0;
          }
          else {
            uStack_c4 = *(undefined4 *)((long)piVar31 + uVar24);
          }
          lVar22 = -(long)*piVar1;
          uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
          goto LAB_01e7a6c4;
        }
LAB_01e7a6cc:
        uVar24 = (ulong)*(ushort *)((long)piVar1 + lVar22 + 4);
        if (uVar24 == 0) goto LAB_01e7aaac;
        puVar37 = (uint *)((long)piVar1 + uVar24);
        lVar22 = (long)puVar37 + (ulong)*puVar37;
      }
      local_d8 = plVar20;
      local_3e0 = strlen((char *)(lVar22 + 4));
      bVar5 = *(byte *)(lVar22 + 4);
      local_3f0 = (long *)&DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        local_3f0 = (long *)&DAT_cbf29ce484222645;
        pbVar25 = (byte *)(lVar22 + 5);
        do {
          local_3f0 = (long *)(((ulong)local_3f0 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar5 != 0);
      }
      local_3d8 = (long *)0x0;
      pcStack_3e8 = (char *)(lVar22 + 4);
      FUN_01e7d710(plVar33[0xe] + 0x278,&local_3f0);
      plVar27 = local_3f0;
      lVar22 = plVar33[0xe];
      plVar20 = (long *)(lVar22 + 0xd8);
      plVar38 = *(long **)(lVar22 + 0xe0);
      if (plVar38 == (long *)0x0) {
LAB_01e7a7c0:
        plVar26 = (long *)(**(code **)(**(long **)(lVar22 + 0x110) + 0x10))
                                    (*(long **)(lVar22 + 0x110),0x360,0x10);
        if (plVar26 == (long *)0x0) {
          (**(code **)(**(long **)(lVar22 + 0x110) + 0xb8))();
        }
        uVar17 = *(undefined8 *)(lVar22 + 0x110);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar9 = PTR_DAT_04379528;
          if (iVar15 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar21 == 0) {
          plVar26[2] = (long)local_3f0;
          FUN_01e7daac(plVar26 + 4,&local_3c0);
        }
        else {
          if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar17;
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
          plVar26[2] = (long)local_3f0;
          FUN_01e7daac(plVar26 + 4,&local_3c0);
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
        }
        *plVar26 = 0;
        plVar26[1] = (long)plVar27;
        fVar42 = (float)(*(long *)(lVar22 + 0x130) + 1);
        if ((plVar38 == (long *)0x0) || (*(float *)(lVar22 + 0x138) * (float)plVar38 < fVar42)) {
          uVar24 = (ulong)(plVar38 < (long *)0x3 ||
                          ((ulong)plVar38 & (ulong)((long)plVar38 + -1)) != 0) | (long)plVar38 << 1;
          uVar30 = (ulong)(fVar42 / *(float *)(lVar22 + 0x138));
          if (uVar30 <= uVar24) {
            uVar30 = uVar24;
          }
          FUN_01e7d9a8(plVar20,uVar30);
          plVar38 = *(long **)(lVar22 + 0xe0);
          if (((ulong)plVar38 & (ulong)((long)plVar38 + -1)) == 0) {
            unaff_x23 = (long *)((ulong)((long)plVar38 + -1) & (ulong)plVar27);
          }
          else if (plVar27 < plVar38) {
            unaff_x23 = plVar27;
          }
          else {
            uVar24 = 0;
            if (plVar38 != (long *)0x0) {
              uVar24 = (ulong)plVar27 / (ulong)plVar38;
            }
            unaff_x23 = (long *)((long)plVar27 - uVar24 * (long)plVar38);
          }
        }
        plVar27 = *(long **)(*plVar20 + (long)unaff_x23 * 8);
        if (plVar27 == (long *)0x0) {
          *plVar26 = *(long *)(lVar22 + 0x108);
          *(long **)(lVar22 + 0x108) = plVar26;
          *(long *)(*(long *)(lVar22 + 0xd8) + (long)unaff_x23 * 8) = lVar22 + 0x108;
          if (*plVar26 != 0) {
            plVar27 = *(long **)(*plVar26 + 8);
            if (((ulong)plVar38 & (ulong)((long)plVar38 + -1)) == 0) {
              plVar27 = (long *)((ulong)plVar27 & (ulong)((long)plVar38 + -1));
            }
            else if (plVar38 <= plVar27) {
              uVar24 = 0;
              if (plVar38 != (long *)0x0) {
                uVar24 = (ulong)plVar27 / (ulong)plVar38;
              }
              plVar27 = (long *)((long)plVar27 - uVar24 * (long)plVar38);
            }
            plVar27 = (long *)(*plVar20 + (long)plVar27 * 8);
            goto LAB_01e7a8c4;
          }
        }
        else {
          *plVar26 = *plVar27;
LAB_01e7a8c4:
          *plVar27 = (long)plVar26;
        }
        *(long *)(lVar22 + 0x130) = *(long *)(lVar22 + 0x130) + 1;
      }
      else {
        uVar24 = (long)plVar38 - ((ulong)plVar38 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar24 < 2) {
          unaff_x23 = (long *)((ulong)((long)plVar38 + -1) & (ulong)local_3f0);
        }
        else {
          unaff_x23 = local_3f0;
          if (plVar38 <= local_3f0) {
            uVar30 = 0;
            if (plVar38 != (long *)0x0) {
              uVar30 = (ulong)local_3f0 / (ulong)plVar38;
            }
            unaff_x23 = (long *)((long)local_3f0 - uVar30 * (long)plVar38);
          }
        }
        plVar26 = *(long **)(*plVar20 + (long)unaff_x23 * 8);
        if (plVar26 == (long *)0x0) goto LAB_01e7a7c0;
        if (uVar24 < 2) {
          do {
            plVar26 = (long *)*plVar26;
            if ((plVar26 == (long *)0x0) ||
               ((long *)plVar26[1] != local_3f0 &&
                (long *)((ulong)plVar26[1] & (ulong)((long)plVar38 + -1)) != unaff_x23))
            goto LAB_01e7a7c0;
          } while ((long *)plVar26[2] != local_3f0);
        }
        else {
          do {
            plVar26 = (long *)*plVar26;
            if (plVar26 == (long *)0x0) goto LAB_01e7a7c0;
            plVar29 = (long *)plVar26[1];
            if (plVar29 != local_3f0) {
              if (plVar38 <= plVar29) {
                uVar24 = 0;
                if (plVar38 != (long *)0x0) {
                  uVar24 = (ulong)plVar29 / (ulong)plVar38;
                }
                plVar29 = (long *)((long)plVar29 - uVar24 * (long)plVar38);
              }
              if (plVar29 != unaff_x23) goto LAB_01e7a7c0;
            }
          } while ((long *)plVar26[2] != local_3f0);
        }
      }
      if (local_3d8 != (long *)0x0) {
        (**(code **)(*local_3d8 + 0x20))();
      }
      FUN_01e6de60(&local_3c0);
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar2);
  }
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar33 + 0x20))();
    }
  }
  return;
}


