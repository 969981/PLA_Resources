/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fa180; name: FUN_004fa180
 */


void FUN_004fa180(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[1] != 0) {
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)(*param_1 + uVar8 * 8);
      uVar2 = (uint)uVar6 & 3;
      if (1 < uVar2) {
        uVar6 = uVar6 & 0xfffffffffffffffc;
        uVar3 = *(undefined4 *)(uVar6 + 0x48);
        plVar1 = (long *)(uVar6 + 0x40);
        FUN_003d81b0(uVar6,uVar6,uVar6 + 0x20,*(undefined8 *)(uVar6 + 0x40),
                     "external/com_google_grpc_base/src/core/lib/security/credentials/credentials_metadata.cc"
                     ,0x3b);
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar7 == 1) {
          FUN_003da320(uVar2,uVar6,uVar3,
                       "external/com_google_grpc_base/src/core/lib/security/credentials/credentials_metadata.cc"
                       ,0x3b);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)param_1[1]);
  }
  free((void *)*param_1);
  return;
}


