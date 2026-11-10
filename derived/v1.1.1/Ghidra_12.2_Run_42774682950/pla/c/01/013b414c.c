/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b414c; name: FUN_013b414c
 */


void FUN_013b414c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,param_1 + 4);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    pcVar4 = (code *)param_2[1];
    if (pcVar4 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar4)(param_2 + 4);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_013b41cc(param_1 + 0x10,param_2 + 0x10);
  return;
}


