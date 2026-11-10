/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e05580; name: FUN_01e05580
 */


void FUN_01e05580(undefined8 *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98 [4];
  long *local_78;
  long *local_68 [2];
  long local_58;
  
  local_c8 = *(undefined **)(param_3 + 8);
  uVar15 = *(undefined8 *)(param_2 + 8);
  FUN_009f1b84(local_98,&local_c8);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = PTR_DAT_0437a6d0 + 0x10;
  uStack_c0 = 0;
  uVar9 = FUN_00ad3ac4(&local_c8,1,local_98,0,uVar15,0);
  plVar11 = local_a0;
  if (((uVar9 & 1) != 0) && (local_a0 != (long *)0x0)) {
    lVar13 = local_a0[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar11[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  puVar6 = PTR_DAT_0437a740;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  lVar13 = *param_4;
  if (lVar13 == 0) {
    local_68[0] = (long *)0x0;
  }
  else {
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      plVar11 = (long *)PTR_DAT_0437a748;
      iVar7 = *(int *)(lVar13 + 0xc);
      do {
        plVar14 = *(long **)(lVar13 + 0x10);
        if ((*puVar6 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(puVar6);
          plVar11 = (long *)PTR_DAT_0437a748;
          if (iVar8 != 0) {
            if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar12;
              __cxa_guard_release(puVar4);
            }
            plVar11 = (long *)PTR_DAT_0437a748;
            *(undefined **)PTR_DAT_0437a748 = puVar5;
            __cxa_guard_release(puVar6);
            if (plVar14 != (long *)0x0) goto LAB_01e0585c;
            break;
          }
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01e05904;
LAB_01e0585c:
          if (plVar14 == plVar11) break;
          plVar14 = (long *)*plVar14;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_68[0] = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              local_68[0] = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            goto LAB_01e0560c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01e05904:
    local_68[0] = (long *)0x0;
  }
LAB_01e0560c:
  plVar11 = (long *)FUN_00ad6a1c(uVar10,uVar15,local_68);
  if (local_68[0] != (long *)0x0) {
    lVar13 = local_68[0][0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68[0] + 0x20))();
    }
  }
  FUN_017d3974(plVar11 + 0x4e,&local_c8);
  lVar16 = param_5[1];
  lVar13 = *param_5;
  *(undefined1 *)(plVar11 + 0x4c) = 1;
  *(undefined1 *)((long)plVar11 + 0x2f1) = 1;
  plVar11[0x4b] = lVar16;
  plVar11[0x4a] = lVar13;
  (**(code **)(*plVar11 + 0x10))(local_68,plVar11);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ad3450(param_1,local_68);
  plVar11 = local_68[0];
  if (local_68[0] != (long *)0x0) {
    plVar14 = local_68[0] + 1;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_68[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *plVar11;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  FUN_00984b00(&local_c8);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98[0] != (long *)0x0) {
    (**(code **)(*local_98[0] + 0x20))();
  }
  return;
}


