/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b234ec; name: FUN_00b234ec
 */


void FUN_00b234ec(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *local_d0 [2];
  long *local_c0;
  long *local_b8 [4];
  long *local_98;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  *(undefined1 *)(param_1 + 0x120) = 0;
  if ((*(long *)(param_1 + 0x110) != 0) && (FUN_00b12de0(&local_70), local_70 != (long *)0x0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
    for (plVar15 = *(long **)(param_1 + 0xb0); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      *(undefined4 *)(plVar15[3] + 0x70) = 0;
    }
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar16 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar16;
    plVar15 = *(long **)(lVar16 + 0xd0);
    if (plVar15 != (long *)0x0) {
      plVar17 = plVar15 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar17 = (long *)plVar15[0xb];
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar1 = plVar15 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    if (plVar17 != (long *)0x0) {
      iVar11 = FUN_02c58424(plVar17);
      puVar8 = PTR_LAB_04379590;
      puVar7 = PTR_DAT_043794a8;
      puVar6 = PTR_DAT_043794a0;
      puVar5 = PTR_DAT_04379498;
      if (iVar11 != 0) {
        uVar18 = 0;
        do {
          uVar14 = (**(code **)(*plVar17 + 0x58))(plVar17,uVar18);
          local_88 = 0;
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0xffffffff00000000;
          local_88 = FUN_02c5be48();
          local_84 = FUN_02c5be50(uVar14);
          local_80 = FUN_02c624c8(uVar14);
          uVar10 = FUN_02c63a24(uVar14);
          local_7c = CONCAT11(local_7c._1_1_,uVar10) & 0xff01;
          FUN_00b257d8(local_b8,local_70,&local_88);
          FUN_00d0b804(local_d0,param_1,local_b8);
          if (local_d0[0] == (undefined8 *)0x0) {
            local_c0 = (long *)0x0;
LAB_00b236bc:
            FUN_00d0b57c(param_1,local_b8);
            if (local_c0 != (long *)0x0) goto LAB_00b236d0;
          }
          else {
            FUN_00b23f9c(&local_c0);
            puVar9 = local_d0[0];
            if (local_d0[0] != (undefined8 *)0x0) {
              piVar2 = (int *)(local_d0[0] + 1);
              do {
                iVar11 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                local_d0[0][2] = 0;
                if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
                  FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar5);
                }
                lVar16 = *(long *)puVar6;
                *(long *)puVar7 = lVar16;
                local_68 = *puVar9;
                FUN_02a44274(lVar16 + 0xd8,&local_68);
              }
            }
            if (local_c0 == (long *)0x0) goto LAB_00b236bc;
            *(int *)(local_c0 + 0xe) = (int)local_c0[0xe] + 1;
LAB_00b236d0:
            lVar16 = local_c0[0xb];
            piVar2 = (int *)(lVar16 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_c0 + 0x20))();
            }
          }
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_b8[0] != (long *)0x0) {
            (**(code **)(*local_b8[0] + 0x20))();
          }
          uVar18 = uVar18 + 1;
          uVar12 = FUN_02c58424(plVar17);
        } while (uVar18 < uVar12);
      }
      plVar15 = plVar17 + 10;
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    uVar13 = FUN_00d0b448(param_1);
    *(undefined4 *)(param_1 + 0xe8) = uVar13;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
    if (local_70 != (long *)0x0) {
      lVar16 = local_70[0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  return;
}


