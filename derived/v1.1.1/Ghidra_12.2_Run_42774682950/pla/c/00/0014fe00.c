/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014fe00; name: FUN_0014fe00
 */


void FUN_0014fe00(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    if (0 < (int)param_3) {
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      *(undefined8 **)(param_2 + 0x10) = puVar2;
      if (param_3 != 1) {
        lVar4 = (ulong)param_3 - 1;
        lVar5 = 0x10;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
          lVar4 = lVar4 + -1;
          uVar1 = puVar3[1];
          lVar5 = lVar5 + 0x10;
          *puVar2 = *puVar3;
          puVar2[1] = uVar1;
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
          *(undefined8 **)(param_2 + 0x10) = puVar2;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


