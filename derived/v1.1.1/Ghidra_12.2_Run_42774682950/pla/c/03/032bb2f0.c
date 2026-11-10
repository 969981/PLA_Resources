/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb2f0; name: FUN_032bb2f0
 */


/* WARNING: Removing unreachable block (ram,0x032bb46c) */
/* WARNING: Removing unreachable block (ram,0x032bb460) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032bb2f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 *local_570;
  undefined4 local_568;
  undefined8 local_564;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_544;
  undefined1 auStack_540 [64];
  uint local_500 [16];
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined4 local_48c;
  long local_488;
  undefined8 local_480;
  long local_478;
  int local_470;
  
  local_4a0 = 0x40000002000;
  uStack_498 = 0x20;
  local_48c = 0xffffffff;
  local_488 = 0;
  local_480 = 0x8000000000000000;
  local_470 = 2;
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(ulong *)(lVar7 + 0x10) < 0x880) {
LAB_032bb5c8:
    local_478 = FUN_032ce670(lVar7,0x880);
    iVar6 = 0;
  }
  else {
    local_478 = *(long *)(lVar7 + 0x18);
    if (*(ulong *)(lVar7 + 0x20) < local_478 + 0x880U) goto LAB_032bb5c8;
    *(ulong *)(lVar7 + 0x18) = local_478 + 0x880U;
    local_480._4_4_ = 0x80000002;
    iVar6 = (int)local_480;
    if (1 < (int)local_480) {
      local_488 = local_478;
      if ((int)local_480 != 2) {
        local_480._0_4_ = 2;
      }
      goto LAB_032bb3f8;
    }
  }
  local_480._4_4_ = 0x80000002;
  local_480._0_4_ = 2;
  local_488 = local_478;
  memset((void *)(local_478 + (long)iVar6 * 0x410),0,
         (((long)iVar6 * -0x410 + 0x410U) / 0x410) * 0x410 + 0x410);
LAB_032bb3f8:
  uStack_490 = (undefined4)((ulong)(param_2 - param_1) >> 3);
  uStack_498 = CONCAT44(param_5,(undefined4)uStack_498);
  local_570 = auStack_540;
  local_4b0 = 2000;
  local_55c = 0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  uVar9 = 0;
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(local_500,0x10);
  if (bVar2) {
    cVar1 = ExclusiveMonitorsStatus();
  }
  local_500[0] = (uint)bVar2;
  if (cVar1 != '\0') {
    while (uVar3 = local_500[0], (~uVar9 & 0x7f) != 0) {
      if (local_500[0] == uVar9) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_500,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          local_500[0] = uVar9 & 0xffffff80 | uVar9 + 1 & 0x7f;
        }
        if (cVar1 == '\0') goto LAB_032bb4c0;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar9 = uVar3;
    }
    local_55c = 0xffff8002;
  }
LAB_032bb4c0:
  local_568 = 0;
  local_564 = 1;
  local_544 = 0;
  local_558 = 0;
  uStack_550 = 0;
  FUN_032bb6a0(param_1,param_2,param_3,param_4,0x400000000,0x800000000,&local_570,&local_4a0);
  lVar7 = local_478;
  if (local_478 == local_488) {
    local_480._0_4_ = 0;
  }
  lVar10 = (long)local_470;
  lVar8 = *(long *)(lVar4 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar8;
  }
  lVar4 = *(long *)(lVar8 + 8);
  uVar5 = lVar10 * 0x410 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar4 + 0x10) < uVar5) || (*(long *)(lVar4 + 0x18) != uVar5 + lVar7)) ||
     (*(long *)(lVar4 + 0x28) == lVar7)) {
    if (lVar7 != 0) {
      if (*(ulong *)(lVar4 + 0x10) < uVar5) {
        *(int *)(*(long *)(lVar4 + 8) + 0x20) = *(int *)(*(long *)(lVar4 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar4 + 0x40) + 0x18))(*(long **)(lVar4 + 0x40),lVar7);
      }
      else if (*(long *)(lVar4 + 0x18) == uVar5 + lVar7) {
        *(long *)(lVar4 + 0x18) = lVar7;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar4,lVar7);
      }
    }
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar7;
  }
  uVar9 = local_480._4_4_;
  local_480 = (ulong)local_480._4_4_ << 0x20;
  if ((-1 < (int)uVar9) && (local_488 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_488,0x410,uVar9 & 0x3fffffff);
  }
  return;
}


