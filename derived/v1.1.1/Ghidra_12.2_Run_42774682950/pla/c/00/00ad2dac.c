/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad2dac; name: FUN_00ad2dac
 */


undefined1  [16] FUN_00ad2dac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 extraout_d0;
  undefined8 uVar13;
  undefined1 auVar12 [16];
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  uVar11 = 0;
  uVar13 = 0;
  if ((*(char *)(param_1 + 0x31e) == '\0') && (lVar7 = *(long *)(param_1 + 0x4c0), lVar7 != 0)) {
    if (*(int *)(lVar7 + 0xc) != 0) {
      piVar1 = (int *)(lVar7 + 0xc);
      iVar9 = *(int *)(lVar7 + 0xc);
      do {
        plVar10 = *(long **)(lVar7 + 0x10);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(uVar11,puVar4);
          uVar11 = extraout_d0;
          if (iVar6 != 0) {
            uVar11 = FUN_00ad3750();
            *(undefined8 *)puVar5 = uVar11;
            uVar11 = __cxa_guard_release(puVar4);
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ad2e5c;
          if (plVar10 == (long *)puVar5) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x18);
            uVar11 = 0;
            uVar13 = 0;
            if (lVar7 != 0) {
              uVar13 = *(undefined8 *)(lVar7 + 0x208);
              uVar11 = *(undefined8 *)(lVar7 + 0x200);
              lVar8 = *(long *)(lVar7 + 8);
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*(long *)(lVar7 + -0x50) + 0x20))();
              }
            }
            goto LAB_00ad2dd8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00ad2e5c:
    uVar11 = 0;
    uVar13 = 0;
  }
LAB_00ad2dd8:
  auVar12._8_8_ = uVar13;
  auVar12._0_8_ = uVar11;
  return auVar12;
}


