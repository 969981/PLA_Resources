/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01acbaa0; name: FUN_01acbaa0
 */


void FUN_01acbaa0(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  
  uVar2 = param_2[3];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  pcVar6 = param_1 + 0x30;
  if (*param_1 == '\0') {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    FUN_00b636fc(pcVar6,param_2 + 4);
    pcVar6 = param_1 + 0x40;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    FUN_008c4b3c(pcVar6,param_2 + 6);
    plVar5 = (long *)param_2[8];
    *(long **)(param_1 + 0x50) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar1 = param_2[0xc];
    uVar2 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)((long)param_2 + 0x6e);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    *param_1 = '\x01';
  }
  else {
    FUN_00b636fc(pcVar6,param_2 + 4);
    FUN_008c4b3c(param_1 + 0x40,param_2 + 6);
    plVar5 = (long *)param_2[8];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = *(long **)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar5;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar1 = param_2[0xc];
    uVar2 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)((long)param_2 + 0x6e);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  }
  return;
}


