/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f0b4; name: FUN_0051f0b4
 */


void FUN_0051f0b4(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0xd0);
  *param_1 = lVar4;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  lVar6 = *param_3;
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
                    /* try { // try from 0051f128 to 0051f143 has its CatchHandler @ 0051f170 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                   lVar5 + 1);
    }
  }
  *(long *)(lVar4 + 0x20) = *param_3;
                    /* try { // try from 0051f150 to 0051f157 has its CatchHandler @ 0051f180 */
  FUN_0051f300(lVar4 + 0x28,param_3 + 1);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


