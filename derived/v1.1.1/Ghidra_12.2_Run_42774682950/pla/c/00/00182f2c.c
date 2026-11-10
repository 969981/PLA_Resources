/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00182f2c; name: FUN_00182f2c
 */


void FUN_00182f2c(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5,long param_6)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_043723b0;
  (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x68))
            (param_2,param_3,param_6);
  fVar2 = -(float)*param_3;
  fVar3 = -(float)((ulong)*param_3 >> 0x20);
  fVar4 = -(float)param_3[1];
  local_50 = CONCAT44((float)((ulong)param_5[4] >> 0x20) * fVar4 +
                      (float)((ulong)*param_5 >> 0x20) * fVar2 +
                      (float)((ulong)param_5[2] >> 0x20) * fVar3,
                      (float)param_5[4] * fVar4 +
                      (float)*param_5 * fVar2 + (float)param_5[2] * fVar3);
  uStack_48 = CONCAT44((float)((ulong)param_5[5] >> 0x20) * fVar4 +
                       (float)((ulong)param_5[1] >> 0x20) * fVar2 +
                       (float)((ulong)param_5[3] >> 0x20) * fVar3,
                       (float)param_5[5] * fVar4 +
                       (float)param_5[1] * fVar2 + (float)param_5[3] * fVar3);
  (**(code **)(*(long *)puVar1 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0x68))
            (param_4,&local_50,param_6 + 0x10);
  return;
}


