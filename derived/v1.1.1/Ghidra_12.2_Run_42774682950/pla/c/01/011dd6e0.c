/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dd6e0; name: FUN_011dd6e0
 */


void FUN_011dd6e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 & 1) == 0) {
    local_50 = 0xc9663ef7707e6098;
    pcStack_48 = "anime_L_guide_01_notice_on";
    local_40 = 0x1a;
    uStack_38 = 0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_50);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_50 = 0xb702cc7426a7b652;
    pcStack_48 = "anime_L_guide_01_notice_off";
    local_40 = 0x1b;
  }
  else {
    local_50 = 0xb702cc7426a7b652;
    pcStack_48 = "anime_L_guide_01_notice_off";
    local_40 = 0x1b;
    uStack_38 = 0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_50);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_50 = 0xc9663ef7707e6098;
    pcStack_48 = "anime_L_guide_01_notice_on";
    local_40 = 0x1a;
  }
  if (lVar1 != 0) {
    uStack_38 = 0;
    FUN_0283b1e8(lVar1,&local_50);
  }
  return;
}


