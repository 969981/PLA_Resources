/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a1098; name: FUN_026a1098
 */


void FUN_026a1098(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  if (*(char *)(param_1 + 0xc6a) != '\0') {
    lVar10 = *(long *)(param_1 + 0xc38);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar9 = FUN_00ad3750();
          *(undefined8 *)puVar7 = uVar9;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_026a10d8;
          if (plVar12 == (long *)puVar7) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_026a110c;
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 != 0) {
            plVar12 = (long *)(lVar10 + -0x50);
            FUN_02c91f14(plVar12);
            lVar10 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            lVar10 = *(long *)(param_1 + 0xc48);
            pbVar4 = PTR_DAT_0437a6d8;
            puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
            goto joined_r0x026a11c0;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_026a110c:
        iVar11 = iVar8;
      } while (iVar8 != 0);
    }
LAB_026a10d8:
    lVar10 = *(long *)(param_1 + 0xc48);
    pbVar4 = PTR_DAT_0437a6d8;
    puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x026a11c0:
    PTR_DAT_0437a6d8 = pbVar4;
    PTR_DAT_0437a6e0 = (undefined *)puVar5;
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*pbVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar4), iVar8 != 0)) {
          uVar9 = FUN_00ad3750();
          *puVar5 = uVar9;
          __cxa_guard_release(pbVar4);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_026a10e0;
          if (plVar12 == puVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 != 0) {
              plVar12 = (long *)(lVar10 + -0x50);
              FUN_02c91f14(plVar12);
              lVar10 = *(long *)(lVar10 + 8);
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar8;
      } while (iVar8 != 0);
    }
LAB_026a10e0:
    *(undefined1 *)(param_1 + 0xc6a) = 0;
  }
  return;
}


