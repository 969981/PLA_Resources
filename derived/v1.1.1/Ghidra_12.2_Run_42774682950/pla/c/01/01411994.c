/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01411994; name: FUN_01411994
 */


void FUN_01411994(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  char acStack_440 [24];
  long *local_428;
  
  lVar1 = param_1 + 0x180;
  uVar2 = FUN_013ed910(*(undefined8 *)(param_1 + 0x5b8));
  FUN_02a4754c(acStack_440,&DAT_0420d4d8);
  uVar3 = thunk_FUN_00d2e944(lVar1,acStack_440);
  if (local_428 != (long *)0x0) {
    (**(code **)(*local_428 + 0x20))();
  }
  uVar2 = uVar2 & 1;
  FUN_028077c0(uVar3,uVar2);
  FUN_0280779c(uVar3,uVar2);
  FUN_02a4754c(acStack_440,&DAT_0420d4f0);
  uVar3 = thunk_FUN_00d2e944(lVar1,acStack_440);
  if (local_428 != (long *)0x0) {
    (**(code **)(*local_428 + 0x20))();
  }
  FUN_028077c0(uVar3,uVar2);
  FUN_0280779c(uVar3,uVar2);
  memset(acStack_440,0,0x400);
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') &&
     (uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),1), (uVar4 & 1) != 0)) {
    pcVar5 = "anime_L_detail_tab_%02d_active";
  }
  else {
    pcVar5 = "anime_L_detail_tab_%02d_passive";
  }
  snprintf(acStack_440,0x400,pcVar5,1);
  FUN_00d2ded4(lVar1,acStack_440);
  pcVar5 = "anime_L_detail_tab_%02d_passive";
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
    uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),2);
    pcVar5 = "anime_L_detail_tab_%02d_active";
    if ((uVar4 & 1) == 0) {
      pcVar5 = "anime_L_detail_tab_%02d_passive";
    }
  }
  snprintf(acStack_440,0x400,pcVar5,2);
  FUN_00d2ded4(lVar1,acStack_440);
  pcVar5 = "anime_L_detail_tab_%02d_passive";
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
    uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),3);
    pcVar5 = "anime_L_detail_tab_%02d_active";
    if ((uVar4 & 1) == 0) {
      pcVar5 = "anime_L_detail_tab_%02d_passive";
    }
  }
  snprintf(acStack_440,0x400,pcVar5,3);
  FUN_00d2ded4(lVar1,acStack_440);
  pcVar5 = "anime_L_detail_tab_%02d_passive";
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
    uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),4);
    pcVar5 = "anime_L_detail_tab_%02d_active";
    if ((uVar4 & 1) == 0) {
      pcVar5 = "anime_L_detail_tab_%02d_passive";
    }
  }
  snprintf(acStack_440,0x400,pcVar5,4);
  FUN_00d2ded4(lVar1,acStack_440);
  pcVar5 = "anime_L_detail_tab_%02d_passive";
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
    uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),5);
    pcVar5 = "anime_L_detail_tab_%02d_active";
    if ((uVar4 & 1) == 0) {
      pcVar5 = "anime_L_detail_tab_%02d_passive";
    }
  }
  snprintf(acStack_440,0x400,pcVar5,5);
  FUN_00d2ded4(lVar1,acStack_440);
  pcVar5 = "anime_L_detail_tab_%02d_passive";
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
    uVar4 = FUN_013ed8f0(*(long *)(param_1 + 0x5b8),6);
    pcVar5 = "anime_L_detail_tab_%02d_active";
    if ((uVar4 & 1) == 0) {
      pcVar5 = "anime_L_detail_tab_%02d_passive";
    }
  }
  snprintf(acStack_440,0x400,pcVar5,6);
  FUN_00d2ded4(lVar1,acStack_440);
  FUN_01411c70(param_1,*(undefined4 *)(*(long *)(param_1 + 0x5b8) + 0x70));
  return;
}


