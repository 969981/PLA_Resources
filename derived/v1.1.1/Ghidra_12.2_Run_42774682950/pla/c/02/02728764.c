/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728764; name: FUN_02728764
 */


void FUN_02728764(undefined8 *param_1,undefined8 param_2)

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
  FUN_007ee578(param_1 + 4,param_2);
  *param_1 = &LAB_027287d0;
  param_1[1] = &LAB_027287d4;
  param_1[2] = &LAB_027287d8;
  param_1[3] = &LAB_027287e8;
  return;
}


