/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167b9a8; name: FUN_0167b9a8
 */


void FUN_0167b9a8(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    plVar2 = (long *)param_2[3];
    *(long **)(param_1 + 0x28) = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    uVar4 = param_2[9];
    uVar1 = *(undefined4 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x48) = param_2[7];
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = param_2[5];
    uVar4 = param_2[4];
    *(undefined8 *)(param_1 + 0x40) = param_2[6];
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    uVar4 = param_2[8];
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *param_1 = '\x01';
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    plVar2 = (long *)param_2[3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar3 = *(long **)(param_1 + 0x28);
    *(long **)(param_1 + 0x28) = plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    uVar4 = param_2[9];
    uVar1 = *(undefined4 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x48) = param_2[7];
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = param_2[5];
    uVar4 = param_2[4];
    *(undefined8 *)(param_1 + 0x40) = param_2[6];
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    uVar4 = param_2[8];
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  return;
}


