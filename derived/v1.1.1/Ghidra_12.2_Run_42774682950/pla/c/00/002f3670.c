/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3670; name: FUN_002f3670
 */


void FUN_002f3670(undefined8 *param_1,long *param_2,ulong param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong __n;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    pbVar8 = (byte *)(param_2 + 1);
    if (*pbVar8 < param_3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x18e,2,
                   "assertion failed: %s","source->data.inlined.length >= split");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (uint)*pbVar8 - (int)param_3;
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)uVar4;
    memcpy((void *)((long)param_1 + 9),pbVar8 + param_3 + 1,(ulong)uVar4 & 0xff);
    *pbVar8 = (byte)param_3;
    return;
  }
  __n = param_2[1] - param_3;
  if ((ulong)param_2[1] < param_3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x197,2,
                 "assertion failed: %s","source->data.refcounted.length >= split");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_4 != 1) && (__n < 0x17)) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    memcpy((void *)((long)param_1 + 9),(void *)(param_2[2] + param_3),__n);
    *param_2 = *(long *)(lVar9 + 0x10);
    goto LAB_002f37cc;
  }
  if (param_4 == 3) {
    plVar6 = *(long **)(lVar9 + 0x10);
    *param_1 = plVar6;
    *param_2 = (long)plVar6;
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *plVar6;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar6,lVar9,lVar9 + 1);
      }
      if (lVar9 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x7c,"RefNonZero");
      }
    }
  }
  else {
    if (param_4 == 2) {
      *param_1 = PTR_DAT_04373888;
      puVar5 = *(undefined **)(lVar9 + 0x10);
    }
    else {
      if (param_4 != 1) goto LAB_002f37c0;
      *param_1 = *(undefined8 *)(lVar9 + 0x10);
      puVar5 = PTR_DAT_04373888;
    }
    *param_2 = (long)puVar5;
  }
LAB_002f37c0:
  lVar9 = param_2[2];
  param_1[1] = __n;
  param_1[2] = lVar9 + param_3;
LAB_002f37cc:
  param_2[1] = param_3;
  return;
}


