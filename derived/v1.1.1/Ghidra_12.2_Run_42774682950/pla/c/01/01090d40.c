/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090d40; name: FUN_01090d40
 */


bool FUN_01090d40(short param_1,short param_2)

{
  if ((param_1 != 900) || (param_2 != 1)) {
    if ((param_2 != 2) || (param_1 != 0x225 && (param_1 != 0x3b && param_1 != 0x65))) {
      return param_1 == 0x2c9 && param_2 == 2;
    }
  }
  return true;
}


