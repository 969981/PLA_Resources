/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214dc8; name: FUN_01214dc8
 */


void FUN_01214dc8(long param_1)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_0121b6ac();
  if ((uVar1 & 1) == 0) {
    local_40 = 0xc4c8e97f72c20769;
    pcStack_38 = "anime_gauge_off";
    local_30 = 0xf;
  }
  else {
    local_40 = 0x7421a439f76fb9ad;
    pcStack_38 = "anime_gauge_on";
    local_30 = 0xe;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  return;
}


