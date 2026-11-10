/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d47cdc; name: FUN_00d47cdc
 */


bool FUN_00d47cdc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  *(int *)(param_1 + 0xe0) = (int)param_2[7];
  *(long *)(param_1 + 0xe8) = param_2[8];
  *(long *)(param_1 + 0xf0) = param_2[9];
  *(long *)(param_1 + 0xf8) = param_2[10];
  plVar4 = (long *)param_2[0xb];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = *(long **)(param_1 + 0x100);
  *(long **)(param_1 + 0x100) = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)((long)param_2 + 100);
  *(int *)(param_1 + 0x108) = (int)param_2[0xc];
  *(undefined2 *)(param_1 + 0x10e) = *(undefined2 *)((long)param_2 + 0x66);
  *(short *)(param_1 + 0x110) = (short)param_2[0xd];
  *(long *)(param_1 + 0x128) = param_2[0xf];
  *(long *)(param_1 + 0x120) = param_2[0xe];
  lVar2 = *(long *)(param_1 + 0x20);
  if (*param_2 == 0) {
    if (*(char *)(lVar2 + 0x7c) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2[1] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (param_2[2] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (param_2[3] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (param_2[4] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (param_2[5] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (param_2[6] == 0) {
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
  }
  else {
    FUN_02c30180();
    iVar3 = iVar3 + 1;
  }
  return iVar3 != 0;
}


