/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96110; name: FUN_02e96110
 */


void FUN_02e96110(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    uVar3 = (ulong)(param_2 - uVar2 * uVar1);
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + uVar3 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      if (*(uint *)(puVar4 + 1) == param_2) {
        *(undefined8 *)(*(long *)(param_1 + 8) + uVar3 * 8) = *puVar4;
      }
      else {
        do {
          puVar5 = puVar4;
          puVar4 = (undefined8 *)*puVar5;
          if (puVar4 == (undefined8 *)0x0) {
            return;
          }
        } while (*(uint *)(puVar4 + 1) != param_2);
        *puVar5 = *puVar4;
      }
      if (puVar4[4] != 0) {
        *(undefined4 *)(puVar4 + 5) = 0;
        (*DAT_0442d150)(0);
        puVar4[4] = 0;
        *(undefined4 *)((long)puVar4 + 0x2c) = 0;
      }
      (*DAT_0442d150)(0,puVar4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return;
}


