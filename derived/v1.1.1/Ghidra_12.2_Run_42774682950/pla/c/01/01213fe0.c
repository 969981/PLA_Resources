/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01213fe0; name: FUN_01213fe0
 */


void FUN_01213fe0(long *param_1,long *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)*param_3;
  if ((puVar5 != puVar3) && ((*(ushort *)(puVar3 + 1) & 1) == 0)) {
    do {
      puVar4 = (undefined4 *)((long)puVar3 + 6);
      if (puVar5 == puVar4) {
        puVar3 = puVar5;
        break;
      }
      puVar1 = (ushort *)((long)puVar3 + 10);
      puVar3 = puVar4;
    } while ((*puVar1 & 1) == 0);
  }
  *param_2 = (long)puVar3;
  puVar5 = (undefined4 *)*param_3;
  if ((puVar5 != puVar3) && (puVar4 = (undefined4 *)((long)puVar3 + 6), puVar4 != puVar5)) {
    do {
      if ((*(ushort *)(puVar4 + 1) & 1) == 0) {
        uVar2 = *puVar4;
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar4 + 1);
        *puVar3 = uVar2;
        puVar3 = (undefined4 *)(*param_2 + 6);
        *param_2 = (long)puVar3;
        puVar5 = (undefined4 *)*param_3;
      }
      puVar4 = (undefined4 *)((long)puVar4 + 6);
    } while (puVar4 != puVar5);
  }
  *param_1 = (long)puVar3;
  return;
}


