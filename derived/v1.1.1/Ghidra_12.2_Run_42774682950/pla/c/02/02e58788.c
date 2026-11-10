/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58788; name: FUN_02e58788
 */


void FUN_02e58788(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xf);
  if (1 < uVar1) {
    uVar3 = 0;
    iVar5 = -1;
    puVar4 = (undefined4 *)((long)param_1 + 0x14);
    do {
      uVar1 = uVar1 + iVar5;
      iVar5 = iVar5 + -1;
      uVar6 = *(undefined8 *)(puVar4 + -2);
      puVar4[-2] = *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0xc);
      puVar4[-1] = *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0x10);
      uVar2 = *puVar4;
      uVar3 = uVar3 + 1;
      *puVar4 = *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0x14);
      *(undefined8 *)((long)param_1 + (ulong)uVar1 * 0xc + 0xc) = uVar6;
      *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0x14) = uVar2;
      uVar1 = *(uint *)(param_1 + 0xf);
      puVar4 = puVar4 + 3;
    } while (uVar3 < uVar1 >> 1);
  }
  uVar6 = *param_1;
  *param_1 = *(undefined8 *)((long)param_1 + 0x6c);
  uVar2 = *(undefined4 *)((long)param_1 + 0x74);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined8 *)((long)param_1 + 0x6c) = uVar6;
  return;
}


