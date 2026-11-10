/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9360; name: FUN_003d9360
 */


ulong FUN_003d9360(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 == 0) {
    bVar1 = true;
    lVar5 = *param_2;
    if (lVar5 != 0) goto LAB_003d93a0;
LAB_003d93b4:
    uVar3 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar3 != 0) {
      FUN_003d833c(uVar3,param_1,param_2);
    }
    uVar3 = uVar3 | 2;
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) goto LAB_003d9474;
LAB_003d93e8:
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) goto LAB_003d9474;
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar1) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) goto LAB_003d94f8;
    if (lVar7 != 1) goto LAB_003d9474;
    (*(code *)param_1[3])(param_1[4]);
    param_2 = (long *)*param_2;
  }
  else {
    bVar1 = 1 < *(uint *)(*param_1 + 8);
    lVar5 = *param_2;
    if (lVar5 == 0) goto LAB_003d93b4;
LAB_003d93a0:
    if (!(bool)(*(uint *)(lVar5 + 8) < 2 & (bVar1 ^ 1U))) goto LAB_003d93b4;
    uVar3 = FUN_003d9b00(param_1,param_2);
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) goto LAB_003d93e8;
LAB_003d9474:
    param_2 = (long *)*param_2;
  }
  if ((param_2 != (long *)0x0) && (plVar4 = (long *)*param_2, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar1) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) {
LAB_003d94f8:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)param_2[3])(param_2[4]);
    }
  }
  return uVar3;
}


