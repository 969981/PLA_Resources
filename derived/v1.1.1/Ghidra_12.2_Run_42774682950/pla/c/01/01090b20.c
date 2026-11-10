/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090b20; name: FUN_01090b20
 */


void FUN_01090b20(int *param_1,long param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  *param_1 = iVar3;
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
  *(undefined2 *)(param_1 + 1) = uVar2;
  iVar3 = FUN_02c6f5e8(*(undefined8 *)(param_2 + 0x98));
  param_1[2] = iVar3;
  uVar4 = FUN_02c68b0c(*(undefined8 *)(param_2 + 0x98));
  uVar5 = FUN_02c70958(*(undefined8 *)(param_2 + 0x98));
  *(bool *)(param_1 + 3) = (uVar4 & 0xfff0 ^ uVar4 >> 0x10 ^ uVar5 >> 0x10 ^ uVar5 & 0xfff0) < 0x10;
  bVar1 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  *(byte *)((long)param_1 + 0xd) =
       (bVar1 | (byte)(*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2)) & 1;
  param_1[4] = **(int **)(*(long *)(param_2 + 0x98) + 0x10);
  param_1[5] = -1;
  if (*param_1 == 0x365) {
    uVar4 = FUN_02c5d8f0(param_2);
    param_1[5] = uVar4 & 0xff;
  }
  return;
}


