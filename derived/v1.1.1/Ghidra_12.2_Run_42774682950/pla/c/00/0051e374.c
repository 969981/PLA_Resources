/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051e374; name: FUN_0051e374
 */


undefined8 FUN_0051e374(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte *__s1;
  byte *__s2;
  void *__s1_00;
  char *__s2_00;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar7 = FUN_0051e524();
  if ((uVar7 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0x48);
    bVar5 = *(byte *)(param_2 + 0x48);
    uVar7 = (ulong)(bVar4 >> 1);
    sVar1 = uVar7;
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x50);
    }
    sVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x50);
    }
    if (sVar1 == sVar2) {
      __s1_00 = *(void **)(param_1 + 0x58);
      if ((bVar4 & 1) == 0) {
        __s1_00 = (void *)(param_1 + 0x49);
      }
      __s2_00 = *(char **)(param_2 + 0x58);
      if ((bVar5 & 1) == 0) {
        __s2_00 = (char *)(param_2 + 0x49);
      }
      if ((bVar4 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar9 = (char *)(param_1 + 0x49);
          do {
            if (*pcVar9 != *__s2_00) {
              return 0;
            }
            uVar7 = uVar7 - 1;
            pcVar9 = pcVar9 + 1;
            __s2_00 = __s2_00 + 1;
          } while (uVar7 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar6 = memcmp(__s1_00,__s2_00,sVar1), iVar6 != 0)) {
        return 0;
      }
      pbVar10 = *(byte **)(param_1 + 0x60);
      pbVar3 = *(byte **)(param_1 + 0x68);
      pbVar11 = *(byte **)(param_2 + 0x60);
      if ((long)pbVar3 - (long)pbVar10 == *(long *)(param_2 + 0x68) - (long)pbVar11) {
        if (pbVar10 == pbVar3) {
          return 1;
        }
        do {
          bVar4 = *pbVar10;
          sVar1 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar10 + 8);
          }
          bVar5 = *pbVar11;
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar11 + 8);
          }
          if (sVar1 != sVar2) {
            return 0;
          }
          __s1 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            __s1 = pbVar10 + 1;
          }
          __s2 = *(byte **)(pbVar11 + 0x10);
          if ((bVar5 & 1) == 0) {
            __s2 = pbVar11 + 1;
          }
          if ((bVar4 & 1) == 0) {
            if (sVar1 != 0) {
              uVar7 = 0;
              do {
                if (pbVar10[uVar7 + 1] != __s2[uVar7]) {
                  return 0;
                }
                uVar7 = uVar7 + 1;
              } while (bVar4 >> 1 != uVar7);
            }
          }
          else if ((sVar1 != 0) && (iVar6 = memcmp(__s1,__s2,sVar1), iVar6 != 0)) {
            return 0;
          }
          if (*(int *)(pbVar10 + 0x18) != *(int *)(pbVar11 + 0x18)) {
            return 0;
          }
          pbVar10 = pbVar10 + 0x20;
          pbVar11 = pbVar11 + 0x20;
          uVar8 = 1;
        } while (pbVar10 != pbVar3);
      }
      else {
        uVar8 = 0;
      }
      return uVar8;
    }
  }
  return 0;
}


