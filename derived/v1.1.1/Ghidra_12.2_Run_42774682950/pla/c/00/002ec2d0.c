/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec2d0; name: FUN_002ec2d0
 */


void * FUN_002ec2d0(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_002ebd50(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return __dest;
}


