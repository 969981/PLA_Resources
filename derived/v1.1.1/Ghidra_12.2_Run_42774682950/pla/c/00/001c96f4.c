/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c96f4; name: FUN_001c96f4
 */


char * FUN_001c96f4(byte param_1)

{
  if (param_1 < 6) {
    return (&PTR_s_Physics_0411bb28)[(char)param_1];
  }
  return "Invalid";
}


