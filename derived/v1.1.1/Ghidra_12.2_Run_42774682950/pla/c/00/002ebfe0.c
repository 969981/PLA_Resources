/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebfe0; name: FUN_002ebfe0
 */


ulong FUN_002ebfe0(undefined8 *param_1)

{
  uint uVar1;
  char *pcVar2;
  tm *ptVar3;
  size_t sVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  byte local_128 [16];
  char *local_118;
  tm tStack_110;
  time_t local_d8;
  char local_d0 [7];
  char cStack_c9;
  char acStack_c8 [7];
  char cStack_c1;
  undefined8 local_90;
  undefined *puStack_88;
  char *local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *puStack_68;
  pthread_t local_60;
  undefined *puStack_58;
  char *local_50;
  undefined *puStack_48;
  ulong local_40;
  undefined *puStack_38;
  
  auVar8 = FUN_002eec80(1);
  local_d8 = auVar8._0_8_;
  pcVar7 = (char *)*param_1;
  pcVar2 = strrchr(pcVar7,0x2f);
  if (pcVar2 != (char *)0x0) {
    pcVar7 = pcVar2 + 1;
  }
  ptVar3 = localtime_r(&local_d8,&tStack_110);
  if (ptVar3 == (tm *)0x0) {
    acStack_c8 = s_error_localtime_039a051a._8_7_;
    cStack_c1 = s_error_localtime_039a051a[0xf];
    local_d0 = s_error_localtime_039a051a._0_7_;
    cStack_c9 = s_error_localtime_039a051a[7];
  }
  else {
    sVar4 = strftime(local_d0,0x40,"%m%d %H:%M:%S",&tStack_110);
    if (sVar4 == 0) {
      local_d0[0] = s_error_strftime_03984182[0];
      local_d0[1] = s_error_strftime_03984182[1];
      local_d0[2] = s_error_strftime_03984182[2];
      local_d0[3] = s_error_strftime_03984182[3];
      local_d0[4] = s_error_strftime_03984182[4];
      local_d0[5] = s_error_strftime_03984182[5];
      local_d0[6] = s_error_strftime_03984182[6];
      cStack_c9 = s_error_strftime_03984182[7];
      acStack_c8[0] = s_error_strftime_03984182[8];
      acStack_c8[1] = s_error_strftime_03984182[9];
      acStack_c8[2] = s_error_strftime_03984182[10];
      acStack_c8[3] = s_error_strftime_03984182[0xb];
      acStack_c8[4] = s_error_strftime_03984182[0xc];
      acStack_c8[5] = s_error_strftime_03984182[0xd];
      acStack_c8[6] = s_error_strftime_03984182[0xe];
    }
  }
  uVar5 = FUN_002ec140(*(undefined4 *)((long)param_1 + 0xc));
  local_60 = pthread_self();
  local_80 = local_d0;
  puStack_88 = PTR_LAB_043737d8;
  local_70 = auVar8._8_8_ & 0xffffffff;
  puStack_78 = PTR_LAB_043737d8;
  puStack_68 = PTR_FUN_043737e0;
  puStack_58 = PTR_FUN_04373818;
  puStack_48 = PTR_LAB_043737d8;
  local_40 = (ulong)*(uint *)(param_1 + 1);
  puStack_38 = PTR_FUN_043737e0;
  local_90 = uVar5;
  local_50 = pcVar7;
  FUN_002e6390(local_128,"%s%s.%09d %13ld %s:%d]",0x16,&local_90,6);
  pcVar7 = (char *)((ulong)local_128 | 1);
  if ((local_128[0] & 1) != 0) {
    pcVar7 = local_118;
  }
  uVar1 = fprintf(*(FILE **)PTR_stderr_04372330,"%-70s %s\n",pcVar7,(char *)param_1[2]);
  uVar6 = (ulong)uVar1;
  if ((local_128[0] & 1) != 0) {
    uVar6 = FUN_002e2ea0(PTR_LAB_04373088,local_118);
  }
  return uVar6;
}


