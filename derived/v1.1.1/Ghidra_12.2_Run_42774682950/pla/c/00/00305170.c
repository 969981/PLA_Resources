/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305170; name: FUN_00305170
 */


byte * FUN_00305170(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  param_1[4] = param_1[4] + param_2;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar5 = param_1[1];
    if (*(long *)(lVar5 + (lVar4 + -1) * 0x20) == 0) {
      pbVar6 = (byte *)(lVar5 + (lVar4 + -1) * 0x20 + 8);
      bVar3 = *pbVar6;
      uVar1 = (ulong)bVar3 + param_2;
      if (uVar1 < 0x18) {
        *pbVar6 = (byte)uVar1;
        return pbVar6 + (ulong)bVar3 + 1;
      }
    }
    if ((lVar5 - *param_1 >> 5) + lVar4 == param_1[3]) {
      FUN_00306350(param_1);
      lVar4 = param_1[2];
    }
  }
  param_1[2] = lVar4 + 1;
  puVar2 = (undefined8 *)(param_1[1] + lVar4 * 0x20);
  *puVar2 = 0;
  *(char *)(puVar2 + 1) = (char)param_2;
  return (byte *)((long)puVar2 + 9);
}


