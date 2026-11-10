/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0280; name: FUN_003e0280
 */


ulong FUN_003e0280(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (uint)param_1 & 3;
  if (1 < uVar2) {
    uVar5 = param_1 & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar5 + 0x40);
    if (uVar2 == 2) {
      FUN_003d80f0(uVar5,uVar5,uVar5 + 0x20,*(undefined8 *)(uVar5 + 0x40),param_2,param_3);
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      FUN_003d80f0(uVar5,uVar5,uVar5 + 0x20,*(undefined8 *)(uVar5 + 0x40),param_2,param_3);
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0xf5,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return param_1;
}


