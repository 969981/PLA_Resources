/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da3bf4; name: FUN_00da3bf4
 */


void FUN_00da3bf4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_28;
  int iStack_24;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 4) {
    local_28 = *(int *)(param_1 + 0x78);
    if (0 < local_28) {
      lVar4 = 0;
      lVar5 = 0x48;
      do {
        lVar3 = *(long *)(*(long *)(param_1 + 200) + lVar5);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1e1) != '\0')) {
          iStack_24 = (int)lVar4;
          local_28 = iStack_24 + local_28;
          FUN_02bc9990(*(undefined8 *)(param_1 + 0x60),&iStack_24);
          FUN_02bc9990(*(undefined8 *)(param_1 + 0x60),&local_28);
          local_28 = *(int *)(param_1 + 0x78);
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x70;
      } while (lVar4 < local_28);
    }
    uVar2 = 4;
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_00da3dec(param_1);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_00da3cc4(param_1);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    uVar2 = FUN_00da4054(param_1);
  }
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  return;
}


