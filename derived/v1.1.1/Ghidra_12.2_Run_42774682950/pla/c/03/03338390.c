/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03338390; name: FUN_03338390
 */


void FUN_03338390(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)((long)param_1 + 0x4c)) {
    lVar4 = 0;
    do {
      lVar5 = param_1[lVar4 + 10];
      if (*(int *)(lVar5 + 0x38) != 0) {
        (**(code **)(*param_1 + 0x68))
                  (param_1,*(undefined8 *)(lVar5 + 0x30),*(int *)(lVar5 + 0x38),8);
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x4c));
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x4b);
  if (0 < (int)*(uint *)(param_1 + 0x4b)) {
    lVar4 = 0;
    iVar3 = -1;
    do {
      iVar1 = (int)uVar2 + iVar3;
      iVar3 = iVar3 + -1;
      *(int *)(param_1[0x4a] + lVar4 * 4) = iVar1;
      uVar2 = (ulong)(int)param_1[0x4b];
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)uVar2);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_03338458(param_1[5]);
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}


