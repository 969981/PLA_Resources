/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3570; name: FUN_002f3570
 */


void FUN_002f3570(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  __n = param_4 - param_3;
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    if (*param_2 == 0) {
      lVar6 = (long)param_2 + 9;
    }
    else {
      lVar6 = param_2[2];
    }
    memcpy((void *)((long)param_1 + 9),(void *)(lVar6 + param_3),__n);
    return;
  }
  lStack_48 = param_2[1];
  local_50 = *param_2;
  lStack_38 = param_2[3];
  lStack_40 = param_2[2];
  FUN_002f3390(&local_30,&local_50,param_3,param_4);
  param_1[1] = uStack_28;
  *param_1 = local_30;
  param_1[3] = uStack_18;
  param_1[2] = uStack_20;
  plVar4 = *(long **)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar6,lVar6 + 1);
    }
    if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  return;
}


