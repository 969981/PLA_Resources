/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277fcd0; name: FUN_0277fcd0
 */


void FUN_0277fcd0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *__s1;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar16;
  char *pcVar15;
  
LAB_0277fd04:
  __s1 = param_2 + -0x18;
  pcVar11 = param_1;
LAB_0277fd10:
  param_1 = pcVar11;
  uVar7 = (long)param_2 - (long)param_1;
  switch(((long)uVar7 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_02780034_caseD_0;
  case 2:
    iVar4 = strcmp(__s1,param_1);
    if (iVar4 < 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)param_1 = *(undefined8 *)__s1;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      *(undefined8 *)__s1 = uVar1;
      *(undefined8 *)(param_2 + -0x10) = uVar3;
      *(undefined8 *)(param_2 + -8) = uVar10;
      return;
    }
    return;
  case 3:
    FUN_02780180(param_1,param_1 + 0x18,__s1);
    return;
  case 4:
    FUN_02780300(param_1,param_1 + 0x18,param_1 + 0x30,__s1);
    return;
  case 5:
    FUN_02780420(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,__s1);
    return;
  default:
    if ((long)uVar7 < 0x2e8) {
      FUN_02780590(param_1,param_2);
      return;
    }
    pcVar11 = param_1 + (uVar7 / 0x30) * 0x18;
    if ((long)uVar7 < 0x5da9) {
      iVar4 = FUN_02780180(param_1,pcVar11,__s1);
    }
    else {
      lVar8 = (uVar7 / 0x60) * 0x18;
      iVar4 = FUN_02780420(param_1,param_1 + lVar8,pcVar11,pcVar11 + lVar8,__s1);
    }
    iVar5 = strcmp(param_1,pcVar11);
    if (-1 < iVar5) break;
    pcVar15 = __s1;
    goto LAB_0277fd98;
  }
  pcVar14 = param_2 + -0x30;
  while (pcVar15 = pcVar14, param_1 != pcVar15) {
    iVar5 = strcmp(pcVar15,pcVar11);
    pcVar14 = pcVar15 + -0x18;
    if (iVar5 < 0) goto code_r0x0277fe3c;
  }
  pcVar14 = param_1 + 0x18;
  iVar4 = strcmp(param_1,__s1);
  if (-1 < iVar4) {
    if (pcVar14 == __s1) {
      return;
    }
    pcVar14 = param_1 + 0x30;
    while (iVar4 = strcmp(param_1,pcVar14 + -0x18), -1 < iVar4) {
      pcVar14 = pcVar14 + 0x18;
      if (param_2 == pcVar14) {
        return;
      }
    }
    uVar1 = *(undefined8 *)(pcVar14 + -0x18);
    uVar3 = *(undefined8 *)(pcVar14 + -0x10);
    uVar10 = *(undefined8 *)(pcVar14 + -8);
    uVar2 = *(undefined8 *)(param_2 + -0x10);
    uVar9 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(pcVar14 + -0x18) = *(undefined8 *)__s1;
    *(undefined8 *)(pcVar14 + -0x10) = uVar2;
    *(undefined8 *)(pcVar14 + -8) = uVar9;
    *(undefined8 *)__s1 = uVar1;
    *(undefined8 *)(param_2 + -0x10) = uVar3;
    *(undefined8 *)(param_2 + -8) = uVar10;
  }
  if (pcVar14 == __s1) {
    return;
  }
  pcVar15 = __s1;
  while( true ) {
    pcVar11 = pcVar14 + -0x18;
    do {
      pcVar13 = pcVar11;
      pcVar11 = pcVar13 + 0x18;
      iVar4 = strcmp(param_1,pcVar11);
    } while (-1 < iVar4);
    pcVar14 = pcVar13 + 0x30;
    do {
      pcVar12 = pcVar15;
      pcVar15 = pcVar12 + -0x18;
      iVar4 = strcmp(param_1,pcVar15);
    } while (iVar4 < 0);
    if (pcVar15 <= pcVar11) break;
    uVar1 = *(undefined8 *)pcVar11;
    uVar3 = *(undefined8 *)(pcVar13 + 0x20);
    uVar10 = *(undefined8 *)(pcVar13 + 0x28);
    uVar2 = *(undefined8 *)(pcVar12 + -0x10);
    uVar9 = *(undefined8 *)(pcVar12 + -8);
    *(undefined8 *)pcVar11 = *(undefined8 *)pcVar15;
    *(undefined8 *)(pcVar13 + 0x20) = uVar2;
    *(undefined8 *)(pcVar13 + 0x28) = uVar9;
    *(undefined8 *)pcVar15 = uVar1;
    *(undefined8 *)(pcVar12 + -0x10) = uVar3;
    *(undefined8 *)(pcVar12 + -8) = uVar10;
  }
  goto LAB_0277fd10;
