/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b58a0; name: FUN_005b58a0
 */


long FUN_005b58a0(char *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  char *local_f8;
  undefined8 uStack_f0;
  char *local_c8;
  size_t local_c0;
  char *local_98;
  undefined8 uStack_90;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  
  lVar3 = FUN_003f8b80(param_2);
  if (lVar3 == 0) {
    if (param_1 != (char *)0x0) {
      sVar4 = strlen(param_1);
      if ((long)sVar4 < 0) {
LAB_005b59d8:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      iVar2 = FUN_003f8c10(param_2,param_1,sVar4);
      if (iVar2 == 0) {
        local_98 = "Peer name ";
        uStack_90 = 10;
        local_c8 = param_1;
        local_c0 = strlen(param_1);
        if (-1 < (long)local_c0) {
          local_f8 = " is not in peer certificate";
          uStack_f0 = 0x1b;
          FUN_002ecfd0(local_68,&local_98,&local_c8,&local_f8);
          uVar1 = (ulong)local_68 | 1;
          if ((local_68[0] & 1) != 0) {
            uVar1 = local_58;
          }
                    /* try { // try from 005b5994 to 005b59b7 has its CatchHandler @ 005b59f8 */
          FUN_002f2ff0(auStack_50,uVar1);
          lVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                               ,0x3b,auStack_50,0,0);
          if ((local_68[0] & 1) == 0) {
            return lVar3;
          }
          FUN_002e2ea0(PTR_LAB_04373088,local_58);
          return lVar3;
        }
        goto LAB_005b59d8;
      }
    }
    FUN_003f9070(&local_98,param_2,&DAT_03906987);
    if (*param_3 != 0) {
                    /* try { // try from 005b5910 to 005b5913 has its CatchHandler @ 005b5a1c */
      FUN_003f3604();
    }
    lVar3 = 0;
    *param_3 = (long)local_98;
  }
  return lVar3;
}


