/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40a30; name: FUN_02f40a30
 */


void FUN_02f40a30(long param_1)

{
  undefined4 *__dest;
  char *__src;
  uint uVar1;
  long lVar2;
  
  __dest = (undefined4 *)(param_1 + 0x24);
  *__dest = 0;
  __src = *(char **)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (__src == (char *)0x0) {
    return;
  }
  if ((*__src < '\0') || (*(char *)(param_1 + 0x2a) == '\0')) {
    lVar2 = 6;
  }
  else {
    __dest = (undefined4 *)(param_1 + 0x25);
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x2a);
    lVar2 = 5;
  }
  uVar1 = (int)*(char **)(param_1 + 0x10) - (int)__src;
  if (__src + lVar2 <= *(char **)(param_1 + 0x10)) {
    uVar1 = (uint)lVar2;
  }
  memcpy(__dest,__src,(ulong)uVar1 & 0xff);
  return;
}


