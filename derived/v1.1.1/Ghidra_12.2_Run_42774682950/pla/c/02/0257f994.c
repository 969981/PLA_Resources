/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257f994; name: FUN_0257f994
 */


void FUN_0257f994(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  local_40 = 0x73e3084a4df7a3ba;
  pcStack_38 = "anime_wake_lock";
  local_30 = 0xf;
  lVar1 = 0;
  if (*(long *)(lVar3 + 0x148) != 0) {
    FUN_0283b430(*(long *)(lVar3 + 0x148),&local_40);
    lVar1 = *(long *)(lVar3 + 0x148);
  }
  local_40 = 0x1440d24ab7b261ad;
  pcStack_38 = "anime_keep_lock_normal";
  local_30 = 0x16;
  local_28 = 0;
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_0283b430(lVar1,&local_40);
    lVar2 = *(long *)(lVar3 + 0x148);
  }
  local_40 = 0x82a3340dca390664;
  pcStack_38 = "anime_keep_lock_lockon";
  local_30 = 0x16;
  local_28 = 0;
  lVar1 = 0;
  if (lVar2 != 0) {
    FUN_0283b430(lVar2,&local_40);
    lVar1 = *(long *)(lVar3 + 0x148);
  }
  local_40 = 0x1f9ab25029b2247d;
  pcStack_38 = "anime_to_lock";
  local_30 = 0xd;
  local_28 = 0;
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_0283b430(lVar1,&local_40);
    lVar2 = *(long *)(lVar3 + 0x148);
  }
  local_40 = 0xa57c90f36346dd21;
  pcStack_38 = "anime_to_normal";
  local_30 = 0xf;
  local_28 = 0;
  lVar1 = 0;
  if (lVar2 != 0) {
    FUN_0283b430(lVar2,&local_40);
    lVar1 = *(long *)(lVar3 + 0x148);
  }
  local_40 = 0x3c515a224494b7de;
  pcStack_38 = "anime_close_lock";
  local_30 = 0x10;
  local_28 = 0;
  if (lVar1 != 0) {
    FUN_0283b430(lVar1,&local_40);
  }
  return;
}


