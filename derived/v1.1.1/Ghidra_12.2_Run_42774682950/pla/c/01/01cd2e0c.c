/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd2e0c; name: FUN_01cd2e0c
 */


void FUN_01cd2e0c(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long *local_c8;
  ulong *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  plStack_90 = *(long **)(param_1 + 8);
  local_98 = 0;
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_88 = 0x1fffffffffffffff;
  uStack_80 = 0;
  local_78 = 0;
  plVar26 = (long *)*param_3;
  local_b0 = plVar26;
  if (plVar26 == (long *)0x0) {
    FUN_01cd286c(&local_a8,&local_b0);
    puVar7 = PTR_DAT_04379498;
    puVar8 = PTR_DAT_043794a0;
    puVar9 = PTR_DAT_043794a8;
    puVar10 = PTR_LAB_04379590;
    plVar11 = local_a8;
    plVar24 = local_a8;
    plVar25 = local_a0;
  }
  else {
    lVar27 = plVar26[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01cd286c(&local_a8,&local_b0);
    lVar27 = plVar26[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar7 = PTR_DAT_04379498;
    puVar8 = PTR_DAT_043794a0;
    puVar9 = PTR_DAT_043794a8;
    puVar10 = PTR_LAB_04379590;
    plVar11 = local_a8;
    plVar24 = local_a8;
    plVar25 = local_a0;
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
      puVar7 = PTR_DAT_04379498;
      puVar8 = PTR_DAT_043794a0;
      puVar9 = PTR_DAT_043794a8;
      puVar10 = PTR_LAB_04379590;
      plVar11 = local_a8;
      plVar24 = local_a8;
      plVar25 = local_a0;
    }
  }
  for (; plVar26 = local_a0, puVar16 = PTR_LAB_04379590, puVar15 = PTR_DAT_043794a8,
      puVar14 = PTR_DAT_043794a0, puVar13 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar7,
      PTR_DAT_043794a0 = puVar8, PTR_DAT_043794a8 = puVar9, PTR_LAB_04379590 = puVar10,
      local_a8 = plVar24, plVar11 != local_a0; plVar11 = plVar11 + 1) {
    local_a0 = plVar25;
    (**(code **)(*(long *)*plVar11 + 0x10))(local_70);
    local_c0 = (ulong *)0x0;
    uStack_b8 = 0;
    FUN_00bd84b0(&local_c0,local_70);
    puVar17 = local_70[0];
    if (local_70[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70[0] + 1);
      do {
        iVar18 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar18 + -1 == 0) {
        local_70[0][2] = 0;
        if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar13), iVar18 != 0)) {
          FUN_00100250(puVar16,puVar14,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar13);
        }
        lVar27 = *(long *)puVar14;
        *(long *)puVar15 = lVar27;
        local_58 = *puVar17;
        FUN_02a44274(lVar27 + 0xd8,&local_58);
      }
    }
    uVar20 = 0;
    if (local_c0 != (ulong *)0x0) {
      uVar20 = *local_c0;
    }
    uVar21 = *(ulong *)(*param_2 + 0x88);
    if (uVar21 != 0) {
      uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar21 - 1 & uVar20;
      }
      else {
        uVar23 = uVar20;
        if (uVar21 <= uVar20) {
          uVar23 = 0;
          if (uVar21 != 0) {
            uVar23 = uVar20 / uVar21;
          }
          uVar23 = uVar20 - uVar23 * uVar21;
        }
      }
      plVar24 = *(long **)(*(long *)(*param_2 + 0x80) + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        puVar12 = local_c0;
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == uVar20) {
              if (plVar24[2] == uVar20) goto joined_r0x01cd304c;
            }
            else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == uVar20) {
              if (plVar24[2] == uVar20) goto joined_r0x01cd304c;
            }
            else {
              if (uVar21 <= uVar22) {
                uVar5 = 0;
                if (uVar21 != 0) {
                  uVar5 = uVar22 / uVar21;
                }
                uVar22 = uVar22 - uVar5 * uVar21;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    local_c8 = (long *)0x0;
    FUN_00d7e99c(*plVar11,&local_c8,1);
    puVar12 = local_c0;
    if (local_c8 != (long *)0x0) {
      lVar27 = local_c8[0xb];
      piVar1 = (int *)(lVar27 + 0xc);
      do {
        iVar18 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar18 + -1 == 0) {
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
        puVar12 = local_c0;
      }
    }
joined_r0x01cd304c:
    local_c0 = puVar12;
    if (puVar12 != (ulong *)0x0) {
      puVar2 = puVar12 + 1;
      do {
        iVar18 = (int)*puVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *(int *)puVar2 = iVar18;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar18 == 0) {
        puVar12[2] = 0;
        if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar13), iVar18 != 0)) {
          FUN_00100250(puVar16,puVar14,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar13);
        }
        lVar27 = *(long *)puVar14;
        *(long *)puVar15 = lVar27;
        local_70[0] = (undefined8 *)*puVar12;
        FUN_02a44274(lVar27 + 0xd8,local_70);
      }
    }
    puVar7 = PTR_DAT_04379498;
    puVar8 = PTR_DAT_043794a0;
    puVar9 = PTR_DAT_043794a8;
    puVar10 = PTR_LAB_04379590;
    plVar24 = local_a8;
    plVar25 = local_a0;
    local_a0 = plVar26;
    PTR_LAB_04379590 = puVar16;
    PTR_DAT_043794a8 = puVar15;
    PTR_DAT_043794a0 = puVar14;
    PTR_DAT_04379498 = puVar13;
  }
  if (plVar24 != (long *)0x0) {
    if (plVar25 != plVar24) {
      plVar26 = (long *)plVar25[-1];
      local_a0 = plVar25;
      if (plVar26 != (long *)0x0) {
        lVar27 = plVar26[0xb];
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar18 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*plVar26 + 0x20))();
        }
      }
      if (plVar25 + -1 != plVar24) {
        plVar25 = plVar25 + -2;
        plVar26 = (long *)*plVar25;
        if (plVar26 != (long *)0x0) {
          lVar27 = plVar26[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar18 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar18 + -1 == 0) goto LAB_01cd3168;
        }
LAB_01cd313c:
        if (plVar25 != plVar24) {
          while( true ) {
            plVar25 = plVar25 + -1;
            plVar26 = (long *)*plVar25;
            if (plVar26 == (long *)0x0) break;
            lVar27 = plVar26[0xb];
            piVar1 = (int *)(lVar27 + 0xc);
            do {
              iVar18 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar18 + -1 != 0) break;
LAB_01cd3168:
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar26 + 0x20))();
            if (plVar25 == plVar24) goto LAB_01cd3184;
          }
          goto LAB_01cd313c;
        }
      }
    }
LAB_01cd3184:
    plVar11 = plStack_90;
    plVar26 = local_a8;
    lVar27 = local_98 - (long)local_a8;
    local_a0 = plVar24;
    uVar20 = (**(code **)(*plStack_90 + 0xc0))(plStack_90);
    if ((uVar20 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar11,plVar26,lVar27,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,plVar26,lVar27,8);
  }
  return;
}


