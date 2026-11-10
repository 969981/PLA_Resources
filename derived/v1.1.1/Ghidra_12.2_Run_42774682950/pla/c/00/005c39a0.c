/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c39a0; name: FUN_005c39a0
 */


void FUN_005c39a0(char *param_1,undefined4 *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 uStack_90;
  char *local_68;
  size_t local_60;
  byte local_38 [16];
  undefined8 local_28;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  sVar1 = 0;
  local_68 = param_1;
  if ((param_1 == (char *)0x0) || (sVar1 = strlen(param_1), -1 < (long)sVar1)) {
    local_98 = " { value: ";
    uStack_90 = 10;
    local_60 = sVar1;
    local_c0 = FUN_002ed4a0(*param_2,auStack_b8);
    local_c0 = local_c0 - (long)auStack_b8;
    local_c8 = auStack_b8;
    if (-1 < local_c0) {
      local_f8 = &DAT_03938a42;
      uStack_f0 = 2;
      FUN_002ed100(local_38,&local_68,&local_98,&local_c8,&local_f8);
                    /* try { // try from 005c3a28 to 005c3a33 has its CatchHandler @ 005c3a7c */
      FUN_005bef00(param_3,local_38);
      if ((local_38[0] & 1) == 0) {
        return;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


