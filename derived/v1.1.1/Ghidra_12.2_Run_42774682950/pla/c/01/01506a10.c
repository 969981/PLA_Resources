/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01506a10; name: FUN_01506a10
 */


uint FUN_01506a10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0xa1dd1316bf836295;
  pcStack_38 = "anime_info_add_wake";
  local_30 = 0x13;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      goto joined_r0x01506ae8;
    }
    lVar3 = *(long *)(param_1 + 0x2c8);
  }
  local_60 = 0xb5361acd6d9d214b;
  pcStack_58 = "anime_info_add_close";
  local_50 = 0x14;
  local_48 = (long *)0x0;
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0283b5c4(lVar3,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
joined_r0x01506ae8:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


