/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02594b30; name: FUN_02594b30
 */


void FUN_02594b30(undefined1 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00b636fc(param_1 + 0x30,param_2 + 4);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_008c4b3c(param_1 + 0x40,param_2 + 6);
  plVar2 = (long *)param_2[8];
  *(long **)(param_1 + 0x50) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_00b65954(param_1 + 0x70,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_00b65bcc(param_1 + 0x80,param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_017db6d4(param_1 + 0x90,param_2 + 0x10);
  param_1[0xa0] = *(undefined1 *)(param_2 + 0x12);
  *param_1 = 1;
  return;
}


