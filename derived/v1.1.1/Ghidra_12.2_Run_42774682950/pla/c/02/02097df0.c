/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02097df0; name: FUN_02097df0
 */


undefined8 FUN_02097df0(byte *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *__s1;
  ulong uVar6;
  byte *__s2;
  
  pbVar5 = (byte *)FUN_017aa43c();
  bVar2 = *param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  bVar3 = *pbVar5;
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar5 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    __s2 = *(byte **)(pbVar5 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = pbVar5 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return 1;
      }
      while (param_1 = param_1 + 1, *param_1 == *__s2) {
        uVar6 = uVar6 - 1;
        __s2 = __s2 + 1;
        if (uVar6 == 0) {
          return 1;
        }
      }
    }
    else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) {
      return 1;
    }
  }
  return 0;
}


