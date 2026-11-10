/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57fc4; name: FUN_02e57fc4
 */


void FUN_02e57fc4(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  
  uVar4 = *(uint *)(param_2 + 0x78);
  iVar1 = *(int *)(param_1 + 0x78);
  if (uVar4 != 0) {
    uVar3 = 0;
    iVar5 = -1;
    do {
      if (7 < iVar1 + uVar3) break;
      uVar4 = uVar4 + iVar5;
      lVar6 = param_1 + (ulong)(iVar1 + uVar3) * 0xc;
      iVar5 = iVar5 + -1;
      lVar2 = param_2 + (ulong)uVar4 * 0xc;
      *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar2 + 0xc);
      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar2 + 0x14);
      iVar1 = *(int *)(param_1 + 0x78);
      uVar4 = uVar3 + iVar1;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(param_1 + (ulong)uVar4 * 8 + 0xb0) = param_4;
      uVar4 = *(uint *)(param_2 + 0x78);
    } while (uVar3 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x6c) = *param_3;
  *(undefined4 *)(param_1 + 0x70) = param_3[1];
  *(undefined4 *)(param_1 + 0x74) = param_3[2];
  uVar4 = *(int *)(param_2 + 0x78) + iVar1;
  if (7 < uVar4) {
    uVar4 = 8;
  }
  *(uint *)(param_1 + 0x78) = uVar4;
  fVar7 = *(float *)(param_2 + 0x84);
  if (*(float *)(param_2 + 0x84) <= *(float *)(param_1 + 0x84)) {
    fVar7 = *(float *)(param_1 + 0x84);
  }
  *(float *)(param_1 + 0x84) = fVar7;
  return;
}


