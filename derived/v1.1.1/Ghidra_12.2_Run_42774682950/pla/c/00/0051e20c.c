/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051e20c; name: FUN_0051e20c
 */


bool FUN_0051e20c(byte *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *__s2;
  long lVar9;
  long lVar10;
  
  bVar3 = *param_1;
  uVar7 = (ulong)(bVar3 >> 1);
  __n = uVar7;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pbVar8 = param_1;
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *__s2) {
            return false;
          }
          uVar7 = uVar7 - 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pbVar8,__s2,__n), iVar6 != 0)) {
      return false;
    }
    bVar5 = (param_1[0x18] != 0) == (param_2[0x18] != 0);
    if ((bVar5) && (param_1[0x18] != 0)) {
      if (param_2[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"this->engaged_\"",
                      "external/com_google_absl\\absl/types/optional.h",0x1ac,"operator()");
      }
      lVar10 = *(long *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      lVar9 = *(long *)(param_2 + 0x20);
      if (lVar2 - lVar10 != *(long *)(param_2 + 0x28) - lVar9) {
        return false;
      }
      if (lVar10 == lVar2) {
        return true;
      }
      do {
        uVar7 = FUN_0051e374(lVar10,lVar9);
        if ((uVar7 & 1) == 0) {
          return false;
        }
        lVar10 = lVar10 + 0x78;
        lVar9 = lVar9 + 0x78;
        bVar5 = true;
      } while (lVar2 != lVar10);
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


