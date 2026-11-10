/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ec0ea4; name: FUN_00ec0ea4
 */


void FUN_00ec0ea4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  double __x;
  
  iVar2 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar2;
  iVar1 = FUN_001504d0(param_1,iVar2);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar2,0);
    uVar3 = llround(__x);
  }
  else {
    uVar3 = FUN_00150ba0(param_1,iVar2,0);
  }
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ec0f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar3 & 0xffffffff,iVar2 != 0);
  return;
}


