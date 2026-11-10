/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085838c; name: FUN_0085838c
 */


bool FUN_0085838c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *local_60 [3];
  undefined2 local_48;
  undefined1 auStack_40 [16];
  int local_30 [4];
  int local_14;
  
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    FUN_00858248(local_30,param_1,&local_14,param_2,param_3);
    if (local_30[0] != 0) {
      local_60[0] = PTR_DAT_04377418 + 0x10;
      FUN_007e34ac(local_60,0xffffffff);
      local_48 = 0;
      FUN_00858248(auStack_40,param_1,&local_14,local_60,param_3);
      FUN_007ee660(local_30,auStack_40);
      FUN_007e34a4(local_60);
    }
    if (local_14 != 0) {
      uVar1 = FUN_00821c5c(param_1 + 0x6e8);
      return (int)((uVar1 & 0xffffffff) * 100 >> 0x20) < local_14;
    }
  }
  return false;
}


