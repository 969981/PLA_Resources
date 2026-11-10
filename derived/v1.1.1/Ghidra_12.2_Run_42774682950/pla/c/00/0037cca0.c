/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037cca0; name: FUN_0037cca0
 */


undefined8 FUN_0037cca0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  lVar7 = *param_2;
  lVar6 = *param_1;
  cVar3 = *(char *)(lVar7 + 0x43);
  cVar4 = *(char *)(lVar6 + 0x43);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      iVar8 = (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      iVar9 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      goto LAB_0037cd68;
    }
    bVar1 = true;
    lVar10 = *param_3;
    if (*(char *)(lVar10 + 0x43) == '\0') goto LAB_0037ccec;
LAB_0037cd7c:
    bVar2 = false;
    if (cVar3 != '\0') {
      iVar8 = *(int *)(lVar10 + 0x44);
      iVar9 = *(int *)(lVar7 + 0x44);
LAB_0037cdbc:
      bVar2 = iVar8 < iVar9;
    }
  }
  else {
    if (cVar4 == '\0') {
      bVar1 = false;
      lVar10 = *param_3;
      cVar5 = *(char *)(lVar10 + 0x43);
    }
    else {
      iVar8 = *(int *)(lVar7 + 0x44);
      iVar9 = *(int *)(lVar6 + 0x44);
LAB_0037cd68:
      bVar1 = iVar8 < iVar9;
      lVar10 = *param_3;
      cVar5 = *(char *)(lVar10 + 0x43);
    }
    if (cVar5 != '\0') goto LAB_0037cd7c;
LAB_0037ccec:
    if (cVar3 == '\0') {
      iVar8 = (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      iVar9 = (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      goto LAB_0037cdbc;
    }
    bVar2 = true;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = lVar10;
      *param_3 = lVar6;
      return 1;
    }
    *param_1 = lVar7;
    *param_2 = lVar6;
    lVar7 = *param_3;
    if (*(char *)(lVar7 + 0x43) == '\0') {
      if ((cVar4 != '\0') ||
         ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_0037ce90;
    }
    else if ((cVar4 != '\0') && (*(int *)(lVar7 + 0x44) < *(int *)(lVar6 + 0x44))) {
LAB_0037ce90:
      *param_2 = lVar7;
      *param_3 = lVar6;
      return 2;
    }
  }
  else {
    if (!bVar2) {
      return 0;
    }
    *param_2 = lVar10;
    *param_3 = lVar7;
    lVar7 = *param_2;
    lVar6 = *param_1;
    if (*(char *)(lVar7 + 0x43) == '\0') {
      if ((*(char *)(lVar6 + 0x43) != '\0') ||
         ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_0037ce44;
    }
    else if ((*(char *)(lVar6 + 0x43) != '\0') && (*(int *)(lVar7 + 0x44) < *(int *)(lVar6 + 0x44)))
    {
LAB_0037ce44:
      *param_1 = lVar7;
      *param_2 = lVar6;
      return 2;
    }
  }
  return 1;
}


