/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809540; name: FUN_00809540
 */


undefined8 FUN_00809540(long param_1)

{
  if (*(char *)(param_1 + 0x103) == '\x02') {
    return *(undefined8 *)(param_1 + 0xb8);
  }
  return 0;
}


