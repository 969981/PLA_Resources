/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d71f94; name: FUN_00d71f94
 */


bool FUN_00d71f94(undefined8 *param_1)

{
  int iVar1;
  size_t __n;
  char *__s1;
  
  __s1 = (char *)*param_1;
  __n = strlen(s_data___0427f778);
  iVar1 = strncmp(__s1,s_data___0427f778,__n);
  return iVar1 == 0;
}


