/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dfcb8; name: FUN_014dfcb8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_014dfcb8(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long **pplVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  long *local_628;
  char *local_620;
  undefined8 local_618;
  long *local_610;
  undefined8 uStack_608;
  undefined1 *local_600;
  char *pcStack_5f8;
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
  undefined1 local_20c;
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
  
  local_5d0 = local_5d0 & 0xffff000000000000;
  local_600 = &DAT_cbf29ce484222645;
  pcStack_5f8 = "";
  local_5e0 = 0;
  local_5f0 = 0;
  local_5e8 = (long *)0x0;
  local_5c8 = 0xffffffff00000000;
  uStack_5c0 = 0;
  uStack_5da = 0;
  local_5d8 = 0;
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
  plVar10 = local_5e8;
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
  local_ae = 1;
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
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_600 = (undefined1 *)0x9e34d3b89c2cd77a;
  pcStack_5f8 = "sd9130_trade";
  local_5f0 = 0xc;
  local_5e8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  local_5e8 = (long *)0x0;
  local_5e0 = (undefined6)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  uStack_5da = (undefined2)((ulong)*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388) >> 0x30);
  FUN_0125b8e0(&local_628,**(undefined8 **)(param_2 + 0x98));
  local_5b8 = (uint)uStack_608;
  uStack_5b4 = (undefined4)((ulong)uStack_608 >> 0x20);
  local_5c8 = local_618;
  uStack_5c0 = local_610;
  local_5d8 = SUB86(local_628,0);
  uStack_5d2 = (undefined2)((ulong)local_628 >> 0x30);
  local_5d0 = (ulong)local_620;
  FUN_0125b8e0(&local_628,*(undefined8 *)(*(long *)(param_2 + 0x98) + 8));
  local_590 = uStack_608;
  local_5a0 = local_618;
  uStack_598 = local_610;
  uStack_5b0 = SUB84(local_628,0);
  uStack_5ac = (undefined2)((ulong)local_628 >> 0x20);
  uStack_5aa = (undefined2)((ulong)local_628 >> 0x30);
  local_5a8 = (ulong)local_620;
  puVar17 = *(undefined8 **)(param_2 + 8);
  local_628._0_4_ = 0x200;
  local_640 = puVar17;
  plVar10 = (long *)FUN_00a246f0(local_70,puVar17,&local_628);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar17 = local_640;
  }
  local_628 = (long *)CONCAT44(local_628._4_4_,8);
  local_630._0_4_ = 0x40;
  FUN_014e1064(local_70,puVar17,&local_628,&local_630,&local_640);
  puVar17 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x18);
  plVar11 = (long *)(**(code **)*puVar17)(puVar17);
  puVar5 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar8 != 0))
  {
    uVar14 = FUN_009311a8();
    *(undefined8 *)puVar5 = uVar14;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar11 != (long *)puVar5) {
    for (plVar11 = (long *)*plVar11; plVar11 != (long *)puVar5; plVar11 = (long *)*plVar11) {
    }
  }
  local_628 = (long *)0x1aa1f04c9f0c24de;
  local_620 = "common/trade_demo.dat";
  local_618 = 0x15;
  local_610 = (long *)0x0;
  FUN_00d37bb4(&local_630,puVar17[0x15],&local_628,10);
  plVar11 = *(long **)(CONCAT44(local_630._4_4_,(undefined4)local_630) + 0x68);
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar18 = (long *)CONCAT44(local_630._4_4_,(undefined4)local_630);
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))();
    }
  }
  if (local_610 != (long *)0x0) {
    (**(code **)(*local_610 + 0x20))();
  }
  local_628 = (long *)CONCAT44(local_628._4_4_,0x200);
  lVar16 = FUN_00a246f0(&local_630,local_640,&local_628);
  plVar18 = local_2b8;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_2b8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar12 = plVar18 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  local_628 = (long *)CONCAT44(local_628._4_4_,0x200);
  local_2b8 = (long *)lVar16;
  lVar16 = FUN_00a246f0(&local_630,local_640,&local_628);
  plVar18 = local_2b0;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_2b0 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar12 = plVar18 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  local_628 = (long *)CONCAT44(local_628._4_4_,0x200);
  local_2b0 = (long *)lVar16;
  lVar16 = FUN_00a246f0(&local_630,local_640,&local_628);
  plVar18 = local_2a8;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_2a8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar12 = plVar18 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  plVar18 = local_70[0];
  local_2a8 = (long *)lVar16;
  FUN_010c6004(local_70[0],0,**(undefined8 **)(param_2 + 0x98));
  plVar12 = (long *)FUN_01207f1c(&local_628,local_640,*(long *)(param_2 + 0x98) + 0x18);
  if (plVar12 != (long *)0x0) {
    plVar18 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar18 = local_70[0];
  }
  FUN_010c6478(plVar18,1,plVar12,*(undefined1 *)(*(long *)(param_2 + 0x98) + 0x16),
               *(undefined1 *)(*(long *)(param_2 + 0x98) + 0x15));
  FUN_010c6004(plVar18,2,*(undefined8 *)(*(long *)(param_2 + 0x98) + 8));
  uVar13 = FUN_014e0f10(param_2);
  bVar7 = (uVar13 & 1) == 0;
  pplVar3 = &local_628;
  if (bVar7) {
    pplVar3 = (long **)&local_630;
  }
  plVar19 = (long *)0x64f89410558a4020;
  if (bVar7) {
    plVar19 = (long *)0x64f89710558a4539;
  }
  *pplVar3 = plVar19;
  FUN_02c2e7d0(plVar11,pplVar3,plVar10);
  FUN_02c333a8(plVar18,local_2b8,plVar10);
  uVar13 = FUN_014e0f8c(param_2);
  bVar7 = (uVar13 & 1) == 0;
  pplVar3 = &local_628;
  if (bVar7) {
    pplVar3 = (long **)&local_630;
  }
  plVar19 = (long *)0xf518a1aad1ba5ad7;
  if (bVar7) {
    plVar19 = (long *)0x211f89b1332436c0;
  }
  *pplVar3 = plVar19;
  plVar19 = (long *)0xf518a2aad1ba5c8a;
  if (bVar7) {
    plVar19 = (long *)0x211f8cb133243bd9;
  }
  FUN_02c2e7d0(plVar11,pplVar3,plVar10);
  FUN_02c333a8(plVar18,local_2b0,plVar10);
  *pplVar3 = plVar19;
  FUN_02c2e7d0(plVar11,pplVar3,plVar10);
  FUN_02c333a8(plVar18,local_2a8,plVar10);
  plVar18 = plVar12 + 10;
  do {
    iVar8 = (int)*plVar18 + -1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar7) {
      *(int *)plVar18 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (local_70[0] != (long *)0x0) {
    lVar16 = local_70[0][0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar8 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *(int *)plVar11 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  plVar10 = *(long **)(lVar16 + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_014e0c60:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_640 = (undefined8 *)plVar10[0x18];
  local_70[0] = local_640 + plVar10[0x19];
  FUN_014e14f0(&local_628,&local_640,local_70);
  if (local_628 != (long *)(plVar10[0x18] + plVar10[0x19] * 8)) {
    plVar11 = (long *)*local_628;
    puVar17 = (undefined8 *)(**(code **)plVar11[10])(plVar11 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar8 != 0)) {
      uVar14 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar14;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar17 != (undefined8 *)0x0) {
      while (puVar17 != (undefined8 *)PTR_DAT_0437c680) {
        puVar17 = (undefined8 *)*puVar17;
        plVar18 = (long *)0x0;
        if (puVar17 == (undefined8 *)0x0) goto LAB_014e05ec;
      }
      lVar16 = plVar11[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_014e0c60;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar18 = plVar11;
      } while (cVar4 != '\0');
LAB_014e05ec:
      if (plVar18 == (long *)0x0) goto LAB_014e0620;
      FUN_01e564f8(&local_628,plVar18);
      plVar11 = local_628;
      puVar6 = PTR_DAT_0437c668;
      if (local_628 != (long *)0x0) {
        if (*(int *)((long)local_628 + 0xc) == 0) {
LAB_014e0cf8:
          plVar11 = (long *)0x0;
          plVar12 = local_628;
        }
        else {
          piVar1 = (int *)((long)local_628 + 0xc);
          iVar8 = *(int *)((long)local_628 + 0xc);
          while( true ) {
            plVar12 = (long *)plVar11[2];
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_014e0cf8;
              if (plVar12 == (long *)PTR_DAT_0437c670) break;
              plVar12 = (long *)*plVar12;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar8) break;
            ClearExclusiveLocal();
LAB_014e08d4:
            iVar8 = iVar9;
            if (iVar9 == 0) goto LAB_014e0cf8;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_014e08d4;
          lVar16 = plVar11[3];
          plVar11 = (long *)0x0;
          plVar12 = local_628;
          if (lVar16 != 0) {
            plVar11 = (long *)(lVar16 + -0x50);
          }
        }
        local_628 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar19 = plVar12 + 1;
          do {
            iVar8 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *(int *)plVar19 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            plVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_640 = (undefined8 *)*plVar12;
            FUN_02a44274(lVar16 + 0xd8,&local_640);
          }
        }
        if (plVar11 != (long *)0x0) {
          plVar12 = (long *)plVar11[0xe];
          if (plVar12 != (long *)0x0) {
            lVar16 = plVar12[0xb];
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_014e0c60;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar14;
            }
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar16 = plVar12[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
              plVar19 = (long *)plVar18[0x1a];
            }
            else {
              plVar19 = (long *)plVar18[0x1a];
            }
            if (plVar19 != (long *)0x0) {
              lVar16 = plVar19[0xb];
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_014e0c60;
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar14;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              lVar16 = plVar19[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar19 + 0x20))(plVar19);
              }
              (**(code **)(*plVar12 + 0x10))(&local_628,plVar12);
              local_640 = (undefined8 *)0x0;
              uStack_638 = 0;
              FUN_0109c02c(&local_640,&local_628);
              plVar12 = local_628;
              if (local_628 != (long *)0x0) {
                plVar2 = local_628 + 1;
                do {
                  iVar8 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *(int *)plVar2 = iVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 == 0) {
                  local_628[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (long *)*plVar12;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              FUN_0125d688(&local_a8,&local_640);
              puVar17 = local_640;
              if (local_640 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_640 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar8 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 + -1 == 0) {
                  local_640[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_628 = (long *)*puVar17;
                  FUN_02a44274(lVar16 + 0xd8,&local_628);
                }
              }
              (**(code **)(*plVar19 + 0x10))(&local_628,plVar19);
              local_640 = (undefined8 *)0x0;
              uStack_638 = 0;
              FUN_0125d18c(&local_640,&local_628);
              plVar12 = local_628;
              if (local_628 != (long *)0x0) {
                plVar19 = local_628 + 1;
                do {
                  iVar8 = (int)*plVar19 + -1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar7) {
                    *(int *)plVar19 = iVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 == 0) {
                  local_628[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (long *)*plVar12;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              FUN_0125d988(&local_98,&local_640);
              puVar17 = local_640;
              if (local_640 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_640 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar8 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 + -1 == 0) {
                  local_640[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_628 = (long *)*puVar17;
                  FUN_02a44274(lVar16 + 0xd8,&local_628);
                }
              }
            }
          }
          lVar16 = plVar11[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      lVar16 = plVar18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
  }
LAB_014e0620:
  uVar14 = *(undefined8 *)(param_2 + 8);
  puVar17 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x18);
  plVar11 = (long *)(**(code **)*puVar17)(puVar17);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar8 != 0))
  {
    uVar15 = FUN_009311a8();
    *(undefined8 *)puVar5 = uVar15;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar11 != (long *)puVar5) {
    for (plVar11 = (long *)*plVar11; plVar11 != (long *)puVar5; plVar11 = (long *)*plVar11) {
    }
  }
  local_628 = (long *)puVar17[0xc];
  local_620 = (char *)puVar17[0xd];
  lVar16 = FUN_01390af8(&local_640,uVar14,&local_600,&local_628);
  *param_1 = lVar16;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x50);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  FUN_0125ba14(&local_600);
  return;
}


