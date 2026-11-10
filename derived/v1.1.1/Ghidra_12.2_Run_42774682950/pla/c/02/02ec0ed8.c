/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec0ed8; name: FUN_02ec0ed8
 */


void FUN_02ec0ed8(long param_1,uint param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_02ec0fa8(param_2,param_3,&uStack_24,&local_28);
  if ((float)param_2 <= (float)param_3[1]) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (float)param_3[1] / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar1;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar1 * 6.2831855;
  }
  *(undefined4 *)(param_1 + 4) = uStack_24;
  *(undefined4 *)(param_1 + 8) = local_28;
  if (*(int *)(param_1 + 0x14) != *param_3) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = 0.15915494;
    }
    else {
      if (*param_3 != 0) goto LAB_02ec0f54;
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = 6.2831855;
    }
    *(float *)(param_1 + 0xc) = fVar2 * fVar1;
  }
LAB_02ec0f54:
  *(int *)(param_1 + 0x14) = *param_3;
  return;
}


