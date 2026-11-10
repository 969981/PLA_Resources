/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167ad0; name: FUN_00167ad0
 */


void FUN_00167ad0(long *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  
  switch(*param_2) {
  case 8:
    *param_2 = 7;
    return;
  case 9:
    uVar3 = param_2[2] << 0x17 | 5;
    break;
  case 10:
    sVar1 = *(short *)(param_2 + 2);
    if ((((uint)(int)sVar1 >> 8 & 1) == 0) &&
       ((uint)*(byte *)((long)param_1 + 0x3a) == (int)sVar1 ||
        (int)(uint)*(byte *)((long)param_1 + 0x3a) < (int)sVar1)) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    if (*(char *)((long)param_2 + 0xb) == '\b') {
      if (*(byte *)((long)param_1 + 0x3a) <= *(byte *)((long)param_2 + 10)) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
      uVar3 = 7;
    }
    else {
      uVar3 = 6;
    }
    uVar3 = uVar3 | (uint)*(byte *)((long)param_2 + 10) << 0x17 |
            (int)*(short *)(param_2 + 2) << 0xe;
    break;
  default:
    return;
  case 0xd:
    *param_2 = 7;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2[2] * 4) >> 6 & 0xff;
    return;
  case 0xe:
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2[2] * 4) =
         *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2[2] * 4) & 0x7fffff | 0x1000000;
    goto LAB_00167be8;
  }
  uVar2 = FUN_001674a0((int)param_1,uVar3);
  param_2[2] = uVar2;
LAB_00167be8:
  *param_2 = 0xc;
  return;
}


