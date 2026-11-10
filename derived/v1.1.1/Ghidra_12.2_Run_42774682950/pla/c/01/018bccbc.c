/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018bccbc; name: FUN_018bccbc
 */


void FUN_018bccbc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  byte *pbVar15;
  int *piVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  uint *puVar29;
  uint *puVar30;
  int *piVar31;
  int *piVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  long local_3d0;
  long local_3b0;
  long *local_380;
  byte *pbStack_378;
  size_t local_370;
  long *local_368;
  undefined8 local_360;
  float local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 local_334;
  float local_330;
  float local_32c;
  float local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  long *plStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  long *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  long *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long *local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long *local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  long *local_190;
  byte *local_188;
  undefined1 *local_180;
  long *local_178;
  long *local_170;
  float local_168;
  long *local_160;
  char *local_158;
  size_t local_150;
  long *local_148;
  long *local_140;
  char *local_138;
  size_t local_130;
  long *local_128;
  long *local_120;
  char *local_118;
  size_t local_110;
  long *local_108;
  long *local_100;
  char *local_f8;
  size_t local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long **pplStack_80;
  long local_68;
  
  puVar9 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
  piVar32 = (int *)((long)puVar9 + (ulong)*puVar9);
  uVar17 = (ulong)*(ushort *)((long)piVar32 + (4 - (long)*piVar32));
  puVar4 = (uint *)((long)piVar32 + uVar17);
  uVar19 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar19);
  puVar23 = puVar4 + 1;
  uVar20 = (ulong)*puVar4;
  if (uVar20 != 0) {
    puVar4 = puVar23 + uVar20;
    lVar21 = uVar19 + uVar17 + (ulong)*puVar9;
    local_3b0 = (long)puVar9 + lVar21 + 0xd;
    local_3d0 = (long)puVar9 + lVar21 + 0x11;
    plVar1 = (long *)(param_1 + 0x1b8);
    plVar2 = (long *)(param_1 + 0x1e8);
    do {
      uVar17 = (ulong)*puVar23;
      piVar32 = (int *)((long)puVar23 + uVar17);
      if (*(ushort *)((long)piVar32 - (long)*piVar32) < 5) {
        piVar10 = (int *)0x0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[2];
        piVar10 = (int *)0x0;
        if (uVar19 != 0) {
          piVar10 = *(int **)((long)piVar32 + uVar19);
        }
      }
      plStack_300 = *(long **)(param_1 + 8);
      local_318 = 0;
      uStack_310 = 0;
      local_2e8 = 0;
      local_2f8 = 0x7ffffffffffffff;
      uStack_2f0 = 0;
      local_308 = 0;
      local_2d0 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      uStack_2c0 = 0x7ffffffffffffff;
      local_2a8 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_288 = 0x7ffffffffffffff;
      local_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_248 = 0;
      local_240 = 0;
      uStack_250 = 0x7ffffffffffffff;
      local_238 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_210 = 0;
      local_218 = 0x7ffffffffffffff;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e0 = 0x2aaaaaaaaaaaaaa;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1a8 = 0x555555555555555;
      local_180 = &DAT_03996322;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = (long *)0x0;
      local_188 = &DAT_cbf29ce484222645;
      local_168 = 0.0;
      local_178 = (long *)0x0;
      local_170 = (long *)0x0;
      local_158 = "";
      local_160 = (long *)&DAT_cbf29ce484222645;
      local_150 = 0;
      local_148 = (long *)0x0;
      local_138 = "";
      local_140 = (long *)&DAT_cbf29ce484222645;
      local_130 = 0;
      local_128 = (long *)0x0;
      local_120 = (long *)&DAT_cbf29ce484222645;
      local_118 = "";
      local_110 = 0;
      local_108 = (long *)0x0;
      local_100 = (long *)&DAT_cbf29ce484222645;
      local_f8 = "";
      local_f0 = 0;
      local_e8 = (long *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_b8 = 0x3fffffffffffffff;
      local_b0 = 0;
      local_a8 = 0;
      if (*(ushort *)((long)piVar32 - (long)*piVar32) < 9) {
        local_320 = 0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[4];
        local_320 = 0;
        if (uVar19 != 0) {
          local_320 = *(undefined8 *)((long)piVar32 + uVar19);
        }
      }
      lVar11 = (long)*piVar32;
      uVar19 = (ulong)*(ushort *)((long)piVar32 + (10 - lVar11));
      puVar9 = (uint *)((long)piVar32 + uVar19);
      uVar20 = (ulong)*puVar9;
      piVar31 = (int *)((long)puVar9 + uVar20);
      lVar21 = (long)*piVar31;
      uVar22 = (ulong)*(ushort *)((long)piVar31 + (4 - lVar21));
      puVar9 = (uint *)((long)piVar31 + uVar22);
      uVar24 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar24);
      puVar29 = puVar9 + 1;
      uVar25 = (ulong)*puVar9;
      local_2c8 = plStack_300;
      local_290 = plStack_300;
      local_258 = plStack_300;
      local_220 = plStack_300;
      local_1e8 = plStack_300;
      local_1b0 = plStack_300;
      local_c0 = plStack_300;
      if (uVar25 != 0) {
        lVar21 = local_3b0 + uVar24 + uVar22 + uVar20 + uVar19 + uVar17;
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          uVar5 = *puVar9;
          pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *pbVar15;
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(lVar21 + (ulong)uVar5);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          local_368 = (long *)0x0;
          pbStack_378 = pbVar15;
          FUN_018c1608(&local_318,&local_380);
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          lVar21 = lVar21 + 4;
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar25);
        lVar11 = (long)*piVar32;
        puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + (10 - lVar11)));
        piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
        lVar21 = (long)*piVar31;
      }
      uVar19 = (ulong)*(ushort *)((long)piVar31 + (6 - lVar21));
      puVar9 = (uint *)((long)piVar31 + uVar19);
      uVar20 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar20);
      puVar29 = puVar9 + 1;
      uVar22 = (ulong)*puVar9;
      if (uVar22 != 0) {
        lVar21 = (long)piVar31 + uVar20 + uVar19 + 9;
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          uVar5 = *puVar9;
          pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *pbVar15;
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(lVar21 + (ulong)uVar5);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          local_368 = (long *)0x0;
          pbStack_378 = pbVar15;
          FUN_018c1608(&local_2e0,&local_380);
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          lVar21 = lVar21 + 4;
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar22);
        lVar11 = (long)*piVar32;
      }
      iVar8 = (int)lVar11;
      lVar11 = -lVar11;
      uVar19 = (ulong)*(ushort *)((long)piVar32 + lVar11 + 0xc);
      puVar9 = (uint *)((long)piVar32 + uVar19);
      uVar20 = (ulong)*puVar9;
      piVar31 = (int *)((long)puVar9 + uVar20);
      lVar21 = (long)*piVar31;
      uVar22 = (ulong)*(ushort *)((long)piVar31 + (4 - lVar21));
      puVar9 = (uint *)((long)piVar31 + uVar22);
      uVar24 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar24);
      puVar29 = puVar9 + 1;
      uVar25 = (ulong)*puVar9;
      if (uVar25 != 0) {
        lVar21 = local_3b0 + uVar24 + uVar22 + uVar20 + uVar19 + uVar17;
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          uVar5 = *puVar9;
          pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *pbVar15;
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(lVar21 + (ulong)uVar5);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          local_368 = (long *)0x0;
          pbStack_378 = pbVar15;
          FUN_018c1608(&local_2a8,&local_380);
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          lVar21 = lVar21 + 4;
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar25);
        iVar8 = *piVar32;
        puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + (0xc - (long)iVar8)));
        piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
        lVar21 = (long)*piVar31;
        lVar11 = -(long)iVar8;
      }
      lVar21 = -lVar21;
      uVar19 = (ulong)*(ushort *)((long)piVar31 + lVar21 + 6);
      puVar9 = (uint *)((long)piVar31 + uVar19);
      uVar20 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar20);
      puVar29 = puVar9 + 1;
      uVar22 = (ulong)*puVar9;
      if (uVar22 != 0) {
        lVar21 = (long)piVar31 + uVar20 + uVar19 + 9;
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          uVar5 = *puVar9;
          pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *pbVar15;
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(lVar21 + (ulong)uVar5);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          local_368 = (long *)0x0;
          pbStack_378 = pbVar15;
          FUN_018c1608(&local_270,&local_380);
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          lVar21 = lVar21 + 4;
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar22);
        iVar8 = *piVar32;
        puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + (0xc - (long)iVar8)));
        piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
        lVar11 = -(long)iVar8;
        lVar21 = -(long)*piVar31;
      }
      uVar19 = (ulong)*(ushort *)((long)piVar31 + lVar21 + 8);
      puVar9 = (uint *)((long)piVar31 + uVar19);
      uVar20 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar20);
      puVar29 = puVar9 + 1;
      uVar22 = (ulong)*puVar9;
      if (uVar22 != 0) {
        lVar21 = (long)piVar31 + uVar20 + uVar19 + 9;
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          uVar5 = *puVar9;
          pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *pbVar15;
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(lVar21 + (ulong)uVar5);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          local_368 = (long *)0x0;
          pbStack_378 = pbVar15;
          FUN_018c1608(&local_238,&local_380);
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          lVar21 = lVar21 + 4;
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar22);
        iVar8 = *piVar32;
        lVar11 = -(long)iVar8;
      }
      puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + lVar11 + 0x16));
      piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
      puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (4 - (long)*piVar31)));
      lVar21 = tpidr_el0;
      if (1 < *(uint *)((long)puVar9 + (ulong)*puVar9)) {
        local_68 = local_3d0 + uVar17;
        uVar17 = 1;
        do {
          local_380 = (long *)&DAT_cbf29ce484222645;
          pbStack_378 = &DAT_03996322;
          local_370 = 0;
          local_368 = (long *)0x0;
          uVar20 = (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)*piVar32));
          puVar9 = (uint *)((long)piVar32 + uVar20);
          uVar22 = (ulong)*puVar9;
          piVar31 = (int *)((long)puVar9 + uVar22);
          uVar24 = (ulong)*(ushort *)((long)piVar31 + (4 - (long)*piVar31));
          puVar9 = (uint *)((long)piVar31 + uVar24);
          uVar25 = (ulong)*puVar9;
          puVar9 = (uint *)((long)puVar9 + uVar17 * 4 + uVar25 + 4);
          uVar19 = (ulong)*puVar9;
          pbVar15 = (byte *)((long)puVar9 + uVar19 + 4);
          local_370 = strlen((char *)pbVar15);
          bVar6 = *(byte *)((long)puVar9 + uVar19 + 4);
          local_380 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar18 = (byte *)(local_68 + uVar19 + uVar25 + uVar24 + uVar22 + uVar20);
            do {
              local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar6 != 0);
          }
          lVar11 = uVar17 * 4;
          local_368 = (long *)0x0;
          puVar9 = (uint *)((long)piVar32 +
                           (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)*piVar32)));
          piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
          iVar8 = *piVar31;
          puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (6 - (long)iVar8)));
          puVar29 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (8 - (long)iVar8)));
          puVar30 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (10 - (long)iVar8)))
          ;
          local_358 = (float)*(int *)((long)puVar30 + (ulong)*puVar30 + 4) / 255.0;
          local_354 = 0x3f800000;
          local_360 = (long *)CONCAT44((float)*(int *)((long)puVar29 + (ulong)*puVar29 + 4) / 255.0,
                                       (float)*(int *)((long)puVar9 + (ulong)*puVar9 + 4) / 255.0);
          puVar9 = (uint *)((long)piVar32 +
                           (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)*piVar32)));
          piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
          iVar8 = *piVar31;
          puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (6 - (long)iVar8)));
          puVar29 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (8 - (long)iVar8)));
          puVar30 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (10 - (long)iVar8)))
          ;
          local_344 = 0x3f800000;
          local_350 = (float)*(int *)((long)puVar9 + lVar11 + (ulong)*puVar9 + 4) / 255.0;
          local_34c = (float)*(int *)((long)puVar29 + lVar11 + (ulong)*puVar29 + 4) / 255.0;
          local_348 = (float)*(int *)((long)puVar30 + lVar11 + (ulong)*puVar30 + 4) / 255.0;
          puVar9 = (uint *)((long)piVar32 +
                           (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)*piVar32)));
          piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
          iVar8 = *piVar31;
          puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (0xc - (long)iVar8)))
          ;
          puVar29 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (0xe - (long)iVar8))
                            );
          puVar30 = (uint *)((long)piVar31 +
                            (ulong)*(ushort *)((long)piVar31 + (0x10 - (long)iVar8)));
          local_334 = 0x3f800000;
          local_340 = (float)*(int *)((long)puVar9 + lVar11 + (ulong)*puVar9 + 4) / 255.0;
          local_33c = (float)*(int *)((long)puVar29 + lVar11 + (ulong)*puVar29 + 4) / 255.0;
          local_338 = (float)*(int *)((long)puVar30 + lVar11 + (ulong)*puVar30 + 4) / 255.0;
          puVar9 = (uint *)((long)piVar32 +
                           (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)*piVar32)));
          piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
          iVar8 = *piVar31;
          puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (0x12 - (long)iVar8))
                           );
          puVar29 = (uint *)((long)piVar31 +
                            (ulong)*(ushort *)((long)piVar31 + (0x14 - (long)iVar8)));
          puVar30 = (uint *)((long)piVar31 +
                            (ulong)*(ushort *)((long)piVar31 + (0x16 - (long)iVar8)));
          local_324 = 0x3f800000;
          local_330 = (float)*(int *)((long)puVar9 + lVar11 + (ulong)*puVar9 + 4) / 255.0;
          local_32c = (float)*(int *)((long)puVar29 + lVar11 + (ulong)*puVar29 + 4) / 255.0;
          local_328 = (float)*(int *)((long)puVar30 + lVar11 + (ulong)*puVar30 + 4) / 255.0;
          pbStack_378 = pbVar15;
          if (local_1f8 == local_1f0) {
            lVar11 = local_1f8 - local_200 >> 5;
            uVar19 = local_1e0;
            if (0x7ffffffffffffffe < local_1e0) {
              uVar19 = 0x7fffffffffffffff;
            }
            uVar20 = lVar11 * -0x5555555555555555 + 1;
            if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar12 = local_1f0 - local_200 >> 5;
            if ((ulong)(lVar12 * -0x5555555555555555) < uVar19 >> 1) {
              uVar22 = lVar12 * 0x5555555555555556;
              uVar19 = uVar20;
              if (uVar20 <= uVar22) {
                uVar19 = uVar22;
              }
            }
            if (uVar19 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = (**(code **)(*local_1e8 + 0x10))(local_1e8,uVar19 * 0x60,8);
              if (lVar12 == 0) {
                (**(code **)(*local_1e8 + 0xb8))();
              }
            }
            lVar33 = lVar12 + lVar11 * 0x20;
            lVar12 = lVar12 + uVar19 * 0x60;
            FUN_018c2a70(&local_1e8,lVar33,&local_380);
            lVar34 = local_1f8;
            lVar27 = local_200;
            lVar11 = lVar33 + 0x60;
            if (local_1f8 == local_200) {
              lVar34 = local_200;
            }
            else {
              lVar33 = lVar33 + -0x60;
              lVar26 = local_1f8 + -0x60;
              FUN_018c2a70(&local_1e8,lVar33,lVar26);
              if (lVar26 != lVar27) {
                do {
                  lVar33 = lVar33 + -0x60;
                  FUN_018c2a70(&local_1e8,lVar33,lVar34 + -0xc0);
                  lVar34 = lVar34 + -0x60;
                } while (lVar27 + 0x60 != lVar34);
              }
              lVar27 = local_200;
              lVar34 = local_1f8;
            }
            lVar26 = local_1f0;
            local_200 = lVar33;
            local_1f8 = lVar11;
            local_1f0 = lVar12;
            if (lVar34 != lVar27) {
              if (*(long **)(lVar34 + -0x48) != (long *)0x0) {
                (**(code **)(**(long **)(lVar34 + -0x48) + 0x20))();
              }
              if (lVar34 + -0x60 != lVar27) {
                do {
                  if (*(long **)(lVar34 + -0xa8) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar34 + -0xa8) + 0x20))();
                  }
                  lVar34 = lVar34 + -0x60;
                } while (lVar27 + 0x60 != lVar34);
              }
            }
            plVar13 = local_1e8;
            if (lVar27 != 0) {
              uVar19 = (**(code **)(*local_1e8 + 0xc0))(local_1e8);
              if ((uVar19 & 1) != 0) {
                if (*(char *)(lVar21 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar21 + 0x38d488) = 1;
                  *(undefined8 *)(lVar21 + 0x38d478) = 0;
                  *(undefined8 *)(lVar21 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar21 + 0x38d480)) {
                  FUN_02bcc824(plVar13,lVar27,lVar26 - lVar27,8);
                  goto joined_r0x018be164;
                }
              }
              (**(code **)(*plVar13 + 0x18))(plVar13,lVar27,lVar26 - lVar27,8);
            }
          }
          else {
            FUN_018c2a70(&local_1e8,local_1f8,&local_380);
            local_1f8 = local_1f8 + 0x60;
          }
