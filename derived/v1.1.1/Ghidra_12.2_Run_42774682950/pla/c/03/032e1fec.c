/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e1fec; name: FUN_032e1fec
 */


undefined8 FUN_032e1fec(byte *param_1)

{
  do {
    if ((*param_1 >> 1 & 1) != 0) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    param_1 = *(byte **)(param_1 + 8);
  } while (param_1 != (byte *)0x0);
  return 0;
}


