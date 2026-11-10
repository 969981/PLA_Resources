/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bd264; name: FUN_014bd264
 */


void FUN_014bd264(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x58) + 200);
  uVar1 = uVar2 | 1;
  if ((param_2 & 1) == 0) {
    uVar1 = uVar2 & 0xfffffffffffffffe;
  }
  *(ulong *)(*(long *)(param_1 + 0x58) + 200) = uVar1;
  return;
}


