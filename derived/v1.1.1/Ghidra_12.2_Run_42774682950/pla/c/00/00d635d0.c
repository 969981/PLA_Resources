/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d635d0; name: FUN_00d635d0
 */


void FUN_00d635d0(long *param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)*param_3;
  if ((puVar4 != puVar3) && ((*(byte *)(puVar3 + 1) & 1) == 0)) {
    do {
      puVar5 = puVar3 + 2;
      if (puVar4 == puVar5) {
        puVar3 = puVar4;
        break;
      }
      pbVar1 = (byte *)(puVar3 + 3);
      puVar3 = puVar5;
    } while ((*pbVar1 & 1) == 0);
  }
  *param_2 = (long)puVar3;
  puVar4 = (undefined8 *)*param_3;
  if ((puVar4 != puVar3) && (puVar5 = puVar3 + 2, puVar5 != puVar4)) {
    do {
      if ((*(byte *)(puVar5 + 1) & 1) == 0) {
        uVar2 = puVar5[1];
        *puVar3 = *puVar5;
        puVar3[1] = uVar2;
        puVar3 = (undefined8 *)(*param_2 + 0x10);
        *param_2 = (long)puVar3;
        puVar4 = (undefined8 *)*param_3;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  *param_1 = (long)puVar3;
  return;
}


