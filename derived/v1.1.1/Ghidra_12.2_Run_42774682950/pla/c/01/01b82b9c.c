/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b82b9c; name: FUN_01b82b9c
 */


void FUN_01b82b9c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  code *pcVar5;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00b64344(param_1 + 4,param_2);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  plVar4 = *(long **)(param_2 + 0x28);
  param_1[9] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[0xd] = 0;
  FUN_01b6a890(param_1 + 0xd,param_2 + 0x48);
  *param_1 = &LAB_01b82c78;
  param_1[1] = &LAB_01b82da8;
  param_1[2] = FUN_01b87398;
  param_1[3] = FUN_01b8741c;
  return;
}


