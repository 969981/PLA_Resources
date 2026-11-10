/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009911c8; name: FUN_009911c8
 */


void FUN_009911c8(long param_1,long *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar14 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar14;
  FUN_0098f80c(&local_70,lVar14 + 0xd8);
  plVar15 = *(long **)(CONCAT71(uStack_6f,local_70) + 0x98);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00991620;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00956dac(&local_68,plVar15 + 0x35);
  plVar8 = local_68;
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_00991620:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_74 = 0;
  plVar12 = (long *)FUN_00993d60(param_1 + 0xd0,&local_74);
  plVar13 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *plVar12 = (long)plVar8;
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_68._4_4_ = (uint)((ulong)local_68 >> 0x20);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      plVar15 = (long *)CONCAT71(uStack_6f,local_70);
      goto joined_r0x009915a4;
    }
  }
  plVar15 = (long *)CONCAT71(uStack_6f,local_70);
joined_r0x009915a4:
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  local_68 = (long *)((ulong)local_68._4_4_ << 0x20);
  plVar15 = (long *)FUN_00993d60(param_1 + 0xd0,&local_68);
  local_70 = 1;
  FUN_009ad21c(*plVar15,*(undefined8 *)(*plVar15 + 8),&local_70);
  if ((undefined1 *)param_2[0xb] != &DAT_cbf29ce484222645) {
    FUN_00993990(param_1);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  lVar14 = *param_2;
  if (param_2[1] != lVar14) {
    uVar17 = 0;
    do {
      puVar16 = (undefined1 *)(lVar14 + uVar17 * 0x18);
      uVar9 = FUN_00935284(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0),*puVar16);
      plVar15 = (long *)(puVar16 + 8);
      if ((*plVar15 == 0) || (*(int *)(*plVar15 + 0xc) == 0)) {
        FUN_00995bd0(param_1,*puVar16,uVar9,1,1,0);
      }
      else {
        FUN_00956dac(&local_68,plVar15);
        FUN_00ab12b0(&local_68);
        if (local_68 != (long *)0x0) {
          lVar14 = local_68[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        uVar2 = *puVar16;
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_008c4b3c(&local_88,plVar15);
        FUN_00994444(param_1,uVar2,&local_88,uVar9,0,0);
        puVar7 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_88 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)puVar5;
            *(long *)puVar6 = lVar14;
            local_68 = (long *)*puVar7;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
      }
      lVar14 = *param_2;
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulong)((param_2[1] - lVar14 >> 3) * -0x5555555555555555));
  }
  if (*(char *)(param_1 + 0x560) == '\0') {
    FUN_0099bf7c(param_1,0);
  }
  return;
}


