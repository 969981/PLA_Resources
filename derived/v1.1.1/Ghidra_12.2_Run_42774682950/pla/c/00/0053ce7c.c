/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ce7c; name: FUN_0053ce7c
 */


void FUN_0053ce7c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  plVar1 = param_1 + 2;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",199,1,
                 "%s:%p %s:%d unref %ld -> %ld %s",*(undefined8 *)(lVar4 + 8),param_1 + 1,*param_2,
                 *(undefined4 *)(param_2 + 1),lVar5,lVar5 + -1,param_3);
  }
  if (lVar5 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xcb,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar5 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
    return;
  }
  return;
}


