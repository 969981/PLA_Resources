/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305050; name: FUN_00305050
 */


void FUN_00305050(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (param_1[2] == 0) {
LAB_00305124:
    param_1[1] = *param_1;
    param_1[2] = 0;
    param_1[4] = 0;
    return;
  }
  lVar7 = 0;
  plVar8 = *(long **)param_1[1];
  do {
    if ((plVar8 == (long *)0x0) || (plVar3 = (long *)*plVar8, plVar3 == (long *)0x0)) {
LAB_00305094:
      if ((ulong)param_1[2] <= lVar7 + 1U) goto LAB_00305124;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar4 = *plVar3;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar3,lVar6);
      }
      if (lVar6 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar6 != 1) goto LAB_00305094;
      (*(code *)plVar8[3])(plVar8[4]);
      if ((ulong)param_1[2] <= lVar7 + 1U) goto LAB_00305124;
    }
    lVar7 = lVar7 + 1;
    plVar8 = *(long **)(param_1[1] + lVar7 * 0x20);
  } while( true );
}


