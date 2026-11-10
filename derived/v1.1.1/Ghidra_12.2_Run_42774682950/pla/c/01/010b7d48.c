/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b7d48; name: FUN_010b7d48
 */


void FUN_010b7d48(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x380) =
       *(uint *)(param_1 + 0x380) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    uVar1 = FUN_02a75678();
    FUN_002229d4(uVar1,param_2);
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    uVar1 = FUN_02a75678();
    FUN_002229d4(uVar1,param_2);
  }
  if (*(long *)(param_1 + 0x1b0) == 0) {
    return;
  }
  uVar1 = FUN_02a75678();
  FUN_002229d4(uVar1,param_2);
  return;
}


