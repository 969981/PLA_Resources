/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5388; name: FUN_032b5388
 */


undefined8 FUN_032b5388(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_30 [16];
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  local_14 = param_1;
  local_30 = FUN_032e0ab0(&local_14,&DAT_04347370);
  if (local_30._8_8_ == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_032e3508(local_30._8_8_);
    if ((uVar1 & 1) != 0) {
      FUN_032e0c28(uVar1 & 0xfffffffffffffffe);
    }
  }
  if ((local_20 & 1) != 0) {
    uVar3 = local_20 & 0xfffffffffffffffe;
    local_20 = uVar1;
    FUN_032e0c40(uVar3);
    uVar1 = local_20;
  }
  local_20 = uVar1;
  uVar2 = FUN_032d6ddc(&DAT_04347af0,local_30);
  if ((local_20 & 1) != 0) {
    FUN_032e0c40(local_20 & 0xfffffffffffffffe);
  }
  return uVar2;
}


