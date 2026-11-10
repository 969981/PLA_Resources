/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030070f0; name: FUN_030070f0
 */


undefined8
FUN_030070f0(undefined2 *param_1,float *param_2,undefined8 param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  char cVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar8 = 0x80040200;
  pfVar3 = (float *)FUN_030074a0(param_1,param_3);
  if (pfVar3 == (float *)0x0) {
    return 0x80040200;
  }
  *param_5 = 0;
  *param_4 = 0;
  switch(*param_1) {
  case 5:
  case 0x18:
  case 0x19:
  case 0x1a:
    *param_5 = 1;
    *pfVar3 = *param_2 + *pfVar3;
    pfVar3[1] = param_2[2] + pfVar3[1];
    fVar9 = param_2[4];
    break;
  case 6:
  case 0x14:
  case 0x15:
  case 0x16:
    *param_5 = 1;
    fVar9 = *param_2;
    goto LAB_030071a0;
  case 7:
  case 9:
    fVar9 = *param_2;
    cVar4 = *(char *)(param_1 + 1);
    goto LAB_030071c0;
  default:
    goto switchD_03007154_caseD_8;
  case 10:
  case 0xb:
  case 0xe:
  case 0x12:
    fVar9 = *param_2;
    cVar4 = *(char *)((long)param_1 + 3);
LAB_030071c0:
    pfVar7 = pfVar3 + 2;
    if (cVar4 != '\x02') {
      pfVar7 = pfVar3 + 3;
    }
    pfVar6 = pfVar3 + 1;
    if (cVar4 != '\x01') {
      pfVar6 = pfVar7;
    }
LAB_030071dc:
    if (cVar4 != '\0') {
      pfVar3 = pfVar6;
    }
    *pfVar3 = fVar9 + *pfVar3;
    return 0;
  case 0xc:
    uVar2 = (*(byte *)(param_1 + 1) + 1) % 3;
    if (uVar2 == 0) {
      pfVar7 = pfVar3;
    }
    else if (uVar2 == 1) {
      pfVar7 = pfVar3 + 1;
    }
    else if (uVar2 == 2) {
      pfVar7 = pfVar3 + 2;
    }
    else {
      pfVar7 = pfVar3 + 3;
    }
    *pfVar7 = *param_2 + *pfVar7;
    fVar9 = param_2[2];
    uVar2 = (*(byte *)(param_1 + 1) + 2) % 3;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        pfVar3 = pfVar3 + 1;
      }
      else if (uVar2 == 2) {
        pfVar3 = pfVar3 + 2;
      }
      else {
        pfVar3 = pfVar3 + 3;
      }
    }
LAB_030071a0:
    *pfVar3 = fVar9 + *pfVar3;
    return 0;
  case 0xd:
    *param_4 = 1;
    if (*(char *)((long)param_1 + 5) == '\0') {
      return 0;
    }
    uVar5 = 0;
    do {
      cVar4 = *(char *)((long)param_1 + uVar5 + 2);
      pfVar7 = pfVar3;
      if (cVar4 != '\0') {
        pfVar6 = pfVar3 + 2;
        if (cVar4 != '\x02') {
          pfVar6 = pfVar3 + 3;
        }
        pfVar7 = pfVar3 + 1;
        if (cVar4 != '\x01') {
          pfVar7 = pfVar6;
        }
      }
      *pfVar7 = *param_2 + *pfVar7;
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 2;
    } while (uVar5 < *(byte *)((long)param_1 + 5));
    return 0;
  case 0xf:
  case 0x10:
    *param_4 = 1;
    cVar4 = *(char *)((long)param_1 + 3);
    fVar9 = *param_2;
    pfVar7 = pfVar3 + 2;
    if (cVar4 != '\x02') {
      pfVar7 = pfVar3 + 3;
    }
    pfVar6 = pfVar3 + 1;
    if (cVar4 != '\x01') {
      pfVar6 = pfVar7;
    }
    goto LAB_030071dc;
  case 0x11:
    *param_4 = 1;
    if (*(char *)(param_1 + 2) == '\0') {
      return 0;
    }
    uVar5 = 0;
    do {
      iVar1 = (int)uVar5 +
              (uint)*(byte *)((long)param_1 + 3) +
              (((int)uVar5 + (uint)*(byte *)((long)param_1 + 3)) / 3) * -3;
      pfVar7 = pfVar3;
      if (((iVar1 != 0) && (pfVar7 = pfVar3 + 1, iVar1 != 1)) && (pfVar7 = pfVar3 + 2, iVar1 != 2))
      {
        pfVar7 = pfVar3 + 3;
      }
      *pfVar7 = *param_2 + *pfVar7;
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 4;
    } while (uVar5 < *(byte *)(param_1 + 2));
    return 0;
  case 0x13:
    *param_4 = 1;
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x20) != -0x40 - (long)param_1)) {
      *pfVar3 = *param_2 + *pfVar3;
    }
    if ((*(long *)(param_1 + 0x24) != 0) && (*(long *)(param_1 + 0x24) != -0x48 - (long)param_1)) {
      pfVar3[1] = param_2[4] + pfVar3[1];
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) == -0x50 - (long)param_1) {
      return 0;
    }
    fVar9 = param_2[8];
    break;
  case 0x1d:
    pfVar3[1] = *param_2 + pfVar3[1];
    fVar9 = param_2[2] + pfVar3[2];
    goto LAB_0300718c;
  }
  uVar8 = 0;
  fVar9 = fVar9 + pfVar3[2];
LAB_0300718c:
  pfVar3[2] = fVar9;
switchD_03007154_caseD_8:
  return uVar8;
}


