/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025fd3ac; name: FUN_025fd3ac
 */


void FUN_025fd3ac(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *local_58;
  
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (*(long *)(param_1 + 0x268) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x260);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (*(long *)(param_1 + 0x238) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x230);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (*(long *)(param_1 + 0x298) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x290);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x2c0);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined1 *)(param_1 + 0x310) = 0;
  if (*(long *)(param_1 + 0x2f8) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x2f0);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  if (*(long *)(param_1 + 0x328) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 800);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  if (*(long *)(param_1 + 0x358) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x350);
      if (8 < uVar3) goto LAB_025fe208;
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined1 *)(param_1 + 0x3a8) = 0;
  if (*(long *)(param_1 + 0x390) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0095dd00(&local_58);
    if (local_58 != (long *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x388);
      if (8 < uVar3) {
LAB_025fe208:
                    /* WARNING: Subroutine does not return */
        FUN_026006b0();
      }
      uVar7 = local_58[0x3e];
      uVar6 = 1L << ((ulong)uVar3 & 0x3f);
      local_58[0x3e] = uVar7 & (uVar6 ^ 0xffffffffffffffff);
      switch(uVar3) {
      case 1:
        *(undefined1 *)(local_58 + 0x4a) = 0;
        local_58[0x49] = 0;
        lVar8 = local_58[0x40];
        break;
      case 2:
        *(undefined1 *)(local_58 + 0x50) = 0;
        local_58[0x4f] = 0;
        lVar8 = local_58[0x40];
        break;
      case 3:
        *(undefined1 *)(local_58 + 0x56) = 0;
        local_58[0x55] = 0;
        *(undefined4 *)((long)local_58 + 0x2b4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 4:
        *(undefined1 *)(local_58 + 0x5c) = 0;
        local_58[0x5b] = 0;
        *(undefined4 *)((long)local_58 + 0x2e4) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 5:
        *(undefined1 *)(local_58 + 0x62) = 0;
        local_58[0x61] = 0;
        *(undefined4 *)((long)local_58 + 0x314) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 6:
        *(undefined1 *)(local_58 + 0x68) = 0;
        local_58[0x67] = 0;
        *(undefined4 *)((long)local_58 + 0x344) = 0x3f800000;
        lVar8 = local_58[0x40];
        break;
      case 7:
        *(undefined1 *)(local_58 + 0x6e) = 0;
        local_58[0x6d] = 0;
      default:
        lVar8 = local_58[0x40];
        break;
      case 8:
        *(undefined1 *)(local_58 + 0x75) = 0;
        local_58[0x74] = 0;
        lVar8 = local_58[0x40];
      }
      if ((lVar8 == 0) ||
         (FUN_025ff800(lVar8,(ulong)CONCAT14((uVar6 & uVar7) != 0,uVar3)), local_58 != (long *)0x0))
      {
        lVar8 = local_58[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x1f0);
  *(ulong *)(param_1 + 0x1f0) = uVar6 & 0xfffffffffffffffe;
  if (*(long *)(param_1 + 0x200) == 0) {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
LAB_025fd658:
    uVar6 = uVar6 & 0xfffffffffffffff9;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
LAB_025fd668:
    uVar6 = uVar6 & 0xfffffffffffffff3;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
LAB_025fd680:
    uVar6 = uVar6 & 0xffffffffffffffe7;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
LAB_025fd698:
    uVar6 = uVar6 & 0xffffffffffffffcf;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
LAB_025fd6b0:
    uVar6 = uVar6 & 0xffffffffffffff9f;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
LAB_025fd6c8:
    uVar6 = uVar6 & 0xffffffffffffff3f;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  else {
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar6 & 1) << 0x20);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd658;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 1 & 1) << 0x20 | 1);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xfffffffffffffffb;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd668;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 2 & 1) << 0x20 | 2);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xfffffffffffffff7;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd680;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 3 & 1) << 0x20 | 3);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xffffffffffffffef;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd698;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 4 & 1) << 0x20 | 4);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xffffffffffffffdf;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd6b0;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 5 & 1) << 0x20 | 5);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xffffffffffffffbf;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_025fd6c8;
    FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 6 & 1) << 0x20 | 6);
    uVar7 = *(ulong *)(param_1 + 0x1f0);
    uVar6 = uVar7 & 0xffffffffffffff7f;
    *(ulong *)(param_1 + 0x1f0) = uVar6;
    *(undefined1 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (*(long *)(param_1 + 0x200) != 0) {
      FUN_025ff800(*(long *)(param_1 + 0x200),(uVar7 >> 7 & 1) << 0x20 | 7);
      uVar6 = *(ulong *)(param_1 + 0x1f0);
      *(ulong *)(param_1 + 0x1f0) = uVar6 & 0xfffffffffffffeff;
      *(undefined1 *)(param_1 + 0x3a8) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      if (*(long *)(param_1 + 0x200) != 0) {
        FUN_025ff800(*(long *)(param_1 + 0x200),(uVar6 >> 8 & 1) << 0x20 | 8);
      }
      goto LAB_025fd6e8;
    }
  }
  *(ulong *)(param_1 + 0x1f0) = uVar6 & 0xfffffffffffffe7f;
  *(undefined1 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
LAB_025fd6e8:
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  return;
}


