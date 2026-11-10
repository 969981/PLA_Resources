/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020188c; name: FUN_0020188c
 */


undefined8 FUN_0020188c(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_002044f4();
  return uVar2;
}


