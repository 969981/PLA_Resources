/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f89808; name: FUN_00f89808
 */


void FUN_00f89808(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  double __x;
  
  uVar3 = FUN_00f6e680(param_1,param_2[1] + 1,param_2);
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(__x);
  }
  else {
    lVar4 = FUN_00150ba0(param_1,iVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f898b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar3,lVar4);
  return;
}


