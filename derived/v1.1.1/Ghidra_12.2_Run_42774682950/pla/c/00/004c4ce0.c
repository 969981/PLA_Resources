/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4ce0; name: FUN_004c4ce0
 */


undefined8 FUN_004c4ce0(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == param_2) {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (*piVar4 == *param_2) {
    *(int **)(param_1 + 8) = param_2;
    uVar1 = 1;
    lVar2 = *(long *)(piVar4 + 0xc);
  }
  else {
    (**(code **)(piVar4 + 8))(param_1);
    *(int **)(param_1 + 8) = param_2;
    uVar1 = (**(code **)(param_2 + 4))(param_1);
    lVar2 = *(long *)(piVar4 + 0xc);
  }
  if (lVar5 == lVar2) {
    uVar3 = *(undefined8 *)(param_2 + 0xc);
  }
  else {
    if (lVar5 != *(long *)(piVar4 + 10)) {
      return uVar1;
    }
    uVar3 = *(undefined8 *)(param_2 + 10);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return uVar1;
}


