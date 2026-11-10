/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538334; name: FUN_00538334
 */


long FUN_00538334(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x40);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
    FUN_002ebea0(param_2,param_3,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_1,"WEAK_REF",
                 lVar4,lVar4 + 1,param_4);
  }
  if (lVar4 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2ee,2,"assertion failed: %s","old_refs != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return param_1;
}


