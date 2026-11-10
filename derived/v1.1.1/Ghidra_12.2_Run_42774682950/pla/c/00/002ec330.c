/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec330; name: FUN_002ec330
 */


void FUN_002ec330(undefined8 param_1,time_t param_2,undefined8 param_3)

{
  tm *__tp;
  size_t sVar1;
  undefined *local_f0;
  undefined8 uStack_e8;
  char *local_c0;
  size_t local_b8;
  char *local_90;
  size_t local_88;
  char local_60 [3];
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char acStack_54 [36];
  time_t local_30;
  undefined8 local_28;
  
  local_30 = param_2;
  local_28 = param_3;
  __tp = localtime(&local_30);
  strftime(acStack_54,0x23,"%Y-%m-%dT%H:%M:%S",__tp);
  snprintf(local_60,0xb,".%09d",(int)local_28);
  if ((((((local_59 == '0') && (local_58 == '0')) && (local_57 == '0')) &&
       ((local_59 = '\0', local_5c == '0' && (local_5b == '0')))) &&
      ((local_5a == '0' && ((local_5c = '\0', local_60[1] == '0' && (local_60[2] == '0')))))) &&
     (local_5d == '0')) {
    local_60[0] = '\0';
    local_60[1] = '\0';
  }
  local_90 = acStack_54;
  sVar1 = strlen(acStack_54);
  if (-1 < (long)sVar1) {
    local_c0 = local_60;
    local_88 = sVar1;
    local_b8 = strlen(local_60);
    if (-1 < (long)local_b8) {
      local_f0 = &DAT_038c8146;
      uStack_e8 = 1;
      FUN_002ecfd0(param_1,&local_90,&local_c0,&local_f0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


