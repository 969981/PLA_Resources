/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dac640; name: FUN_00dac640
 */


uint FUN_00dac640(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  local_50 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_50);
  FUN_00dafb54(param_1,"timestamp",local_50);
  FUN_00dac830(&local_50);
  FUN_00dafbe8(param_1,"timezone",&pcStack_48);
  uVar4 = FUN_01143dbc();
  FUN_00dafb54(param_1,"ver_id",uVar4);
  uVar4 = FUN_00dac890();
  FUN_00dafb54(param_1,&DAT_03973ffb,uVar4);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379558), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar5 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar5;
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_01148a98(&local_28);
    local_50 = 0x52daf76250fe632a;
    pcStack_48 = "WSYS_U_RANK";
    local_40 = 0xb;
    local_38 = (long *)0x0;
    uVar1 = FUN_010f5878(local_28,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((local_28 != (long *)0x0) && (uVar6 = FUN_02a43a5c(local_28[0xb]), (uVar6 & 1) != 0)) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  FUN_00dafb54(param_1,"star_lv",uVar1);
  uVar4 = FUN_00dac970();
  FUN_00dafb54(param_1,"playtime",uVar4);
  uVar4 = FUN_00daca60();
  FUN_00dafb54(param_1,"tv_mobile",uVar4);
  uVar4 = FUN_00dacaf0();
  FUN_00dafb54(param_1,"controller",uVar4);
  uVar2 = FUN_00daf73c(param_1);
  return uVar2 & 1;
}


