/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ac048; name: FUN_017ac048
 */


void FUN_017ac048(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double __x;
  undefined4 local_54;
  
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar3 = llround(__x);
    local_54 = (undefined4)lVar3;
  }
  else {
    local_54 = FUN_00150ba0(param_1,iVar1,0);
  }
  FUN_017ac10c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_54);
  return;
}


