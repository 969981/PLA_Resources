/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02880418; name: FUN_02880418
 */


void FUN_02880418(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  AudioDeviceName local_120;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined3 local_113;
  int iStack_110;
  undefined4 uStack_10c;
  char local_108;
  
  local_120 = (AudioDeviceName)0x0;
  nn::audio::GetActiveAudioDeviceName(&local_120);
  lVar3 = 0;
  if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) != 0x6574536f69647541 ||
      CONCAT35(local_113,uStack_118) != 0x4f6b63614a6f6572) ||
      CONCAT17((undefined1)uStack_10c,CONCAT43(iStack_110,local_113)) != 0x74757074754f6b63) {
    if (CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x4f76546f69647541 &&
        CONCAT53(uStack_118,uStack_11b) == 0x74757074754f7654) {
      lVar3 = 1;
    }
    else if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x6273556f69647541 &&
             CONCAT35(local_113,uStack_118) == 0x754f656369766544) && iStack_110 == 0x74757074) {
      lVar3 = 2;
    }
    else {
      if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) != 0x6975426f69647541 ||
          CONCAT35(local_113,uStack_118) != 0x616570536e49746c) ||
          (CONCAT44(uStack_10c,iStack_110) != 0x757074754f72656b || local_108 != 't')) {
        return;
      }
      lVar3 = 3;
    }
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar2;
  local_140 = 0xceffbd1d514ae980;
  pcStack_138 = "HAND_DOCK_MODE";
  local_130 = 0xe;
  local_128 = (long *)0x0;
  FUN_02913898((float)*(int *)(&DAT_0388a0b0 + lVar3 * 4),uVar2,&local_140,0xffffffffffffffff,0);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  return;
}


