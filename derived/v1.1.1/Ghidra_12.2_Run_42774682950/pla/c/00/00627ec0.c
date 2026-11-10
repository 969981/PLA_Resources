/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00627ec0; name: FUN_00627ec0
 */


bool FUN_00627ec0(byte *param_1,byte *param_2)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *__s2;
  size_t sVar8;
  
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)*param_2;
    if (bVar2 >> 1 == 0) {
LAB_00627f00:
      sVar6 = *(size_t *)(param_2 + 8);
      sVar8 = uVar5 >> 1;
      uVar4 = (uint)uVar5;
      sVar1 = sVar8;
      if ((uVar5 & 1) != 0) {
        sVar1 = sVar6;
      }
      if (sVar1 == 0) {
        return true;
      }
      goto LAB_00627f18;
    }
  }
  else {
    uVar5 = (ulong)*param_2;
    if (*(long *)(param_1 + 8) == 0) goto LAB_00627f00;
  }
  sVar6 = *(size_t *)(param_2 + 8);
  uVar4 = (uint)uVar5;
  sVar8 = uVar5 >> 1;
LAB_00627f18:
  uVar5 = (ulong)(bVar2 >> 1);
  sVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    sVar8 = sVar6;
  }
  if (sVar1 != sVar8) {
    return false;
  }
  pbVar7 = *(byte **)(param_1 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  __s2 = *(byte **)(param_2 + 0x10);
  if ((uVar4 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  if ((bVar2 & 1) == 0) {
    if (sVar1 != 0) {
      pbVar7 = param_1;
      do {
        pbVar7 = pbVar7 + 1;
        if (*pbVar7 != *__s2) {
          return false;
        }
        uVar5 = uVar5 - 1;
        __s2 = __s2 + 1;
      } while (uVar5 != 0);
    }
  }
  else if ((sVar1 != 0) && (iVar3 = memcmp(pbVar7,__s2,sVar1), iVar3 != 0)) {
    return false;
  }
  return *(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20);
}


