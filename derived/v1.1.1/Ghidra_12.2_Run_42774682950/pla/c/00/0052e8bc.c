/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052e8bc; name: FUN_0052e8bc
 */


void FUN_0052e8bc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    lVar7 = *(long *)(param_2 + 8);
    if (PTR_DAT_04374b58[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xf16,1,"chand=%p calld=%p: adding to queued picks list",lVar7,param_1);
    }
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    *(long *)(param_1 + 0x1a0) = param_2;
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar7 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x2b0);
    *(long *)(lVar7 + 0x80) = param_1 + 0x1a0;
    FUN_003d6ba0(uVar4,*(undefined8 *)(lVar7 + 0xc0));
    plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (plVar5 != (long *)0x0) {
      *plVar5 = param_2;
      lVar7 = *(long *)(param_2 + 0x10);
      plVar8 = *(long **)(lVar7 + 0x120);
      if (PTR_DAT_04373fd8[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                     "%s %p:%p REF %s",plVar8[0xb],plVar8,plVar8[4],"QueuedPickCanceller");
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar6 = *plVar8;
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),plVar8,
                     "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar9,
                     lVar9 + 1,"QueuedPickCanceller");
      }
      if (lVar9 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x89,"RefNonZero");
      }
      plVar5[4] = 0;
      plVar5[2] = (long)&LAB_0052ed00;
      plVar5[3] = (long)plVar5;
      *(undefined2 *)(plVar5 + 5) = 0;
      plVar5[8] = 0;
      *(undefined4 *)(plVar5 + 9) = 0;
      plVar5[6] = (long)
                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
      ;
      *(undefined4 *)(plVar5 + 7) = 0xee5;
      FUN_003d727c(*(undefined8 *)(lVar7 + 0x128),plVar5 + 1);
    }
    *(long **)(param_1 + 0x1b8) = plVar5;
  }
  return;
}


