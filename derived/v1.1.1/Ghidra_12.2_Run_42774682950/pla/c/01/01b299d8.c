/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b299d8; name: FUN_01b299d8
 */


void FUN_01b299d8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  long *local_88;
  long *local_80;
  uint local_78;
  long *local_70;
  long *local_68;
  
  if ((*(long *)(param_1 + 0x220) != 0) &&
     (FUN_01b38280(&local_88), plVar10 = local_88, local_88 != (long *)0x0)) {
    FUN_01ab9180(local_88 + 0x42);
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
    FUN_01e65958(&local_88);
    if (local_88 == (long *)0x0) {
      local_70 = (long *)0x0;
      pbVar6 = PTR_DAT_04379cd0;
      puVar7 = (undefined8 *)PTR_DAT_04379cd8;
      puVar8 = (undefined8 *)PTR_DAT_04379ce0;
    }
    else {
      FUN_01b38444(&local_70);
      plVar1 = local_88;
      pbVar6 = PTR_DAT_04379cd0;
      puVar7 = (undefined8 *)PTR_DAT_04379cd8;
      puVar8 = (undefined8 *)PTR_DAT_04379ce0;
      if (local_88 != (long *)0x0) {
        plVar5 = local_88 + 1;
        do {
          iVar11 = (int)*plVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *(int *)plVar5 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pbVar6 = PTR_DAT_04379cd0;
        puVar7 = (undefined8 *)PTR_DAT_04379cd8;
        puVar8 = (undefined8 *)PTR_DAT_04379ce0;
        if (iVar11 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_c0 = (long *)*plVar1;
          FUN_02a44274(lVar15 + 0xd8,&local_c0);
          pbVar6 = PTR_DAT_04379cd0;
          puVar7 = (undefined8 *)PTR_DAT_04379cd8;
          puVar8 = (undefined8 *)PTR_DAT_04379ce0;
        }
      }
    }
    PTR_DAT_04379cd0 = pbVar6;
    PTR_DAT_04379cd8 = (undefined *)puVar7;
    PTR_DAT_04379ce0 = (undefined *)puVar8;
    if (local_70 != (long *)0x0) {
      plVar1 = (long *)(param_1 + 0x280);
      lVar15 = 0x1d90;
      lVar14 = *plVar1;
      plVar5 = local_70;
      while( true ) {
        local_70 = plVar5;
        if ((lVar14 != 0) && (**(char **)(lVar14 + 0x60) != '\0')) {
          local_88 = (long *)0x0;
          local_80 = (long *)0x0;
          local_78 = 0x3f800000;
          FUN_02a47560(auStack_a8,plVar1);
          uVar12 = FUN_00b1f924(plVar5,0,auStack_a8,&local_88);
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
          if ((uVar12 & 1) != 0) {
            local_b8 = (long *)0x0;
            local_b0 = 0x3f800000;
            local_c0 = (long *)0x0;
            if (((*pbVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar6), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379d08,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            uVar13 = *puVar7;
            *puVar8 = uVar13;
            FUN_02a47cd8(&local_d8,uVar13,"left_leg_01");
            plVar9 = local_c0;
            plVar5 = local_d8;
            local_c0 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x20))();
            }
            plVar9 = local_80;
            local_c0 = plVar5;
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x18))(local_80);
            }
            plVar5 = local_b8;
            local_b8 = plVar9;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            local_b0 = (ulong)local_78;
            local_d8 = (long *)0x0;
            local_d0 = (long *)0x0;
            local_c8 = 0x3f800000;
            if (((*pbVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar6), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379d08,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            uVar13 = *puVar7;
            *puVar8 = uVar13;
            FUN_02a47cd8(&local_68,uVar13,"right_leg_01");
            plVar9 = local_68;
            plVar5 = local_d8;
            local_d8 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            plVar5 = local_88;
            local_d8 = plVar9;
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x18))(local_88);
            }
            plVar9 = local_d0;
            local_d0 = plVar5;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x20))();
            }
            local_c8 = CONCAT44(1,local_78);
            FUN_01ab8ccc(plVar10,&local_c0);
            FUN_01ab8ccc(plVar10,&local_d8);
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x20))();
            }
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
        }
        lVar15 = lVar15 + -0x2b0;
        plVar1 = plVar1 + 0x56;
        if (lVar15 == 0) break;
        lVar14 = *plVar1;
        plVar5 = local_70;
      }
      if (local_70 != (long *)0x0) {
        lVar15 = local_70[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
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
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    lVar15 = plVar10[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
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
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}


