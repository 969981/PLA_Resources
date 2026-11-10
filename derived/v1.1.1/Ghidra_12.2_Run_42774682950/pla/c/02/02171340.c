/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02171340; name: FUN_02171340
 */


uint FUN_02171340(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  double __x;
  undefined4 local_44;
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(__x);
    local_44 = (undefined4)lVar4;
  }
  else {
    local_44 = FUN_00150ba0(param_1,iVar1,0);
  }
  uVar3 = FUN_021713ec(param_1,param_2,param_3,param_4,param_5,&local_44);
  return uVar3 & 1;
}


