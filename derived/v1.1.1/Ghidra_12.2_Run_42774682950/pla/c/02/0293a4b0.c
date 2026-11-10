/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a4b0; name: FUN_0293a4b0
 */


undefined1 FUN_0293a4b0(long param_1,uint param_2,uint param_3)

{
  return *(undefined1 *)
          (*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8 + 0x120)
           + (ulong)param_3 + 0x38c);
}


