/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002395a4; name: FUN_002395a4
 */


void FUN_002395a4(float param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_2 + 0x3c);
  uVar4 = *(uint *)(param_2 + 0x44) & 0xfffffff0;
  *(uint *)(param_2 + 0x44) = uVar4;
  if (fVar5 == 0.0) {
    return;
  }
  fVar6 = fVar5 * param_1 + *(float *)(param_2 + 0x20);
  if (fVar5 <= 0.0) {
    if (0.0 < fVar6) goto LAB_002396fc;
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 == 2) {
      fVar6 = -fVar6;
      *(float *)(param_2 + 0x3c) = -fVar5;
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB_002396fc;
        uVar4 = uVar4 | 1;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        fVar6 = 0.0;
        goto LAB_002396f8;
      }
      uVar2 = FUN_00227728(param_2);
      uVar4 = *(uint *)(param_2 + 0x44);
      fVar6 = fVar6 + (float)uVar2;
    }
    uVar4 = uVar4 | 4;
  }
  else {
    uVar2 = FUN_00227728(param_2);
    if (fVar6 < (float)uVar2) goto LAB_002396fc;
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 == 2) {
      uVar2 = FUN_00227728(param_2);
      uVar3 = FUN_00227728(param_2);
      fVar6 = ((float)uVar3 - fVar6) + (float)uVar2;
      *(float *)(param_2 + 0x3c) = -*(float *)(param_2 + 0x3c);
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB_002396fc;
        uVar2 = FUN_00227728(param_2);
        fVar6 = (float)uVar2;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        uVar4 = *(uint *)(param_2 + 0x44) | 1;
        goto LAB_002396f8;
      }
      uVar2 = FUN_00227728(param_2);
      fVar6 = fVar6 - (float)uVar2;
    }
    uVar4 = *(uint *)(param_2 + 0x44) | 2;
  }
LAB_002396f8:
  *(uint *)(param_2 + 0x44) = uVar4;
LAB_002396fc:
  *(float *)(param_2 + 0x20) = fVar6;
  return;
}


