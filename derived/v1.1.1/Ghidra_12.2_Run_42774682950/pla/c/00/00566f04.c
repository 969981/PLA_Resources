/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00566f04; name: FUN_00566f04
 */


undefined8 FUN_00566f04(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  
  uStack_30 = 0;
  local_38 = 0;
  local_60 = PTR_DAT_04374d80 + 0x10;
  uStack_40 = 0;
  local_48 = 0;
  local_28 = 0;
  local_24 = 1000000;
  uStack_50 = 0;
  local_58 = 0;
                    /* try { // try from 00566f44 to 00566f53 has its CatchHandler @ 00566fd0 */
  lVar1 = FUN_00568ab0(&local_60,param_1,0,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_70 = 0;
    local_78 = 0;
    local_64 = 1000000;
    uStack_80 = 0;
    local_88 = 0;
    local_a0 = PTR_DAT_04374d88 + 0x10;
    local_68 = 0;
    uStack_90 = 0;
    local_98 = 0;
                    /* try { // try from 00566f84 to 00566fa3 has its CatchHandler @ 00566fe4 */
    uVar2 = FUN_00568ab0(&local_a0,lVar1,0,1);
    FUN_0055de34(lVar1);
    FUN_005671dc(&local_a0);
  }
  FUN_005671dc(&local_60);
  return uVar2;
}


