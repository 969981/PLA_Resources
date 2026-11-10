/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded968; name: FUN_02ded968
 */


undefined4 FUN_02ded968(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = FUN_02ded548();
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar3 + 0x2a3);
  if ((uVar1 >> 0x16 & 1) == 0) {
    uVar4 = *(uint *)(lVar3 + 0x29c);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(lVar3 + 0x29c) = 0;
  *(uint *)(lVar3 + 0x2a3) = uVar1 & 0xfe3fffff;
  *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar4;
  lVar3 = 0xde;
  if (*(short *)(param_1 + 0x54) != 1) {
    lVar3 = 0xd2;
  }
  FUN_02dee070(param_1 + 0x68,uVar4 & 0xffff,*(undefined2 *)(param_1 + lVar3));
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar2;
}


