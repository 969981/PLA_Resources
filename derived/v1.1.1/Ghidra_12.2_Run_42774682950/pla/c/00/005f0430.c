/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f0430; name: FUN_005f0430
 */


void FUN_005f0430(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 != 0) {
    lVar10 = *param_2;
    lVar9 = 0;
    do {
      puVar8 = (undefined8 *)(param_1 + lVar9 * 0x28);
      *puVar8 = &PTR_LAB_0418ee40;
      puVar8[1] = *(undefined8 *)(lVar10 + 8);
      puVar8[2] = 0;
      lVar6 = *(long *)(lVar10 + 0x10);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar7 = *(long *)(lVar6 + 8);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005f0518 to 005f0537 has its CatchHandler @ 005f055c */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar4,
                       lVar4 + 1);
        }
      }
      lVar6 = param_1 + lVar9 * 0x28;
      lVar9 = lVar9 + 1;
      puVar8[2] = *(undefined8 *)(lVar10 + 0x10);
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar6 + 0x18) = uVar5;
      *puVar8 = &PTR_LAB_0418edf0;
      lVar10 = *param_2 + 0x28;
      *param_2 = lVar10;
    } while (lVar9 != param_3);
  }
  return;
}


