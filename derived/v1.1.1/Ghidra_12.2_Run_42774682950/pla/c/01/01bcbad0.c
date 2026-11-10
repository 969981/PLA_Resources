/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bcbad0; name: FUN_01bcbad0
 */


void FUN_01bcbad0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  if ((int)param_1[0x46] < 1) {
    if ((int)param_1[0x46] < 0) {
      *(undefined4 *)(param_1 + 0x43) = 3;
      *(undefined4 *)(param_1 + 0x46) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x46) = 0;
      if ((int)param_1[0x43] != 3) {
        if ((int)param_1[0x43] != 1) {
          return;
        }
        goto LAB_01bcbb44;
      }
    }
    puVar7 = PTR_DAT_043796f8;
    puVar6 = PTR_DAT_043796f0;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    lVar10 = param_1[0x41];
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01bcbb70;
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
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 != 0) {
              plVar12 = (long *)(lVar10 + -0x50);
              FUN_01f259f8(plVar12,param_1 + 0x45,param_1 + 0x44);
              (**(code **)(*param_1 + 0x108))(param_1);
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
LAB_01bcbb70:
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x43) = 1;
    *(undefined4 *)(param_1 + 0x46) = 0;
LAB_01bcbb44:
    puVar7 = PTR_DAT_043796f8;
    puVar6 = PTR_DAT_043796f0;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    lVar10 = param_1[0x41];
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar11 = *(int *)(lVar10 + 0xc);
      do {
        plVar12 = *(long **)(lVar10 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01bcbb4c;
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
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            if (lVar10 != 0) {
              plVar12 = (long *)(lVar10 + -0x50);
              (**(code **)(*param_1 + 0x100))(param_1);
              FUN_01f25508(plVar12,param_1 + 0x45,param_1 + 0x44,
                           *(undefined4 *)((long)param_1 + 0x234));
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
LAB_01bcbb4c:
    *(undefined4 *)(param_1 + 0x43) = 2;
  }
  return;
}


