/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f300; name: FUN_0051f300
 */


void FUN_0051f300(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *local_48;
  
  *param_1 = 0;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 0x10);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar6 = *(long *)(lVar5 + 8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(lVar5 + 8),lVar4,
                   lVar4 + 1);
    }
  }
  *param_1 = *param_2;
  param_1[1] = 0;
  uVar8 = param_2[1];
  local_48 = param_2 + 2;
  if ((uVar8 & 1) != 0) {
    local_48 = (long *)param_2[2];
  }
  uVar7 = uVar8 >> 1;
  if (uVar8 < 4) {
    plVar3 = param_1 + 2;
  }
  else {
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,uVar7 * 0x90);
    param_1[2] = (long)plVar3;
    param_1[3] = uVar7;
    param_1[1] = param_1[1] | 1;
  }
                    /* try { // try from 0051f3d8 to 0051f3e7 has its CatchHandler @ 0051f418 */
  FUN_0050d950(param_1 + 1,plVar3,&local_48,uVar7);
  param_1[1] = param_1[1] + (uVar8 & 0xfffffffffffffffe);
  param_1[0x14] = param_2[0x14];
  return;
}


