/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001757d0; name: FUN_001757d0
 */


ulong FUN_001757d0(undefined8 param_1,double *param_2,double *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  size_t sVar6;
  double dVar7;
  double dVar8;
  char *__s1;
  char *__s2;
  size_t sVar9;
  size_t sVar10;
  
  uVar4 = *(uint *)(param_2 + 1) & 0xf;
  if (uVar4 == 4) {
    if (((ulong)param_3[1] & 0xf) == 4) {
      dVar8 = *param_2;
      dVar7 = *param_3;
      __s1 = (char *)((long)dVar8 + 0x18);
      if (*(char *)((long)dVar8 + 8) == '\x04') {
        sVar9 = (size_t)*(byte *)((long)dVar8 + 0xb);
        cVar2 = *(char *)((long)dVar7 + 8);
      }
      else {
        sVar9 = *(size_t *)((long)dVar8 + 0x10);
        cVar2 = *(char *)((long)dVar7 + 8);
      }
      if (cVar2 == '\x04') {
        sVar10 = (size_t)*(byte *)((long)dVar7 + 0xb);
      }
      else {
        sVar10 = *(size_t *)((long)dVar7 + 0x10);
      }
      __s2 = (char *)((long)dVar7 + 0x18);
      uVar4 = strcoll(__s1,__s2);
      if (uVar4 == 0) {
        do {
          sVar6 = strlen(__s1);
          if (sVar6 == sVar10) {
            return 0;
          }
          uVar4 = 0xffffffff;
          if (sVar6 == sVar9) break;
          lVar1 = sVar6 + 1;
          __s1 = __s1 + lVar1;
          __s2 = __s2 + lVar1;
          sVar9 = sVar9 - lVar1;
          sVar10 = sVar10 - lVar1;
          uVar4 = strcoll(__s1,__s2);
        } while (uVar4 == 0);
      }
      return (ulong)(uVar4 >> 0x1f);
    }
  }
  else if ((uVar4 == 3) && (uVar4 = *(uint *)(param_3 + 1), (uVar4 & 0xf) == 3)) {
    if (*(uint *)(param_2 + 1) == 0x13) {
      dVar7 = *param_2;
      if (uVar4 == 0x13) {
        dVar8 = *param_3;
      }
      else {
        dVar8 = *param_3;
        if ((long)dVar7 + 0x20000000000000U < 0x40000000000001) {
          return (ulong)((double)(long)dVar7 < dVar8);
        }
        if (9.223372036854776e+18 <= dVar8) {
          return 1;
        }
        if (dVar8 <= -9.223372036854776e+18) {
          return 0;
        }
        dVar8 = (double)(long)dVar8;
      }
      return (ulong)((long)dVar7 < (long)dVar8);
    }
    dVar7 = *param_2;
    if (uVar4 == 3) {
      return (ulong)(dVar7 < *param_3);
    }
    if (!NAN(dVar7)) {
      dVar8 = *param_3;
      if ((long)dVar8 + 0x20000000000000U < 0x40000000000001) {
        return (ulong)((double)(long)dVar8 <= dVar7 ^ 1);
      }
      if (9.223372036854776e+18 <= dVar7) {
        return 0;
      }
      if (-9.223372036854776e+18 <= dVar7) {
        return (ulong)((long)dVar8 <= (long)dVar7 ^ 1);
      }
      return 1;
    }
    return 0;
  }
  uVar5 = FUN_00173db0(param_1,param_2,param_3,0x14);
  if ((int)uVar5 < 0) {
    FUN_00159cf0(param_1,param_2,param_3);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x175a48);
    (*pcVar3)();
  }
  return uVar5;
}


