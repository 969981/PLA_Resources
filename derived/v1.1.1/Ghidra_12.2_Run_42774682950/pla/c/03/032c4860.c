/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4860; name: FUN_032c4860
 */


int FUN_032c4860(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}


