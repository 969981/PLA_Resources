/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293d150; name: FUN_0293d150
 */


void FUN_0293d150(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 & 0xfffffffffffffe00 | (param_2 & 0x1f) << 4 | 7;
  return;
}


