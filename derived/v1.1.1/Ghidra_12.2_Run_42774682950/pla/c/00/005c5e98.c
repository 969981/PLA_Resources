/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c5e98; name: FUN_005c5e98
 */


bool FUN_005c5e98(long *param_1,long *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  lVar12 = *param_1;
  lVar10 = *param_2;
  bVar3 = *(byte *)(lVar12 + 0x18);
  bVar4 = *(byte *)(lVar10 + 0x18);
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar12 + 0x20);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar10 + 0x20);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(lVar12 + 0x28);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(lVar12 + 0x19);
    }
    pcVar9 = *(char **)(lVar10 + 0x28);
    if ((bVar4 & 1) == 0) {
      pcVar9 = (char *)(lVar10 + 0x19);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar7 = (char *)(lVar12 + 0x19);
        do {
          if (*pcVar7 != *pcVar9) {
            return false;
          }
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) {
      return false;
    }
    bVar3 = *(byte *)(lVar12 + 0x30);
    bVar4 = *(byte *)(lVar10 + 0x30);
    uVar6 = (ulong)(bVar3 >> 1);
    sVar1 = uVar6;
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar12 + 0x38);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar10 + 0x38);
    }
    if (sVar1 == sVar2) {
      pvVar8 = *(void **)(lVar12 + 0x40);
      if ((bVar3 & 1) == 0) {
        pvVar8 = (void *)(lVar12 + 0x31);
      }
      pcVar9 = *(char **)(lVar10 + 0x40);
      if ((bVar4 & 1) == 0) {
        pcVar9 = (char *)(lVar10 + 0x31);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar7 = (char *)(lVar12 + 0x31);
          do {
            if (*pcVar7 != *pcVar9) {
              return false;
            }
            uVar6 = uVar6 - 1;
            pcVar7 = pcVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (uVar6 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) {
        return false;
      }
      bVar3 = *(byte *)(lVar12 + 0x48);
      bVar4 = *(byte *)(lVar10 + 0x48);
      uVar6 = (ulong)(bVar3 >> 1);
      sVar1 = uVar6;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar12 + 0x50);
      }
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(lVar10 + 0x50);
      }
      if (sVar1 == sVar2) {
        pvVar8 = *(void **)(lVar12 + 0x58);
        if ((bVar3 & 1) == 0) {
          pvVar8 = (void *)(lVar12 + 0x49);
        }
        pcVar9 = *(char **)(lVar10 + 0x58);
        if ((bVar4 & 1) == 0) {
          pcVar9 = (char *)(lVar10 + 0x49);
        }
        if ((bVar3 & 1) == 0) {
          if (sVar1 != 0) {
            pcVar7 = (char *)(lVar12 + 0x49);
            do {
              if (*pcVar7 != *pcVar9) {
                return false;
              }
              uVar6 = uVar6 - 1;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar6 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) {
          return false;
        }
        uVar6 = param_1[1];
        plVar11 = param_1 + 2;
        if ((uVar6 & 1) != 0) {
          plVar11 = (long *)param_1[2];
        }
        if (((uVar6 ^ param_2[1]) >> 1 & 0xfffffffffffffff) == 0) {
          if (uVar6 >> 1 != 0) {
            lVar10 = (uVar6 >> 1) * 0x90;
            plVar13 = param_2 + 2;
            if ((param_2[1] & 1U) != 0) {
              plVar13 = (long *)param_2[2];
            }
            do {
              iVar5 = FUN_005c679c(plVar11,plVar13);
              if (iVar5 != 0) {
                return false;
              }
              plVar11 = (long *)((long)plVar11 + 0x90);
              plVar13 = (long *)((long)plVar13 + 0x90);
              lVar10 = lVar10 + -0x90;
            } while (lVar10 != 0);
          }
          if ((int)param_1[0x14] == (int)param_2[0x14]) {
            return *(int *)((long)param_1 + 0xa4) == *(int *)((long)param_2 + 0xa4);
          }
        }
      }
    }
  }
  return false;
}


