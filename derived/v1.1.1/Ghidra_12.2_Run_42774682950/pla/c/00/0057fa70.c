/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057fa70; name: FUN_0057fa70
 */


void FUN_0057fa70(undefined8 *param_1)

{
  char *__s;
  char *local_c8;
  undefined8 uStack_c0;
  undefined *local_98;
  undefined8 uStack_90;
  char *local_68;
  size_t local_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  __s = (char *)FUN_002eeb60(&DAT_03936bb9);
  if (__s == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/credentials_generic.cc"
                 ,0x23,2,"Could not get HOME environment variable.");
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  local_68 = __s;
  local_60 = strlen(__s);
  if ((long)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_98 = &DAT_0389ffa9;
  uStack_90 = 1;
  local_c8 = ".config/gcloud/application_default_credentials.json";
  uStack_c0 = 0x33;
  FUN_002ecfd0(&local_38,&local_68,&local_98,&local_c8);
                    /* try { // try from 0057fad8 to 0057fadf has its CatchHandler @ 0057fb50 */
  free(__s);
  param_1[2] = local_28;
  param_1[1] = uStack_30;
  *param_1 = local_38;
  return;
}


