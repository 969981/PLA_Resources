/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01106bf0; name: FUN_01106bf0
 */


bool FUN_01106bf0(long param_1,ulong param_2,uint param_3)

{
  return param_2 <=
         (ulong)(**(long **)(param_1 + 0x68) -
                *(long *)(*(long *)(param_1 + 0x70) + (ulong)param_3 * 0x18));
}


