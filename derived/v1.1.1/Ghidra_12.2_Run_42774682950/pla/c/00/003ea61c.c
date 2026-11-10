/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ea61c; name: FUN_003ea61c
 */


long * FUN_003ea61c(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  void *pvVar11;
  byte *__s2;
  void *__s1;
  long *plVar12;
  long *plVar13;
  
  if (param_1 + 1 == param_2) {
LAB_003ea6c0:
    plVar13 = (long *)*param_2;
    plVar8 = param_2;
    if ((long *)*param_1 == param_2) {
LAB_003ea7d8:
      if (plVar13 == (long *)0x0) {
        *param_3 = (long)param_2;
        return param_2;
      }
      *param_3 = (long)plVar8;
      return plVar8 + 1;
    }
    if (plVar13 == (long *)0x0) {
      plVar12 = param_2;
      do {
        plVar8 = (long *)plVar12[2];
        bVar6 = (long *)*plVar8 == plVar12;
        plVar12 = plVar8;
      } while (bVar6);
    }
    else {
      plVar12 = plVar13;
      do {
        plVar8 = plVar12;
        plVar12 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    bVar4 = *(byte *)(plVar8 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(param_5 + 8);
    }
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = plVar8[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 != 0) {
      pvVar11 = (void *)plVar8[6];
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)plVar8 + 0x21);
      }
      pbVar10 = *(byte **)(param_5 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      iVar7 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar7 != 0) {
        if (iVar7 < 0) goto LAB_003ea7d8;
        goto LAB_003ea7a8;
      }
    }
    if (uVar1 < uVar2) goto LAB_003ea7d8;
    goto LAB_003ea7a8;
  }
  bVar4 = *(byte *)(param_2 + 4);
  bVar5 = *param_5;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_2[5];
  }
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_5 + 8);
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 == 0) {
LAB_003ea6b8:
    if (uVar1 < uVar2) goto LAB_003ea6c0;
    if (sVar3 != 0) {
      __s1 = (void *)param_2[6];
      __s2 = *(byte **)(param_5 + 0x10);
      goto LAB_003ea6fc;
    }
LAB_003ea7fc:
    if (uVar1 <= uVar2) {
LAB_003ea71c:
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
  }
  else {
    __s2 = *(byte **)(param_5 + 0x10);
    pbVar10 = __s2;
    if ((bVar5 & 1) == 0) {
      pbVar10 = param_5 + 1;
    }
    __s1 = (void *)param_2[6];
    pvVar11 = __s1;
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)((long)param_2 + 0x21);
    }
    iVar7 = memcmp(pbVar10,pvVar11,sVar3);
    if (iVar7 == 0) goto LAB_003ea6b8;
    if (iVar7 < 0) goto LAB_003ea6c0;
LAB_003ea6fc:
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)((long)param_2 + 0x21);
    }
    if ((bVar5 & 1) == 0) {
      __s2 = param_5 + 1;
    }
    iVar7 = memcmp(__s1,__s2,sVar3);
    if (iVar7 == 0) goto LAB_003ea7fc;
    if (-1 < iVar7) goto LAB_003ea71c;
  }
  plVar8 = (long *)param_2[1];
  if (plVar8 == (long *)0x0) {
    plVar8 = param_2 + 2;
    plVar13 = (long *)*plVar8;
    if ((long *)*plVar13 != param_2) {
      do {
        lVar9 = *plVar8;
        plVar8 = (long *)(lVar9 + 0x10);
        plVar13 = (long *)*plVar8;
      } while (*plVar13 != lVar9);
    }
  }
  else {
    do {
      plVar13 = plVar8;
      plVar8 = (long *)*plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
  if (plVar13 != param_1 + 1) {
    bVar4 = *(byte *)(plVar13 + 4);
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = plVar13[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 != 0) {
      pbVar10 = *(byte **)(param_5 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      pvVar11 = (void *)plVar13[6];
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)plVar13 + 0x21);
      }
      iVar7 = memcmp(pbVar10,pvVar11,sVar3);
      if (iVar7 != 0) {
        if (iVar7 < 0) goto LAB_003ea8ac;
        goto LAB_003ea7a8;
      }
    }
    if (uVar2 <= uVar1) {
LAB_003ea7a8:
      plVar8 = (long *)FUN_003ea500(param_1,param_3,param_5);
      return plVar8;
    }
  }
LAB_003ea8ac:
  if (param_2[1] == 0) {
    *param_3 = (long)param_2;
    return param_2 + 1;
  }
  *param_3 = (long)plVar13;
  return plVar13;
}


