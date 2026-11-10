/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02620d8c; name: FUN_02620d8c
 */


byte FUN_02620d8c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long local_28;
  undefined4 local_18;
  byte local_14;
  byte local_11;
  
  local_28 = param_1;
  FUN_02620504(auStack_30,param_1 + 0x5e8);
  uVar1 = FUN_0262052c(auStack_30);
  if ((uVar1 & 1) != 0) {
    FUN_02620558(auStack_30);
    FUN_01af3b10(auStack_48);
    FUN_02620fb4(auStack_38,auStack_48);
    FUN_02620fdc(auStack_48);
    uVar1 = FUN_02621000(auStack_38);
    if ((uVar1 & 1) != 0) {
      FUN_0262102c(auStack_38);
      uVar1 = FUN_025b2a7c();
      if ((uVar1 & 1) != 0) {
        FUN_0262102c(auStack_38);
        FUN_025b2ea4();
      }
    }
    FUN_02621044(auStack_38);
    FUN_02620558(auStack_30);
    FUN_01af1490(auStack_60);
    FUN_0262107c(auStack_50,auStack_60);
    FUN_026210a4(auStack_60);
    uVar1 = FUN_026210c8(auStack_50);
    if ((uVar1 & 1) != 0) {
      FUN_026210f4(auStack_50);
      FUN_01b91370();
    }
    FUN_0262110c(auStack_50);
    FUN_02620558(auStack_30);
    FUN_01aef8c8(auStack_78);
    FUN_026209d0(auStack_68,auStack_78);
    FUN_026209f8(auStack_78);
    uVar1 = FUN_02620a1c(auStack_68);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_02620a48(auStack_68);
      local_18 = 1;
      FUN_025ff7c0(uVar2,&local_18,0);
    }
    FUN_02620a60(auStack_68);
  }
  FUN_02620ce4(auStack_30);
  uVar1 = FUN_02672fd0(param_1);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    FUN_026204dc(auStack_80,param_1 + 0x668);
    uVar1 = FUN_026205c8(auStack_80);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      FUN_02620620(auStack_80);
      local_90 = FUN_02620638();
      uVar2 = FUN_02620620(auStack_80);
      local_14 = FUN_026206a4(uVar2,1);
      local_14 = local_14 & 1;
      uVar1 = FUN_02624c84(&local_90);
      if ((uVar1 & 1) == 0) {
        FUN_02620620(auStack_80);
        local_98 = FUN_02620638();
        FUN_02624c84(&local_98);
      }
      local_11 = local_14 & 1;
    }
    local_84 = 1;
    FUN_02620d1c(auStack_80);
  }
  return local_11;
}


