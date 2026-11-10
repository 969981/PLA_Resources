/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eaf60; name: FUN_030eaf60
 */


void FUN_030eaf60(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **local_1be0;
  undefined8 local_1bd8;
  undefined8 uStack_1bd0;
  undefined **local_1bc0;
  undefined8 uStack_1bb8;
  undefined8 local_1bb0;
  ulong uStack_1ba8;
  undefined **local_1ba0;
  undefined8 uStack_1b98;
  undefined8 local_1b90;
  undefined **local_1b80;
  undefined8 uStack_1b78;
  undefined8 local_1b70;
  ulong uStack_1b68;
  undefined1 auStack_1b60 [6896];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  ulong uStack_48;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x38d490);
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_032d5af0(lVar3,"TtShiftWorld",0xc);
    lVar2 = *(long *)(lVar1 + 0x38d490);
  }
  local_50 = *param_2;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_48 = param_2[1] & 0xffffffff;
  local_70 = 0;
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
  }
  local_68 = *(undefined8 *)(lVar2 + 0x10);
  FUN_030eb104(auStack_1b60,param_1,&local_50);
  local_1ba0 = &PTR_LAB_042b50f8;
  uStack_1b98 = 0xffffffff;
  local_1be0 = &PTR_LAB_042b5198;
  local_1b80 = &PTR_LAB_042b5138;
  local_1b90 = 1;
  local_1bc0 = &PTR_LAB_042b51d8;
  local_1bd8 = 0xffffffff;
  uStack_1bd0 = 1;
  local_1b70 = local_50;
  uStack_1b68 = uStack_48;
  local_1bb0 = local_50;
  uStack_1ba8 = uStack_48;
  uStack_1bb8 = param_1;
  uStack_1b78 = param_1;
  FUN_030eb214(auStack_1b60,&local_70);
  FUN_030eb4ec(&local_1ba0,&local_70);
  FUN_030eb564(&local_1be0,&local_70);
  FUN_030eb85c(auStack_1b60);
  if (lVar3 != 0) {
    FUN_032d5b34(lVar3,&DAT_0390f40e);
  }
  return;
}


