/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7450; name: FUN_005a7450
 */


undefined8 FUN_005a7450(long *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  pbVar6 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar6 = (byte *)param_1[2];
  }
  uVar2 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar2 = param_1[1];
  }
  pbVar5 = pbVar6;
  if (uVar2 != 0) {
    uVar3 = uVar2;
    while (*pbVar5 == 0x20) {
      pbVar5 = pbVar5 + 1;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return 0;
      }
    }
  }
  pbVar1 = pbVar6 + uVar2;
  if (pbVar5 == pbVar1) {
    return 0;
  }
  uVar10 = (uint)*pbVar5;
  if (9 < *pbVar5 - 0x30) {
    return 0;
  }
  lVar7 = 0;
  do {
    if ((99999999 < lVar7) && ((lVar7 != 100000000 || (uVar10 - 0x30 != 0)))) {
      *param_2 = 0x7fffffffffffffff;
      return 1;
    }
    if (pbVar6 + (uVar2 - 1) == pbVar5) {
      return 0;
    }
    pbVar4 = pbVar5 + 1;
    lVar7 = lVar7 * 10 + (long)(int)(uVar10 - 0x30);
    uVar10 = (uint)pbVar5[1];
    pbVar5 = pbVar4;
  } while (uVar10 - 0x30 < 10);
  if (pbVar4 == pbVar1) {
    return 0;
  }
  while (*pbVar4 == 0x20) {
    pbVar4 = pbVar4 + 1;
    if (pbVar1 == pbVar4) {
      return 0;
    }
  }
  switch(*pbVar4) {
  case 0x48:
    lVar8 = 3600000;
    break;
  default:
    return 0;
  case 0x4d:
    lVar8 = 60000;
    break;
  case 0x53:
    lVar8 = 1000;
    break;
  case 0x6d:
    goto switchD_005a7580_caseD_6d;
  case 0x6e:
    lVar8 = lVar7 / 1000000;
    lVar9 = 1000000;
    goto LAB_005a7630;
  case 0x75:
    lVar8 = lVar7 / 1000;
    lVar9 = 1000;
LAB_005a7630:
    if (lVar7 != lVar8 * lVar9) {
      lVar8 = lVar8 + 1;
    }
    *param_2 = lVar8;
    goto joined_r0x005a7648;
  }
  lVar7 = lVar7 * lVar8;
switchD_005a7580_caseD_6d:
  *param_2 = lVar7;
joined_r0x005a7648:
  if (pbVar1 + -1 == pbVar4) {
    return 1;
  }
  pbVar6 = pbVar4 + 1;
  do {
    pbVar5 = pbVar6 + 1;
    if (*pbVar6 != 0x20) {
      return 0;
    }
    pbVar6 = pbVar5;
  } while (pbVar1 != pbVar5);
  return 1;
}


