/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8380; name: FUN_003c8380
 */


long FUN_003c8380(long *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = FUN_002ebd50(0x140);
  *(undefined4 *)(lVar5 + 0x10) = param_3;
  *(undefined4 *)(lVar5 + 8) = 0;
  FUN_00305000(lVar5 + 0x18);
  if (param_2 != 0) {
    lVar9 = 0;
    plVar6 = (long *)*param_1;
    plVar2 = param_1;
    while( true ) {
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        plVar1 = plVar6 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = *plVar6;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar6,lVar8,lVar8 + 1);
        }
        if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      lStack_78 = plVar2[1];
      local_80 = *plVar2;
      lStack_68 = plVar2[3];
      lStack_70 = plVar2[2];
      FUN_003052c0(lVar5 + 0x18,&local_80);
      lVar9 = lVar9 + 1;
      if (lVar9 == param_2) break;
      plVar2 = param_1 + lVar9 * 4;
      plVar6 = (long *)*plVar2;
    }
  }
  return lVar5;
}


