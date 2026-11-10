/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00403360; name: FUN_00403360
 */


undefined8
FUN_00403360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,uint param_6,int param_7,uint param_8,uint param_9)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  size_t sVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  char *__s;
  uint uVar16;
  undefined4 local_80;
  char local_7c [28];
  
  if ((param_9 >> 6 & 1) == 0) {
    iVar12 = 0x2b;
    if ((param_9 & 2) == 0) {
      iVar12 = (param_9 & 4) << 3;
    }
    bVar7 = (param_5 & 0x8000000000000000) != 0;
    if (bVar7) {
      iVar12 = 0x2d;
    }
    uVar10 = -param_5;
    if (!bVar7) {
      uVar10 = param_5;
    }
  }
  else {
    iVar12 = 0;
    uVar10 = param_5;
  }
  __s = "";
  if ((param_9 >> 3 & 1) != 0) {
    pcVar2 = "0";
    if (param_6 != 8) {
      pcVar2 = "";
    }
    __s = "0x";
    if (param_6 != 0x10) {
      __s = pcVar2;
    }
  }
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  uVar14 = 0;
  pcVar2 = "0123456789abcdef";
  if ((param_9 & 0x20) != 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  uVar15 = (ulong)param_6;
  do {
    uVar5 = 0;
    if (uVar15 != 0) {
      uVar5 = uVar10 / uVar15;
    }
    local_7c[uVar14] = pcVar2[uVar10 - uVar5 * uVar15];
    uVar14 = uVar14 + 1;
  } while ((uVar15 <= uVar10) && (uVar10 = uVar5, uVar14 < 0x1a));
  uVar13 = (uint)uVar14;
  uVar1 = uVar13 - 1;
  if (uVar13 != 0x1a) {
    uVar1 = uVar13;
  }
  uVar13 = uVar1;
  if ((int)uVar1 <= (int)param_8) {
    uVar13 = param_8;
  }
  local_7c[uVar1] = '\0';
  local_80 = param_7;
  sVar8 = strlen(__s);
  uVar4 = ((local_80 - (uint)(iVar12 != 0)) - uVar13) - (int)sVar8;
  uVar13 = param_8 - uVar1 & ((int)(param_8 - uVar1) >> 0x1f ^ 0xffffffffU);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar16 = uVar4;
  if ((int)uVar4 <= (int)uVar13) {
    uVar16 = uVar13;
  }
  if ((param_9 & 0x10) != 0) {
    uVar4 = 0;
    uVar13 = uVar16;
  }
  uVar16 = -uVar4;
  if ((param_9 & 1) == 0) {
    uVar16 = uVar4;
  }
  for (; 0 < (int)uVar16; uVar16 = uVar16 - 1) {
    uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,0x20);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
  }
  if ((iVar12 != 0) &&
     (uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,iVar12), (int)uVar9 == 0)) {
    return uVar9;
  }
  cVar3 = *__s;
  while (cVar3 != '\0') {
    __s = __s + 1;
    uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,cVar3);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    cVar3 = *__s;
  }
  for (; 0 < (int)uVar13; uVar13 = uVar13 - 1) {
    uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,0x30);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
  }
  lVar11 = (long)(int)uVar1;
  do {
    if (lVar11 < 1) {
      if (-1 < (int)uVar16) {
        return 1;
      }
      do {
        uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,0x20);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0);
      return 1;
    }
    lVar6 = lVar11 + -1;
    lVar11 = lVar11 + -1;
    uVar9 = FUN_004031d0(param_1,param_2,param_3,param_4,local_7c[lVar6]);
  } while ((int)uVar9 != 0);
  return uVar9;
}


