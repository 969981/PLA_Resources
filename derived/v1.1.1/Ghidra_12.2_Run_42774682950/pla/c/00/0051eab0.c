/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051eab0; name: FUN_0051eab0
 */


undefined8 FUN_0051eab0(long param_1,long param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *__s1;
  byte *__s2;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x18) >> 1;
  pbVar7 = (byte *)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pbVar7 = *(byte **)(param_1 + 0x20);
  }
  if (uVar6 != *(ulong *)(param_2 + 0x18) >> 1) {
    return 0;
  }
  if (uVar6 != 0) {
    pbVar1 = pbVar7 + uVar6 * 0x20;
    pbVar8 = (byte *)(param_2 + 0x20);
    if ((*(ulong *)(param_2 + 0x18) & 1) != 0) {
      pbVar8 = *(byte **)(param_2 + 0x20);
    }
    do {
      bVar3 = *pbVar7;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(pbVar7 + 8);
      }
      bVar4 = *pbVar8;
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar8 + 8);
      }
      if (__n != sVar2) {
        return 0;
      }
      __s1 = *(byte **)(pbVar7 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s1 = pbVar7 + 1;
      }
      __s2 = *(byte **)(pbVar8 + 0x10);
      if ((bVar4 & 1) == 0) {
        __s2 = pbVar8 + 1;
      }
      if ((bVar3 & 1) == 0) {
        if (__n != 0) {
          uVar6 = 0;
          do {
            if (pbVar7[uVar6 + 1] != __s2[uVar6]) {
              return 0;
            }
            uVar6 = uVar6 + 1;
          } while (bVar3 >> 1 != uVar6);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) {
        return 0;
      }
      if (*(int *)(pbVar7 + 0x18) != *(int *)(pbVar8 + 0x18)) {
        return 0;
      }
      pbVar7 = pbVar7 + 0x20;
      pbVar8 = pbVar8 + 0x20;
    } while (pbVar7 != pbVar1);
  }
  return 1;
}


