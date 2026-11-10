/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e60f8; name: FUN_010e60f8
 */


void FUN_010e60f8(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x4a8);
  if (bVar1 == 0x20) {
    iVar4 = FUN_010e630c();
    if (iVar4 + 0x1dU <= param_2) {
      return;
    }
  }
  else if (bVar1 < param_2 || bVar1 == param_2) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x4a8);
  if (bVar1 == 0x20) {
    iVar4 = FUN_010e630c();
    if (iVar4 + 0x1dU <= param_3) {
      return;
    }
  }
  else if (bVar1 < param_3 || bVar1 == param_3) {
    return;
  }
  puVar6 = (undefined2 *)(param_1 + 0x68 + (ulong)param_2 * 0x22);
  puVar5 = (undefined2 *)(param_1 + 0x68 + (ulong)param_3 * 0x22);
  uVar3 = *puVar6;
  *puVar6 = *puVar5;
  *puVar5 = uVar3;
  uVar3 = puVar6[1];
  puVar6[1] = puVar5[1];
  puVar5[1] = uVar3;
  uVar3 = puVar6[2];
  puVar6[2] = puVar5[2];
  puVar5[2] = uVar3;
  uVar3 = puVar6[3];
  puVar6[3] = puVar5[3];
  puVar5[3] = uVar3;
  uVar3 = puVar6[4];
  puVar6[4] = puVar5[4];
  puVar5[4] = uVar3;
  uVar3 = puVar6[5];
  puVar6[5] = puVar5[5];
  puVar5[5] = uVar3;
  uVar3 = puVar6[6];
  puVar6[6] = puVar5[6];
  puVar5[6] = uVar3;
  uVar3 = puVar6[7];
  puVar6[7] = puVar5[7];
  puVar5[7] = uVar3;
  uVar3 = puVar6[8];
  puVar6[8] = puVar5[8];
  puVar5[8] = uVar3;
  uVar3 = puVar6[9];
  puVar6[9] = puVar5[9];
  puVar5[9] = uVar3;
  uVar3 = puVar6[10];
  puVar6[10] = puVar5[10];
  puVar5[10] = uVar3;
  uVar3 = puVar6[0xb];
  puVar6[0xb] = puVar5[0xb];
  puVar5[0xb] = uVar3;
  uVar3 = puVar6[0xc];
  puVar6[0xc] = puVar5[0xc];
  puVar5[0xc] = uVar3;
  uVar3 = puVar6[0xd];
  puVar6[0xd] = puVar5[0xd];
  puVar5[0xd] = uVar3;
  uVar3 = puVar6[0xe];
  puVar6[0xe] = puVar5[0xe];
  puVar5[0xe] = uVar3;
  uVar3 = puVar6[0xf];
  puVar6[0xf] = puVar5[0xf];
  puVar5[0xf] = uVar3;
  uVar3 = puVar6[0x10];
  param_1 = param_1 + 0x4ac;
  puVar6[0x10] = puVar5[0x10];
  puVar5[0x10] = uVar3;
  uVar2 = *(undefined1 *)(param_1 + (ulong)param_2);
  *(undefined1 *)(param_1 + (ulong)param_2) = *(undefined1 *)(param_1 + (ulong)param_3);
  *(undefined1 *)(param_1 + (ulong)param_3) = uVar2;
  return;
}


