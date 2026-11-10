/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c0504; name: FUN_021c0504
 */


void FUN_021c0504(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9,undefined8 param_10,undefined4 *param_11)

{
  int iVar1;
  
  *param_2 = 1;
  iVar1 = param_2[1];
  param_2[1] = iVar1 + 1;
  FUN_00150cc0(param_1,iVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x021c05e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_4,param_5,param_6,param_7,param_8,*param_9,param_10,*param_11);
  return;
}


