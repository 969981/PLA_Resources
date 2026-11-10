/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d2814; name: FUN_014d2814
 */


void FUN_014d2814(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *plVar21;
  long *local_638;
  undefined8 uStack_630;
  long *local_628;
  long *local_620;
  char *pcStack_618;
  undefined8 local_610;
  long *local_608;
  long *local_600;
  undefined1 *local_5f8;
  undefined8 local_5f0;
  long *local_5e8;
  undefined6 uStack_5e0;
  undefined2 local_5da;
  undefined6 uStack_5d8;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8;
  undefined8 local_5b4;
  undefined2 local_5ac;
  undefined4 local_5a8;
  undefined2 local_5a4;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined1 local_590;
  undefined4 local_58c;
  undefined4 uStack_588;
  undefined2 local_584;
  undefined4 local_580;
  undefined2 local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568;
  undefined8 local_564;
  undefined2 local_55c;
  undefined4 local_558;
  undefined2 local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined8 local_53c;
  undefined2 local_534;
  undefined4 local_530;
  undefined2 local_52c;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined2 local_50c;
  undefined4 local_508;
  undefined2 local_504;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined1 local_4f0;
  undefined8 local_4ec;
  undefined2 local_4e4;
  undefined4 local_4e0;
  undefined2 local_4dc;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8;
  undefined8 local_4c4;
  undefined2 local_4bc;
  undefined4 local_4b8;
  undefined2 local_4b4;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined1 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined2 local_494;
  undefined4 local_490;
  undefined2 local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined2 local_46c;
  undefined4 local_468;
  undefined2 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined1 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined2 local_444;
  undefined4 local_440;
  undefined2 local_43c;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined2 local_41c;
  undefined4 local_418;
  undefined2 local_414;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined1 auStack_3fc [484];
  undefined4 local_218;
  undefined1 local_214 [4];
  undefined4 local_210;
  undefined1 local_20c [4];
  undefined4 local_208;
  undefined1 local_204 [4];
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  long *local_70 [2];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  local_5d0 = 0;
  local_5cc = 0;
  local_600 = (long *)&DAT_cbf29ce484222645;
  local_5f8 = &DAT_03996322;
  local_5f0 = 0;
  local_5c8 = 0xffffffff00000000;
  uStack_5c0 = 0;
  local_5e8 = (long *)0x0;
  uStack_5e0 = 0;
  local_5da = 0;
  uStack_5d8 = 0;
  local_5b4 = 0;
  local_5b8 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_58c = 0;
  uStack_588 = 0;
  local_590 = 0;
  local_584 = 0;
  local_580 = 0;
  local_57c = 0;
  local_5a0 = 0xffffffff00000000;
  uStack_598 = 0;
  local_578 = 0xffffffff00000000;
  uStack_570 = 0;
  local_564 = 0;
  local_568 = 0;
  local_55c = 0;
  local_558 = 0;
  local_554 = 0;
  local_550 = 0xffffffff00000000;
  uStack_548 = 0;
  local_53c = 0;
  local_540 = 0;
  local_534 = 0;
  local_530 = 0;
  local_52c = 0;
  local_510 = 0;
  local_514 = 0;
  local_518 = 0;
  local_50c = 0;
  local_508 = 0;
  local_504 = 0;
  local_528 = 0xffffffff00000000;
  uStack_520 = 0;
  local_500 = 0xffffffff00000000;
  uStack_4f8 = 0;
  local_4ec = 0;
  local_4f0 = 0;
  local_4e4 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  local_4d8 = 0xffffffff00000000;
  uStack_4d0 = 0;
  local_4c4 = 0;
  local_4c8 = 0;
  local_4bc = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_49c = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_494 = 0;
  local_490 = 0;
  local_48c = 0;
  local_474 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_464 = 0;
  local_44c = 0;
  local_450 = 0;
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_430 = 0;
  local_438 = 0xffffffff00000000;
  local_424 = 0;
  local_428 = 0;
  local_420 = 0;
  local_41c = 0;
  local_418 = 0;
  local_414 = 0;
  local_408 = 0;
  local_410 = 0xffffffff00000000;
  local_400 = 0;
  local_4b0 = 0xffffffff00000000;
  uStack_4a8 = 0;
  local_488 = 0xffffffff00000000;
  uStack_480 = 0;
  local_460 = 0xffffffff00000000;
  uStack_458 = 0;
  memset(auStack_3fc,0,0x1e4);
  local_218 = 0xffffffff;
  local_210 = 0xffffffff;
  local_208 = 0xffffffff;
  local_200 = 0xffffffff;
  local_1f8 = 0xffffffff;
  local_1f0 = 0xffffffff;
  local_1e8 = 0xffffffff;
  local_1e0 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_1d0 = 0xffffffff;
  local_1c8 = 0xffffffff;
  local_1c0 = 0xffffffff;
  local_1b8 = 0xffffffff;
  local_1b0 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_1a0 = 0xffffffff;
  local_198 = 0xffffffff;
  local_190 = 0xffffffff;
  local_188 = 0xffffffff;
  local_180 = 0xffffffff;
  local_178 = 0xffffffff;
  local_170 = 0xffffffff;
  local_168 = 0xffffffff;
  local_160 = 0xffffffff;
  local_158 = 0xffffffff;
  local_150 = 0xffffffff;
  local_148 = 0xffffffff;
  local_140 = 0xffffffff;
  local_138 = 0xffffffff;
  local_130 = 0xffffffff;
  local_128 = 0xffffffff;
  local_120 = 0xffffffff;
  local_118 = 0xffffffff;
  local_110 = 0xffffffff;
  local_108 = 0xffffffff;
  local_100 = 0xffffffff;
  local_f8 = 0xffffffff;
  local_f0 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_e0 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_d0 = 0xffffffff;
  local_c8 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_214[0] = 0;
  local_20c[0] = 0;
  local_204[0] = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_15c = 0;
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ae = 1;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_00947cf8(&local_638,"sd9010_title");
  FUN_02a47560(&local_620,&local_638);
  plVar15 = local_5e8;
  local_600 = local_620;
  local_5f8 = pcStack_618;
  local_5f0 = local_610;
  local_5e8 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  local_5e8 = local_608;
  local_608 = (long *)0x0;
  if (local_638 != (long *)0x0) {
    (**(code **)(*local_638 + 0x20))();
  }
  puVar6 = PTR_DAT_04379558;
  uStack_5e0 = (undefined6)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  local_5da = (undefined2)((ulong)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388) >> 0x30);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_628);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  puVar16 = local_20c;
  local_620 = (long *)0x3c20fa092f91efd3;
  pcStack_618 = "FSYS_SCENARIO_CLEARED_URA";
  local_610 = 0x19;
  local_608 = (long *)0x0;
  uVar11 = FUN_010f4bb4(local_628,&local_620);
  if (local_608 != (long *)0x0) {
    (**(code **)(*local_608 + 0x20))();
  }
  if ((uVar11 & 1) == 0) {
    local_620 = (long *)0xf9ee1131429348c7;
    pcStack_618 = "FSYS_SCENARIO_CLEARED_OMOTE";
    local_610 = 0x1b;
    local_608 = (long *)0x0;
    uVar11 = FUN_010f4bb4(local_628,&local_620);
    if (local_608 != (long *)0x0) {
      (**(code **)(*local_608 + 0x20))();
    }
    if ((uVar11 & 1) != 0) {
      bVar5 = false;
      local_208 = 0x3f2;
      goto LAB_014d2e98;
    }
    local_620 = (long *)0x76d7fcf31569a4a7;
    pcStack_618 = "FEVE_VISIBLE_CLACKHOLE02";
    puVar20 = local_214;
    local_610 = 0x18;
    local_608 = (long *)0x0;
    uVar11 = FUN_010f4bb4(local_628,&local_620);
    if (local_608 != (long *)0x0) {
      (**(code **)(*local_608 + 0x20))();
    }
    if ((uVar11 & 1) == 0) {
      local_620 = (long *)0xe8577624e985146e;
      pcStack_618 = "FSYS_ARRIVAL_AREA_05";
      local_610 = 0x14;
      local_608 = (long *)0x0;
      uVar11 = FUN_010f4bb4(local_628,&local_620);
      if (local_608 != (long *)0x0) {
        (**(code **)(*local_608 + 0x20))();
      }
      if ((uVar11 & 1) == 0) {
        local_620 = (long *)0xe8577724e9851621;
        pcStack_618 = "FSYS_ARRIVAL_AREA_04";
        local_610 = 0x14;
        local_608 = (long *)0x0;
        uVar11 = FUN_010f4bb4(local_628,&local_620);
        if (local_608 != (long *)0x0) {
          (**(code **)(*local_608 + 0x20))();
        }
        if ((uVar11 & 1) == 0) {
          local_620 = (long *)0xe8577824e98517d4;
          pcStack_618 = "FSYS_ARRIVAL_AREA_03";
          local_610 = 0x14;
          local_608 = (long *)0x0;
          uVar11 = FUN_010f4bb4(local_628,&local_620);
          if (local_608 != (long *)0x0) {
            (**(code **)(*local_608 + 0x20))();
          }
          if ((uVar11 & 1) == 0) {
            local_620 = (long *)0xe8577924e9851987;
            pcStack_618 = "FSYS_ARRIVAL_AREA_02";
            local_610 = 0x14;
            local_608 = (long *)0x0;
            uVar11 = FUN_010f4bb4(local_628,&local_620);
            if (local_608 != (long *)0x0) {
              (**(code **)(*local_608 + 0x20))();
            }
            if ((uVar11 & 1) == 0) {
              local_620 = (long *)&DAT_e8577a24e9851b3a;
              pcStack_618 = "FSYS_ARRIVAL_AREA_01";
              local_610 = 0x14;
              local_608 = (long *)0x0;
              uVar11 = FUN_010f4bb4(local_628,&local_620);
              if (local_608 != (long *)0x0) {
                (**(code **)(*local_608 + 0x20))();
              }
              if ((uVar11 & 1) == 0) {
                local_218 = 0x3f5;
                goto LAB_014d2fc4;
              }
              local_218 = 1000;
              local_210 = 0x7d5;
            }
            else {
              local_218 = 0x3e9;
              local_210 = 0x7d6;
            }
          }
          else {
            local_218 = 0x3ea;
            local_210 = 0x7d7;
          }
        }
        else {
          local_218 = 0x3eb;
          local_210 = 0x7d8;
        }
      }
      else {
        local_218 = 0x3ec;
        local_210 = 0x7d9;
      }
      local_214[0] = 1;
      puVar20 = puVar16;
    }
    else {
      local_218 = 0x3f4;
    }
LAB_014d2fc4:
    *puVar20 = 1;
    local_208 = 0x7da;
    puVar16 = local_204;
  }
  else {
    local_208 = 0x3f3;
    bVar5 = true;
LAB_014d2e98:
    local_204[0] = 1;
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
    FUN_01148dc4(&local_638);
    FUN_0113d58c(&local_620,local_638);
    plVar15 = local_620;
    if (local_608 != (long *)0x0) {
      (**(code **)(*local_608 + 0x20))();
    }
    if (local_638 != (long *)0x0) {
      lVar14 = local_638[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_638 + 0x20))();
      }
    }
    if ((long)plVar15 < -0x1c4414fb859bacaf) {
      if (plVar15 == (long *)0xe3bbea047a64519e) {
        local_218 = 0x3eb;
        if (bVar5) {
          local_210 = 0x3f0;
        }
        else {
          local_210 = 0x7d8;
        }
      }
      else {
LAB_014d3294:
        local_218 = 1000;
        if (bVar5) {
          local_210 = 0x3ed;
        }
        else {
          local_210 = 0x7d5;
        }
      }
    }
    else if ((long)plVar15 < -0x1c4412fb859ba949) {
      if (plVar15 == (long *)0xe3bbeb047a645351) {
        local_218 = 0x3ec;
        if (bVar5) {
          local_210 = 0x3f1;
        }
        else {
          local_210 = 0x7d9;
        }
      }
      else {
        if (plVar15 != (long *)0xe3bbec047a645504) goto LAB_014d3294;
        local_218 = 0x3e9;
        if (bVar5) {
          local_210 = 0x3ee;
        }
        else {
          local_210 = 0x7d6;
        }
      }
    }
    else {
      if (plVar15 != (long *)0xe3bbed047a6456b7) goto LAB_014d3294;
      local_218 = 0x3ea;
      if (bVar5) {
        local_210 = 0x3ef;
      }
      else {
        local_210 = 0x7d7;
      }
    }
    local_214[0] = 1;
  }
  *puVar16 = 1;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_014d3868:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_638 = (long *)plVar15[0x18];
  local_70[0] = local_638 + plVar15[0x19];
  FUN_014d3d10(&local_620,&local_638,local_70);
  if (local_620 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar18 = (long *)*local_620;
    puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_014d30b0:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_014d3344;
      lVar14 = plVar18[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_014d3868;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar17 = plVar18;
      } while (cVar3 != '\0');
LAB_014d30f4:
      if (plVar17 != (long *)0x0) {
        FUN_01e564f8(&local_620,plVar17);
        plVar18 = local_620;
        puVar6 = PTR_DAT_0437c670;
        if (local_620 != (long *)0x0) {
          if (*(int *)((long)local_620 + 0xc) == 0) {
LAB_014d3904:
            plVar19 = (long *)0x0;
            plVar21 = local_620;
          }
          else {
            piVar1 = (int *)((long)local_620 + 0xc);
            iVar10 = *(int *)((long)local_620 + 0xc);
            while( true ) {
              plVar19 = (long *)plVar18[2];
              if (((*PTR_DAT_0437c668 & 1) != 0) ||
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar9 == 0)) {
                plVar21 = local_620;
                if (plVar19 != (long *)0x0) goto LAB_014d3500;
                break;
              }
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar6 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437c668);
              plVar21 = local_620;
              if (plVar19 == (long *)0x0) break;
LAB_014d3500:
              while (plVar21 = local_620, plVar19 != (long *)puVar6) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) {
                  plVar19 = (long *)0x0;
                  goto joined_r0x014d3534;
                }
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar14 = plVar18[3];
                  plVar19 = (long *)0x0;
                  if (lVar14 != 0) {
                    plVar19 = (long *)(lVar14 + -0x50);
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = iVar9;
              if (iVar9 == 0) goto LAB_014d3904;
            }
          }
joined_r0x014d3534:
          local_620 = plVar21;
          if (plVar21 != (long *)0x0) {
            plVar18 = plVar21 + 1;
            do {
              iVar10 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *(int *)plVar18 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              plVar21[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_638 = (long *)*plVar21;
              FUN_02a44274(lVar14 + 0xd8,&local_638);
            }
          }
          if (plVar19 != (long *)0x0) {
            plVar18 = (long *)plVar19[0xe];
            if (plVar18 != (long *)0x0) {
              lVar14 = plVar18[0xb];
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_014d3868;
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar12;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar14 = plVar18[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
                plVar21 = (long *)plVar17[0x1a];
              }
              else {
                plVar21 = (long *)plVar17[0x1a];
              }
              if (plVar21 != (long *)0x0) {
                lVar14 = plVar21[0xb];
                if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_014d3868;
                if (*(long *)(lVar14 + 0x10) == 0) {
                  uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                  *(undefined8 *)(lVar14 + 0x10) = uVar12;
                }
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar14 = plVar21[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*plVar21 + 0x20))(plVar21);
                }
                (**(code **)(*plVar18 + 0x10))(&local_620,plVar18);
                local_638 = (long *)0x0;
                uStack_630 = 0;
                FUN_0109c02c(&local_638,&local_620);
                plVar18 = local_620;
                if (local_620 != (long *)0x0) {
                  plVar2 = local_620 + 1;
                  do {
                    iVar10 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *(int *)plVar2 = iVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 == 0) {
                    local_620[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_70[0] = (long *)*plVar18;
                    FUN_02a44274(lVar14 + 0xd8,local_70);
                  }
                }
                FUN_0125d688(&local_a8,&local_638);
                plVar18 = local_638;
                if (local_638 != (long *)0x0) {
                  plVar2 = local_638 + 1;
                  do {
                    iVar10 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *(int *)plVar2 = iVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 == 0) {
                    local_638[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_620 = (long *)*plVar18;
                    FUN_02a44274(lVar14 + 0xd8,&local_620);
                  }
                }
                (**(code **)(*plVar21 + 0x10))(&local_620,plVar21);
                local_638 = (long *)0x0;
                uStack_630 = 0;
                FUN_0125d18c(&local_638,&local_620);
                plVar18 = local_620;
                if (local_620 != (long *)0x0) {
                  plVar21 = local_620 + 1;
                  do {
                    iVar10 = (int)*plVar21 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar5) {
                      *(int *)plVar21 = iVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 == 0) {
                    local_620[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_70[0] = (long *)*plVar18;
                    FUN_02a44274(lVar14 + 0xd8,local_70);
                  }
                }
                FUN_0125d988(&local_98,&local_638);
                plVar18 = local_638;
                if (local_638 != (long *)0x0) {
                  plVar21 = local_638 + 1;
                  do {
                    iVar10 = (int)*plVar21 + -1;
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar5) {
                      *(int *)plVar21 = iVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 == 0) {
                    local_638[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_620 = (long *)*plVar18;
                    FUN_02a44274(lVar14 + 0xd8,&local_620);
                  }
                }
              }
            }
            lVar14 = plVar19[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
          }
        }
        lVar14 = plVar17[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
  }
  local_620 = *(long **)(param_2 + 0xb0);
  pcStack_618 = *(char **)(param_2 + 0xb8);
  lVar14 = FUN_0125dc88(&local_638,*(undefined8 *)(param_1 + 8),&local_600,&local_620);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x50);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar18 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 10;
    do {
      iVar10 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar18 + 0x10))();
      *(long *)(param_1 + 0x68) = lVar14;
      goto joined_r0x014d3144;
    }
  }
  *(long *)(param_1 + 0x68) = lVar14;
joined_r0x014d3144:
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (local_628 != (long *)0x0) {
    lVar14 = local_628[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_628 + 0x20))();
    }
  }
  FUN_0125ba14(&local_600);
  return;
LAB_014d3344:
  puVar13 = (undefined8 *)*puVar13;
  plVar17 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_014d30f4;
  goto LAB_014d30b0;
}


