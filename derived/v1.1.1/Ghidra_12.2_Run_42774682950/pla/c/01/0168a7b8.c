/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168a7b8; name: FUN_0168a7b8
 */


void FUN_0168a7b8(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long local_d8 [2];
  long local_c8 [2];
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  long *local_78;
  long *local_70;
  long *local_68;
  
  FUN_0165a7a0(&local_b0);
  plVar1 = local_b0;
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (local_b0 != (long *)0x0) {
    if (*(int *)((long)local_b0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_b0 + 0xc);
      iVar11 = *(int *)((long)local_b0 + 0xc);
      do {
        plVar17 = (long *)plVar1[2];
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar13;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_0168abdc;
          if (plVar17 == (long *)puVar10) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar15 = plVar1[3];
            plVar1 = (long *)0x0;
            if (lVar15 != 0) {
              plVar1 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x0168ab44;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_0168abdc:
    plVar1 = (long *)0x0;
joined_r0x0168ab44:
    if (local_b0 != (long *)0x0) {
      FUN_02a43934();
    }
    if (plVar1 != (long *)0x0) {
      FUN_0199fed8(&local_b0,plVar1);
      if (local_b0 == (long *)0x0) {
        local_68 = (long *)0x0;
        plVar17 = local_68;
      }
      else {
        FUN_0168ac38(&local_68);
        plVar17 = local_68;
        if (local_b0 != (long *)0x0) {
          FUN_02a43934();
          plVar17 = local_68;
        }
      }
      local_68 = plVar17;
      if (plVar17 != (long *)0x0) {
        *(undefined1 *)(plVar17 + 0xd) = 1;
        uVar16 = FUN_02a43a5c(plVar17[0xb]);
        if ((uVar16 & 1) != 0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      uVar16 = FUN_02a43a5c(plVar1[0xb]);
      if ((uVar16 & 1) != 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
    }
  }
  if (*(long *)(param_2 + 0x108) == 0) {
    local_80 = 0;
    local_a0 = &DAT_cbf29ce484222645;
    puStack_98 = &DAT_03996322;
    local_90 = 0;
    local_88 = (long *)0x0;
    FUN_00947cf8(&local_68,"BoxPokeEndEvent");
    uStack_a8 = *(undefined8 *)(*param_1 + 0x60);
    local_b0 = local_68;
    local_7e = 0;
    FUN_016b14c0(local_d8,&local_b0);
    if (local_d8[0] != 0) {
      FUN_02a43934();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_b0 == (long *)0x0) {
      return;
    }
    pcVar14 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
    FUN_00d8c950(&local_b0);
    FUN_016b6208(&local_68,local_b0);
    if (local_b0 != (long *)0x0) {
      plVar1 = local_b0 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    FUN_0165dc80(&local_70,local_68);
    FUN_0165dda8(&local_78,local_68);
    if (*(long *)(param_2 + 0x108) != 0) {
      lVar15 = 0;
      iVar11 = 0;
      uVar16 = 0;
      do {
        puVar3 = (undefined2 *)(*(long *)(param_2 + 0x100) + lVar15);
        uVar4 = puVar3[1];
        FUN_016605fc(local_70,iVar11,*puVar3);
        FUN_016605fc(local_70,iVar11 + 1,uVar4);
        uVar16 = uVar16 + 1;
        iVar11 = iVar11 + 2;
        lVar15 = lVar15 + 8;
      } while (uVar16 < *(ulong *)(param_2 + 0x108));
    }
    local_80 = 0;
    local_a0 = &DAT_cbf29ce484222645;
    puStack_98 = &DAT_03996322;
    local_90 = 0;
    local_88 = (long *)0x0;
    FUN_00947cf8(&local_b8,"BoxPokeReleaseEvent");
    uStack_a8 = *(undefined8 *)(*param_1 + 0x60);
    local_b0 = local_b8;
    local_7e = 0;
    FUN_016b14c0(local_c8,&local_b0);
    if (local_c8[0] != 0) {
      FUN_02a43934();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if ((local_70 != (long *)0x0) && (uVar16 = FUN_02a43a5c(local_70[0xb]), (uVar16 & 1) != 0)) {
      (**(code **)(*local_70 + 0x20))(local_70);
    }
    if (local_68 == (long *)0x0) {
      return;
    }
    plVar1 = local_68 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 != 0) {
      return;
    }
    pcVar14 = *(code **)(*local_68 + 0x10);
  }
  (*pcVar14)();
  return;
}


