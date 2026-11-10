/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224d188; name: FUN_0224d188
 */


void FUN_0224d188(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar2 = FUN_00150ba0(param_1,iVar1 + 1,0);
  uVar3 = FUN_0224d1f4(param_1,param_2[1] + 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0224d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar2,uVar3);
  return;
}


