/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125a874; name: FUN_0125a874
 */


void FUN_0125a874(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_640;
  undefined8 uStack_638;
  long *local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  long *local_608;
  long *local_600;
  undefined1 *puStack_5f8;
  undefined8 local_5f0;
  long *local_5e8;
  undefined6 local_5e0;
  undefined2 uStack_5da;
  undefined6 local_5d8;
  undefined2 uStack_5d2;
  ulong local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  uint local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined2 uStack_5ac;
  undefined2 uStack_5aa;
  ulong local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  long local_590;
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
  undefined1 auStack_3fc [324];
  long *local_2b8;
  long *local_2b0;
  long *local_2a8;
  undefined4 local_218;
  undefined1 local_214;
  undefined4 local_210;
  byte local_20c;
  undefined4 local_208;
  undefined1 local_204;
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
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  plVar11 = *(long **)(param_1 + 0x78);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_5d0 = local_5d0 & 0xffff000000000000;
  local_5e0 = 0;
  local_600 = (long *)&DAT_cbf29ce484222645;
  puStack_5f8 = &DAT_03996322;
  local_5f0 = 0;
  local_5e8 = (long *)0x0;
  uStack_5da = 0;
  local_5d8 = 0;
  local_5c8 = 0xffffffff00000000;
  uStack_5c0 = 0;
  uStack_5b4 = 0;
  uStack_5b0 = 0;
  local_5b8 = local_5b8 & 0xffffff00;
  uStack_5ac = 0;
  local_5a8 = local_5a8 & 0xffff000000000000;
  uStack_588 = 0;
  local_590 = (ulong)(uint3)((uint)(undefined4)local_590 >> 8) << 8;
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
  local_214 = 0;
  local_20c = 0;
  local_204 = 0;
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
  FUN_00947cf8(&local_640,"sd9110_evolution");
  FUN_02a47560(&local_630,&local_640);
  plVar12 = local_5e8;
  local_600 = local_630;
  puStack_5f8 = (undefined1 *)local_628;
  local_5f0 = local_620;
  local_5e8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  local_5e8 = (long *)local_618;
  local_618 = 0;
  if (local_640 != (long *)0x0) {
    (**(code **)(*local_640 + 0x20))();
  }
  local_5e0 = (undefined6)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  uStack_5da = (undefined2)((ulong)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388) >> 0x30);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  FUN_0286b7f4(&local_608);
  FUN_027fd7ec(local_608,0);
  FUN_0125b8e0(&local_630,*(undefined8 *)(param_1 + 0xa0));
  local_5b8 = (uint)uStack_610;
  uStack_5b4 = (undefined4)((ulong)uStack_610 >> 0x20);
  local_5c8 = local_620;
  uStack_5c0 = local_618;
  local_5d8 = SUB86(local_630,0);
  uStack_5d2 = (undefined2)((ulong)local_630 >> 0x30);
  local_5d0 = local_628;
  FUN_02c62bd4(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(*(long *)(param_1 + 0x68) + 0xc));
  FUN_0125b8e0(&local_630,*(undefined8 *)(param_1 + 0xa0));
  local_590 = uStack_610;
  local_5a0 = local_620;
  uStack_598 = local_618;
  uStack_5b0 = SUB84(local_630,0);
  uStack_5ac = (undefined2)((ulong)local_630 >> 0x20);
  uStack_5aa = (undefined2)((ulong)local_630 >> 0x30);
  local_5a8 = local_628;
  FUN_010c6004(*(undefined8 *)(param_1 + 0x98),0,**(undefined8 **)(param_1 + 0x68));
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xa0));
  FUN_02c36a60(uVar8,1,uVar5);
  FUN_010c6004(*(undefined8 *)(param_1 + 0x98),2,*(undefined8 *)(param_1 + 0xa0));
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x10) != '\0') {
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_630 = (long *)0xca1cc2bee54179c3;
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0xa8),&local_630,plVar11);
    FUN_02c333a8(*(undefined8 *)(param_1 + 0x98),plVar12,plVar11);
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar14 = plVar12;
    if (local_2b0 != (long *)0x0) {
      plVar13 = local_2b0 + 10;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        lVar10 = *local_2b0;
        local_2b0 = plVar12;
        (**(code **)(lVar10 + 0x10))();
        plVar14 = local_2b0;
      }
    }
    local_2b0 = plVar14;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_214 = *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x10);
  local_218 = 1000;
  plVar12 = *(long **)(param_1 + 0x80);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_630 = (long *)0xf7b716d1cb84b5e1;
  FUN_02c2e7d0(*(undefined8 *)(param_1 + 0xa8),&local_630,plVar11);
  FUN_02c333a8(*(undefined8 *)(param_1 + 0x98),plVar12,plVar11);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_2b8 == (long *)0x0) {
LAB_0125adc0:
    local_2b8 = plVar12;
    if (plVar12 == (long *)0x0) goto LAB_0125addc;
LAB_0125adc4:
    plVar14 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_0125addc;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    plVar12 = *(long **)(param_1 + 0x90);
  }
  else {
    plVar14 = local_2b8 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_0125adc0;
    lVar10 = *local_2b8;
    local_2b8 = plVar12;
    (**(code **)(lVar10 + 0x10))();
    if (plVar12 != (long *)0x0) goto LAB_0125adc4;
LAB_0125addc:
    plVar12 = *(long **)(param_1 + 0x90);
  }
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_630 = (long *)&DAT_98e44d952c64921f;
  FUN_02c2e7d0(*(undefined8 *)(param_1 + 0xa8),&local_630,plVar11);
  FUN_02c333a8(*(undefined8 *)(param_1 + 0x98),plVar12,plVar11);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = local_2a8;
  plVar13 = plVar12;
  if (local_2a8 != (long *)0x0) {
    plVar15 = local_2a8 + 10;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      lVar10 = *local_2a8;
      local_2a8 = plVar12;
      plVar14 = (long *)(**(code **)(lVar10 + 0x10))();
      plVar13 = local_2a8;
    }
  }
  local_2a8 = plVar13;
  local_20c = FUN_0125b934(plVar14,*(undefined8 *)(param_1 + 0xa0));
  local_210 = 0x3e9;
  local_20c = local_20c & 1;
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar12 = *(long **)(lVar10 + 0xc0);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0125b6d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_640 = (long *)plVar12[0x18];
  local_70[0] = local_640 + plVar12[0x19];
  FUN_0125d5b0(&local_630,&local_640,local_70);
  if (local_630 != (long *)(plVar12[0x18] + plVar12[0x19] * 8)) {
    plVar14 = (long *)*local_630;
    puVar9 = (undefined8 *)(**(code **)plVar14[10])(plVar14 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar7 != 0)) {
      uVar8 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar8;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_0125af6c:
      if (puVar9 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0125b268;
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0125b6d0;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar13 = plVar14;
      } while (cVar3 != '\0');
LAB_0125afb0:
      if (plVar13 == (long *)0x0) goto LAB_0125afe4;
      FUN_01e564f8(&local_630,plVar13);
      plVar14 = local_630;
      if (local_630 != (long *)0x0) {
        if (*(int *)((long)local_630 + 0xc) == 0) {
LAB_0125b774:
          plVar15 = (long *)0x0;
          plVar16 = local_630;
        }
        else {
          piVar1 = (int *)((long)local_630 + 0xc);
          iVar7 = *(int *)((long)local_630 + 0xc);
          while( true ) {
            plVar15 = (long *)plVar14[2];
            if (((*PTR_DAT_0437c668 & 1) != 0) ||
               (iVar6 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar6 == 0)) {
              plVar16 = local_630;
              if (plVar15 != (long *)0x0) goto LAB_0125b360;
              break;
            }
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
              uVar8 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar8;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437c668);
            plVar16 = local_630;
            if (plVar15 == (long *)0x0) break;
LAB_0125b360:
            while (plVar16 = local_630, plVar15 != (long *)PTR_DAT_0437c670) {
              plVar15 = (long *)*plVar15;
              if (plVar15 == (long *)0x0) {
                plVar15 = (long *)0x0;
                goto joined_r0x0125b39c;
              }
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar7) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar14[3];
                plVar15 = (long *)0x0;
                if (lVar10 != 0) {
                  plVar15 = (long *)(lVar10 + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = iVar6;
            if (iVar6 == 0) goto LAB_0125b774;
          }
        }
joined_r0x0125b39c:
        local_630 = plVar16;
        if (plVar16 != (long *)0x0) {
          plVar14 = plVar16 + 1;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 0) {
            plVar16[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_640 = (long *)*plVar16;
            FUN_02a44274(lVar10 + 0xd8,&local_640);
          }
        }
        if (plVar15 != (long *)0x0) {
          plVar14 = (long *)plVar15[0xe];
          if (plVar14 != (long *)0x0) {
            lVar10 = plVar14[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0125b6d0;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar8;
            }
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            lVar10 = plVar14[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
              plVar16 = (long *)plVar13[0x1a];
            }
            else {
              plVar16 = (long *)plVar13[0x1a];
            }
            if (plVar16 != (long *)0x0) {
              lVar10 = plVar16[0xb];
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0125b6d0;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar10 = plVar16[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              (**(code **)(*plVar14 + 0x10))(&local_630,plVar14);
              local_640 = (long *)0x0;
              uStack_638 = 0;
              FUN_0109c02c(&local_640,&local_630);
              plVar14 = local_630;
              if (local_630 != (long *)0x0) {
                plVar2 = local_630 + 1;
                do {
                  iVar7 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  local_630[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_70[0] = (long *)*plVar14;
                  FUN_02a44274(lVar10 + 0xd8,local_70);
                }
              }
              FUN_0125d688(&local_a8,&local_640);
              plVar14 = local_640;
              if (local_640 != (long *)0x0) {
                plVar2 = local_640 + 1;
                do {
                  iVar7 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  local_640[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_630 = (long *)*plVar14;
                  FUN_02a44274(lVar10 + 0xd8,&local_630);
                }
              }
              (**(code **)(*plVar16 + 0x10))(&local_630,plVar16);
              local_640 = (long *)0x0;
              uStack_638 = 0;
              FUN_0125d18c(&local_640,&local_630);
              plVar14 = local_630;
              if (local_630 != (long *)0x0) {
                plVar16 = local_630 + 1;
                do {
                  iVar7 = (int)*plVar16 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar4) {
                    *(int *)plVar16 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  local_630[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_70[0] = (long *)*plVar14;
                  FUN_02a44274(lVar10 + 0xd8,local_70);
                }
              }
              FUN_0125d988(&local_98,&local_640);
              plVar14 = local_640;
              if (local_640 != (long *)0x0) {
                plVar16 = local_640 + 1;
                do {
                  iVar7 = (int)*plVar16 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar4) {
                    *(int *)plVar16 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  local_640[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_630 = (long *)*plVar14;
                  FUN_02a44274(lVar10 + 0xd8,&local_630);
                }
              }
            }
          }
          lVar10 = plVar15[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
      }
      lVar10 = plVar13[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
LAB_0125afe4:
  local_630 = *(long **)(param_2 + 0xb0);
  local_628 = *(undefined8 *)(param_2 + 0xb8);
  lVar10 = FUN_0125dc88(&local_640,*(undefined8 *)(param_1 + 8),&local_600,&local_630);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      *(long *)(param_1 + 0x70) = lVar10;
      goto joined_r0x0125b030;
    }
  }
  *(long *)(param_1 + 0x70) = lVar10;
joined_r0x0125b030:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (local_608 != (long *)0x0) {
    lVar10 = local_608[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_608 + 0x20))();
    }
  }
  FUN_0125ba14(&local_600);
  plVar12 = plVar11 + 10;
  do {
    iVar7 = (int)*plVar12 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *(int *)plVar12 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return;
LAB_0125b268:
  puVar9 = (undefined8 *)*puVar9;
  plVar13 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_0125afb0;
  goto LAB_0125af6c;
}


