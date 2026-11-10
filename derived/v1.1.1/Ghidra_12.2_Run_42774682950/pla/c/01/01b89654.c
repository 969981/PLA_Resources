/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b89654; name: FUN_01b89654
 */


void FUN_01b89654(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00b64344(param_2,param_1);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x28);
  param_2[5] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 8) = uVar3;
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[10] = 0;
  FUN_01b6a890(param_2 + 9,param_1 + 0x48);
  return;
}


