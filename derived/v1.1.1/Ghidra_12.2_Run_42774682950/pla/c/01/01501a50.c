/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01501a50; name: FUN_01501a50
 */


void FUN_01501a50(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar2 = (ulong *)*param_2;
  puVar3 = (ulong *)*param_3;
  if ((puVar3 != puVar2) && ((*puVar2 & 0x100000000) == 0)) {
    do {
      puVar4 = puVar2 + 1;
      if (puVar3 == puVar4) {
        puVar2 = puVar3;
        break;
      }
      pbVar1 = (byte *)((long)puVar2 + 0xc);
      puVar2 = puVar4;
    } while ((*pbVar1 & 1) == 0);
  }
  *param_2 = (long)puVar2;
  puVar3 = (ulong *)*param_3;
  if ((puVar3 != puVar2) && (puVar4 = puVar2 + 1, puVar4 != puVar3)) {
    do {
      if ((*puVar4 >> 0x20 & 1) == 0) {
        *puVar2 = *puVar4;
        puVar2 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar2;
        puVar3 = (ulong *)*param_3;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
  }
  *param_1 = (long)puVar2;
  return;
}


