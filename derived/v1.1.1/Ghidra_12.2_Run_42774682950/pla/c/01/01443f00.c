/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01443f00; name: FUN_01443f00
 */


void FUN_01443f00(undefined8 param_1,long param_2)

{
  char *__src;
  char *__dest;
  char acStack_a0 [128];
  char *local_18;
  
  __src = *(char **)(param_2 + 8);
  __dest = acStack_a0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x10U & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  strcat(__dest,__src);
  FUN_009313e8(param_1,&local_18);
  return;
}


