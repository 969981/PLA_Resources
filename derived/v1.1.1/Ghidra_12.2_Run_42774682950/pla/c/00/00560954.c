/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560954; name: FUN_00560954
 */


void FUN_00560954(undefined1 *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar2 = (undefined1 *)FUN_002e2ec0(PTR_FUN_04373078,(long)*(int *)(param_1 + 0x10) * 8 + 0x20);
  *(undefined1 **)(puVar2 + 8) = puVar2 + 0x18;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = *param_1;
  *(int *)(puVar2 + 4) = 0x110000 - *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 8);
    uVar4 = 0;
    iVar3 = 0;
    uVar8 = *puVar6;
    puVar7 = puVar6;
    if (uVar8 != 0) goto LAB_005609e8;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      uVar4 = *puVar1 + 1;
      if (puVar6 == puVar7 + (long)iVar5 * 2) break;
      uVar8 = *puVar6;
      if (uVar8 != uVar4) {
LAB_005609e8:
        *(ulong *)(*(long *)(puVar2 + 8) + (long)iVar3 * 8) = CONCAT44(uVar8 - 1,uVar4);
        puVar7 = *(uint **)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
      }
    }
    if (0x10ffff < (int)uVar4) {
      *(int *)(puVar2 + 0x10) = iVar3;
      return;
    }
  }
  *(ulong *)(*(long *)(puVar2 + 8) + (long)iVar3 * 8) = (ulong)uVar4 | 0x10ffff00000000;
  *(int *)(puVar2 + 0x10) = iVar3 + 1;
  return;
}


