/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234aec; name: FUN_01234aec
 */


undefined8 FUN_01234aec(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 0x60);
  }
  pbVar3 = (byte *)*puVar1;
  bVar2 = *pbVar3;
  if (bVar2 != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    do {
      pbVar3 = pbVar3 + 1;
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar3;
    } while (bVar2 != 0);
    if ((long)puVar4 < 0x58e22506771bdb98) {
      if (puVar4 == (undefined1 *)0xbfff67b6b749e003 || puVar4 == (undefined1 *)0xd351708c0af4c4ee)
      {
        return 1;
      }
    }
    else if (puVar4 == (undefined1 *)0x618f9a4313371941 ||
             puVar4 == (undefined1 *)0x58e22506771bdb98) {
      return 1;
    }
  }
  return 0;
}


