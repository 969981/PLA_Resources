/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a1481c; name: FUN_02a1481c
 */


void FUN_02a1481c(long param_1,byte param_2,undefined2 param_3)

{
  *(undefined2 *)
   (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120) + 0x364) =
       param_3;
  return;
}


