/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b748b0; name: FUN_01b748b0
 */


void FUN_01b748b0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  
  if (*(int *)(param_1 + 0x5f8) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 0x598) = param_2[7];
    uVar8 = param_2[5];
    *(undefined8 *)(param_1 + 0x578) = param_2[3];
    *(undefined8 *)(param_1 + 0x588) = uVar8;
    *(undefined8 *)(param_1 + 0x568) = param_2[1];
    *(undefined8 *)(param_1 + 0x560) = *param_2;
    uVar8 = param_2[2];
    *(undefined8 *)(param_1 + 0x580) = param_2[4];
    *(undefined8 *)(param_1 + 0x570) = uVar8;
    uVar8 = param_2[6];
    uVar10 = param_2[8];
    *(undefined4 *)(param_1 + 0x5a8) = uVar2;
    *(undefined8 *)(param_1 + 0x590) = uVar8;
    lVar9 = *(long *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x5a0) = uVar10;
    *(undefined1 *)(param_1 + 0x600) = 0;
    puVar6 = PTR_DAT_0437a6e0;
    puVar5 = PTR_DAT_0437a6d8;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar11 = *(int *)(lVar9 + 0xc);
      do {
        plVar12 = *(long **)(lVar9 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar8 = FUN_00ad3750();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01b7492c;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x18);
            plVar12 = (long *)(lVar9 + -0x50);
            if (lVar9 != 0) {
              FUN_02c90b50(plVar12,1);
              lVar9 = *(long *)(lVar9 + 8);
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01b7492c:
    *(undefined1 *)(param_1 + 0x601) = 1;
  }
  return;
}


