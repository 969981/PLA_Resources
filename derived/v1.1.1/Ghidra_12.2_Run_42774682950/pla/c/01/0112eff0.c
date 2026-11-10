/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112eff0; name: FUN_0112eff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0112eff0(undefined8 param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint local_408 [2];
  undefined8 local_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined1 *puStack_3e0;
  undefined1 *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined8 local_3ac;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined1 local_394;
  undefined4 local_390;
  undefined8 local_388;
  undefined1 *puStack_380;
  undefined1 *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 local_350;
  undefined8 local_34c;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined4 local_330;
  undefined8 local_328;
  undefined1 *puStack_320;
  undefined1 *local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2ec;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined1 *puStack_2c0;
  undefined1 *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_270;
  undefined8 local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined8 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined4 local_210;
  undefined8 local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  
  if (param_2 < 0x3d5) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar8 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar8;
    plVar9 = _DAT_000001c8;
    plVar7 = *(long **)(lVar8 + 0xd0);
    if (plVar7 == (long *)0x0) {
      if (_DAT_000001c8 != (long *)0x0) {
        plVar7 = _DAT_000001c8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      plVar1 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9 = (long *)plVar7[0x39];
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    local_408[0] = 0;
    local_400 = 0;
    local_3f8 = 0;
    local_3f4 = 0x12;
    local_3f0 = 5;
    local_3d8 = &DAT_cbf29ce484222645;
    uStack_3d0 = 0;
    local_3e8 = 0xc0ea47549ab5f3d9;
    puStack_3e0 = &DAT_cbf29ce484222645;
    local_3ac = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_394 = 0x12;
    local_390 = 5;
    local_34c = 0;
    local_350 = 0;
    local_368 = 0;
    local_340 = 0;
    local_338 = 0;
    local_334 = 0x12;
    local_330 = 5;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_388 = 0xc0ea47549ab5f3d9;
    puStack_380 = &DAT_cbf29ce484222645;
    local_378 = &DAT_cbf29ce484222645;
    uStack_370 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_328 = 0xc0ea47549ab5f3d9;
    puStack_320 = &DAT_cbf29ce484222645;
    local_318 = &DAT_cbf29ce484222645;
    uStack_310 = 0;
    local_2ec = 0;
    local_2f8 = 0;
    local_2f0 = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2d4 = 0x12;
    local_2d0 = 5;
    local_2c8 = 0xc0ea47549ab5f3d9;
    puStack_2c0 = &DAT_cbf29ce484222645;
    local_2b8 = &DAT_cbf29ce484222645;
    uStack_2b0 = 0;
    local_28c = 0;
    local_290 = 0;
    local_2a8 = 0;
    local_280 = 0;
    local_278 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_274 = 0x12;
    local_270 = 5;
    local_268 = 0xc0ea47549ab5f3d9;
    puStack_260 = &DAT_cbf29ce484222645;
    local_258 = &DAT_cbf29ce484222645;
    uStack_250 = 0;
    local_22c = 0;
    local_230 = 0;
    local_248 = 0;
    local_220 = 0;
    local_218 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_214 = 0x12;
    local_210 = 5;
    local_208 = 0xc0ea47549ab5f3d9;
    local_200 = &DAT_cbf29ce484222645;
    local_1f8 = &DAT_cbf29ce484222645;
    local_1cc = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1f0 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 0x12;
    local_1b0 = 5;
    local_1a8 = 0xc0ea47549ab5f3d9;
    local_1a0 = &DAT_cbf29ce484222645;
    local_198 = &DAT_cbf29ce484222645;
    local_16c = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    local_160 = 0;
    local_158 = 0;
    local_154 = 0x12;
    local_150 = 5;
    local_148 = 0xc0ea47549ab5f3d9;
    local_140 = &DAT_cbf29ce484222645;
    local_138 = &DAT_cbf29ce484222645;
    local_10c = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 0x12;
    local_f0 = 5;
    local_e8 = 0xc0ea47549ab5f3d9;
    local_e0 = &DAT_cbf29ce484222645;
    local_d8 = &DAT_cbf29ce484222645;
    local_ac = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 0x12;
    local_90 = 5;
    local_88 = 0xc0ea47549ab5f3d9;
    local_80 = &DAT_cbf29ce484222645;
    local_78 = &DAT_cbf29ce484222645;
    local_4c = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    FUN_013f7198(*(undefined8 *)(plVar9[0xb] + 8),param_2,local_408);
    if (local_408[0] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_01130984(param_1,param_2,0,0,0,0);
      if (1 < local_408[0]) {
        iVar6 = FUN_01130984(param_1,param_2,1,0,0,0);
        iVar5 = iVar6 + iVar5;
        if (2 < local_408[0]) {
          iVar6 = FUN_01130984(param_1,param_2,2,0,0,0);
          iVar5 = iVar6 + iVar5;
          if (3 < local_408[0]) {
            iVar6 = FUN_01130984(param_1,param_2,3,0,0,0);
            iVar5 = iVar6 + iVar5;
            if (4 < local_408[0]) {
              iVar6 = FUN_01130984(param_1,param_2,4,0,0,0);
              iVar5 = iVar6 + iVar5;
              if (5 < local_408[0]) {
                iVar6 = FUN_01130984(param_1,param_2,5,0,0,0);
                iVar5 = iVar6 + iVar5;
                if (6 < local_408[0]) {
                  iVar6 = FUN_01130984(param_1,param_2,6,0,0,0);
                  iVar5 = iVar6 + iVar5;
                  if (7 < local_408[0]) {
                    uVar10 = 7;
                    do {
                      iVar6 = FUN_01130984(param_1,param_2,uVar10,0,0,0);
                      uVar10 = uVar10 + 1;
                      iVar5 = iVar6 + iVar5;
                    } while (uVar10 < local_408[0]);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}


