/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877434; name: FUN_00877434
 */


void FUN_00877434(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_043784b8)(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}


