/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a21520; name: FUN_00a21520
 */


void FUN_00a21520(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2) * 0x40 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar4) {
    FUN_00a1fea4(param_1);
    uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8;
  }
  FUN_00a217b8(param_1 + 0x50,lVar2,param_2);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}


