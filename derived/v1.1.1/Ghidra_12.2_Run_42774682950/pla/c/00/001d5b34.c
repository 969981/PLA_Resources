/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d5b34; name: FUN_001d5b34
 */


undefined4
FUN_001d5b34(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 local_50 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  
  local_50[0] = 0xffffffff;
  local_40 = *param_2;
  fVar1 = (float)*param_3;
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  fVar1 = fVar1 * fVar1;
  local_18 = CONCAT44(fVar2 * fVar2,fVar1);
  uStack_38 = CONCAT44(fVar1,(int)param_2[1]);
  local_30 = param_4;
  FUN_001d706c(*(long *)(param_1 + 0x18) + 0x18,param_2,local_50,&local_18);
  param_5[1] = uStack_38;
  *param_5 = local_40;
  return local_50[0];
}


