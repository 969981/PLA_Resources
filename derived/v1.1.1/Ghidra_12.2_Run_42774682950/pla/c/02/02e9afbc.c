/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9afbc; name: FUN_02e9afbc
 */


void FUN_02e9afbc(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar3 = *(uint *)(param_1 + 0xe8);
  if (uVar3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    puVar4 = puVar1;
    do {
      if ((*(int *)((long)puVar4 + 0xc) == param_2) && (*(int *)(puVar4 + 2) == param_3)) {
        if (puVar4[3] != 0) {
          (*DAT_0442d150)(0);
          puVar4[3] = 0;
        }
        puVar4[4] = 0;
        puVar1 = *(undefined8 **)(param_1 + 0xe0);
        uVar3 = *(uint *)(param_1 + 0xe8);
        puVar5 = puVar4;
        if (puVar4 < puVar1 + (ulong)uVar3 * 6 + -6) {
          do {
            puVar2 = puVar5 + 6;
            puVar5[1] = puVar5[7];
            *puVar5 = *puVar2;
            puVar5[5] = puVar5[0xb];
            puVar5[4] = puVar5[10];
            puVar5[3] = puVar5[9];
            puVar5[2] = puVar5[8];
            puVar5 = puVar2;
          } while (puVar2 < puVar1 + (ulong)uVar3 * 6 + -6);
          uVar3 = *(uint *)(param_1 + 0xe8);
          puVar1 = *(undefined8 **)(param_1 + 0xe0);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_1 + 0xe8) = uVar3;
      }
      else {
        puVar4 = puVar4 + 6;
      }
    } while (puVar1 + (ulong)uVar3 * 6 != puVar4);
  }
  return;
}


