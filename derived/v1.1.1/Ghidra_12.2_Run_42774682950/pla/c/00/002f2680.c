/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2680; name: FUN_002f2680
 */


void * FUN_002f2680(long *param_1)

{
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)(param_1 + 1);
  if (*param_1 == 0) {
    uVar1 = (ulong)(byte)*puVar3;
  }
  else {
    uVar1 = *puVar3;
  }
  __dest = (void *)FUN_002ebd50(uVar1 + 1);
  if (*param_1 == 0) {
    memcpy(__dest,(void *)((long)param_1 + 9),(ulong)(byte)*puVar3);
    lVar2 = *param_1;
  }
  else {
    memcpy(__dest,(void *)param_1[2],param_1[1]);
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    uVar1 = (ulong)(byte)*puVar3;
  }
  else {
    uVar1 = *puVar3;
  }
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return __dest;
}


