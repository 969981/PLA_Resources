/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00378a9c; name: FUN_00378a9c
 */


undefined8 FUN_00378a9c(long param_1,byte *param_2)

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  size_t __n;
  int iVar4;
  long lVar5;
  byte *__s2;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = (long)*(int *)(param_1 + 0x88);
  if (0 < *(int *)(param_1 + 0x88)) {
    bVar2 = *param_2;
    lVar10 = *(long *)(param_1 + 0x60);
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
      __n = (ulong)(bVar2 >> 1);
    }
    else {
      __n = *(size_t *)(param_2 + 8);
    }
    if ((bVar2 & 1) == 0) {
      lVar5 = 0;
      do {
        pbVar6 = *(byte **)(lVar10 + lVar5 * 8);
        bVar3 = *pbVar6;
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar6 + 8);
        }
        if (__n == sVar1) {
          if (__n == 0) {
            return 1;
          }
          pbVar7 = *(byte **)(pbVar6 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar7 = pbVar6 + 1;
          }
          uVar8 = (ulong)(bVar2 >> 1);
          pbVar6 = param_2;
          while (pbVar6 = pbVar6 + 1, *pbVar6 == *pbVar7) {
            uVar8 = uVar8 - 1;
            pbVar7 = pbVar7 + 1;
            if (uVar8 == 0) {
              return 1;
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar9);
    }
    else if (__n == 0) {
      lVar5 = 0;
      do {
        pbVar6 = *(byte **)(lVar10 + lVar5 * 8);
        bVar2 = *pbVar6;
        uVar8 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar8 == 0) {
          return 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar9);
    }
    else {
      lVar5 = 0;
      do {
        pbVar7 = *(byte **)(lVar10 + lVar5 * 8);
        bVar2 = *pbVar7;
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar7 + 8);
        }
        if (__n == sVar1) {
          __s2 = *(byte **)(pbVar7 + 0x10);
          if ((bVar2 & 1) == 0) {
            __s2 = pbVar7 + 1;
          }
          iVar4 = memcmp(pbVar6,__s2,__n);
          if (iVar4 == 0) {
            return 1;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar9);
    }
  }
  return 0;
}


