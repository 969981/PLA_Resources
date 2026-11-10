/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005be370; name: FUN_005be370
 */


void FUN_005be370(char *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  size_t sVar1;
  long lVar2;
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 local_d8;
  long lStack_d0;
  undefined *local_a8;
  undefined8 uStack_a0;
  char *local_78;
  size_t local_70;
  byte local_48 [16];
  undefined8 local_38;
  
  lVar2 = param_2[1];
  if ((lVar2 == 0) && ((param_4 & 1) == 0)) {
    return;
  }
  sVar1 = 0;
  local_78 = param_1;
  if ((param_1 == (char *)0x0) || (sVar1 = strlen(param_1), -1 < (long)sVar1)) {
    local_a8 = &DAT_03979cea;
    uStack_a0 = 3;
    local_70 = sVar1;
    if (-1 < lVar2) {
      local_d8 = *param_2;
      local_108 = &DAT_039042e1;
      uStack_100 = 1;
      lStack_d0 = lVar2;
      FUN_002ed100(local_48,&local_78,&local_a8,&local_d8,&local_108);
                    /* try { // try from 005be3ec to 005be3f7 has its CatchHandler @ 005be444 */
      FUN_005bef00(param_3,local_48);
      if ((local_48[0] & 1) == 0) {
        return;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"len <= kMaxSize\"",
                "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
}


