/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02493c28; name: FUN_02493c28
 */


void FUN_02493c28(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  double __x;
  
  iVar1 = param_2[1] + 3;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(__x);
    uVar3 = (undefined4)lVar4;
  }
  else {
    uVar3 = FUN_00150ba0(param_1,iVar1,0);
  }
  *(undefined4 *)(param_4 + *param_3) = uVar3;
  return;
}


