/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e527d4; name: FUN_02e527d4
 */


void FUN_02e527d4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,float *param_7,undefined4 *param_8,
                 undefined4 *param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_02e547ac(&local_60,param_2,param_1[8],param_4,param_3);
  param_6[3] = local_60;
  *(undefined4 *)(param_6 + 4) = local_58;
  uVar2 = *param_1;
  *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_1 + 1);
  *param_6 = uVar2;
  uVar1 = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined8 *)((long)param_6 + 0xc) = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined4 *)((long)param_6 + 0x14) = uVar1;
  *(undefined4 *)((long)param_6 + 0x24) = 0xffffffff;
  fVar3 = (float)FUN_02e543f0(param_2,param_4,param_5);
  *param_7 = fVar3 * 15.915494;
  *param_8 = 0;
  param_9[1] = *(undefined4 *)(param_2 + 0xb4);
  *param_9 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xb0) = 0;
  return;
}


