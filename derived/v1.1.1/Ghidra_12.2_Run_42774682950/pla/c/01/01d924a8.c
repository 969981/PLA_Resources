/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d924a8; name: FUN_01d924a8
 */


void FUN_01d924a8(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_1 + 0x90);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar8 = *(int *)(lVar13 + 0xc);
LAB_01d92534:
  plVar17 = *(long **)(lVar13 + 0x10);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
      uVar11 = FUN_0087f8f0();
      *(undefined8 *)puVar5 = uVar11;
      __cxa_guard_release(puVar4);
    }
    *(undefined **)puVar7 = puVar5;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar17 == (long *)0x0) {
      return;
    }
    if (plVar17 == (long *)puVar7) break;
    plVar17 = (long *)*plVar17;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar13 = *(long *)(lVar13 + 0x18);
      plVar17 = (long *)(lVar13 + -0x50);
      if (lVar13 == 0) {
        return;
      }
      FUN_0199c304(local_80,plVar17);
      if (local_80[0] == (undefined8 *)0x0) {
        local_70 = (long *)0x0;
      }
      else {
        FUN_009acf14(&local_70);
        puVar15 = local_80[0];
        if (local_80[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80[0] + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            local_80[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_68 = *puVar15;
            FUN_02a44274(lVar16 + 0xd8,&local_68);
          }
        }
      }
      if (local_70 == (long *)0x0) goto LAB_01d926d4;
      lVar16 = *(long *)(param_1 + 0x80);
      if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) {
LAB_01d925a8:
        plVar14 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar16 + 0xc);
        iVar8 = *(int *)(lVar16 + 0xc);
        do {
          puVar15 = *(undefined8 **)(lVar16 + 0x10);
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar9 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar11;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)PTR_DAT_0437a0f0 = puVar5;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          if (puVar15 == (undefined8 *)0x0) goto LAB_01d925a8;
          while (puVar15 != (undefined8 *)PTR_DAT_0437a0f0) {
            puVar15 = (undefined8 *)*puVar15;
            plVar14 = (long *)0x0;
            if (puVar15 == (undefined8 *)0x0) goto LAB_01d925ac;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01d92860;
            plVar14 = (long *)0x0;
            if (*(long *)(lVar16 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar16 + 0x18) + -0x50);
            }
            break;
          }
          ClearExclusiveLocal();
LAB_01d92860:
          plVar14 = (long *)0x0;
          iVar8 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01d925ac:
      local_a0 = 0x75159f85934c919e;
      pcStack_98 = "Pokemon";
      local_90 = 7;
      local_88 = (long *)0x0;
      FUN_01845684(local_80,plVar14,*(undefined8 *)(param_1 + 8),&local_a0);
      plVar10 = *(long **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      if (plVar10 != (long *)0x0) {
        lVar16 = plVar10[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      puVar15 = local_80[0];
      local_80[0] = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x68) = puVar15;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        lVar16 = plVar14[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      lVar12 = *param_2;
      lVar16 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar16 + 0xb8) = *(undefined8 *)(lVar12 + 0x98);
      *(undefined8 *)(lVar16 + 0xb0) = *(undefined8 *)(lVar12 + 0x90);
      *(undefined1 *)(lVar16 + 0xe0) = 1;
      lVar12 = *param_2;
      lVar16 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar16 + 200) = *(undefined8 *)(lVar12 + 0x88);
      *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(lVar12 + 0x80);
      *(undefined1 *)(lVar16 + 0xe0) = 1;
      lVar12 = *param_2;
      lVar16 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(lVar12 + 0x78);
      *(undefined8 *)(lVar16 + 0xd0) = *(undefined8 *)(lVar12 + 0x70);
      *(undefined1 *)(lVar16 + 0xe0) = 1;
      FUN_02a54718(*(undefined8 *)(param_1 + 0x68),0);
      if (local_70 != (long *)0x0) {
        lVar16 = local_70[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
LAB_01d926d4:
      lVar13 = *(long *)(lVar13 + 8);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar9;
  if (iVar9 == 0) {
    return;
  }
  goto LAB_01d92534;
}


