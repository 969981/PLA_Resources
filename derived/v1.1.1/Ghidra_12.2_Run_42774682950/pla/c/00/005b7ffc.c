/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b7ffc; name: FUN_005b7ffc
 */


void FUN_005b7ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *local_f0;
  size_t local_e8;
  undefined *local_c0;
  undefined8 uStack_b8;
  char *local_90;
  undefined8 uStack_88;
  char *local_60;
  undefined8 uStack_58;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  local_60 = "gRPC C-core ";
  uStack_58 = 0xc;
  local_90 = "nintendo";
  uStack_88 = 8;
  local_c0 = &DAT_038bdc00;
  uStack_b8 = 1;
  local_f0 = (char *)FUN_005030f0();
  local_e8 = 0;
  if ((local_f0 != (char *)0x0) && (local_e8 = strlen(local_f0), (long)local_e8 < 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  FUN_002ed100(param_1 + 3,&local_60,&local_90,&local_c0,&local_f0);
  local_60 = "gRPC C-core ";
  uStack_58 = 0xc;
  local_90 = "nintendo";
  uStack_88 = 8;
                    /* try { // try from 005b8090 to 005b809b has its CatchHandler @ 005b80d0 */
  FUN_002eced0(param_1 + 6,&local_60,&local_90);
  return;
}


