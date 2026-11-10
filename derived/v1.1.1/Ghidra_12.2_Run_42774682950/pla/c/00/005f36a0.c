/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f36a0; name: FUN_005f36a0
 */


void FUN_005f36a0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_3 != 0) {
    lVar11 = *param_2;
    lVar10 = 0;
    do {
      puVar9 = (undefined8 *)(param_1 + lVar10 * 0x30);
      *puVar9 = &PTR_LAB_0418f0f0;
      puVar9[1] = *(undefined8 *)(lVar11 + 8);
      puVar9[2] = 0;
      lVar7 = *(long *)(lVar11 + 0x10);
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 0x10);
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar8 = *(long *)(lVar7 + 8);
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005f3790 to 005f37af has its CatchHandler @ 005f37d0 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar7 + 8),lVar5,
                       lVar5 + 1);
        }
      }
      lVar7 = param_1 + lVar10 * 0x30;
      lVar10 = lVar10 + 1;
      puVar9[2] = *(undefined8 *)(lVar11 + 0x10);
      uVar6 = *(undefined8 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
      *(undefined8 *)(lVar7 + 0x18) = uVar6;
      *puVar9 = &PTR_LAB_0418f0a0;
      uVar2 = *(undefined4 *)(lVar11 + 0x24);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(lVar11 + 0x28);
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      lVar11 = *param_2 + 0x30;
      *param_2 = lVar11;
    } while (lVar10 != param_3);
  }
  return;
}


