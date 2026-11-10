/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143b95c; name: FUN_0143b95c
 */


void FUN_0143b95c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x98);
  if (*(long *)(lVar3 + 8) == 0) {
    uVar1 = FUN_02c5e31c();
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = FUN_02c66e84(lVar3);
  }
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined1 *)(param_1 + 0x261) = 0;
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x98);
  if (*(long *)(lVar3 + 8) == 0) {
    uVar1 = FUN_02c5e31c();
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = FUN_02c66b3c(lVar3);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x98);
  if (*(long *)(lVar3 + 8) == 0) {
    uVar2 = FUN_02c5e31c();
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = FUN_02c66e84(lVar3);
  }
  FUN_0143b1ec((float)uVar1,param_1,uVar2);
  return;
}


