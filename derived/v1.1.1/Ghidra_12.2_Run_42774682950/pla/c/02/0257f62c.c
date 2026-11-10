/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257f62c; name: FUN_0257f62c
 */


void FUN_0257f62c(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(byte *)(param_1 + 0x28) != (param_2 & 1)) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(byte *)(param_1 + 0x28) == 0) {
      local_50 = 0x5985572e3c393820;
      pcStack_48 = "anime_wake_dif";
      local_40 = 0xe;
      uStack_38 = 0;
      lVar1 = 0;
      if (*(long *)(lVar2 + 0x148) != 0) {
        FUN_0283b1e8(*(long *)(lVar2 + 0x148),&local_50);
        lVar1 = *(long *)(lVar2 + 0x148);
      }
      local_50 = 0x41db586ccd28815c;
      pcStack_48 = "anime_close_dif";
      local_40 = 0xf;
      uStack_38 = 0;
      if (lVar1 != 0) {
        FUN_0283b430(lVar1,&local_50);
      }
    }
    else {
      local_50 = 0x5985572e3c393820;
      pcStack_48 = "anime_wake_dif";
      local_40 = 0xe;
      uStack_38 = 0;
      lVar1 = 0;
      if (*(long *)(lVar2 + 0x148) != 0) {
        FUN_0283b430(*(long *)(lVar2 + 0x148),&local_50);
        lVar1 = *(long *)(lVar2 + 0x148);
      }
      local_50 = 0x41db586ccd28815c;
      pcStack_48 = "anime_close_dif";
      local_40 = 0xf;
      uStack_38 = 0;
      if (lVar1 != 0) {
        FUN_0283b1e8(lVar1,&local_50);
      }
    }
    *(byte *)(param_1 + 0x28) = param_2 & 1;
  }
  return;
}


