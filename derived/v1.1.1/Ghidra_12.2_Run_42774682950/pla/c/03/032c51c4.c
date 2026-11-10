/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c51c4; name: FUN_032c51c4
 */


int FUN_032c51c4(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar2 = strstr((char *)*param_1,param_2);
  if (pcVar2 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    do {
      pcVar3 = pcVar2;
      uVar4 = *param_1;
      pcVar2 = strstr(pcVar3 + 1,param_2);
    } while (pcVar2 != (char *)0x0);
    iVar1 = (int)pcVar3 - (int)uVar4;
  }
  return iVar1;
}


