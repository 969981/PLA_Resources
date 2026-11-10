/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bceb8; name: FUN_027bceb8
 */


void FUN_027bceb8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x1a0) == 1)) {
    pcVar5 = *(code **)(param_1 + 0xa8);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      (*pcVar5)(param_1 + 0xc0);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,param_1 + 0xc0);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      *(undefined8 *)(param_1 + 0xb0) = param_2[2];
      *(undefined8 *)(param_1 + 0xb8) = uVar3;
      *(undefined8 *)(param_1 + 0xa0) = uVar1;
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
    }
    FUN_00d6802c(*(undefined8 *)(param_1 + 0x38),1);
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x5b0) + 0x68);
    (**(code **)(*plVar4 + 8))(plVar4,0);
    *(undefined4 *)(param_1 + 0x1a0) = 3;
  }
  return;
}


