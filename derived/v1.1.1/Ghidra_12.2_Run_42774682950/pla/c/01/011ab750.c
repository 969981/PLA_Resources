/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ab750; name: FUN_011ab750
 */


void FUN_011ab750(long param_1,ulong param_2,uint param_3,uint param_4)

{
  FUN_02857b70(*(long *)(param_1 + 0x5c0) + (param_2 & 0xffffffff) * 0x500,param_3 & 1,param_4 & 1);
  return;
}


