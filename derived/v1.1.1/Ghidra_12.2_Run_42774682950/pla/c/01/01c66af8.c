/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c66af8; name: FUN_01c66af8
 */


void FUN_01c66af8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00b5fc1c(param_1 + 4,param_2);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00ab3f84(param_1 + 6,param_2 + 0x10);
  *param_1 = &LAB_01c66b84;
  param_1[1] = &LAB_01c66be4;
  param_1[2] = FUN_01c66f68;
  param_1[3] = FUN_01c66fa8;
  return;
}


