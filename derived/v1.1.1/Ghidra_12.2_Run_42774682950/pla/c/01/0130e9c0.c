/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130e9c0; name: FUN_0130e9c0
 */


void FUN_0130e9c0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = 0x25ff4946526ac114;
  pcStack_38 = "anime_wake_1";
  local_30 = 0xc;
  if (*(long *)(param_1 + 0x148) == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    FUN_0283b430(*(long *)(param_1 + 0x148),&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0xc79628086ab92b20;
  pcStack_38 = "anime_close_1";
  local_30 = 0xd;
  local_28 = 0;
  if (bVar1) {
    lVar2 = 0;
    bVar1 = true;
  }
  else {
    FUN_0283b430(lVar2,&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
    bVar1 = lVar2 == 0;
  }
  local_40 = 0x25ff4c46526ac62d;
  pcStack_38 = "anime_wake_2";
  local_30 = 0xc;
  local_28 = 0;
  if (!bVar1) {
    FUN_0283b430(lVar2,&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
  }
  local_40 = 0xc7962b086ab93039;
  pcStack_38 = "anime_close_2";
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
  local_40 = 0x25ff6d46526afe40;
  pcStack_38 = "anime_wake_m";
  local_30 = 0xc;
  local_28 = 0;
  if (!bVar1) {
    FUN_0283b430(lVar2,&local_40);
    lVar2 = *(long *)(param_1 + 0x148);
  }
  local_40 = 0xc79604086ab8edf4;
  pcStack_38 = "anime_close_m";
  local_30 = 0xd;
  local_28 = 0;
  if (lVar2 != 0) {
    FUN_0283b430(lVar2,&local_40);
  }
  return;
}


