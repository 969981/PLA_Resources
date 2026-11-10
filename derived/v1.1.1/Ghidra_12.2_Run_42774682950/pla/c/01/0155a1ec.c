/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155a1ec; name: FUN_0155a1ec
 */


void FUN_0155a1ec(long param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  int local_3c;
  undefined8 local_38;
  
  lVar5 = 0;
  do {
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    if ((int)uVar4 != -1) {
      local_38 = uVar4;
      puVar2 = (undefined1 *)FUN_0155db30(param_1 + 0x3c0,&local_38);
      *puVar2 = (char)((ulong)uVar4 >> 0x20);
      if ((int)local_38 - 1000U < 1000) {
        bVar1 = local_38._4_1_;
        local_3c = (int)local_38 + 1000;
        pbVar3 = (byte *)FUN_0155dd78(param_1 + 0x3c0,&local_3c);
        *pbVar3 = bVar1 ^ 1;
      }
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x168);
  return;
}


