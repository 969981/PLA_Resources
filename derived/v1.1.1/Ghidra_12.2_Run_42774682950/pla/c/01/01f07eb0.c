/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f07eb0; name: FUN_01f07eb0
 */


void FUN_01f07eb0(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = param_2 & 1;
  *(byte *)(*(long *)(param_1 + 0x68) + 0xb0) = bVar1;
  bVar2 = ~param_2 & 1;
  *(byte *)(*(long *)(param_1 + 0x68) + 0x6c) = bVar2;
  *(byte *)(*(long *)(param_1 + 0x70) + 0xb0) = bVar1;
  *(byte *)(*(long *)(param_1 + 0x70) + 0x6c) = bVar2;
  *(byte *)(*(long *)(param_1 + 0x78) + 0xb0) = bVar1;
  *(byte *)(*(long *)(param_1 + 0x78) + 0x6c) = bVar2;
  return;
}


