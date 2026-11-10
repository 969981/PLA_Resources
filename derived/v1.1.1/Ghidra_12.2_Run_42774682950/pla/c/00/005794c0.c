/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005794c0; name: FUN_005794c0
 */


void FUN_005794c0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  char *local_30;
  undefined4 local_28;
  
  FUN_003d6c40(param_1[0x214],*(undefined8 *)param_1[0x213]);
  local_30 = "external/com_google_grpc_base/src/core/lib/http/httpcli.cc";
  local_28 = 0x5e;
  FUN_002f019c(&local_30,param_1[0x212],param_2);
  FUN_00579a60(param_1 + 4);
  if (param_1[0x20a] != 0) {
    FUN_002fdec0();
  }
  if (param_1[0x20c] != 0) {
    FUN_00308320();
  }
  plVar7 = (long *)*param_1;
  if ((plVar7 != (long *)0x0) && (plVar3 = (long *)*plVar7, plVar3 != (long *)0x0)) {
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
    if (lVar6 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  free((void *)param_1[0x20d]);
  free((void *)param_1[0x20e]);
  FUN_002f5bc0(param_1 + 0x215);
  FUN_00305020(param_1 + 0x218);
  FUN_00305020(param_1 + 0x23d);
  if (4 < (ulong)param_1[0x27d]) {
    FUN_002f0430(param_1[0x27d],"external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0x6c);
  }
  FUN_00306bf0(param_1[0x27e]);
  free(param_1);
  return;
}