joined_r0x018be164:
          if (local_368 != (long *)0x0) {
            (**(code **)(*local_368 + 0x20))();
          }
          iVar8 = *piVar32;
          puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + (0x16 - (long)iVar8))
                           );
          piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
          puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (4 - (long)*piVar31))
                           );
          uVar17 = uVar17 + 1;
          local_68 = local_68 + 4;
        } while (uVar17 < *(uint *)((long)puVar9 + (ulong)*puVar9));
        lVar11 = -(long)iVar8;
      }
      puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + lVar11 + 0xe));
      piVar31 = (int *)((long)puVar9 + (ulong)*puVar9);
      puVar9 = (uint *)((long)piVar31 + (ulong)*(ushort *)((long)piVar31 + (4 - (long)*piVar31)));
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
      puVar29 = puVar9 + 1;
      uVar17 = (ulong)*puVar9;
      if (uVar17 != 0) {
        puVar9 = puVar29;
        do {
          puVar30 = puVar9 + 1;
          local_a0 = (long)puVar30 + (ulong)*puVar9;
          FUN_009f1b84(&local_380,&local_a0);
          if (local_1c0 < local_1b8) {
            FUN_00b149e4(&local_1b0,local_1c0,&local_380);
            local_1c0 = local_1c0 + 0x30;
          }
          else {
            lVar11 = (long)(local_1c0 - local_1c8) >> 4;
            uVar19 = local_1a8;
            if (0x7ffffffffffffffe < local_1a8) {
              uVar19 = 0x7fffffffffffffff;
            }
            uVar20 = lVar11 * -0x5555555555555555 + 1;
            if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar12 = (long)(local_1b8 - local_1c8) >> 4;
            uVar22 = lVar12 * 0x5555555555555556;
            local_88 = 0;
            if (uVar20 <= uVar22) {
              uVar20 = uVar22;
            }
            if ((ulong)(lVar12 * -0x5555555555555555) < uVar19 >> 1) {
              uVar19 = uVar20;
            }
            pplStack_80 = &local_1b0;
            if (uVar19 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = (**(code **)(*local_1b0 + 0x10))(local_1b0,uVar19 * 0x30,8);
              if (uVar20 == 0) {
                (**(code **)(*local_1b0 + 0xb8))();
              }
            }
            uVar25 = uVar20 + lVar11 * 0x10;
            uVar24 = uVar20 + uVar19 * 0x30;
            local_a0 = uVar20;
            local_98 = uVar25;
            local_88 = uVar24;
            FUN_00b149e4(&local_1b0,uVar25,&local_380);
            uVar20 = local_1c8;
            uVar19 = uVar25 + 0x30;
            uVar22 = local_1c0;
            local_90 = uVar19;
            if (local_1c0 == local_1c8) {
              local_1c0 = local_1c8;
            }
            else {
              do {
                uVar25 = uVar25 - 0x30;
                uVar22 = uVar22 - 0x30;
                FUN_00b14ae4(&local_1b0,uVar25,uVar22);
              } while (uVar20 != uVar22);
            }
            local_88 = local_1b8;
            local_a0 = local_1c8;
            local_1c8 = uVar25;
            local_90 = local_1c0;
            local_1c0 = uVar19;
            local_1b8 = uVar24;
            local_98 = local_a0;
            FUN_018c2b90(&local_a0);
            uVar19 = local_a0;
            if (local_a0 != 0) {
              lVar11 = local_88 - local_a0;
              plVar13 = *pplStack_80;
              uVar20 = (**(code **)(*plVar13 + 0xc0))(plVar13);
              if ((uVar20 & 1) != 0) {
                if (*(char *)(lVar21 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar21 + 0x38d488) = 1;
                  *(undefined8 *)(lVar21 + 0x38d478) = 0;
                  *(undefined8 *)(lVar21 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar21 + 0x38d480)) {
                  FUN_02bcc824(plVar13,uVar19,lVar11,8);
                  goto joined_r0x018be318;
                }
              }
              (**(code **)(*plVar13 + 0x18))(plVar13,uVar19,lVar11,8);
            }
          }
joined_r0x018be318:
          if (local_360 != (long *)0x0) {
            (**(code **)(*local_360 + 0x20))();
          }
          if (local_380 != (long *)0x0) {
            (**(code **)(*local_380 + 0x20))();
          }
          puVar9 = puVar30;
        } while (puVar30 != puVar29 + uVar17);
        iVar8 = *piVar32;
      }
      if ((*(ushort *)((long)piVar32 - (long)iVar8) < 0x11) ||
         (uVar17 = (ulong)((ushort *)((long)piVar32 - (long)iVar8))[8], uVar17 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar9 = (uint *)((long)piVar32 + uVar17);
        lVar21 = (long)puVar9 + (ulong)*puVar9;
      }
      pcVar3 = (char *)(lVar21 + 4);
      local_150 = strlen(pcVar3);
      plVar13 = local_148;
      bVar6 = *(byte *)(lVar21 + 4);
      local_160 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        pbVar15 = (byte *)(lVar21 + 5);
        do {
          local_160 = (long *)(((ulong)local_160 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar6 != 0);
      }
      local_148 = (long *)0x0;
      local_158 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_148 = (long *)0x0;
      if ((*(ushort *)((long)piVar32 - (long)*piVar32) < 0x13) ||
         (uVar17 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[9], uVar17 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar9 = (uint *)((long)piVar32 + uVar17);
        lVar21 = (long)puVar9 + (ulong)*puVar9;
      }
      pcVar3 = (char *)(lVar21 + 4);
      local_130 = strlen(pcVar3);
      plVar13 = local_128;
      bVar6 = *(byte *)(lVar21 + 4);
      local_140 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        pbVar15 = (byte *)(lVar21 + 5);
        do {
          local_140 = (long *)(((ulong)local_140 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar6 != 0);
      }
      local_128 = (long *)0x0;
      local_138 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_128 = (long *)0x0;
      if ((*(ushort *)((long)piVar32 - (long)*piVar32) < 0x15) ||
         (uVar17 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[10], uVar17 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar9 = (uint *)((long)piVar32 + uVar17);
        lVar21 = (long)puVar9 + (ulong)*puVar9;
      }
      pcVar3 = (char *)(lVar21 + 4);
      local_110 = strlen(pcVar3);
      plVar13 = local_108;
      bVar6 = *(byte *)(lVar21 + 4);
      local_120 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        pbVar15 = (byte *)(lVar21 + 5);
        do {
          local_120 = (long *)(((ulong)local_120 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar6 != 0);
      }
      local_108 = (long *)0x0;
      local_118 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_108 = (long *)0x0;
      if ((*(ushort *)((long)piVar32 - (long)*piVar32) < 0x19) ||
         (uVar17 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[0xc], uVar17 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar9 = (uint *)((long)piVar32 + uVar17);
        lVar21 = (long)puVar9 + (ulong)*puVar9;
      }
      pcVar3 = (char *)(lVar21 + 4);
      local_f0 = strlen(pcVar3);
      plVar13 = local_e8;
      bVar6 = *(byte *)(lVar21 + 4);
      local_100 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        pbVar15 = (byte *)(lVar21 + 5);
        do {
          local_100 = (long *)(((ulong)local_100 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar6 != 0);
      }
      local_e8 = (long *)0x0;
      local_f8 = pcVar3;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      local_e8 = (long *)0x0;
      lVar21 = (long)*piVar32;
      puVar9 = (uint *)((long)piVar32 + (ulong)*(ushort *)((long)piVar32 + (0x1a - lVar21)));
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
      puVar29 = puVar9 + 1;
      uVar5 = *puVar9;
      uVar17 = (ulong)uVar5;
      if (uVar17 != 0) {
        local_380 = (long *)CONCAT44(local_380._4_4_,*puVar29);
        FUN_018c189c(&local_d8,&local_380);
        if (uVar5 != 1) {
          local_380 = (long *)CONCAT44(local_380._4_4_,puVar9[2]);
          FUN_018c189c(&local_d8,&local_380);
          if (puVar9 + 3 != puVar29 + uVar17) {
            local_380 = (long *)CONCAT44(local_380._4_4_,puVar9[3]);
            FUN_018c189c(&local_d8,&local_380);
            if (puVar9 + 4 != puVar29 + uVar17) {
              lVar21 = uVar17 * 4 + -0xc;
              puVar9 = puVar9 + 4;
              do {
                local_380 = (long *)CONCAT44(local_380._4_4_,*puVar9);
                FUN_018c189c(&local_d8,&local_380);
                lVar21 = lVar21 + -4;
                puVar9 = puVar9 + 1;
              } while (lVar21 != 0);
            }
          }
        }
        lVar21 = (long)*piVar32;
      }
      if (*(ushort *)((long)piVar32 - lVar21) < 0x1d) {
        lVar21 = 0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar32 - lVar21))[0xe];
        lVar21 = 0;
        if (uVar17 != 0) {
          puVar9 = (uint *)((long)piVar32 + uVar17);
          lVar21 = (long)puVar9 + (ulong)*puVar9;
        }
      }
      local_a0 = lVar21 + 4;
      FUN_009f1b84(&local_380,&local_a0);
      plVar13 = local_190;
      local_190 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      plVar14 = local_170;
      plVar13 = local_360;
      local_190 = local_380;
      local_380 = (long *)0x0;
      local_180 = (undefined1 *)local_370;
      local_188 = pbStack_378;
      local_178 = local_368;
      local_170 = (long *)0x0;
      if (plVar14 == (long *)0x0) {
        local_360 = (long *)0x0;
        local_170 = plVar13;
        local_168 = local_358;
      }
      else {
        (**(code **)(*plVar14 + 0x20))();
        local_170 = local_360;
        local_360 = (long *)0x0;
        local_168 = local_358;
        if (local_380 != (long *)0x0) {
          (**(code **)(*local_380 + 0x20))();
        }
      }
      local_e0 = 0;
      if (0x1e < *(ushort *)((long)piVar32 - (long)*piVar32)) {
        uVar17 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[0xf];
        local_e0 = 0;
        if (uVar17 != 0) {
          local_e0 = *(undefined4 *)((long)piVar32 + uVar17);
        }
      }
      piVar31 = *(int **)(param_1 + 0x1c0);
      if (piVar31 == (int *)0x0) {
LAB_018bdefc:
        plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0x1f0) + 0x10))
                                    (*(long **)(param_1 + 0x1f0),0x298,8);
        if (plVar13 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x1f0) + 0xb8))();
        }
        uVar28 = *(undefined8 *)(param_1 + 0x1f0);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar7 = PTR_DAT_04379528;
          if (iVar8 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar21 == 0) {
          plVar13[2] = (long)piVar10;
          FUN_018c2ebc(plVar13 + 3,&local_320);
        }
        else {
          if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar28;
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
          plVar13[2] = (long)piVar10;
          FUN_018c2ebc(plVar13 + 3,&local_320);
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
        }
        *plVar13 = 0;
        plVar13[1] = (long)piVar10;
        fVar35 = (float)(*(long *)(param_1 + 0x210) + 1);
        if ((piVar31 == (int *)0x0) || (*(float *)(param_1 + 0x218) * (float)piVar31 < fVar35)) {
          uVar17 = (ulong)(piVar31 < (int *)0x3 || ((ulong)piVar31 & (long)piVar31 - 1U) != 0) |
                   (long)piVar31 << 1;
          uVar19 = (ulong)(fVar35 / *(float *)(param_1 + 0x218));
          if (uVar19 <= uVar17) {
            uVar19 = uVar17;
          }
          FUN_018c2db8(plVar1,uVar19);
          piVar31 = *(int **)(param_1 + 0x1c0);
          if (((ulong)piVar31 & (long)piVar31 - 1U) == 0) {
            piVar32 = (int *)((long)piVar31 - 1U & (ulong)piVar10);
          }
          else {
            piVar32 = piVar10;
            if (piVar31 <= piVar10) {
              uVar17 = 0;
              if (piVar31 != (int *)0x0) {
                uVar17 = (ulong)piVar10 / (ulong)piVar31;
              }
              piVar32 = (int *)((long)piVar10 - uVar17 * (long)piVar31);
            }
          }
        }
        plVar14 = *(long **)(*plVar1 + (long)piVar32 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar13 = *plVar2;
          *plVar2 = (long)plVar13;
          *(long **)(*plVar1 + (long)piVar32 * 8) = plVar2;
          if (*plVar13 != 0) {
            piVar32 = *(int **)(*plVar13 + 8);
            if (((ulong)piVar31 & (long)piVar31 - 1U) == 0) {
              piVar32 = (int *)((ulong)piVar32 & (long)piVar31 - 1U);
            }
            else if (piVar31 <= piVar32) {
              uVar17 = 0;
              if (piVar31 != (int *)0x0) {
                uVar17 = (ulong)piVar32 / (ulong)piVar31;
              }
              piVar32 = (int *)((long)piVar32 - uVar17 * (long)piVar31);
            }
            plVar14 = (long *)(*plVar1 + (long)piVar32 * 8);
            goto LAB_018be004;
          }
        }
        else {
          *plVar13 = *plVar14;
LAB_018be004:
          *plVar14 = (long)plVar13;
        }
        *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + 1;
      }
      else {
        uVar17 = (long)piVar31 - ((ulong)piVar31 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          piVar32 = (int *)((long)piVar31 - 1U & (ulong)piVar10);
        }
        else {
          piVar32 = piVar10;
          if (piVar31 <= piVar10) {
            uVar19 = 0;
            if (piVar31 != (int *)0x0) {
              uVar19 = (ulong)piVar10 / (ulong)piVar31;
            }
            piVar32 = (int *)((long)piVar10 - uVar19 * (long)piVar31);
          }
        }
        plVar13 = *(long **)(*plVar1 + (long)piVar32 * 8);
        if (plVar13 == (long *)0x0) goto LAB_018bdefc;
        if (uVar17 < 2) {
          do {
            plVar13 = (long *)*plVar13;
            if ((plVar13 == (long *)0x0) ||
               ((int *)plVar13[1] != piVar10 &&
                (int *)((ulong)plVar13[1] & (long)piVar31 - 1U) != piVar32)) goto LAB_018bdefc;
          } while ((int *)plVar13[2] != piVar10);
        }
        else {
          do {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_018bdefc;
            piVar16 = (int *)plVar13[1];
            if (piVar16 != piVar10) {
              if (piVar31 <= piVar16) {
                uVar17 = 0;
                if (piVar31 != (int *)0x0) {
                  uVar17 = (ulong)piVar16 / (ulong)piVar31;
                }
                piVar16 = (int *)((long)piVar16 - uVar17 * (long)piVar31);
              }
              if (piVar16 != piVar32) goto LAB_018bdefc;
            }
          } while ((int *)plVar13[2] != piVar10);
        }
      }
      FUN_018c1b1c(&local_320);
      local_3b0 = local_3b0 + 4;
      puVar23 = puVar23 + 1;
      local_3d0 = local_3d0 + 4;
    } while (puVar23 != puVar4);
  }
  return;
}


