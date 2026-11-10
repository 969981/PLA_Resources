/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057fb74; name: FUN_0057fb74
 */


void FUN_0057fb74(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar2 = (uint)*(ulong *)(param_1 + 0x48) & 3;
  if (1 < uVar2) {
    uVar7 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(uVar7 + 0x48);
    plVar1 = (long *)(uVar7 + 0x40);
    FUN_003d81b0(uVar7,uVar7,uVar7 + 0x20,*(undefined8 *)(uVar7 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/jwt_credentials.cc"
                 ,0x2b);
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
                   "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/jwt_credentials.cc"
                   ,0x2b);
      __ptr = *(void **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto joined_r0x0057fbe8;
    }
  }
  __ptr = *(void **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
joined_r0x0057fbe8:
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  auVar8 = FUN_002eefe0(1);
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar8;
  return;
}


