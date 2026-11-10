/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e481c0; name: FUN_02e481c0
 */


undefined2 FUN_02e481c0(long param_1,int param_2)

{
  return *(undefined2 *)
          (*(long *)(param_1 + 8) +
           (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8 + 6);
}


