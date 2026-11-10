/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3860; name: FUN_002f3860
 */


void FUN_002f3860(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (bVar1 < param_3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x1c4,2,
                   "assertion failed: %s","source->data.inlined.length >= split");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar9 = (void *)((long)param_2 + 9);
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    memcpy((void *)((long)param_1 + 9),pvVar9,param_3);
    uVar4 = (uint)bVar1 - (int)param_3;
    *(byte *)(param_2 + 1) = (byte)uVar4;
    memmove(pvVar9,(void *)((long)pvVar9 + param_3),(ulong)uVar4 & 0xff);
    return;
  }
  uVar6 = param_2[1];
  if (param_3 < 0x17) {
    if (uVar6 < param_3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x1ce,2,
                   "assertion failed: %s","source->data.refcounted.length >= split");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    pvVar9 = (void *)param_2[2];
    memcpy((void *)((long)param_1 + 9),pvVar9,param_3);
    *param_2 = *(long *)(lVar10 + 0x10);
    param_2[1] = uVar6 - param_3;
    param_2[2] = (long)pvVar9 + param_3;
    return;
  }
  if (uVar6 < param_3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x1d7,2,
                 "assertion failed: %s","source->data.refcounted.length >= split");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar8 = *(long **)(lVar10 + 0x10);
  *param_1 = (long)plVar8;
  plVar5 = (long *)*plVar8;
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *plVar5;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar5,lVar10,lVar10 + 1);
    }
    if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
    uVar6 = param_2[1];
    plVar8 = *(long **)(*param_2 + 0x10);
  }
  lVar10 = param_2[2];
  param_1[1] = param_3;
  param_1[2] = lVar10;
  *param_2 = (long)plVar8;
  param_2[1] = uVar6 - param_3;
  param_2[2] = lVar10 + param_3;
  return;
}


