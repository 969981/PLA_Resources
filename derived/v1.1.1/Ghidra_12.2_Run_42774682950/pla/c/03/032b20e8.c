/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b20e8; name: FUN_032b20e8
 */


long FUN_032b20e8(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x130);
  lVar5 = **(long **)(param_1 + 0x20);
  uVar3 = FUN_032b55e8(*(undefined4 *)(param_1 + 0x18),uVar1,uVar2,0,param_2,0);
  return lVar4 + lVar5 + (uVar3 & 0xffffffff);
}


