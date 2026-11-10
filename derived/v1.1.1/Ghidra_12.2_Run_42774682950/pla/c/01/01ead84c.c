/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ead84c; name: FUN_01ead84c
 */


void FUN_01ead84c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
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
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &LAB_01ead8d4;
  param_1[1] = &LAB_01eae344;
  param_1[6] = uVar2;
  param_1[2] = &LAB_01eae404;
  param_1[3] = &LAB_01eae444;
  return;
}


