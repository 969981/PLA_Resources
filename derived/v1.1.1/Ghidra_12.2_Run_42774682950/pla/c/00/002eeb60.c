/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eeb60; name: FUN_002eeb60
 */


void FUN_002eeb60(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 == (char *)0x0) {
    return;
  }
  FUN_002ec2d0();
  return;
}


