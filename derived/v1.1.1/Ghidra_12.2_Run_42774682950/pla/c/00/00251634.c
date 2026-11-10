/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251634; name: FUN_00251634
 */


void FUN_00251634(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  FUN_0028edb4();
  *param_3 = (long)(PTR_DAT_04372db8 + 0x10);
  *(float *)(param_3 + 8) = param_1 + param_1;
  *(float *)((long)param_3 + 0x44) = param_2 + param_2;
  *(int *)(param_3 + 9) = param_6;
  FUN_0028ee80(param_3,param_6 * 4 + 0x14);
  FUN_0028ee88(param_3,(int)param_3[9] * 0xc + 0x12);
  lVar3 = FUN_0028edf8(param_3);
  iVar2 = FUN_0028ee44(param_3);
  FUN_0028ee70(param_3,lVar3 * iVar2);
  iVar2 = FUN_0028ee3c(param_3);
  lVar3 = 4;
  if (iVar2 != 2) {
    lVar3 = 1;
  }
  lVar1 = 2;
  if (iVar2 != 1) {
    lVar1 = lVar3;
  }
  iVar2 = FUN_0028ee4c(param_3);
  FUN_0028ee78(param_3,lVar1 * iVar2);
  return;
}


