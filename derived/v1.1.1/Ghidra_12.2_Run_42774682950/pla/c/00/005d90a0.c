/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d90a0; name: FUN_005d90a0
 */


long * FUN_005d90a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_d8 [176];
  long local_28;
  
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0xc0);
  if (plVar4 != (long *)0x0) {
    local_28 = 0;
    lVar6 = *param_1;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(lVar6 + 8);
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                     lVar5 + 1);
      }
    }
    local_28 = *param_1;
    FUN_0050d238(auStack_d8,param_2);
    *plVar4 = 0;
    *plVar4 = local_28;
    local_28 = 0;
    FUN_0050d238(plVar4 + 1,auStack_d8);
    *(undefined2 *)(plVar4 + 0x17) = 0x100;
    FUN_0050ce98(auStack_d8);
    FUN_005d7fec(&local_28);
  }
  return plVar4;
}


