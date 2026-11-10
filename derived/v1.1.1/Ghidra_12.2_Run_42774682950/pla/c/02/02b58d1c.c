/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b58d1c; name: FUN_02b58d1c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02b58d1c(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  long local_300 [2];
  undefined4 local_2f0;
  undefined4 auStack_2ec [3];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  long lStack_70;
  
  local_200 = 0;
  local_208 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_188 = 0;
  local_190 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300[1] = 0;
  local_2f0 = 0;
  auStack_2ec[0] = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    do {
      plVar5 = (long *)(param_2 + uVar4 * 0x48);
      puVar10 = (undefined4 *)*plVar5;
      puVar2 = (undefined4 *)plVar5[1];
      if (puVar10 == puVar2) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        uVar3 = uVar9;
        puVar10 = puVar10 + 1;
        do {
          uVar9 = uVar3;
          if (puVar10[-1] != 0) {
            uVar9 = (ulong)((int)uVar3 + 1);
            *(undefined4 *)(local_300 + uVar3 * 3) = puVar10[-1];
            *(undefined4 *)((long)&stack0xfffffffffffffd10 + uVar3 * 3 * 8) = *puVar10;
            *(int *)((long)local_300 + uVar3 * 0x18 + 0x14) = (int)uVar4;
            local_300[uVar3 * 3 + 1] = lVar7;
          }
          uVar3 = FUN_02b59060(*puVar10);
          lVar7 = lVar7 + (uVar3 & 0xffffffff);
          puVar1 = puVar10 + 1;
          uVar3 = uVar9;
          puVar10 = puVar10 + 2;
        } while (puVar1 != puVar2);
      }
      uVar6 = (uint)uVar9;
      uVar3 = uVar4 + 1;
      (&local_400)[uVar4 * 2] = lVar7;
      uVar4 = uVar3;
    } while (uVar3 != param_3);
  }
  uVar8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_180._8_8_ = 0;
  local_180._0_8_ = 0;
  if (uVar6 != 0) {
    uVar9 = (ulong)uVar6;
    plVar5 = local_300 + 1;
    do {
      uVar4 = (**(code **)(*DAT_043ef740 + 0x10))
                        (DAT_043ef740,(int)plVar5[-1],*(undefined4 *)(param_1 + 0xc0));
      if ((uVar4 & 0xff) != 0) {
        lVar7 = plVar5[1];
        uVar6 = (uint)(uVar4 >> 0x20);
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
        *(long *)(local_180 + (uVar4 >> 0x20) * 0x10) = *plVar5;
        *(long *)(local_180 + ((uVar4 >> 0x20) * 2 + 1) * 8) = lVar7;
        uVar8 = uVar6;
      }
      uVar9 = uVar9 - 1;
      plVar5 = plVar5 + 3;
    } while (uVar9 != 0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x58);
  local_80._0_8_ = *(undefined8 *)(lVar7 + 8);
  local_80._8_8_ = *(undefined8 *)(lVar7 + 0x6098);
  lStack_70 = lVar7 + 0x10;
  local_80 = FUN_02b808c4(*(undefined8 *)(lVar7 + 0x6180),local_180 + 0x100,local_180,uVar8 + 1);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x58);
  local_180._0_8_ = *(undefined8 *)(lVar7 + 8);
  local_180._8_8_ = *(undefined8 *)(lVar7 + 0x6098);
  local_170 = lVar7 + 0x10;
  local_180 = FUN_02b818f4(*(undefined8 *)(lVar7 + 0x61a0),local_180,&local_400,param_3);
  FUN_02bb7688(*(undefined8 *)(param_1 + 0x60),local_180 + 0x100,local_180);
  return;
}


