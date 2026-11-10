/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1eec; name: FUN_013e1eec
 */


void FUN_013e1eec(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = 0xb1865b02e7e78e92;
  pcStack_38 = "anime_slide_in_l";
  local_30 = 0x10;
  if (*(long *)(param_1 + 0x148) == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    FUN_0283b430(*(long *)(param_1 + 0x148),&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0x8158e72a82381501;
  pcStack_38 = "anime_slide_out_l";
  local_30 = 0x11;
  local_28 = 0;
  if (!bVar1) {
    FUN_0283b430(lVar2,&local_40);
  }
  return;
}


