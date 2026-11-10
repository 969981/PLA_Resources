/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daa3a8; name: FUN_00daa3a8
 */


uint FUN_00daa3a8(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  local_50 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_50);
  FUN_00dafb54(param_1,"timestamp",local_50);
  FUN_00daa710(&local_50);
  FUN_00dafbe8(param_1,"timezone",&local_48);
  uVar4 = FUN_01143dbc();
  FUN_00dafb54(param_1,"ver_id",uVar4);
  uVar4 = FUN_00daa770();
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
    local_48 = "WSYS_U_RANK";
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
  uVar4 = FUN_00daa850();
  FUN_00dafb54(param_1,"playtime",uVar4);
  uVar4 = FUN_00daa940();
  FUN_00dafb54(param_1,"tv_mobile",uVar4);
  uVar4 = FUN_00daa9d0();
  FUN_00dafb54(param_1,"controller",uVar4);
  uVar4 = FUN_00daaa90();
  FUN_00dafb54(param_1,"dex_faund",uVar4);
  uVar4 = FUN_00daab70();
  FUN_00dafb54(param_1,"dex_capture",uVar4);
  uVar4 = FUN_00daac50();
  FUN_00dafb54(param_1,"dex_complete",uVar4);
  uVar4 = FUN_00daad30();
  FUN_00dafb54(param_1,"gender",uVar4);
  uVar4 = FUN_00dafc80(param_1);
  FUN_00dafb54(param_1,&DAT_03907748,uVar4);
  FUN_00db5af8(&local_50);
  FUN_00dafbe8(param_1,&DAT_0391cd5f,local_48);
  uVar4 = FUN_00db0104(param_1);
  FUN_00dafb54(param_1,&DAT_038b647e,uVar4);
  uVar4 = FUN_00db01e8(param_1);
  FUN_00dafb54(param_1,&DAT_0388dce8,uVar4);
  uVar4 = FUN_00db02cc(param_1);
  FUN_00dafb54(param_1,"bottoms",uVar4);
  uVar4 = FUN_00db03b0(param_1);
  FUN_00dafb54(param_1,"dress",uVar4);
  uVar4 = FUN_00db0494(param_1);
  FUN_00dafb54(param_1,"shoes",uVar4);
  uVar4 = FUN_00db0578(param_1);
  FUN_00dafb54(param_1,"glasses",uVar4);
  uVar4 = FUN_00db065c(param_1);
  FUN_00dafb54(param_1,"eyebrow_color",uVar4);
  uVar4 = FUN_00db0740(param_1);
  FUN_00dafb54(param_1,"contact",uVar4);
  uVar2 = FUN_00daf73c(param_1);
  return uVar2 & 1;
}


