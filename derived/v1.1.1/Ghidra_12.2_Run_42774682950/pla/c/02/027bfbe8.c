/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bfbe8; name: FUN_027bfbe8
 */


void FUN_027bfbe8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int local_50 [4];
  uint local_40 [4];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  uVar1 = FUN_02a43a8c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar2 = FUN_02cbb620(*(undefined1 *)(param_1 + 0x5a0));
  if (lVar2 == 0) {
    return;
  }
  if ((*(uint *)(lVar2 + 0x78) < 0xb) &&
     ((1 << (ulong)(*(uint *)(lVar2 + 0x78) & 0x1f) & 0x736U) != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x5a0) == '\0') {
    lVar3 = 0;
  }
  else {
    local_40[0] = local_40[0] & 0xffffff00;
    lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,local_40);
    if ((lVar3 != 0) && (uVar1 = FUN_008534d0(lVar2,lVar3,0), (uVar1 & 1) == 0)) {
      lVar3 = 0;
    }
    if (*(char *)(param_1 + 0x5a0) == '\x01') {
      lVar5 = 0;
      if (lVar3 == 0) {
        return;
      }
      goto LAB_027bfd00;
    }
  }
  local_40[0] = CONCAT31(local_40[0]._1_3_,1);
  lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,local_40);
  if ((lVar5 != 0) && (uVar1 = FUN_008534d0(lVar2,lVar5,0), (uVar1 & 1) == 0)) {
    lVar5 = 0;
  }
  if (lVar5 == 0 && lVar3 == 0) {
    return;
  }
LAB_027bfd00:
  FUN_00853988(local_40,lVar2);
  if ((local_40[0] == 0) && (FUN_00853554(local_50,lVar2,param_1 + 0xa0,0x80,0), local_50[0] == 0))
  {
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x1a0) = lVar3;
      *(undefined1 *)(param_1 + 0x1aa) = 1;
    }
    if (lVar5 != 0) {
      *(long *)(param_1 + 0x230) = lVar5;
      *(undefined1 *)(param_1 + 0x23a) = 1;
    }
  }
  return;
}


