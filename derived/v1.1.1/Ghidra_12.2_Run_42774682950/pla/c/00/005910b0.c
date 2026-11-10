/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005910b0; name: FUN_005910b0
 */


void FUN_005910b0(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  iVar3 = FUN_002ef660(param_1 + 1);
  if (iVar3 == 0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar5 = *(code **)(*param_1 + 0x20), pcVar5 != (code *)0x0)) {
    (*pcVar5)(param_1);
  }
  FUN_003c8500(param_1[0xe]);
  FUN_003c8500(param_1[0xf]);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_004fcf80(param_1 + 0x11);
  plVar9 = (long *)param_1[0x1c];
  if ((plVar9 != (long *)0x0) && (plVar4 = (long *)*plVar9, plVar4 != (long *)0x0)) {
    plVar7 = plVar4 + 1;
    lVar6 = *plVar4;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar8);
    }
    if (lVar8 < 1) goto LAB_00591280;
    if (lVar8 == 1) {
      (*(code *)plVar9[3])(plVar9[4]);
    }
  }
  plVar9 = (long *)param_1[0x17];
  if ((plVar9 != (long *)0x0) && (plVar4 = (long *)*plVar9, plVar4 != (long *)0x0)) {
    plVar7 = plVar4 + 1;
    lVar6 = *plVar4;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar8);
    }
    if (lVar8 < 1) goto LAB_00591280;
    if (lVar8 == 1) {
      (*(code *)plVar9[3])(plVar9[4]);
    }
  }
  FUN_0058bc80(param_1[0x16]);
  free((void *)param_1[0x20]);
  plVar9 = (long *)param_1[0x2c];
  if ((plVar9 != (long *)0x0) && (plVar4 = (long *)*plVar9, plVar4 != (long *)0x0)) {
    plVar7 = plVar4 + 1;
    lVar6 = *plVar4;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar4,lVar8);
    }
    if (lVar8 < 1) {
LAB_00591280:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (*(code *)plVar9[3])(plVar9[4]);
    }
  }
  FUN_002ef710(param_1 + 0x30);
  free(param_1);
  return;
}


