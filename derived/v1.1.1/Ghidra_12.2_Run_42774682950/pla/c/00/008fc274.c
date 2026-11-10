/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008fc274; name: FUN_008fc274
 */


code * FUN_008fc274(long param_1)

{
  size_t __n;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  char *__s;
  
  __s = *(char **)(param_1 + 0x390);
  sVar4 = strlen(__s);
  __n = 10;
  if (sVar4 < 0xb) {
    __n = sVar4;
  }
  if (__n == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = memcmp("__newindex",__s,__n);
  }
  bVar2 = uVar3 == 0;
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  if (sVar4 < 0xb && bVar2) {
    uVar3 = (uint)(sVar4 < 10);
  }
  pcVar1 = FUN_008ef7e4;
  if (uVar3 != 0) {
    pcVar1 = FUN_008ef58c;
  }
  return pcVar1;
}


