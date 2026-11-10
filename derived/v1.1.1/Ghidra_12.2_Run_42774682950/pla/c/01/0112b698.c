/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112b698; name: FUN_0112b698
 */


void FUN_0112b698(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x11c);
  uVar1 = *(uint *)(param_2 + 0x14) & 0xfff;
  *(uint *)(param_1 + 0x11c) = uVar2 & 0xfffff000 | uVar1;
  uVar1 = uVar1 | (*(uint *)(param_2 + 0x10) & 0xf) << 0xc;
  *(uint *)(param_1 + 0x11c) = uVar2 & 0xffff0000 | uVar1;
  uVar1 = uVar1 | (*(uint *)(param_2 + 0xc) & 0x1f) << 0x10;
  *(uint *)(param_1 + 0x11c) = uVar2 & 0xffe00000 | uVar1;
  uVar1 = uVar1 | (*(uint *)(param_2 + 8) & 0x1f) << 0x15;
  *(uint *)(param_1 + 0x11c) = uVar2 & 0xfc000000 | uVar1;
  *(uint *)(param_1 + 0x11c) = uVar1 | *(int *)(param_2 + 4) << 0x1a;
  return;
}


