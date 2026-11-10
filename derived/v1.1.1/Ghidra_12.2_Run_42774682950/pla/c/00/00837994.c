/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00837994; name: FUN_00837994
 */


void FUN_00837994(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50)) {
    *(undefined1 *)(*(long *)(param_1 + 0x788) + ((ulong)param_2 & 0xff)) = 1;
  }
  return;
}


