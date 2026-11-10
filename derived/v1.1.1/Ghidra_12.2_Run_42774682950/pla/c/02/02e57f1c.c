/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57f1c; name: FUN_02e57f1c
 */


void FUN_02e57f1c(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float fVar6;
  
  uVar3 = *(uint *)(param_1 + 0x78);
  if (*(int *)(param_2 + 0x78) != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x14);
    do {
      if (7 < (uint)(uVar4 + uVar3)) break;
      lVar1 = param_1 + (uVar4 + uVar3 & 0xffffffff) * 0xc;
      *(undefined4 *)(lVar1 + 0xc) = puVar5[-2];
      *(undefined4 *)(lVar1 + 0x10) = puVar5[-1];
      *(undefined4 *)(lVar1 + 0x14) = *puVar5;
      uVar3 = *(uint *)(param_1 + 0x78);
      iVar2 = (int)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(param_1 + (ulong)(iVar2 + uVar3) * 8 + 0xb0) = param_4;
      puVar5 = puVar5 + 3;
    } while (uVar4 < *(uint *)(param_2 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x6c) = *param_3;
  *(undefined4 *)(param_1 + 0x70) = param_3[1];
  *(undefined4 *)(param_1 + 0x74) = param_3[2];
  uVar3 = *(int *)(param_2 + 0x78) + uVar3;
  if (7 < uVar3) {
    uVar3 = 8;
  }
  *(uint *)(param_1 + 0x78) = uVar3;
  fVar6 = *(float *)(param_2 + 0x84);
  if (*(float *)(param_2 + 0x84) <= *(float *)(param_1 + 0x84)) {
    fVar6 = *(float *)(param_1 + 0x84);
  }
  *(float *)(param_1 + 0x84) = fVar6;
  return;
}


