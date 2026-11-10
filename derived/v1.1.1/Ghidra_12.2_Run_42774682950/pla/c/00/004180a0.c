/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004180a0; name: FUN_004180a0
 */


void FUN_004180a0(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(&DAT_0439e710);
  __dest = strncpy(&DAT_0439e730,&DAT_0439e710,0x40);
  strncat(__dest,param_1,0x3f - sVar1);
  return;
}


