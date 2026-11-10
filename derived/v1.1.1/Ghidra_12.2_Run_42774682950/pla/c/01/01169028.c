/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01169028; name: FUN_01169028
 */


void FUN_01169028(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e78150(param_1,*(int *)(param_2 + 4) + 1,param_2);
  uVar2 = FUN_01169088(param_1,*(int *)(param_2 + 4) + 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x01169084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar1,uVar2);
  return;
}


