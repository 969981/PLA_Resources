/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003de440; name: FUN_003de440
 */


void FUN_003de440(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)(param_2 & 0xfffffffffffffffc);
  if (((long *)*puVar7 != (long *)0x0) && (plVar5 = *(long **)*puVar7, plVar5 != (long *)0x0)) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *plVar5;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar8,lVar8 + 1);
    }
    if (lVar8 < 1) goto LAB_003de544;
  }
  uVar4 = FUN_002f1340(param_1,10,puVar7);
  plVar5 = (long *)puVar7[4];
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *plVar5;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar8,lVar8 + 1);
    }
    if (lVar8 < 1) {
LAB_003de544:
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  FUN_002f1340(uVar4,0xb,puVar7 + 4);
  return;
}


