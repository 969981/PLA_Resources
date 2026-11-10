/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257faf0; name: FUN_0257faf0
 */


void FUN_0257faf0(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(byte *)(param_1 + 0x20) != (param_2 & 1)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(byte *)(param_1 + 0x20) == 0) {
      local_50 = 0x73e3084a4df7a3ba;
      pcStack_48 = "anime_wake_lock";
      local_40 = 0xf;
      uStack_38 = 0;
      lVar1 = 0;
      if (*(long *)(lVar3 + 0x148) != 0) {
        FUN_0283b1e8(*(long *)(lVar3 + 0x148),&local_50);
        lVar1 = *(long *)(lVar3 + 0x148);
      }
      local_50 = 0x1440d24ab7b261ad;
      pcStack_48 = "anime_keep_lock_normal";
      local_40 = 0x16;
      uStack_38 = 0;
      lVar2 = 0;
      if (lVar1 != 0) {
        FUN_0283b1e8(lVar1,&local_50);
        lVar2 = *(long *)(lVar3 + 0x148);
      }
      local_50 = 0x3c515a224494b7de;
      pcStack_48 = "anime_close_lock";
      local_40 = 0x10;
      uStack_38 = 0;
      if (lVar2 != 0) {
        FUN_0283b430(lVar2,&local_50);
      }
    }
    else {
      local_50 = 0x73e3084a4df7a3ba;
      pcStack_48 = "anime_wake_lock";
      local_40 = 0xf;
      uStack_38 = 0;
      lVar1 = 0;
      if (*(long *)(lVar3 + 0x148) != 0) {
        FUN_0283b430(*(long *)(lVar3 + 0x148),&local_50);
        lVar1 = *(long *)(lVar3 + 0x148);
      }
      local_50 = 0x3c515a224494b7de;
      pcStack_48 = "anime_close_lock";
      local_40 = 0x10;
      uStack_38 = 0;
      if (lVar1 != 0) {
        FUN_0283b1e8(lVar1,&local_50);
      }
    }
    *(byte *)(param_1 + 0x20) = param_2 & 1;
  }
  return;
}


