/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1dd8; name: FUN_013e1dd8
 */


void FUN_013e1dd8(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = 0x27088d46a2383069;
  pcStack_38 = "anime_page_in_state";
  local_30 = 0x13;
  if (*(long *)(param_1 + 0x148) == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    FUN_0283b430(*(long *)(param_1 + 0x148),&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0x89a52994082bea9e;
  pcStack_38 = "anime_page_out_state";
  local_30 = 0x14;
  local_28 = 0;
  if (!bVar1) {
    FUN_0283b430(lVar2,&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
  }
  local_40 = 0x35c47871346bd963;
  pcStack_38 = "anime_page_in";
  local_30 = 0xd;
  local_28 = 0;
  if (lVar2 == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    FUN_0283b430(lVar2,&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0xb9ef675c0ba05f50;
  pcStack_38 = "anime_page_out";
  local_30 = 0xe;
  local_28 = 0;
  if (!bVar1) {
    FUN_0283b430(lVar2,&local_40);
  }
  return;
}


