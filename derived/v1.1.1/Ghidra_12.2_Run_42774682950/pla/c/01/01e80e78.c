/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e80e78; name: FUN_01e80e78
 */


bool FUN_01e80e78(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  
  puVar9 = PTR_DAT_0437af00;
  puVar8 = PTR_DAT_0437aef8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_1 + 0x68);
  if (lVar13 == 0) {
LAB_01e80ea4:
    plVar14 = (long *)0x0;
    lVar13 = *(long *)(param_1 + 0x88);
    if (lVar13 == 0) goto LAB_01e80eb0;
LAB_01e8106c:
    puVar9 = PTR_DAT_04379c48;
    puVar8 = PTR_DAT_04379c40;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar2 = (int *)(lVar13 + 0xc);
      iVar16 = *(int *)(lVar13 + 0xc);
      do {
        puVar17 = *(undefined8 **)(lVar13 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        if (puVar17 == (undefined8 *)0x0) goto LAB_01e81188;
        while (puVar17 != (undefined8 *)puVar9) {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_01e80eb0;
        }
        iVar11 = *piVar2;
        if (iVar11 == iVar16) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar15 = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar15 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            goto joined_r0x01e81154;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar11;
      } while (iVar11 != 0);
      goto LAB_01e80eb0;
    }
LAB_01e81188:
    plVar15 = (long *)0x0;
    if (plVar14 != (long *)0x0) goto LAB_01e80eb4;
LAB_01e81158:
    bVar10 = false;
    if (plVar15 == (long *)0x0) {
      return false;
    }
  }
  else {
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar2 = (int *)(lVar13 + 0xc);
      iVar16 = *(int *)(lVar13 + 0xc);
      do {
        puVar17 = *(undefined8 **)(lVar13 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        if (puVar17 == (undefined8 *)0x0) goto LAB_01e810c4;
        while (puVar17 != (undefined8 *)puVar9) {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_01e80ea4;
        }
        iVar11 = *piVar2;
        if (iVar11 == iVar16) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar14 = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            lVar13 = *(long *)(param_1 + 0x88);
            goto joined_r0x01e81068;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar11;
      } while (iVar11 != 0);
      goto LAB_01e80ea4;
    }
LAB_01e810c4:
    plVar14 = (long *)0x0;
    lVar13 = *(long *)(param_1 + 0x88);
joined_r0x01e81068:
    if (lVar13 != 0) goto LAB_01e8106c;
LAB_01e80eb0:
    plVar15 = (long *)0x0;
joined_r0x01e81154:
    if (plVar14 == (long *)0x0) goto LAB_01e81158;
LAB_01e80eb4:
    if (plVar15 == (long *)0x0) {
      bVar10 = false;
      goto LAB_01e80f60;
    }
    lVar13 = nn::os::GetCurrentThread();
    plVar1 = plVar14 + 0xf;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x6c));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e80f00;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e80f00:
    lVar13 = plVar14[0x10];
    lVar3 = plVar14[0x11];
    plVar14[0xf] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
    if ((((lVar13 == lVar3) && (*(char *)((long)plVar15 + 0x69) == '\0')) &&
        (*(char *)((long)plVar15 + 0x6a) == '\0')) && (*(char *)((long)plVar15 + 0x6b) == '\0')) {
      bVar10 = *(char *)((long)plVar15 + 0x6c) != '\0';
    }
    else {
      bVar10 = true;
    }
  }
  lVar13 = plVar15[0xb];
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar14 == (long *)0x0) {
    return bVar10;
  }
LAB_01e80f60:
  lVar13 = plVar14[0xb];
  piVar2 = (int *)(lVar13 + 0xc);
  do {
    iVar16 = *piVar2;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return bVar10;
}


