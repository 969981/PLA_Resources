/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e952c; name: FUN_001e952c
 */


undefined8 FUN_001e952c(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    FUN_001e7a9c();
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


