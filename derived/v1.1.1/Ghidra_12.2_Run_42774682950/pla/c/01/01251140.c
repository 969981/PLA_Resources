/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251140; name: FUN_01251140
 */


void FUN_01251140(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4);
  uVar1 = FUN_0124efdc();
  if (((uVar1 & 1) == 0) &&
     ((*(int *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4) != 0 ||
      (uVar1 = FUN_0123b66c(), (uVar1 & 1) != 0)))) {
    uVar1 = FUN_01234bc0(param_1 + 0x9c0,uVar3);
    if ((uVar1 & 1) == 0) {
      uVar3 = 2;
      uVar2 = 2;
    }
    else {
      uVar3 = 3;
      uVar2 = 3;
    }
  }
  else {
    uVar3 = 1;
    uVar2 = 1;
  }
  FUN_01247188(param_1 + 0x12d0,uVar2);
  *(undefined4 *)(param_1 + 0x14c0) = uVar3;
  return;
}


