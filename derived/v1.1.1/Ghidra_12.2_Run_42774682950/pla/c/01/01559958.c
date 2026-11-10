/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01559958; name: FUN_01559958
 */


void FUN_01559958(long param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *local_190 [4];
  long *local_170;
  long *local_160 [4];
  long *local_140;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar7 = *(long *)(param_1 + 0x3b0);
  local_60 = *(undefined8 *)(lVar7 + 0x88);
  local_58 = *(undefined8 *)(lVar7 + 0x80);
  FUN_01583ce0(lVar7,&local_60);
  if (*(long *)(param_2 + 0x48) != -0x7c28d155a55e5845) {
    snprintf((char *)local_160,0x100,"bin/archive/demo/%s.gfpak",*(char **)(param_2 + 0x50));
    FUN_01559fc0(local_190,local_160);
    uVar11 = FUN_00938764(param_1 + 0x440,1,local_190,0,*(undefined8 *)(param_1 + 8),0);
    if (((uVar11 & 1) != 0) && (plVar10 = *(long **)(param_1 + 0x468), plVar10 != (long *)0x0)) {
      lVar7 = plVar10[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar7 = plVar10[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    if (local_190[0] != (long *)0x0) {
      (**(code **)(*local_190[0] + 0x20))();
    }
  }
  puVar12 = (undefined8 *)(*(long *)(param_1 + 0x3b0) + 0xb0);
  uVar14 = *puVar12;
  plVar10 = (long *)(param_1 + 0x3b0);
  FUN_0155a0d0(local_160,param_2 + 0x20);
  local_190[0] = *(long **)(param_1 + 0x390);
  lVar7 = FUN_0156a6c8(uVar14,puVar12,local_160,local_190);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar13 = *plVar10;
  plVar8 = *(long **)(lVar13 + 0xb8);
  *(undefined8 *)(lVar13 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(lVar13 + 0xb8) = lVar7;
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_160[0] != (long *)0x0) {
    (**(code **)(*local_160[0] + 0x20))();
  }
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x360) = *(undefined8 *)(param_3 + 0x28);
  uVar14 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(lVar7 + 0x380) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(lVar7 + 0x378) = uVar2;
  *(undefined8 *)(lVar7 + 0x370) = uVar3;
  *(undefined8 *)(lVar7 + 0x368) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x388) = *(undefined8 *)(param_3 + 0x50);
  uVar14 = *(undefined8 *)(param_3 + 0x58);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(lVar7 + 0x3a8) = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(lVar7 + 0x3a0) = uVar2;
  *(undefined8 *)(lVar7 + 0x398) = uVar3;
  *(undefined8 *)(lVar7 + 0x390) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x3b0) = *(undefined8 *)(param_3 + 0x78);
  uVar14 = *(undefined8 *)(param_3 + 0x80);
  uVar3 = *(undefined8 *)(param_3 + 0x88);
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(lVar7 + 0x3d0) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(lVar7 + 0x3c8) = uVar2;
  *(undefined8 *)(lVar7 + 0x3c0) = uVar3;
  *(undefined8 *)(lVar7 + 0x3b8) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x3d8) = *(undefined8 *)(param_3 + 0xa0);
  uVar14 = *(undefined8 *)(param_3 + 0xa8);
  uVar3 = *(undefined8 *)(param_3 + 0xb0);
  uVar2 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(lVar7 + 0x3f8) = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(lVar7 + 0x3f0) = uVar2;
  *(undefined8 *)(lVar7 + 1000) = uVar3;
  *(undefined8 *)(lVar7 + 0x3e0) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x400) = *(undefined8 *)(param_3 + 200);
  uVar14 = *(undefined8 *)(param_3 + 0xd0);
  uVar3 = *(undefined8 *)(param_3 + 0xd8);
  uVar2 = *(undefined8 *)(param_3 + 0xe0);
  *(undefined8 *)(lVar7 + 0x420) = *(undefined8 *)(param_3 + 0xe8);
  *(undefined8 *)(lVar7 + 0x418) = uVar2;
  *(undefined8 *)(lVar7 + 0x410) = uVar3;
  *(undefined8 *)(lVar7 + 0x408) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x428) = *(undefined8 *)(param_3 + 0xf0);
  uVar14 = *(undefined8 *)(param_3 + 0xf8);
  uVar3 = *(undefined8 *)(param_3 + 0x100);
  uVar2 = *(undefined8 *)(param_3 + 0x108);
  *(undefined8 *)(lVar7 + 0x448) = *(undefined8 *)(param_3 + 0x110);
  *(undefined8 *)(lVar7 + 0x440) = uVar2;
  *(undefined8 *)(lVar7 + 0x438) = uVar3;
  *(undefined8 *)(lVar7 + 0x430) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x450) = *(undefined8 *)(param_3 + 0x118);
  uVar14 = *(undefined8 *)(param_3 + 0x120);
  uVar3 = *(undefined8 *)(param_3 + 0x128);
  uVar2 = *(undefined8 *)(param_3 + 0x130);
  *(undefined8 *)(lVar7 + 0x470) = *(undefined8 *)(param_3 + 0x138);
  *(undefined8 *)(lVar7 + 0x468) = uVar2;
  *(undefined8 *)(lVar7 + 0x460) = uVar3;
  *(undefined8 *)(lVar7 + 0x458) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x478) = *(undefined8 *)(param_3 + 0x140);
  uVar14 = *(undefined8 *)(param_3 + 0x148);
  uVar3 = *(undefined8 *)(param_3 + 0x150);
  uVar2 = *(undefined8 *)(param_3 + 0x158);
  *(undefined8 *)(lVar7 + 0x498) = *(undefined8 *)(param_3 + 0x160);
  *(undefined8 *)(lVar7 + 0x490) = uVar2;
  *(undefined8 *)(lVar7 + 0x488) = uVar3;
  *(undefined8 *)(lVar7 + 0x480) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x4a0) = *(undefined8 *)(param_3 + 0x168);
  uVar14 = *(undefined8 *)(param_3 + 0x170);
  uVar3 = *(undefined8 *)(param_3 + 0x178);
  uVar2 = *(undefined8 *)(param_3 + 0x180);
  *(undefined8 *)(lVar7 + 0x4c0) = *(undefined8 *)(param_3 + 0x188);
  *(undefined8 *)(lVar7 + 0x4b8) = uVar2;
  *(undefined8 *)(lVar7 + 0x4b0) = uVar3;
  *(undefined8 *)(lVar7 + 0x4a8) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x4c8) = *(undefined8 *)(param_3 + 400);
  uVar14 = *(undefined8 *)(param_3 + 0x198);
  uVar3 = *(undefined8 *)(param_3 + 0x1a0);
  uVar2 = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined8 *)(lVar7 + 0x4e8) = *(undefined8 *)(param_3 + 0x1b0);
  *(undefined8 *)(lVar7 + 0x4e0) = uVar2;
  *(undefined8 *)(lVar7 + 0x4d8) = uVar3;
  *(undefined8 *)(lVar7 + 0x4d0) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x4f0) = *(undefined8 *)(param_3 + 0x1b8);
  uVar14 = *(undefined8 *)(param_3 + 0x1c0);
  uVar3 = *(undefined8 *)(param_3 + 0x1c8);
  uVar2 = *(undefined8 *)(param_3 + 0x1d0);
  *(undefined8 *)(lVar7 + 0x510) = *(undefined8 *)(param_3 + 0x1d8);
  *(undefined8 *)(lVar7 + 0x508) = uVar2;
  *(undefined8 *)(lVar7 + 0x500) = uVar3;
  *(undefined8 *)(lVar7 + 0x4f8) = uVar14;
  lVar7 = *plVar10;
  *(undefined8 *)(lVar7 + 0x518) = *(undefined8 *)(param_3 + 0x1e0);
  uVar14 = *(undefined8 *)(param_3 + 0x1e8);
  uVar3 = *(undefined8 *)(param_3 + 0x1f0);
  uVar2 = *(undefined8 *)(param_3 + 0x1f8);
  *(undefined8 *)(lVar7 + 0x538) = *(undefined8 *)(param_3 + 0x200);
  *(undefined8 *)(lVar7 + 0x530) = uVar2;
  *(undefined8 *)(lVar7 + 0x528) = uVar3;
  *(undefined8 *)(lVar7 + 0x520) = uVar14;
  FUN_008c4b3c(*plVar10 + 0x560,param_3 + 0x208);
  FUN_008c4b3c(*plVar10 + 0x570,param_3 + 0x218);
  FUN_008c4b3c(*plVar10 + 0x580,param_3 + 0x228);
  FUN_008c4b3c(*plVar10 + 0x590,param_3 + 0x238);
  FUN_008c4b3c(*plVar10 + 0x5a0,param_3 + 0x248);
  FUN_008c4b3c(*plVar10 + 0x5b0,param_3 + 600);
  FUN_008c4b3c(*plVar10 + 0x5c0,param_3 + 0x268);
  FUN_008c4b3c(*plVar10 + 0x5d0,param_3 + 0x278);
  FUN_008c4b3c(*plVar10 + 0x5e0,param_3 + 0x288);
  FUN_008c4b3c(*plVar10 + 0x5f0,param_3 + 0x298);
  FUN_008c4b3c(*plVar10 + 0x600,param_3 + 0x2a8);
  FUN_008c4b3c(*plVar10 + 0x610,param_3 + 0x2b8);
  FUN_008c4b3c(*plVar10 + 0x620,param_3 + 0x2c8);
  FUN_008c4b3c(*plVar10 + 0x630,param_3 + 0x2d8);
  FUN_008c4b3c(*plVar10 + 0x640,param_3 + 0x2e8);
  FUN_008c4b3c(*plVar10 + 0x650,param_3 + 0x2f8);
  FUN_008c4b3c(*plVar10 + 0x660,param_3 + 0x308);
  FUN_008c4b3c(*plVar10 + 0x670,param_3 + 0x318);
  FUN_008c4b3c(*plVar10 + 0x680,param_3 + 0x328);
  FUN_008c4b3c(*plVar10 + 0x690,param_3 + 0x338);
  lVar7 = 0;
  do {
    lVar13 = *(long *)(param_3 + lVar7 * 8 + 0x348);
    plVar8 = (long *)(*plVar10 + lVar7 * 8 + 0x6a0);
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = (long *)*plVar8;
    *plVar8 = lVar13;
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x14);
  FUN_0155a1ec(param_1,param_3 + 1000);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_3 + 0x551);
  FUN_0095e898(*(long *)(param_1 + 0x3b0) + 0x540,param_3 + 0x558);
  FUN_0156a7f8(*(long *)(param_1 + 0x3b0) + 0x550,param_3 + 0x568);
  FUN_01569a28(*(long *)(param_1 + 0x3b0) + 0x858,param_4);
  if (*(char *)(param_4 + 0x50) != '\0') {
    local_160[0] = *(long **)(param_1 + 8);
    lVar7 = FUN_0156aa70(local_160[0],local_160);
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar10 = *(long **)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x470) = lVar7;
    FUN_028462f8(lVar7);
  }
  *(undefined8 *)(param_1 + 0x3b8) = 1;
  return;
}


