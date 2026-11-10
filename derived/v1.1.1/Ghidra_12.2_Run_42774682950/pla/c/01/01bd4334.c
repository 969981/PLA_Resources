/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bd4334; name: FUN_01bd4334
 */


void FUN_01bd4334(long param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  *(long *)(param_1 + 0x230) = param_2 + 0xc0;
  pbVar3 = *(byte **)(param_2 + 0x100);
  puVar2 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  *(undefined1 **)(param_1 + 0x468) = puVar2;
  return;
}


