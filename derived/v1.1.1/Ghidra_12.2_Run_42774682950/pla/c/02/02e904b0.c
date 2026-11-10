/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e904b0; name: FUN_02e904b0
 */


int FUN_02e904b0(uint param_1)

{
  char *param3;
  int iVar1;
  char acStack_124 [260];
  
  param3 = "an older";
  if (0x86 < param_1) {
    param3 = "a newer";
  }
  iVar1 = snprintf(acStack_124,0x104,
                   "Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank version is %d and the current SDK version is %d"
                   ,param3,param_1,0x87);
  return iVar1;
}


