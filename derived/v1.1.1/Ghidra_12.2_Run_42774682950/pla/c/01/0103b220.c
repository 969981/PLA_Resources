/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0103b220; name: FUN_0103b220
 */


uint FUN_0103b220(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  float local_34;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
  local_34 = (float)dVar2;
  uVar3 = FUN_0103b2a0(param_1,param_2,param_3,param_4,param_5,&local_34);
  return uVar3 & 1;
}


