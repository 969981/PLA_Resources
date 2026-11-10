/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b6d04; name: FUN_011b6d04
 */


void FUN_011b6d04(long param_1)

{
  if (*(char *)(param_1 + 0x5b0) == '\x02') {
    FUN_00d7331c(param_1,1);
    *(undefined1 *)(param_1 + 0x5b0) = 3;
  }
  return;
}


