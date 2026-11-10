/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029edf9c; name: FUN_029edf9c
 */


void FUN_029edf9c(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_2[0] = 0;
  param_2[1] = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  uVar6 = *(undefined8 *)(lVar1 + (ulong)*param_3 * 8);
  uVar5 = *(undefined8 *)(lVar1 + (ulong)param_3[1] * 8);
  if (param_3[2] == 0) {
    bVar2 = **(int **)(*(long *)(param_1 + 8) + 0x58) != 0 ||
            *(int *)(*(long *)(param_1 + 8) + 0x110) != 0;
  }
  else {
    bVar2 = true;
  }
  uVar4 = FUN_029ee08c(param_1,param_2 + 1,uVar6,uVar5);
  if ((uVar4 & 1) == 0) {
    if (bVar2) {
      bVar3 = FUN_029ee1ec(param_1,uVar5,*(undefined2 *)(param_3 + 4),*(undefined8 *)(param_3 + 8));
      *param_2 = bVar3 & 1;
    }
    else {
      bVar3 = FUN_029ee4c0(param_1,uVar6,uVar5,*(undefined2 *)(param_3 + 4),param_3[3]);
      *param_2 = bVar3 & 1;
      if ((bVar3 & 1) != 0) {
        **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 5;
      }
    }
  }
  return;
}


