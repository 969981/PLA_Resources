/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051501c; name: FUN_0051501c
 */


void FUN_0051501c(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = 0;
  puVar2 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar2 = (ulong *)param_2[1];
  }
                    /* try { // try from 00515050 to 00515053 has its CatchHandler @ 00515120 */
  FUN_0051ebb0(param_1,puVar2,*param_2 >> 1);
  param_1[7] = 0;
  uVar6 = param_2[7];
  if (uVar6 != 0) {
    plVar1 = (long *)(uVar6 + 0x10);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = *(long *)(uVar6 + 8);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 00515090 to 005150ab has its CatchHandler @ 005150c8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(uVar6 + 8),lVar5,
                   lVar5 + 1);
    }
  }
  param_1[7] = param_2[7];
  return;
}


