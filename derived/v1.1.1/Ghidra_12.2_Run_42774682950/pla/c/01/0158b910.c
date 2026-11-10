/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158b910; name: FUN_0158b910
 */


void FUN_0158b910(undefined8 param_1,undefined8 *param_2)

{
  uint *__src;
  char *__dest;
  uint *puVar1;
  char acStack_a0 [128];
  char *local_18;
  
  puVar1 = (uint *)*param_2;
  __dest = acStack_a0 + (0x80 - ((ulong)*puVar1 + 0x10 & 0x1fffffff0));
  __src = (uint *)0x0;
  if (puVar1 != (uint *)0x0) {
    __src = puVar1 + 1;
  }
  local_18 = __dest;
  *__dest = '\0';
  strcat(__dest,(char *)__src);
  FUN_009313e8(param_1,&local_18);
  return;
}


