/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ece924; name: FUN_00ece924
 */


void FUN_00ece924(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double __x;
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar3 = llround(__x);
  }
  else {
    lVar3 = FUN_00150ba0(param_1,iVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00ece994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,*param_5,lVar3);
  return;
}


