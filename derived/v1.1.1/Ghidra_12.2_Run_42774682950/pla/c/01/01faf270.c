/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01faf270; name: FUN_01faf270
 */


void FUN_01faf270(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar3 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar3;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  plVar1 = (long *)param_2[4];
  param_1[8] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar3 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar3;
  *param_1 = &LAB_01faf31c;
  param_1[1] = &LAB_01faf808;
  param_1[2] = &LAB_01faf874;
  param_1[3] = &LAB_01faf934;
  return;
}


