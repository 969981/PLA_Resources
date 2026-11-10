/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0245ccf0; name: FUN_0245ccf0
 */


bool FUN_0245ccf0(byte *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *__s1;
  ulong uVar5;
  byte *__s2;
  
  bVar2 = *param_1;
  uVar5 = (ulong)(bVar2 >> 1);
  bVar3 = *param_2;
  __n = uVar5;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n != sVar1) {
    return true;
  }
  __s1 = *(byte **)(param_1 + 0x10);
  if ((bVar2 & 1) == 0) {
    __s1 = param_1 + 1;
  }
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      do {
        param_1 = param_1 + 1;
        if (*param_1 != *__s2) {
          return true;
        }
        uVar5 = uVar5 - 1;
        __s2 = __s2 + 1;
      } while (uVar5 != 0);
      return false;
    }
  }
  else if (__n != 0) {
    iVar4 = memcmp(__s1,__s2,__n);
    return iVar4 != 0;
  }
  return false;
}


