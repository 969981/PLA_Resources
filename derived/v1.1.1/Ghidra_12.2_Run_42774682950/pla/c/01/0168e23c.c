/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168e23c; name: FUN_0168e23c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0168e23c(void)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *local_a8;
  long *local_a0;
  long *local_98;
  undefined1 *local_90;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_58;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar16 = *(long **)(lVar15 + 0xc0);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0168e684;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00e8b8e8(&local_68,plVar16);
  if (local_68 == (long *)0x0) {
    local_a0 = (long *)0x0;
    local_a8 = &DAT_03996322;
    goto LAB_0168e328;
  }
  FUN_01e564f8(&local_98);
  plVar6 = local_98;
  puVar10 = PTR_DAT_0437c670;
  puVar9 = PTR_DAT_0437c668;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (local_98 == (long *)0x0) {
LAB_0168e2ec:
    local_a0 = (long *)0x0;
    local_a8 = &DAT_03996322;
    plVar17 = local_68;
  }
  else {
    if (*(int *)((long)local_98 + 0xc) != 0) {
      piVar1 = (int *)((long)local_98 + 0xc);
      iVar12 = *(int *)((long)local_98 + 0xc);
      do {
        plVar17 = (long *)plVar6[2];
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar13;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_0168e724;
          if (plVar17 == (long *)puVar10) break;
          plVar17 = (long *)*plVar17;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar15 = plVar6[3];
            plVar6 = (long *)0x0;
            plVar17 = local_98;
            if (lVar15 != 0) {
              plVar6 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x0168e458;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0168e724:
    plVar6 = (long *)0x0;
    plVar17 = local_98;
joined_r0x0168e458:
    local_98 = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar2 = plVar17 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_78 = (long *)*plVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_78);
      }
    }
    if (plVar6 == (long *)0x0) goto LAB_0168e2ec;
    plVar17 = (long *)plVar6[0xe];
    if (plVar17 == (long *)0x0) {
      local_a8 = &DAT_03996322;
      local_a0 = (long *)0x0;
    }
    else {
      lVar15 = plVar17[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0168e684:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_98 = (long *)0x0;
      local_90 = (undefined1 *)0x0;
      FUN_008802f0(&local_98,plVar17[0x15] + 0x58);
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_00ca524c(&local_78,&local_98);
      plVar2 = local_98;
      if (local_98 != (long *)0x0) {
        plVar3 = local_98 + 1;
        do {
          iVar12 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_98[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_58 = (long *)*plVar2;
          FUN_02a44274(lVar15 + 0xd8,&local_58);
        }
      }
      if (local_78 == (long *)0x0) {
        local_a8 = &DAT_03996322;
        local_a0 = (long *)0x0;
      }
      else {
        uVar14 = FUN_02a43a8c();
        if ((uVar14 & 1) == 0) {
          if (local_78 == (long *)0x0) {
            local_58 = (long *)0x0;
          }
          else {
            FUN_00ca554c(&local_58);
          }
          FUN_018b9bdc(&local_98,local_58);
          local_a0 = local_80;
          local_a8 = local_90;
          plVar2 = local_58;
          if ((local_80 != (long *)0x0) &&
             ((**(code **)(*local_80 + 0x18))(), plVar2 = local_58, local_80 != (long *)0x0)) {
            (**(code **)(*local_80 + 0x20))();
            plVar2 = local_58;
          }
          plVar3 = local_78;
          local_58 = plVar2;
          if ((plVar2 != (long *)0x0) &&
             (uVar14 = FUN_02a43a5c(plVar2[0xb]), plVar3 = local_78, (uVar14 & 1) != 0)) {
            (**(code **)(*plVar2 + 0x20))(plVar2);
            plVar3 = local_78;
          }
        }
        else {
          local_a8 = &DAT_03996322;
          local_a0 = (long *)0x0;
          plVar3 = local_78;
        }
        local_78 = plVar3;
        if (plVar3 != (long *)0x0) {
          plVar2 = plVar3 + 1;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            plVar3[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_98 = (long *)*plVar3;
            FUN_02a44274(lVar15 + 0xd8,&local_98);
          }
        }
      }
      uVar14 = FUN_02a43a5c(plVar17[0xb]);
      if ((uVar14 & 1) != 0) {
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    uVar14 = FUN_02a43a5c(plVar6[0xb]);
    plVar17 = local_68;
    if ((uVar14 & 1) != 0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      plVar17 = local_68;
    }
  }
  if ((plVar17 != (long *)0x0) && (uVar14 = FUN_02a43a5c(plVar17[0xb]), (uVar14 & 1) != 0)) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
LAB_0168e328:
  FUN_00db14d4("areaid_item_buy",local_a8);
  if ((plVar16 != (long *)0x0) && (uVar14 = FUN_02a43a5c(plVar16[0xb]), (uVar14 & 1) != 0)) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0);
  }
  FUN_00db16f8(5);
  return;
}


