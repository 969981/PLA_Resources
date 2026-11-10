/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306e5f8; name: FUN_0306e5f8
 */


void FUN_0306e5f8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = (undefined1 *)(param_2 + 0x1448);
  uVar2 = *puVar1;
  *puVar1 = 0;
  FUN_0306e378(param_2,0x200,param_1 + 0x18,1);
  FUN_0306e378(param_2,0x1c00,param_1 + 0x20,1);
  FUN_0306e378(param_2,0xe000,param_1 + 0x28,1);
  FUN_0306e378(param_2,0x20000,param_1 + 0x80,1);
  FUN_0306e378(param_2,0x10000,param_1 + 0x70,1);
  FUN_0306e378(param_2,0x40000,param_1 + 0x30,1);
  FUN_0306e378(param_2,0x80000,param_1 + 0x98,1);
  FUN_0306e378(param_2,0x100000,param_1 + 0x78,1);
  FUN_0306e378(param_2,0x200000,param_1 + 0x88,1);
  FUN_0306e378(param_2,0x800000,param_1 + 0x90,1);
  FUN_0306e378(param_2,0x1000000,param_1 + 0xa0,1);
  FUN_0306e378(param_2,0x40,param_1 + 0x38,1);
  FUN_0306e378(param_2,0x80,param_1 + 0x40,1);
  lVar8 = param_1 + 0x1f30;
  FUN_0306e378(param_2,8,lVar8,1);
  FUN_0306e378(param_2,0x10,lVar8,1);
  FUN_0306e378(param_2,1,lVar8,1);
  FUN_0306e378(param_2,2,lVar8,1);
  FUN_0306e378(param_2,4,lVar8,1);
  *(long *)(param_2 + 0x1398) = param_1 + 0x48;
  *(long *)(param_2 + 0x13b0) = param_1 + 0x50;
  *(long *)(param_2 + 0x13a8) = param_1 + 0x60;
  *(long *)(param_2 + 0x13c8) = param_1 + 200;
  *(long *)(param_2 + 0x13d0) = param_1 + 0xb8;
  *(long *)(param_2 + 0x13f8) = param_1 + 0xa8;
  *(long *)(param_2 + 0x13d8) = param_1 + 0x1ee0;
  *(long *)(param_2 + 0x13e0) = param_1 + 0x1ef0;
  *(long *)(param_2 + 0x13e8) = param_1 + 0x1f00;
  *(long *)(param_2 + 0x13c0) = param_1 + 0x1f10;
  *(long *)(param_2 + 0x13a0) = param_1 + 0x58;
  *(long *)(param_2 + 0x1400) = param_1 + 0x1f20;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,0);
  *plVar5 = (long)&DAT_042b2b88;
  plVar5[1] = 0xffffffff;
  plVar5[2] = 1;
  plVar6 = *(long **)(param_1 + 0x2d8);
  if (((plVar6 != plVar5) && (*(long **)(param_1 + 0x2d8) = plVar5, plVar6 != (long *)0x0)) &&
     (plVar6[1] != 0)) {
    plVar5 = plVar6 + 2;
    do {
      lVar8 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *puVar1 = uVar2;
  return;
}


