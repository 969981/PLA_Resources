/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4254; name: FUN_02ef4254
 */


byte * FUN_02ef4254(undefined4 param_1,long param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  if (pbVar2 != (byte *)0x0) {
    uVar4 = 0;
    pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
    do {
      if ((uint)pbVar2[uVar4 + 1] == (param_3 & 0xff)) {
        return pbVar3;
      }
      uVar4 = uVar4 + 1;
      pbVar3 = pbVar3 + 0x10;
    } while (uVar4 < *pbVar2);
  }
  iVar1 = FUN_02ee93fc(*(long *)(param_2 + 8) + 0x48,
                       *(undefined4 *)(&DAT_03a9f0d0 + (ulong)param_3 * 4));
  if (iVar1 == 1) {
    pbVar2 = (byte *)FUN_02ef4308((undefined8 *)(param_2 + 0x18),param_3);
    if (pbVar2 != (byte *)0x0) {
      *(undefined4 *)pbVar2 = param_1;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
  }
  else {
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}


