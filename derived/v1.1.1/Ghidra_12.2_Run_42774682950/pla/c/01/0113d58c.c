/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113d58c; name: FUN_0113d58c
 */


void FUN_0113d58c(undefined8 *param_1,long param_2)

{
  byte *__s;
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  __s = (byte *)(param_2 + 0x78);
  puVar4 = &DAT_cbf29ce484222645;
  sVar2 = strlen((char *)__s);
  bVar1 = *__s;
  if (bVar1 != 0) {
    pbVar3 = (byte *)(param_2 + 0x79);
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = puVar4;
  param_1[1] = __s;
  param_1[2] = sVar2;
  param_1[3] = 0;
  return;
}