code_r0x0277fe3c:
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar4 = iVar4 + 1;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)pcVar15;
  uVar2 = *(undefined8 *)(pcVar15 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pcVar15 + 0x10);
  *(undefined8 *)param_1 = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(pcVar15 + 0x10) = uVar10;
  *(undefined8 *)pcVar15 = uVar1;
  *(undefined8 *)(pcVar15 + 8) = uVar3;
LAB_0277fd98:
  pcVar14 = param_1 + 0x18;
  pcVar13 = pcVar14;
  if (pcVar14 < pcVar15) {
    while( true ) {
      pcVar14 = pcVar13 + -0x18;
      do {
        pcVar12 = pcVar14;
        pcVar14 = pcVar12 + 0x18;
        iVar5 = strcmp(pcVar14,pcVar11);
      } while (iVar5 < 0);
      pcVar13 = pcVar12 + 0x30;
      do {
        pcVar16 = pcVar15;
        pcVar15 = pcVar16 + -0x18;
        iVar5 = strcmp(pcVar15,pcVar11);
      } while (-1 < iVar5);
      if (pcVar15 < pcVar14) break;
      uVar1 = *(undefined8 *)pcVar14;
      uVar3 = *(undefined8 *)(pcVar12 + 0x20);
      uVar10 = *(undefined8 *)(pcVar12 + 0x28);
      uVar2 = *(undefined8 *)(pcVar16 + -0x10);
      uVar9 = *(undefined8 *)(pcVar16 + -8);
      *(undefined8 *)pcVar14 = *(undefined8 *)pcVar15;
      *(undefined8 *)(pcVar12 + 0x20) = uVar2;
      *(undefined8 *)(pcVar12 + 0x28) = uVar9;
      *(undefined8 *)pcVar15 = uVar1;
      *(undefined8 *)(pcVar16 + -0x10) = uVar3;
      *(undefined8 *)(pcVar16 + -8) = uVar10;
      iVar4 = iVar4 + 1;
      pcVar12 = pcVar15;
      if (pcVar11 != pcVar14) {
        pcVar12 = pcVar11;
      }
      pcVar11 = pcVar12;
    }
  }
  if ((pcVar14 != pcVar11) && (iVar5 = strcmp(pcVar11,pcVar14), iVar5 < 0)) {
    uVar1 = *(undefined8 *)pcVar14;
    uVar3 = *(undefined8 *)(pcVar14 + 8);
    iVar4 = iVar4 + 1;
    uVar10 = *(undefined8 *)(pcVar14 + 0x10);
    uVar2 = *(undefined8 *)(pcVar11 + 8);
    uVar9 = *(undefined8 *)(pcVar11 + 0x10);
    *(undefined8 *)pcVar14 = *(undefined8 *)pcVar11;
    *(undefined8 *)(pcVar14 + 8) = uVar2;
    *(undefined8 *)(pcVar14 + 0x10) = uVar9;
    *(undefined8 *)pcVar11 = uVar1;
    *(undefined8 *)(pcVar11 + 8) = uVar3;
    *(undefined8 *)(pcVar11 + 0x10) = uVar10;
  }
  if (iVar4 == 0) {
    uVar7 = FUN_02780670(param_1,pcVar14);
    uVar6 = FUN_02780670(pcVar14 + 0x18,param_2);
    if ((uVar6 & 1) != 0) goto LAB_02780094;
    pcVar11 = pcVar14 + 0x18;
    if ((uVar7 & 1) != 0) goto LAB_0277fd10;
  }
  if (((long)param_2 - (long)pcVar14 >> 3) * -0x5555555555555555 <=
      ((long)pcVar14 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_0277fcd0(pcVar14 + 0x18,param_2);
    param_2 = pcVar14;
    goto LAB_0277fd04;
  }
  FUN_0277fcd0(param_1,pcVar14);
  pcVar11 = pcVar14 + 0x18;
  goto LAB_0277fd10;
LAB_02780094:
  param_2 = pcVar14;
  if ((uVar7 & 1) != 0) {
switchD_02780034_caseD_0:
    return;
  }
  goto LAB_0277fd04;
}


