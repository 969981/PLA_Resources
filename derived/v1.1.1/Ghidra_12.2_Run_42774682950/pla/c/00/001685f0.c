/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001685f0; name: FUN_001685f0
 */


void FUN_001685f0(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 10) {
    uVar2 = 10;
    if (*(char *)((long)param_2 + 0xb) != '\b') {
      uVar2 = 8;
    }
    iVar1 = FUN_001684a0(param_1,param_3);
    uVar2 = iVar1 << 0xe | uVar2 | (uint)*(byte *)((long)param_2 + 10) << 6;
    uVar3 = (uint)*(ushort *)(param_2 + 2) << 0x17;
  }
  else {
    if (iVar1 != 9) {
      if (iVar1 == 8) {
        if (*param_3 == 7) {
          if ((((uint)param_3[2] >> 8 & 1) == 0) &&
             ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_3[2])) {
            *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
          }
        }
        FUN_00167ca0(param_1,param_3,param_2[2]);
        return;
      }
      goto LAB_001686d0;
    }
    iVar1 = FUN_00168360(param_1,param_3);
    uVar2 = iVar1 << 6 | param_2[2] << 0x17;
    uVar3 = 9;
  }
  FUN_001674a0(param_1,uVar2 | uVar3);
LAB_001686d0:
  if (((*param_3 == 7) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x3a) <= param_3[2])) {
    *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + -1;
  }
  return;
}


