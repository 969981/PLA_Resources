/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016d4538; name: FUN_016d4538
 */


void FUN_016d4538(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  double __x;
  
  iVar1 = param_2[1] + 3;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(__x);
    uVar2 = (undefined1)lVar4;
  }
  else {
    uVar2 = FUN_00150ba0(param_1,iVar1,0);
  }
  *(undefined1 *)(param_4 + *param_3) = uVar2;
  return;
}


