/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4be0; name: FUN_032c4be0
 */


int FUN_032c4be0(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strrchr(param_1,param_2 & 0xff);
  iVar1 = (int)pcVar2 - (int)param_1;
  if (pcVar2 == (char *)0x0) {
    iVar1 = -1;
  }
  return iVar1;
}


