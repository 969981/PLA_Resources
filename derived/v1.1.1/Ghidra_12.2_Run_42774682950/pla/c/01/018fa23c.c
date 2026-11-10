/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fa23c; name: FUN_018fa23c
 */


void FUN_018fa23c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x7c) = uVar2;
    *(undefined8 *)(param_1 + 0x84) = uVar3;
    *(undefined1 *)(param_1 + 0x78) = 1;
    lVar12 = *(long *)(param_1 + 0xc0);
    puVar6 = PTR_DAT_0437a1e8;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x7c) = uVar2;
    *(undefined8 *)(param_1 + 0x84) = uVar3;
    lVar12 = *(long *)(param_1 + 0xc0);
    puVar6 = PTR_DAT_0437a1e8;
  }
  PTR_DAT_0437a1e8 = puVar6;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      FUN_01900910();
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_018fa284;
        if (plVar14 == (long *)puVar6) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_018fa2e4;
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 != 0) {
          plVar14 = (long *)(lVar12 + -0x50);
          (**(code **)(*(long *)(lVar12 + -0x50) + 0x140))(plVar14);
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 != 0) break;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar12 = *(long *)(param_1 + 0xe0);
          pbVar7 = PTR_DAT_0437a1e0;
          puVar6 = PTR_DAT_0437a1e8;
          puVar8 = (undefined8 *)PTR_DAT_0437a1f0;
          goto joined_r0x018fa3ac;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018fa2e4:
      iVar13 = iVar11;
    } while (iVar11 != 0);
  }
LAB_018fa284:
  lVar12 = *(long *)(param_1 + 0xe0);
  pbVar7 = PTR_DAT_0437a1e0;
  puVar6 = PTR_DAT_0437a1e8;
  puVar8 = (undefined8 *)PTR_DAT_0437a1f0;
joined_r0x018fa3ac:
  PTR_DAT_0437a1e0 = pbVar7;
  PTR_DAT_0437a1e8 = puVar6;
  PTR_DAT_0437a1f0 = (undefined *)puVar8;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar12 + 0x10);
      if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
        FUN_01900910();
        *puVar8 = puVar6;
        __cxa_guard_release(pbVar7);
      }
      while( true ) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_018fa28c;
        if (puVar15 == puVar8) break;
        puVar15 = (undefined8 *)*puVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_018fa3dc;
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 != 0) {
          plVar14 = (long *)(lVar12 + -0x50);
          (**(code **)(*(long *)(lVar12 + -0x50) + 0x140))(plVar14);
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 != 0) break;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar12 = *(long *)(param_1 + 0xf0);
          if (lVar12 == 0) {
            return;
          }
          goto LAB_018fa4a0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018fa3dc:
      iVar13 = iVar11;
    } while (iVar11 != 0);
  }
LAB_018fa28c:
  lVar12 = *(long *)(param_1 + 0xf0);
  if (lVar12 != 0) {
LAB_018fa4a0:
    puVar10 = PTR_DAT_04381fc8;
    puVar9 = PTR_DAT_04381fc0;
    puVar6 = PTR_DAT_0437a1e8;
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar13 = *(int *)(lVar12 + 0xc);
      do {
        plVar14 = *(long **)(lVar12 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          FUN_01900910();
          *(undefined **)puVar10 = puVar6;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) {
            return;
          }
          if (plVar14 == (long *)puVar10) break;
          plVar14 = (long *)*plVar14;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar13) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 == 0) {
              return;
            }
            plVar14 = (long *)(lVar12 + -0x50);
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x140))(plVar14,param_2);
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018fa598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar14 + 0x20))(plVar14);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar11;
      } while (iVar11 != 0);
    }
  }
  return;
}


