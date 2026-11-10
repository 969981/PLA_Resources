/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1d5e0; name: FUN_00f1d5e0
 */


void FUN_00f1d5e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  double __x;
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    uVar3 = llround(__x);
  }
  else {
    uVar3 = FUN_00150ba0(param_1,iVar1,0);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar4 = FUN_00150ba0(param_1,iVar1 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x00f1d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,uVar3 & 0xffffffff,uVar4);
  return;
}


