/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e47538; name: FUN_01e47538
 */


void FUN_01e47538(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  FUN_0095aa3c(param_2 + 2,param_1 + 2);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
  return;
}


