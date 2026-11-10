/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135db24; name: FUN_0135db24
 */


bool FUN_0135db24(char *param_1)

{
  int iVar1;
  size_t __n;
  
  __n = strlen(s_data___0427f778);
  iVar1 = strncmp(param_1,s_data___0427f778,__n);
  return iVar1 == 0;
}


