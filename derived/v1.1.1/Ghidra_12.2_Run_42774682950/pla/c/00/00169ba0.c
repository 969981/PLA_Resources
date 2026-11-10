/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00169ba0; name: FUN_00169ba0
 */


void FUN_00169ba0(long *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar5 = &local_50;
  FUN_00167ad0();
  switch(*param_2) {
  case 1:
    if (*(int *)((long)param_1 + 0x24) < (int)param_1[4]) {
      lVar6 = (long)(int)param_1[4] + -1;
      uVar4 = *(uint *)(*(long *)(*param_1 + 0x38) + lVar6 * 4);
      if ((uVar4 & 0x3f) == 4) {
        uVar2 = uVar4 >> 6 & 0xff;
        uVar1 = uVar2 + (uVar4 >> 0x17);
        if (((int)uVar2 <= (int)param_3 && (int)param_3 <= (int)(uVar1 + 1)) ||
           ((int)param_3 <= (int)uVar2 && (int)uVar2 <= (int)(param_3 + 1))) {
          if ((int)param_3 <= (int)uVar2) {
            uVar2 = param_3;
          }
          if ((int)uVar1 <= (int)param_3) {
            uVar1 = param_3;
          }
          *(uint *)(*(long *)(*param_1 + 0x38) + lVar6 * 4) =
               uVar4 & 0x7fc000 | uVar4 & 0x3f | (uVar2 & 0xff) << 6 | (uVar1 - uVar2) * 0x800000;
          goto LAB_00169d0c;
        }
      }
    }
    uVar4 = param_3 << 6 | 4;
    break;
  case 2:
  case 3:
    uVar4 = param_3 << 6 | (uint)(*param_2 == 2) << 0x17 | 3;
    break;
  case 4:
    iVar3 = param_2[2];
    if (iVar3 < 0x40000) goto LAB_00169ce4;
    goto LAB_00169c9c;
  case 5:
    local_40 = *(undefined8 *)(param_2 + 2);
    puVar5 = &local_40;
    local_38 = 3;
    goto LAB_00169ccc;
  case 6:
    local_50 = *(undefined8 *)(param_2 + 2);
    local_38 = 2;
    local_48 = 0x13;
    local_40 = local_50;
LAB_00169ccc:
    iVar3 = FUN_001677e0(param_1,&local_40,puVar5);
    if (iVar3 < 0x40000) {
LAB_00169ce4:
      uVar4 = param_3 << 6 | iVar3 << 0xe | 1;
    }
    else {
LAB_00169c9c:
      FUN_001674a0(param_1,param_3 << 6 | 2);
      uVar4 = iVar3 << 6 | 0x2e;
    }
    break;
  case 7:
    if (param_2[2] != param_3) {
      uVar4 = param_2[2] << 0x17 | param_3 << 6;
      break;
    }
    goto LAB_00169d0c;
  default:
    goto switchD_00169be8_caseD_8;
  case 0xc:
    uVar4 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar4 & 0xffffc000 | uVar4 & 0x3f | (param_3 & 0xff) << 6;
    goto LAB_00169d0c;
  }
  FUN_001674a0(param_1,uVar4);
LAB_00169d0c:
  param_2[2] = param_3;
  *param_2 = 7;
switchD_00169be8_caseD_8:
  return;
}


