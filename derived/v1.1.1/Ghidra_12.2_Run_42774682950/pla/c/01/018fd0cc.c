/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fd0cc; name: FUN_018fd0cc
 */


void FUN_018fd0cc(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  (**(code **)(**(long **)(param_1 + 0x68) + 0x48))(*(long **)(param_1 + 0x68),0);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x48))(*(long **)(param_1 + 0x70),0);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_01901218(&local_78,param_1 + 0xc0);
  plVar18 = local_78;
  puVar11 = PTR_DAT_0437a1e8;
  if (local_78 != (long *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar12 = *(int *)((long)local_78 + 0xc);
      do {
        plVar17 = (long *)plVar18[2];
        FUN_01900910();
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_018fd43c;
          if (plVar17 == (long *)puVar11) break;
          plVar17 = (long *)*plVar17;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar16 = plVar18[3];
            plVar18 = (long *)0x0;
            plVar17 = local_78;
            if (lVar16 != 0) {
              plVar18 = (long *)(lVar16 + -0x50);
            }
            goto joined_r0x018fd434;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_018fd43c:
    plVar18 = (long *)0x0;
    plVar17 = local_78;
joined_r0x018fd434:
    local_78 = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar2 = plVar17 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_90 = (undefined8 *)*plVar17;
        FUN_02a44274(lVar16 + 0xd8,&local_90);
      }
    }
    if (plVar18 != (long *)0x0) {
      FUN_01a39c50(plVar18);
      lVar16 = plVar18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
  }
  FUN_018f8f5c(&local_78,param_1);
  FUN_018fb610(&local_80,&local_78);
  if (local_80 != (long *)0x0) {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_01901970(&local_90,local_80 + 0x5e);
    FUN_018fc9a0(&local_68,&local_90);
    puVar6 = local_90;
    if (local_68 != (long *)0x0) {
      uVar15 = local_68[0x43];
      if (((uint)(uVar15 >> 0x20) <
           (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100)) >> 2))
         && (iVar12 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar15 >> 0x20) * 4), -1 < iVar12)
         ) {
        *(ulong *)(*(long *)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar12 * 0x20) + 0xd0) = uVar15;
      }
      lVar16 = local_68[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
        puVar6 = local_90;
      }
    }
    local_90 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        puVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_68 = (long *)*puVar6;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    if (local_80 != (long *)0x0) {
      lVar16 = local_80[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
        lVar16 = *(long *)(param_1 + 0xa0);
        pbVar5 = PTR_DAT_043794d0;
        puVar6 = (undefined8 *)PTR_DAT_043794d8;
        pbVar7 = PTR_DAT_043795d8;
        puVar8 = (undefined8 *)PTR_DAT_043795e0;
        pbVar9 = PTR_DAT_0437a250;
        puVar10 = (undefined8 *)PTR_DAT_0437a258;
        goto joined_r0x018fd308;
      }
    }
  }
  lVar16 = *(long *)(param_1 + 0xa0);
  pbVar5 = PTR_DAT_043794d0;
  puVar6 = (undefined8 *)PTR_DAT_043794d8;
  pbVar7 = PTR_DAT_043795d8;
  puVar8 = (undefined8 *)PTR_DAT_043795e0;
  pbVar9 = PTR_DAT_0437a250;
  puVar10 = (undefined8 *)PTR_DAT_0437a258;
joined_r0x018fd308:
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043794d8 = (undefined *)puVar6;
  PTR_DAT_043795d8 = pbVar7;
  PTR_DAT_043795e0 = (undefined *)puVar8;
  PTR_DAT_0437a250 = pbVar9;
  PTR_DAT_0437a258 = (undefined *)puVar10;
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar12 = *(int *)(lVar16 + 0xc);
    do {
      puVar19 = *(undefined8 **)(lVar16 + 0x10);
      if (((*pbVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar9), iVar13 != 0)) {
        if (((*pbVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar7), iVar13 != 0)) {
          if (((*pbVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar5), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *puVar6 = uVar14;
            __cxa_guard_release(pbVar5);
          }
          *puVar8 = puVar6;
          __cxa_guard_release(pbVar7);
        }
        *puVar10 = puVar8;
        __cxa_guard_release(pbVar9);
      }
      while( true ) {
        if (puVar19 == (undefined8 *)0x0) goto LAB_018fd258;
        if (puVar19 == puVar10) break;
        puVar19 = (undefined8 *)*puVar19;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018fd520;
        lVar16 = *(long *)(lVar16 + 0x18);
        if (lVar16 != 0) {
          plVar17 = (long *)(lVar16 + -0x50);
          for (plVar18 = *(long **)(lVar16 + 0x270); plVar18 != (long *)0x0;
              plVar18 = (long *)*plVar18) {
            *(uint *)(plVar18 + 3) = *(uint *)(plVar18 + 3) & 0xffffefff;
            FUN_01839500(plVar17);
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 != 0) break;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          if (local_78 == (long *)0x0) {
            return;
          }
          goto LAB_018fd260;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018fd520:
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_018fd258:
  if (local_78 != (long *)0x0) {
LAB_018fd260:
    plVar17 = local_78;
    plVar18 = local_78 + 1;
    do {
      iVar12 = (int)*plVar18 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_90 = (undefined8 *)*plVar17;
      FUN_02a44274(lVar16 + 0xd8,&local_90);
    }
  }
  return;
}


