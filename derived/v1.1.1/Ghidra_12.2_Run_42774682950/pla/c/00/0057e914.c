/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057e914; name: FUN_0057e914
 */


void FUN_0057e914(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = (long)(PTR_DAT_04374e08 + 0x10);
  uVar2 = (uint)param_1[9] & 3;
  if (1 < uVar2) {
    uVar7 = param_1[9] & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(uVar7 + 0x48);
                    /* try { // try from 0057e954 to 0057ea03 has its CatchHandler @ 0057ea04 */
    FUN_003d81b0(uVar7,uVar7,uVar7 + 0x20,*(undefined8 *)(uVar7 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x81);
    plVar1 = (long *)(uVar7 + 0x40);
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      FUN_003da320(uVar2,uVar7,uVar3,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                   ,0x81);
    }
  }
  FUN_002ef710(param_1 + 5);
  FUN_003d6b70(param_1 + 0xf);
  FUN_002fe060();
  FUN_00578e30(param_1 + 0xe);
  return;
}


