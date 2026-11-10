/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03006490; name: FUN_03006490
 */


short * FUN_03006490(long param_1,int param_2)

{
  byte bVar1;
  undefined1 auStack_40 [16];
  short *local_30;
  undefined4 local_24;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  while (bVar1 - 0x13 < 2) {
    param_1 = FUN_03012520();
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  local_24 = 0;
  (**(code **)(DAT_0442d408 + (ulong)bVar1 * 0x80 + 0x18))(param_1,auStack_40);
  if (*local_30 == 3) {
    local_30 = local_30 + (long)param_2 * 8 + 8;
  }
  else if (*local_30 == 2) {
    local_30 = local_30 + (long)param_2 * 0x20 + 0x20;
  }
  else {
    local_30 = (short *)&DAT_03aae280;
  }
  return local_30;
}


