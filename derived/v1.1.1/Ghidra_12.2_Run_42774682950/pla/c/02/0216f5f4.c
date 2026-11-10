/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0216f5f4; name: FUN_0216f5f4
 */


uint FUN_0216f5f4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  float local_44;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 2,0);
  local_44 = (float)dVar2;
  uVar3 = FUN_0216f684(param_1,param_2,param_3,param_4,param_5,param_6,&local_44);
  return uVar3 & 1;
}


