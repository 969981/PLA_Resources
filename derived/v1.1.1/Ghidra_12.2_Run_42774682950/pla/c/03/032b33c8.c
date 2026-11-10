/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b33c8; name: FUN_032b33c8
 */


undefined8 FUN_032b33c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [12];
  uint local_74;
  uint uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_033215ac(&local_60);
  FUN_03321630(&local_60);
  FUN_032a6024(auStack_80);
  uVar1 = FUN_032b3360(&local_60,auStack_80);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x80040200;
  }
  else {
    FUN_032a6078(param_3,auStack_80);
    if (local_74 < 2) {
      local_74 = 1;
    }
    if (uStack_70 < 2) {
      uStack_70 = 1;
    }
    FUN_032b3470(&local_60,local_74,uStack_70,*(undefined8 *)(param_3 + 0x130));
    uVar2 = 0;
  }
  FUN_03321570(&local_60);
  return uVar2;
}


