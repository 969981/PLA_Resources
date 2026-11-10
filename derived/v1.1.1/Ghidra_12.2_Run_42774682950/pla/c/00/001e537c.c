/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e537c; name: FUN_001e537c
 */


char * FUN_001e537c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_001f8bec(*param_1);
  if ((iVar1 == 0) || (pcVar2 = (char *)(*param_1 + param_3), *pcVar2 != ':')) {
    pcVar2 = (char *)0x0;
  }
  else {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == ' ');
  }
  return pcVar2;
}


