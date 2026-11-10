/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee5cd8; name: FUN_01ee5cd8
 */


void FUN_01ee5cd8(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 0x28) = param_2[4];
    *(undefined8 *)(param_1 + 0x30) = param_2[5];
    uVar5 = param_2[6];
    param_2[6] = 0;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    cVar3 = *(char *)((long)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 7);
    param_1[0x44] = cVar3;
    *param_1 = '\x01';
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = param_2[4];
    plVar4 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = param_2[5];
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    uVar5 = param_2[6];
    param_2[6] = 0;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    uVar2 = *(undefined4 *)(param_2 + 7);
    param_1[0x44] = *(char *)((long)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  return;
}


