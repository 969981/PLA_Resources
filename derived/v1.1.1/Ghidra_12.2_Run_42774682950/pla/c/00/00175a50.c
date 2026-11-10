/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00175a50; name: FUN_00175a50
 */


ulong FUN_00175a50(long param_1,double *param_2,double *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  size_t sVar7;
  double dVar8;
  double dVar9;
  char *__s1;
  char *__s2;
  size_t sVar10;
  size_t sVar11;
  
  uVar5 = *(uint *)(param_2 + 1) & 0xf;
  if (uVar5 == 4) {
    if (((ulong)param_3[1] & 0xf) == 4) {
      dVar9 = *param_2;
      dVar8 = *param_3;
      __s1 = (char *)((long)dVar9 + 0x18);
      if (*(char *)((long)dVar9 + 8) == '\x04') {
        sVar10 = (size_t)*(byte *)((long)dVar9 + 0xb);
        cVar2 = *(char *)((long)dVar8 + 8);
      }
      else {
        sVar10 = *(size_t *)((long)dVar9 + 0x10);
        cVar2 = *(char *)((long)dVar8 + 8);
      }
      if (cVar2 == '\x04') {
        sVar11 = (size_t)*(byte *)((long)dVar8 + 0xb);
      }
      else {
        sVar11 = *(size_t *)((long)dVar8 + 0x10);
      }
      __s2 = (char *)((long)dVar8 + 0x18);
      uVar5 = strcoll(__s1,__s2);
      if (uVar5 == 0) {
        do {
          sVar7 = strlen(__s1);
          if (sVar7 == sVar11) {
            uVar5 = (uint)(sVar7 != sVar10);
            break;
          }
          uVar5 = 0xffffffff;
          if (sVar7 == sVar10) break;
          lVar1 = sVar7 + 1;
          __s1 = __s1 + lVar1;
          __s2 = __s2 + lVar1;
          sVar10 = sVar10 - lVar1;
          sVar11 = sVar11 - lVar1;
          uVar5 = strcoll(__s1,__s2);
        } while (uVar5 == 0);
      }
      return (ulong)((int)uVar5 < 1);
    }
  }
  else if ((uVar5 == 3) && (uVar5 = *(uint *)(param_3 + 1), (uVar5 & 0xf) == 3)) {
    if (*(uint *)(param_2 + 1) == 0x13) {
      dVar8 = *param_2;
      if (uVar5 == 0x13) {
        dVar9 = *param_3;
      }
      else {
        dVar9 = *param_3;
        if ((long)dVar8 + 0x20000000000000U < 0x40000000000001) {
          return (ulong)((double)(long)dVar8 <= dVar9);
        }
        if (9.223372036854776e+18 <= dVar9) {
          return 1;
        }
        if (dVar9 < -9.223372036854776e+18) {
          return 0;
        }
        dVar9 = (double)(long)dVar9;
      }
      return (ulong)((long)dVar8 <= (long)dVar9);
    }
    dVar8 = *param_2;
    if (uVar5 == 3) {
      return (ulong)(dVar8 <= *param_3);
    }
    if (!NAN(dVar8)) {
      dVar9 = *param_3;
      if ((long)dVar9 + 0x20000000000000U < 0x40000000000001) {
        return (ulong)((double)(long)dVar9 < dVar8 ^ 1);
      }
      if (9.223372036854776e+18 <= dVar8) {
        return 0;
      }
      if (dVar8 <= -9.223372036854776e+18) {
        return 1;
      }
      return (ulong)((long)dVar9 < (long)dVar8 ^ 1);
    }
    return 0;
  }
  uVar6 = FUN_00173db0(param_1,param_2,param_3,0x15);
  if ((int)uVar6 < 0) {
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) | 0x80;
    iVar4 = FUN_00173db0(param_1,param_3,param_2,0x14);
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) ^ 0x80;
    if (iVar4 < 0) {
      FUN_00159cf0(param_1,param_2,param_3);
                    /* WARNING: Does not return */
      pcVar3 = (code *)UndefinedInstructionException(0,0x175d0c);
      (*pcVar3)();
    }
    uVar6 = (ulong)(iVar4 == 0);
  }
  return uVar6;
}


