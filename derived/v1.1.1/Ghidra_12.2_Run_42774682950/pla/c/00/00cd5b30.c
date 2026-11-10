/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd5b30; name: FUN_00cd5b30
 */


uint FUN_00cd5b30(undefined1 param_1 [16],float param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  float fVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar2 = (float)FUN_00cd52dc();
  uStack_38 = param_3[1];
  local_40 = CONCAT44(fVar2 + (float)((ulong)*param_3 >> 0x20),(int)*param_3);
  uStack_48 = param_3[1];
  local_50 = CONCAT44(param_2 + (float)((ulong)*param_3 >> 0x20),(int)*param_3);
  uVar1 = FUN_01f56878(&local_40,&local_50,param_4,param_5);
  return uVar1 & 1;
}


