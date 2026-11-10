/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033226f8; name: FUN_033226f8
 */


void FUN_033226f8(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  *(long **)(param_1 + 0x28) = param_2;
  param_2[2] = **(long **)(param_1 + 0x18);
  *param_2 = **(long **)(param_1 + 0x18) + (long)(int)(*(long **)(param_1 + 0x18))[1];
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0xc) & 0x3fffffff;
  if (*(uint *)(lVar2 + 8) != uVar1) {
    *(uint *)(lVar2 + 8) = uVar1;
  }
  param_2[1] = **(long **)(param_1 + 0x18) +
               ((ulong)*(uint *)((long)*(long **)(param_1 + 0x18) + 0xc) & 0x3fffffff);
  return;
}


