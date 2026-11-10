/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055aedc; name: FUN_0055aedc
 */


undefined8
FUN_0055aedc(long *param_1,long *param_2,long *param_3,uint param_4,uint param_5,undefined8 *param_6
            ,int param_7)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar10 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = lVar10;
  lVar10 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar10;
  if (param_1[3] == 0) {
    lVar10 = *param_2;
    param_1[4] = param_2[1];
    param_1[3] = lVar10;
    pcVar9 = (char *)*param_1;
    cVar3 = *pcVar9;
  }
  else {
    pcVar9 = (char *)*param_1;
    cVar3 = *pcVar9;
  }
  if ((cVar3 != '\0') && (param_1[3] != *param_2)) {
    return 0;
  }
  cVar4 = pcVar9[1];
  if ((cVar4 == '\0') || (param_1[3] + param_1[4] == *param_2 + param_2[1])) {
    if ((param_4 & 1) != 0) {
      cVar3 = '\x01';
    }
    *(char *)(param_1 + 5) = cVar3;
    cVar3 = cVar4;
    if ((param_5 & 1) != 0) {
      cVar3 = '\x01';
    }
    *(char *)((long)param_1 + 0x2a) = cVar4;
    param_1[6] = (long)param_6;
    *(char *)((long)param_1 + 0x29) = cVar3;
    *(int *)(param_1 + 7) = param_7;
    if (0 < param_7) {
      *param_6 = 0;
      param_6[1] = 0;
      if (1 < (int)param_1[7]) {
        lVar10 = 1;
        lVar12 = 0x10;
        do {
          lVar13 = param_1[6];
          lVar10 = lVar10 + 1;
          *(undefined8 *)(lVar13 + lVar12) = 0;
          ((undefined8 *)(lVar13 + lVar12))[1] = 0;
          lVar12 = lVar12 + 0x10;
        } while (lVar10 < (int)param_1[7]);
      }
      pcVar9 = (char *)*param_1;
    }
    iVar5 = ((int)param_2[1] + 1) * *(int *)(pcVar9 + 0x28);
    iVar1 = iVar5 + 0x3f;
    iVar5 = iVar5 + 0x7e;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    uVar11 = iVar5 >> 6;
    uVar14 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
    pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    lVar10 = param_1[8];
    param_1[8] = (long)pvVar6;
    if (lVar10 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      pvVar6 = (void *)param_1[8];
    }
    *(uint *)(param_1 + 9) = uVar11;
    memset(pvVar6,0,uVar14);
    uVar11 = param_7 * 2;
    if ((int)uVar11 < 3) {
      uVar11 = 2;
    }
    pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)uVar11 << 3);
    lVar10 = param_1[10];
    param_1[10] = (long)pvVar6;
    if (lVar10 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      pvVar6 = (void *)param_1[10];
    }
    *(uint *)(param_1 + 0xb) = uVar11;
    memset(pvVar6,0,(ulong)uVar11 << 3);
    lVar10 = FUN_002e2e80(PTR_FUN_04373078,0x400);
    lVar12 = param_1[0xc];
    param_1[0xc] = lVar10;
    if (lVar12 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    *(undefined4 *)(param_1 + 0xd) = 0x40;
    pvVar6 = (void *)*param_2;
    if ((char)param_1[5] != '\0') {
      *(void **)param_1[10] = pvVar6;
      uVar7 = FUN_0055a97c(param_1,*(undefined4 *)(*param_1 + 8),*param_2);
      return uVar7;
    }
    if (param_2[1] < 0) {
      return 0;
    }
    pvVar2 = (void *)((long)pvVar6 + param_2[1]);
    do {
      if (pvVar6 < pvVar2) {
        lVar10 = *param_1;
        if (*(long *)(lVar10 + 0x18) != 0) {
          if (*(long *)(lVar10 + 0x18) == 1) {
            pvVar8 = memchr(pvVar6,*(int *)(lVar10 + 0x20),(long)pvVar2 - (long)pvVar6);
          }
          else {
            pvVar8 = (void *)FUN_00556350(lVar10,pvVar6);
          }
          pvVar6 = pvVar2;
          if (pvVar8 != (void *)0x0) {
            pvVar6 = pvVar8;
          }
        }
      }
      *(void **)param_1[10] = pvVar6;
      uVar14 = FUN_0055a97c(param_1,*(undefined4 *)(*param_1 + 8),pvVar6);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
    } while ((pvVar6 != (void *)0x0) && (pvVar6 = (void *)((long)pvVar6 + 1), pvVar6 <= pvVar2));
  }
  return 0;
}


