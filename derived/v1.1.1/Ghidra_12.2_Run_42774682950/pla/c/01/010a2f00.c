/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a2f00; name: FUN_010a2f00
 */


bool FUN_010a2f00(byte param_1)

{
  if (((((byte)(param_1 - 0x1e) < 5) || ((param_1 & 0xfe) == 0x2a)) || ((param_1 & 0xfe) == 0x2c))
     || (param_1 == 0x2f)) {
    return true;
  }
  return (param_1 & 0xfe) == 0x30;
}


