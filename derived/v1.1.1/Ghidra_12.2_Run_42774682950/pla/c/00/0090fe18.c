/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090fe18; name: FUN_0090fe18
 */


undefined1 * FUN_0090fe18(long param_1)

{
  size_t __n;
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  char *__s;
  
  __s = *(char **)(param_1 + 0x90);
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
  puVar1 = &LAB_0090e0d8;
  if (uVar3 != 0) {
    puVar1 = &LAB_0090da94;
  }
  return puVar1;
}


