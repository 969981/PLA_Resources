/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113442c; name: FUN_0113442c
 */


/* WARNING: Removing unreachable block (ram,0x011347f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0113442c(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long local_458;
  int local_450;
  undefined2 local_44c;
  undefined2 uStack_44a;
  uint uStack_448;
  undefined1 uStack_444;
  undefined1 uStack_443;
  undefined8 local_440;
  uint local_438;
  undefined4 local_434;
  uint uStack_430;
  undefined2 uStack_42c;
  char cStack_42a;
  uint local_428 [2];
  int local_420 [3];
  char local_414 [4];
  uint local_410 [4];
  undefined1 *puStack_400;
  undefined1 *local_3f8;
  int local_3f0 [8];
  undefined1 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined1 *puStack_3a0;
  undefined1 *local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 local_370;
  undefined8 local_36c;
  undefined8 local_360;
  undefined4 local_358;
  undefined1 local_354;
  undefined4 local_350;
  undefined8 local_348;
  undefined1 *puStack_340;
  undefined1 *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_30c;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined1 *puStack_2e0;
  undefined1 *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2ac;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined1 local_294;
  undefined4 local_290;
  undefined8 local_288;
  undefined1 *puStack_280;
  undefined1 *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined4 local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar12 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar12;
  plVar13 = *(long **)(*(long *)(lVar12 + 0x50) + 0x30);
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar12 = plVar13[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
    *(undefined8 *)(lVar12 + 0x10) = uVar9;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_44c = 0;
  uStack_44a = 0;
  uStack_444 = 0;
  uStack_443 = 0;
  local_458 = *(long *)(param_1 + 0x1f440);
  uVar9 = *(undefined8 *)((long)param_4 + 0xf);
  local_440 = *param_4;
  uStack_430 = (uint)((ulong)uVar9 >> 8);
  uStack_42c = (undefined2)((ulong)uVar9 >> 0x28);
  cStack_42a = (char)((ulong)uVar9 >> 0x38);
  local_438 = (uint)param_4[1];
  local_434 = (undefined4)((ulong)param_4[1] >> 0x20);
  uVar7 = uStack_430;
  local_450 = param_2;
  uStack_448 = param_3;
  if (uStack_430 == 0) {
    uVar7 = FUN_02c6849c(*(undefined8 *)(local_458 + 0x98));
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar14 = _DAT_000001c8;
  plVar10 = *(long **)(lVar12 + 0xd0);
  if (plVar10 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar10 = _DAT_000001c8 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar14 = (long *)plVar10[0x39];
    if (plVar14 != (long *)0x0) {
      plVar3 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  local_428[0] = 0;
  local_420[0] = 0;
  local_420[1] = 0;
  local_420[2] = 0;
  local_414[0] = '\x12';
  local_410[0] = 5;
  local_3f8 = &DAT_cbf29ce484222645;
  local_3f0[0] = 0;
  local_3f0[1] = 0;
  local_410[2] = 0x9ab5f3d9;
  local_410[3] = 0xc0ea4754;
  puStack_400 = &DAT_cbf29ce484222645;
  local_3cc = 0;
  local_3f0[6] = 0;
  local_3f0[7] = 0;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b4 = 0x12;
  local_3b0 = 5;
  local_3f0[2] = 0;
  local_3f0[3] = 0;
  local_3f0[4] = 0;
  local_3f0[5] = 0;
  local_3a8 = 0xc0ea47549ab5f3d9;
  puStack_3a0 = &DAT_cbf29ce484222645;
  local_398 = &DAT_cbf29ce484222645;
  uStack_390 = 0;
  local_36c = 0;
  local_370 = 0;
  local_388 = 0;
  local_360 = 0;
  local_358 = 0;
  local_354 = 0x12;
  local_350 = 5;
  local_380 = 0;
  uStack_378 = 0;
  local_348 = 0xc0ea47549ab5f3d9;
  puStack_340 = &DAT_cbf29ce484222645;
  local_338 = &DAT_cbf29ce484222645;
  uStack_330 = 0;
  local_30c = 0;
  local_318 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_2f4 = 0x12;
  local_2f0 = 5;
  local_2e8 = 0xc0ea47549ab5f3d9;
  puStack_2e0 = &DAT_cbf29ce484222645;
  local_2d8 = &DAT_cbf29ce484222645;
  uStack_2d0 = 0;
  local_2ac = 0;
  local_2b0 = 0;
  local_2c8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_294 = 0x12;
  local_290 = 5;
  local_288 = 0xc0ea47549ab5f3d9;
  puStack_280 = &DAT_cbf29ce484222645;
  local_278 = &DAT_cbf29ce484222645;
  uStack_270 = 0;
  local_24c = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  local_238 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_234 = 0x12;
  local_230 = 5;
  local_228 = 0xc0ea47549ab5f3d9;
  local_220 = &DAT_cbf29ce484222645;
  local_218 = &DAT_cbf29ce484222645;
  local_1ec = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0x12;
  local_1d0 = 5;
  local_1c8 = 0xc0ea47549ab5f3d9;
  local_1c0 = &DAT_cbf29ce484222645;
  local_1b8 = &DAT_cbf29ce484222645;
  local_18c = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0x12;
  local_170 = 5;
  local_168 = 0xc0ea47549ab5f3d9;
  local_160 = &DAT_cbf29ce484222645;
  local_158 = &DAT_cbf29ce484222645;
  local_12c = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0x12;
  local_110 = 5;
  local_108 = 0xc0ea47549ab5f3d9;
  local_100 = &DAT_cbf29ce484222645;
  local_f8 = &DAT_cbf29ce484222645;
  local_cc = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0x12;
  local_b0 = 5;
  local_a8 = 0xc0ea47549ab5f3d9;
  local_a0 = &DAT_cbf29ce484222645;
  local_98 = &DAT_cbf29ce484222645;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_013f7198(*(undefined8 *)(plVar14[0xb] + 8),uVar7,local_428);
  if (local_428[0] != 0) {
    lVar12 = 0;
    uVar4 = param_3 & 0xff;
    do {
      if (*(int *)((long)local_420 + lVar12) == param_2) {
        if (param_2 == 1) {
          if (*(int *)((long)local_420 + lVar12 + 8) == local_440._4_4_) goto LAB_01134840;
        }
        else if (param_2 == 10) {
          if (*(uint *)((long)local_410 + lVar12) == (local_438 & 0xff)) goto LAB_01134840;
        }
        else if ((param_2 != 2) || (local_414[lVar12] == (char)local_440)) {
LAB_01134840:
          iVar8 = *(int *)((long)local_410 + lVar12 + 0x34);
          if (iVar8 != 0) {
            iVar15 = *(int *)((long)local_410 + lVar12 + 0x20);
            if ((int)uVar4 <= iVar15) goto LAB_011348d4;
            if (iVar8 != 1) {
              iVar15 = *(int *)((long)local_410 + lVar12 + 0x24);
              if ((int)uVar4 <= iVar15) goto LAB_011348d4;
              if (iVar8 != 2) {
                iVar15 = *(int *)((long)local_410 + lVar12 + 0x28);
                if ((int)uVar4 <= iVar15) goto LAB_011348d4;
                if (iVar8 != 3) {
                  iVar15 = *(int *)((long)local_410 + lVar12 + 0x2c);
                  if ((int)uVar4 <= iVar15) goto LAB_011348d4;
                  if (iVar8 != 4) {
                    iVar15 = *(int *)((long)local_410 + lVar12 + 0x30);
                    if ((int)uVar4 <= iVar15) goto LAB_011348d4;
                    if (iVar8 != 5) break;
                  }
                }
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 0x60;
      if ((ulong)local_428[0] * 0x60 == lVar12) goto LAB_011348d0;
    } while (lVar12 != 0x3c0);
                    /* WARNING: Subroutine does not return */
    FUN_01137490();
  }
LAB_011348d0:
  iVar15 = 0;
LAB_011348d4:
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  local_44c = (undefined2)iVar15;
  uStack_44a = (undefined2)((uint)iVar15 >> 0x10);
  uVar9 = FUN_011364c8(uVar7,param_2,&local_440);
  uStack_444 = (uint)uVar9 <= param_3;
  uStack_443 = 0;
  if (param_2 == 0) {
    if ((((int)uVar7 < 0x3d5) && (*(short *)(param_1 + (ulong)uVar7 * 0x58 + 0xe6) == 1)) &&
       (cStack_42a != '\0')) {
      uStack_443 = 1;
    }
  }
  else {
    uVar11 = FUN_011360a0(uVar9,uVar7,param_2,&local_440);
    uVar4 = uStack_448;
    if (((uVar11 & 1) == 0) || (uVar7 = FUN_011364c8(uVar7,local_450,&local_440), uVar7 < uVar4))
    goto LAB_0113495c;
  }
  FUN_01469138(plVar13,&local_458);
LAB_0113495c:
  lVar12 = plVar13[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return;
}


