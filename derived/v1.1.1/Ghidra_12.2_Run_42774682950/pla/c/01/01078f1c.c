/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01078f1c; name: FUN_01078f1c
 */


void FUN_01078f1c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar3 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x01078fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,*param_5,(float)dVar2,(float)dVar3);
  return;
}


