/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a8540; name: FUN_002a8540
 */


void FUN_002a8540(char *param_1)

{
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = *(char **)PTR_PTR_04373338;
  }
                    /* try { // try from 002a855c to 002a855f has its CatchHandler @ 002a8568 */
  FUN_006e8cd0(param_1);
  return;
}


