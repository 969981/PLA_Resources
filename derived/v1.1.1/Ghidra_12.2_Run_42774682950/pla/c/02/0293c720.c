/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293c720; name: FUN_0293c720
 */


void FUN_0293c720(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined2 *)(param_1 + 0x1038) = 0xffff;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x10d0) = 0;
  *(undefined4 *)(param_1 + 0x104c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(byte *)(param_1 + 0x1128) = *(byte *)(param_1 + 0x1128) & 0xe4;
  *(undefined2 *)(param_1 + 0x106c) = 0;
  *(undefined1 *)(param_1 + 0x106f) = 0;
  *(undefined8 *)(param_1 + 0x10c4) = 0;
  *(undefined8 *)(param_1 + 0x1074) = 0;
  *(undefined8 *)(param_1 + 0x107c) = 0;
  *(undefined8 *)(param_1 + 0x1084) = 0;
  *(undefined8 *)(param_1 + 0x108c) = 0;
  *(undefined8 *)(param_1 + 0x1094) = 0;
  *(undefined8 *)(param_1 + 0x109c) = 0;
  *(undefined8 *)(param_1 + 0x10a4) = 0;
  *(undefined8 *)(param_1 + 0x10ac) = 0;
  *(undefined8 *)(param_1 + 0x10b4) = 0;
  *(undefined8 *)(param_1 + 0x10bc) = 0;
  *(undefined4 *)(param_1 + 0x10cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1068) = 0;
  *(undefined8 *)(param_1 + 0x1058) = 0;
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0xb8);
  *(undefined2 *)(param_1 + 100) = 0xffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xfe0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0x74) = 0xffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xfe2) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 200);
  *(undefined2 *)(param_1 + 0x84) = 0xffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xfe4) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  *(undefined2 *)(param_1 + 0x94) = 0xffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xfe6) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  auVar8 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(param_1 + 0xfe8) = 0;
  *(undefined2 *)(param_1 + 0x1028) = 0;
  *(undefined1 *)(param_1 + 0x102a) = 0;
  *(undefined1 *)(param_1 + 0x1033) = 0;
  *(undefined4 *)(param_1 + 0x1131) = 0;
  *(undefined8 *)(param_1 + 0x1129) = 0;
  *(undefined2 *)(param_1 + 0x1034) = 0x6464;
  *(undefined1 *)(param_1 + 0x1036) = 100;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0x200000000;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x182) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0x200000000;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  uVar9 = auVar8._8_8_;
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  uVar7 = auVar8._0_8_;
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  *(undefined8 *)(param_1 + 0x178) = uVar9;
  *(undefined8 *)(param_1 + 0x170) = uVar7;
  *(undefined8 *)(param_1 + 0x1f8) = uVar9;
  *(undefined8 *)(param_1 + 0x1f0) = uVar7;
  *(undefined1 *)(param_1 + 0x202) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0x200000000;
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = uVar9;
  *(undefined8 *)(param_1 + 0x270) = uVar7;
  *(undefined1 *)(param_1 + 0x282) = 0;
  *(undefined8 *)(param_1 + 0x284) = 0x200000000;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  *(undefined2 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  *(undefined8 *)(param_1 + 0x2f0) = uVar7;
  *(undefined1 *)(param_1 + 0x302) = 0;
  *(undefined8 *)(param_1 + 0x304) = 0x200000000;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x368) = 0;
  *(undefined2 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x378) = uVar9;
  *(undefined8 *)(param_1 + 0x370) = uVar7;
  *(undefined1 *)(param_1 + 0x382) = 0;
  *(undefined8 *)(param_1 + 900) = 0x200000000;
  *(undefined1 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = uVar9;
  *(undefined8 *)(param_1 + 0x3f0) = uVar7;
  *(undefined1 *)(param_1 + 0x402) = 0;
  *(undefined8 *)(param_1 + 0x404) = 0x200000000;
  *(undefined1 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined2 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = uVar9;
  *(undefined8 *)(param_1 + 0x470) = uVar7;
  *(undefined1 *)(param_1 + 0x482) = 0;
  *(undefined8 *)(param_1 + 0x484) = 0x200000000;
  *(undefined1 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined2 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = uVar9;
  *(undefined8 *)(param_1 + 0x4f0) = uVar7;
  *(undefined1 *)(param_1 + 0x502) = 0;
  *(undefined8 *)(param_1 + 0x504) = 0x200000000;
  *(undefined1 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined2 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x578) = uVar9;
  *(undefined8 *)(param_1 + 0x570) = uVar7;
  *(undefined1 *)(param_1 + 0x582) = 0;
  *(undefined8 *)(param_1 + 0x584) = 0x200000000;
  *(undefined1 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined2 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = uVar9;
  *(undefined8 *)(param_1 + 0x5f0) = uVar7;
  *(undefined1 *)(param_1 + 0x602) = 0;
  *(undefined8 *)(param_1 + 0x604) = 0x200000000;
  *(undefined1 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  *(undefined2 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x678) = uVar9;
  *(undefined8 *)(param_1 + 0x670) = uVar7;
  *(undefined1 *)(param_1 + 0x682) = 0;
  *(undefined8 *)(param_1 + 0x684) = 0x200000000;
  *(undefined1 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined2 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = uVar9;
  *(undefined8 *)(param_1 + 0x6f0) = uVar7;
  *(undefined1 *)(param_1 + 0x702) = 0;
  *(undefined8 *)(param_1 + 0x704) = 0x200000000;
  *(undefined1 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined2 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x778) = uVar9;
  *(undefined8 *)(param_1 + 0x770) = uVar7;
  *(undefined1 *)(param_1 + 0x782) = 0;
  *(undefined8 *)(param_1 + 0x784) = 0x200000000;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined2 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = uVar9;
  *(undefined8 *)(param_1 + 0x7f0) = uVar7;
  *(undefined1 *)(param_1 + 0x802) = 0;
  *(undefined8 *)(param_1 + 0x804) = 0x200000000;
  *(undefined1 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined2 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x878) = uVar9;
  *(undefined8 *)(param_1 + 0x870) = uVar7;
  *(undefined1 *)(param_1 + 0x882) = 0;
  *(undefined8 *)(param_1 + 0x884) = 0x200000000;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  *(undefined2 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x8f8) = uVar9;
  *(undefined8 *)(param_1 + 0x8f0) = uVar7;
  *(undefined1 *)(param_1 + 0x902) = 0;
  *(undefined8 *)(param_1 + 0x904) = 0x200000000;
  *(undefined1 *)(param_1 + 0x968) = 0;
  *(undefined8 *)(param_1 + 0x960) = 0;
  *(undefined2 *)(param_1 + 0x980) = 0;
  *(undefined8 *)(param_1 + 0x978) = uVar9;
  *(undefined8 *)(param_1 + 0x970) = uVar7;
  *(undefined1 *)(param_1 + 0x982) = 0;
  *(undefined8 *)(param_1 + 0x984) = 0x200000000;
  *(undefined1 *)(param_1 + 0x9e8) = 0;
  *(undefined8 *)(param_1 + 0x9e0) = 0;
  *(undefined2 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = uVar9;
  *(undefined8 *)(param_1 + 0x9f0) = uVar7;
  *(undefined1 *)(param_1 + 0xa02) = 0;
  *(undefined8 *)(param_1 + 0xa04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xa68) = 0;
  *(undefined8 *)(param_1 + 0xa60) = 0;
  *(undefined2 *)(param_1 + 0xa80) = 0;
  *(undefined8 *)(param_1 + 0xa78) = uVar9;
  *(undefined8 *)(param_1 + 0xa70) = uVar7;
  *(undefined1 *)(param_1 + 0xa82) = 0;
  *(undefined8 *)(param_1 + 0xa84) = 0x200000000;
  *(undefined1 *)(param_1 + 0xae8) = 0;
  *(undefined8 *)(param_1 + 0xae0) = 0;
  *(undefined2 *)(param_1 + 0xb00) = 0;
  *(undefined8 *)(param_1 + 0xaf8) = uVar9;
  *(undefined8 *)(param_1 + 0xaf0) = uVar7;
  *(undefined1 *)(param_1 + 0xb02) = 0;
  *(undefined8 *)(param_1 + 0xb04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xb68) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined2 *)(param_1 + 0xb80) = 0;
  *(undefined8 *)(param_1 + 0xb78) = uVar9;
  *(undefined8 *)(param_1 + 0xb70) = uVar7;
  *(undefined1 *)(param_1 + 0xb82) = 0;
  *(undefined8 *)(param_1 + 0xb84) = 0x200000000;
  *(undefined1 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  *(undefined2 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = uVar9;
  *(undefined8 *)(param_1 + 0xbf0) = uVar7;
  *(undefined1 *)(param_1 + 0xc02) = 0;
  *(undefined8 *)(param_1 + 0xc04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc60) = 0;
  *(undefined2 *)(param_1 + 0xc80) = 0;
  *(undefined8 *)(param_1 + 0xc78) = uVar9;
  *(undefined8 *)(param_1 + 0xc70) = uVar7;
  *(undefined1 *)(param_1 + 0xc82) = 0;
  *(undefined8 *)(param_1 + 0xc84) = 0x200000000;
  *(undefined1 *)(param_1 + 0xce8) = 0;
  *(undefined8 *)(param_1 + 0xce0) = 0;
  *(undefined2 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xcf8) = uVar9;
  *(undefined8 *)(param_1 + 0xcf0) = uVar7;
  *(undefined1 *)(param_1 + 0xd02) = 0;
  *(undefined8 *)(param_1 + 0xd04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xd68) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined2 *)(param_1 + 0xd80) = 0;
  *(undefined8 *)(param_1 + 0xd78) = uVar9;
  *(undefined8 *)(param_1 + 0xd70) = uVar7;
  *(undefined1 *)(param_1 + 0xd82) = 0;
  *(undefined8 *)(param_1 + 0xd84) = 0x200000000;
  *(undefined1 *)(param_1 + 0xde8) = 0;
  *(undefined8 *)(param_1 + 0xde0) = 0;
  *(undefined2 *)(param_1 + 0xe00) = 0;
  *(undefined8 *)(param_1 + 0xdf8) = uVar9;
  *(undefined8 *)(param_1 + 0xdf0) = uVar7;
  *(undefined1 *)(param_1 + 0xe02) = 0;
  *(undefined8 *)(param_1 + 0xe04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xe68) = 0;
  *(undefined8 *)(param_1 + 0xe60) = 0;
  *(undefined2 *)(param_1 + 0xe80) = 0;
  *(undefined8 *)(param_1 + 0xe78) = uVar9;
  *(undefined8 *)(param_1 + 0xe70) = uVar7;
  *(undefined1 *)(param_1 + 0xe82) = 0;
  *(undefined8 *)(param_1 + 0xe84) = 0x200000000;
  *(undefined1 *)(param_1 + 0xee8) = 0;
  *(undefined8 *)(param_1 + 0xee0) = 0;
  *(undefined2 *)(param_1 + 0xf00) = 0;
  *(undefined8 *)(param_1 + 0xef8) = uVar9;
  *(undefined8 *)(param_1 + 0xef0) = uVar7;
  *(undefined1 *)(param_1 + 0xf02) = 0;
  *(undefined8 *)(param_1 + 0xf04) = 0x200000000;
  *(undefined1 *)(param_1 + 0xf68) = 0;
  *(undefined8 *)(param_1 + 0xf60) = 0;
  *(undefined2 *)(param_1 + 0xf80) = 0;
  *(undefined8 *)(param_1 + 0xf78) = uVar9;
  *(undefined8 *)(param_1 + 0xf70) = uVar7;
  *(undefined1 *)(param_1 + 0xf82) = 0;
  *(undefined8 *)(param_1 + 0xf84) = 0x200000000;
  uVar6 = param_2[2];
  uVar7 = *param_2;
  uVar9 = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  memset((void *)(param_1 + 0x11bc),0,0x138);
  *(undefined4 *)(param_1 + 0x10d4) = 1;
  *(undefined8 *)(param_1 + 0x12fc) = 0xffffffffffffffff;
  return;
}


