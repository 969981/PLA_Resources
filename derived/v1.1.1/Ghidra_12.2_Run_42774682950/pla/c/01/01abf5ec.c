/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abf5ec; name: FUN_01abf5ec
 */


void FUN_01abf5ec(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70 [2];
  
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  lVar14 = *param_2;
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar9 = *(int *)(lVar14 + 0xc);
  do {
    plVar16 = *(long **)(lVar14 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar11 = FUN_0095a420();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) {
        return;
      }
      if (plVar16 == (long *)puVar6) break;
      plVar16 = (long *)*plVar16;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        plVar16 = (long *)(lVar14 + -0x50);
        FUN_00aae1c0(local_70,plVar16);
        if (local_70[0] == (undefined8 *)0x0) goto LAB_01abf730;
        uVar10 = FUN_02a43a8c();
        puVar7 = local_70[0];
        puVar12 = local_70[0];
        if ((uVar10 & 1) != 0) goto joined_r0x01abfa28;
        if (local_70[0] == (undefined8 *)0x0) goto LAB_01abf730;
        if (*(int *)((long)local_70[0] + 0xc) == 0) goto joined_r0x01abfa28;
        piVar1 = (int *)((long)local_70[0] + 0xc);
        iVar9 = *(int *)((long)local_70[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
    if (iVar8 == 0) {
      return;
    }
  } while( true );
LAB_01abf7e8:
  plVar17 = (long *)puVar7[2];
  lVar13 = FUN_00a3edb8();
  while( true ) {
    puVar12 = local_70[0];
    if (plVar17 == (long *)0x0) goto joined_r0x01abfa28;
    if (plVar17 == (long *)lVar13) break;
    plVar17 = (long *)*plVar17;
  }
  iVar8 = *piVar1;
  if (iVar8 == iVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar13 = puVar7[3];
      plVar17 = (long *)(lVar13 + -0x50);
      if (lVar13 != 0) {
        if (0 < *(int *)(lVar13 + 0x220)) {
          iVar9 = 0;
          do {
            puVar12 = (undefined8 *)FUN_02a9b354(plVar17,iVar9);
            local_90 = *puVar12;
            local_88 = puVar12[1];
            local_80 = puVar12[2];
            local_78 = (long *)puVar12[3];
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))();
            }
            puVar12 = (undefined8 *)FUN_02a9b144(plVar17,&local_90);
            plVar15 = (long *)*puVar12;
            if (plVar15 != (long *)0x0) {
              plVar2 = plVar15 + 10;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            local_a0 = *(undefined8 *)(param_1 + 0x2d0);
            uStack_98 = *(ulong *)(param_1 + 0x2d8);
            if (*(char *)(param_1 + 0x371) == '\0') {
              uStack_98 = uStack_98 & 0xffffffff;
            }
            local_a8 = (long *)0x0;
            local_b8 = "OverrideRimColor";
            local_b0 = 0x1f;
            local_d0 = 0;
            local_c8 = (long *)0x0;
            local_c0 = (undefined1 *)0x1eb774d1eef8fbe2;
            local_e0 = &DAT_cbf29ce484222645;
            puStack_d8 = &DAT_03996322;
            FUN_02b39ed0(plVar15,&local_c0,&local_a0,&local_e0);
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            local_c0 = &DAT_c48fa98e41e54f54;
            local_b8 = "OverrideRimPower";
            local_b0 = 0x1f;
            local_a8 = (long *)0x0;
            local_e0 = &DAT_cbf29ce484222645;
            puStack_d8 = &DAT_03996322;
            local_d0 = 0;
            local_c8 = (long *)0x0;
            FUN_02b39e1c(plVar15,&local_c0,param_1 + 0x2e0,&local_e0);
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            if (plVar15 != (long *)0x0) {
              plVar2 = plVar15 + 10;
              do {
                iVar8 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar13 + 0x220));
        }
        lVar13 = *(long *)(lVar13 + 8);
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar12 = local_70[0];
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          puVar12 = local_70[0];
        }
      }
      goto joined_r0x01abfa28;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
joined_r0x01abfa28:
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_90 = *puVar12;
        FUN_02a44274(lVar13 + 0xd8,&local_90);
      }
    }
LAB_01abf730:
    lVar14 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    return;
  }
  goto LAB_01abf7e8;
}


