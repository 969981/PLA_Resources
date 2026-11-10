/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ffa54; name: FUN_025ffa54
 */


void FUN_025ffa54(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *local_18;
  
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x1f0);
  if ((uVar5 >> 7 & 1) == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    if (*(long *)(param_1 + 0x268) == 0) {
      return;
    }
    FUN_0095dd00(&local_18,*(long *)(param_1 + 0x268));
    if (local_18 == (long *)0x0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x260);
    if (8 < uVar5) goto LAB_025ffd64;
    uVar8 = local_18[0x3e];
    uVar7 = 1L << ((ulong)uVar5 & 0x3f);
    local_18[0x3e] = uVar8 & (uVar7 ^ 0xffffffffffffffff);
    switch(uVar5) {
    case 1:
      *(undefined1 *)(local_18 + 0x4a) = 0;
      local_18[0x49] = 0;
      lVar6 = local_18[0x40];
      break;
    case 2:
      *(undefined1 *)(local_18 + 0x50) = 0;
      local_18[0x4f] = 0;
      lVar6 = local_18[0x40];
      break;
    case 3:
      *(undefined1 *)(local_18 + 0x56) = 0;
      local_18[0x55] = 0;
      *(undefined4 *)((long)local_18 + 0x2b4) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 4:
      *(undefined1 *)(local_18 + 0x5c) = 0;
      local_18[0x5b] = 0;
      *(undefined4 *)((long)local_18 + 0x2e4) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 5:
      *(undefined1 *)(local_18 + 0x62) = 0;
      local_18[0x61] = 0;
      *(undefined4 *)((long)local_18 + 0x314) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 6:
      *(undefined1 *)(local_18 + 0x68) = 0;
      local_18[0x67] = 0;
      *(undefined4 *)((long)local_18 + 0x344) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 7:
      *(undefined1 *)(local_18 + 0x6e) = 0;
      local_18[0x6d] = 0;
    default:
      lVar6 = local_18[0x40];
      break;
    case 8:
      *(undefined1 *)(local_18 + 0x75) = 0;
      local_18[0x74] = 0;
      lVar6 = local_18[0x40];
    }
    if ((lVar6 != 0) &&
       (FUN_025ff800(lVar6,(ulong)CONCAT14((uVar7 & uVar8) != 0,uVar5)), local_18 == (long *)0x0)) {
      return;
    }
    lVar6 = local_18[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    *(undefined1 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (*(long *)(param_1 + 0x358) == 0) {
      return;
    }
    FUN_0095dd00(&local_18,*(long *)(param_1 + 0x358));
    if (local_18 == (long *)0x0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x350);
    if (8 < uVar5) {
LAB_025ffd64:
                    /* WARNING: Subroutine does not return */
      FUN_026006b0();
    }
    uVar8 = local_18[0x3e];
    uVar7 = 1L << ((ulong)uVar5 & 0x3f);
    local_18[0x3e] = uVar8 & (uVar7 ^ 0xffffffffffffffff);
    switch(uVar5) {
    case 1:
      *(undefined1 *)(local_18 + 0x4a) = 0;
      local_18[0x49] = 0;
      lVar6 = local_18[0x40];
      break;
    case 2:
      *(undefined1 *)(local_18 + 0x50) = 0;
      local_18[0x4f] = 0;
      lVar6 = local_18[0x40];
      break;
    case 3:
      *(undefined1 *)(local_18 + 0x56) = 0;
      local_18[0x55] = 0;
      *(undefined4 *)((long)local_18 + 0x2b4) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 4:
      *(undefined1 *)(local_18 + 0x5c) = 0;
      local_18[0x5b] = 0;
      *(undefined4 *)((long)local_18 + 0x2e4) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 5:
      *(undefined1 *)(local_18 + 0x62) = 0;
      local_18[0x61] = 0;
      *(undefined4 *)((long)local_18 + 0x314) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 6:
      *(undefined1 *)(local_18 + 0x68) = 0;
      local_18[0x67] = 0;
      *(undefined4 *)((long)local_18 + 0x344) = 0x3f800000;
      lVar6 = local_18[0x40];
      break;
    case 7:
      *(undefined1 *)(local_18 + 0x6e) = 0;
      local_18[0x6d] = 0;
    default:
      lVar6 = local_18[0x40];
      break;
    case 8:
      *(undefined1 *)(local_18 + 0x75) = 0;
      local_18[0x74] = 0;
      lVar6 = local_18[0x40];
    }
    if ((lVar6 != 0) &&
       (FUN_025ff800(lVar6,(ulong)CONCAT14((uVar7 & uVar8) != 0,uVar5)), local_18 == (long *)0x0)) {
      return;
    }
    lVar6 = local_18[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


