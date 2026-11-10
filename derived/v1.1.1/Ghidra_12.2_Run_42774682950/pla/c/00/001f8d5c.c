/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8d5c; name: FUN_001f8d5c
 */


char * FUN_001f8d5c(uint param_1)

{
  if (param_1 < 100) {
    return (&PTR_s_No_error_0411d1c0)[(int)param_1];
  }
  return "Unknown error";
}


