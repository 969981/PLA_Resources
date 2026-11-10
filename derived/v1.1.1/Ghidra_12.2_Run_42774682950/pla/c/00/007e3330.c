/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3330; name: FUN_007e3330
 */


undefined8 FUN_007e3330(int param_1)

{
  if (param_1 - 2U < 0x13) {
    return *(undefined8 *)
            (PTR_DAT_04377408 + *(long *)(&DAT_03a71528 + (long)(int)(param_1 - 2U) * 8) * 8);
  }
  return *(undefined8 *)(PTR_DAT_04377408 + 0x98);
}


