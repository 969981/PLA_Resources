/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142d588; name: FUN_0142d588
 */


void FUN_0142d588(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  long *local_98;
  long alStack_90 [12];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x5b0) + (ulong)param_2 * 8 + 0x70);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x70) + 0x60);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_b0 = (undefined1 *)0x8ad48bca42a4661b;
  local_a8 = (code *)0x38cb1b6;
  local_a0 = (code *)0xf;
  local_98 = (long *)0x0;
  lVar1 = FUN_00d472a0(param_1 + 0x180,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_0280a710(lVar1);
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
  if (((uVar2 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    FUN_0280a5d8(lVar1,2,&DAT_03a7bc80,1);
    pcVar4 = *(code **)(lVar1 + 1000);
    local_b0 = &LAB_0142ecc4;
    pcVar5 = FUN_0142ed04;
    local_a8 = FUN_0142ed00;
    local_a0 = FUN_0142ed04;
    local_98 = (long *)&LAB_0142ed10;
  }
  else {
    FUN_0280a5d8(lVar1,0,&DAT_03a7bc80,1);
    pcVar4 = *(code **)(lVar1 + 1000);
    local_b0 = &LAB_0142ed1c;
    pcVar5 = (code *)&LAB_0142ed30;
    local_a8 = (code *)&LAB_0142ed2c;
    local_a0 = (code *)&LAB_0142ed30;
    local_98 = (long *)&LAB_0142ed3c;
  }
  alStack_90[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x3f0) = 0;
    *(undefined8 *)(lVar1 + 0x3f8) = 0;
    *(undefined8 *)(lVar1 + 0x3e0) = 0;
    *(undefined8 *)(lVar1 + 1000) = 0;
    (*pcVar4)(lVar1 + 0x400);
    pcVar5 = local_a0;
    if (local_a0 == (code *)0x0) goto LAB_0142d6c8;
  }
  (*pcVar5)(alStack_90,lVar1 + 0x400);
  *(code **)(lVar1 + 1000) = local_a8;
  *(long **)(lVar1 + 0x3f8) = local_98;
  *(code **)(lVar1 + 0x3f0) = local_a0;
  *(undefined8 *)(lVar1 + 0x3e0) = local_b0;
LAB_0142d6c8:
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar5)(alStack_90);
  }
  return;
}


