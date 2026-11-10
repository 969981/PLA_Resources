/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9520; name: FUN_003d9520
 */


ulong FUN_003d9520(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 8) != 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x1ee,2,
                 "assertion failed: %s",
                 "!key_definitely_static || ((key).refcount != 0L && (key).refcount->GetType() == grpc_slice_refcount::Type::STATIC)"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*param_2 == 0) || (1 < *(uint *)(*param_2 + 8))) {
    uVar3 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar3 != 0) {
      FUN_003d852c(uVar3,param_1,param_2);
    }
    uVar3 = uVar3 | 2;
    param_2 = (long *)*param_2;
  }
  else {
    uVar3 = FUN_003d9880(param_1,param_2);
    param_2 = (long *)*param_2;
  }
  if ((param_2 != (long *)0x0) && (plVar4 = (long *)*param_2, plVar4 != (long *)0x0)) {
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
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)param_2[3])(param_2[4]);
      return uVar3;
    }
  }
  return uVar3;
}


