/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d99c0; name: FUN_003d99c0
 */


undefined8 FUN_003d99c0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  uVar3 = FUN_003d9b00();
  plVar8 = (long *)*param_1;
  if ((plVar8 != (long *)0x0) && (plVar4 = (long *)*plVar8, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) goto LAB_003d9ad0;
    if (lVar7 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  plVar8 = (long *)*param_2;
  if ((plVar8 != (long *)0x0) && (plVar4 = (long *)*plVar8, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) {
LAB_003d9ad0:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  return uVar3;
}


