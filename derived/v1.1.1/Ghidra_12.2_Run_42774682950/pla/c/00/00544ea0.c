/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00544ea0; name: FUN_00544ea0
 */


void FUN_00544ea0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)PTR_DAT_04374c90;
  if (plVar7 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                 ,0x37,2,"assertion failed: %s","instance_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                 ,0x38,2,"assertion failed: %s","*instance_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = (long *)(lVar5 + 0x10);
  *param_1 = 0;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(lVar5 + 8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(lVar5 + 8),lVar4,
                 lVar4 + 1);
  }
  *param_1 = *plVar7;
  return;
}


