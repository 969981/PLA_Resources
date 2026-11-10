/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eaf410; name: FUN_01eaf410
 */


void FUN_01eaf410(undefined8 *param_1,undefined8 param_2)

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
  FUN_01eacf70(param_1 + 4,param_2);
  *param_1 = &LAB_01eaf488;
  param_1[1] = &LAB_01eaf734;
  param_1[2] = &LAB_01eaf7f4;
  param_1[3] = &LAB_01eaf808;
  return;
}


