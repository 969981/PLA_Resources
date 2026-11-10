/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb3e4; name: FUN_010eb3e4
 */


void FUN_010eb3e4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68) =
       *(uint *)(param_1 + 0x68) & 0xffffffc0 | *(uint *)(param_1 + 0x68) & 3 | (param_2 & 0xf) << 2
  ;
  FUN_010c4b40(param_2 & 0xf);
  return;
}


