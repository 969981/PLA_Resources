/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204dd24; name: FUN_0204dd24
 */


void FUN_0204dd24(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar1 = FUN_00150ba0(param_1,iVar2 + 1,0);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0204dda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,uVar1,iVar2 != 0);
  return;
}


