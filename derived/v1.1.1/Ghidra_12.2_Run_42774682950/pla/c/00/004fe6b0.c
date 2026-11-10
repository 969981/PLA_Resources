/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fe6b0; name: FUN_004fe6b0
 */


void FUN_004fe6b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar8 = 0;
    plVar4 = *(long **)(param_1 + 8);
    plVar5 = (long *)*plVar4;
    while( true ) {
      if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
        plVar1 = plVar5 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar6 = *plVar5;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar7,lVar7 + 1);
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      lStack_68 = plVar4[1];
      local_70 = *plVar4;
      lStack_58 = plVar4[3];
      lStack_60 = plVar4[2];
      FUN_003052c0(param_2,&local_70);
      uVar8 = uVar8 + 1;
      if (*(ulong *)(param_1 + 0x10) <= uVar8) break;
      plVar4 = (long *)(*(long *)(param_1 + 8) + uVar8 * 0x20);
      plVar5 = (long *)*plVar4;
    }
  }
  return;
}


