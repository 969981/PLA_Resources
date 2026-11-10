/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a8590; name: FUN_002a8590
 */


void FUN_002a8590(char *param_1,char *param_2)

{
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = *(char **)PTR_PTR_04373338;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = *(char **)PTR_PTR_04373340;
  }
                    /* try { // try from 002a85d0 to 002a85db has its CatchHandler @ 002a85e4 */
  FUN_006e8ea0(param_2,param_1);
  return;
}


