/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9a98c; name: FUN_00d9a98c
 */


undefined8 FUN_00d9a98c(long param_1,uint param_2)

{
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00d9b2a0();
  }
  return *(undefined8 *)(param_1 + (ulong)param_2 * 0x20 + 0x20);
}


