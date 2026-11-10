/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058820c; name: FUN_0058820c
 */


void FUN_0058820c(undefined1 (*param_1) [16],long param_2,long *param_3)

{
  long lVar1;
  tm *ptVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  tm tStack_68;
  long local_28;
  
  *(undefined8 *)*param_1 = 0x7b2;
  (*param_1)[0xc] = 0;
  *(undefined4 *)(*param_1 + 8) = 0x101;
  *(undefined4 *)param_1[1] = 0;
  param_1[1][4] = 0;
  *(undefined **)(param_1[1] + 8) = &DAT_039305d1;
  lVar1 = std::chrono::system_clock::from_time_t(0);
  lVar1 = *param_3 - lVar1 / 1000000;
  local_28 = lVar1;
  if (*(char *)(param_2 + 8) == '\0') {
    ptVar2 = gmtime_r(&local_28,&tStack_68);
  }
  else {
    ptVar2 = localtime_r(&local_28,&tStack_68);
  }
  if (ptVar2 == (tm *)0x0) {
    if (lVar1 < 0) {
      auVar4._8_8_ = 0x101;
      auVar4._0_8_ = 0x8000000000000000;
    }
    else {
      auVar4 = FUN_005863a0(0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    }
    *param_1 = auVar4;
  }
  else {
    auVar4 = FUN_00586060((long)ptVar2->tm_year + 0x76c,(long)ptVar2->tm_mon + 1,
                          (long)ptVar2->tm_mday,(long)ptVar2->tm_hour,(long)ptVar2->tm_min,
                          (long)ptVar2->tm_sec);
    *param_1 = auVar4;
    *(int *)param_1[1] = (int)ptVar2->tm_gmtoff;
    if (*(char *)(param_2 + 8) == '\0') {
      pcVar3 = "UTC";
    }
    else {
      pcVar3 = ptVar2->tm_zone;
    }
    *(char **)(param_1[1] + 8) = pcVar3;
    param_1[1][4] = 0 < ptVar2->tm_isdst;
  }
  return;
}


