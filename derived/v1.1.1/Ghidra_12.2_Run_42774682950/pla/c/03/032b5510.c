/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5510; name: FUN_032b5510
 */


undefined4 FUN_032b5510(ulong param_1,uint param_2)

{
  return *(undefined4 *)
          ((long)&DAT_04440a45 + (param_1 & 0xffffffff) * 0x38 + (ulong)param_2 * 4 + 7);
}


