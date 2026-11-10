/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fb734; name: FUN_030fb734
 */


void FUN_030fb734(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = **(int **)(param_1 + 0x48) + 1;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar4);
        if (*(int *)(puVar2 + 7) != -1) {
          puVar3 = (undefined8 *)
                   (*(long *)(*(long *)(param_1 + 0x48) + 0x18) +
                   (long)(int)(*(uint *)((long)puVar2 + 0x3c) &
                              *(uint *)(*(long *)(param_1 + 0x48) + 0x10)) * 0x40);
          *(int *)(puVar3 + 7) = iVar1;
          DataMemoryBarrier(2,3);
          uVar6 = *puVar2;
          puVar3[1] = puVar2[1];
          *puVar3 = uVar6;
          uVar6 = puVar2[2];
          puVar3[3] = puVar2[3];
          puVar3[2] = uVar6;
          uVar6 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar6;
          puVar3[6] = puVar2[6];
          *(undefined4 *)(puVar2 + 7) = 0xffffffff;
          puVar2[6] = 0xffffffffffffffff;
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x40;
      } while (lVar5 < *(int *)(param_1 + 0x30));
    }
    **(int **)(param_1 + 0x48) = iVar1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}


