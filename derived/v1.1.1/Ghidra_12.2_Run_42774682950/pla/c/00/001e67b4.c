/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e67b4; name: FUN_001e67b4
 */


long FUN_001e67b4(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = FUN_001e3418(*param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar1 = param_1 + 1;
    do {
      pcVar4 = pcVar1;
      iVar2 = (uint)(byte)pcVar4[-1] + iVar2 * 10 + -0x30;
      iVar3 = FUN_001e3418(*pcVar4);
      pcVar1 = pcVar4 + 1;
    } while (iVar3 != 0);
    if ((iVar2 != 0) && (*pcVar4 == '$')) {
      *param_2 = pcVar4 + 1;
      return (long)iVar2;
    }
  }
  return 0;
}


