/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f2d964; name: FUN_00f2d964
 */


void FUN_00f2d964(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double __x;
  undefined2 local_34 [2];
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar3 = llround(__x);
    local_34[0] = (undefined2)lVar3;
  }
  else {
    local_34[0] = FUN_00150ba0(param_1,iVar1,0);
  }
  FUN_00f2d9fc(param_1,param_2,param_3,param_4,local_34);
  return;
}


