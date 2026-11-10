/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a9bfd8; name: FUN_00a9bfd8
 */


uint FUN_00a9bfd8(long param_1)

{
  int *piVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0 [12];
  long *local_60;
  long *local_58;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0xc3) != '\0') {
    uVar9 = 1;
    goto LAB_00a9c1d4;
  }
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379578), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar13 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar13;
  lVar13 = *(long *)(lVar13 + 200);
  uVar3 = *(ulong *)(lVar13 + 0xd8);
  plVar14 = (long *)**(long **)(lVar13 + 0xd0);
  if ((uVar3 & uVar3 - 1) == 0) {
    do {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14[1] != 0);
    } while (*(int *)(plVar14 + 2) != 0);
  }
  else {
    do {
      do {
        plVar14 = (long *)*plVar14;
      } while (plVar14[1] != 0);
    } while ((int)plVar14[2] != 0);
  }
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar13 = FUN_009b807c(plVar14 + 0x1e,&local_e0);
  if (lVar13 == 0) {
LAB_00a9c1b0:
    uVar9 = 0;
  }
  else {
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    FUN_00ac3fa4(&local_e0,lVar13 + 0x248);
    FUN_0099c748(&local_58,&local_e0);
    pcVar15 = local_e0;
    if (local_e0 != (code *)0x0) {
      pcVar2 = local_e0 + 8;
      do {
        iVar11 = *(int *)pcVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar5) {
          *(int *)pcVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(local_e0 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *(undefined8 *)pcVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    if (local_58 == (long *)0x0) goto LAB_00a9c1b0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    FUN_01a2bf84(&local_e0,local_58 + 0xb9);
    if (local_e0 == (code *)0x0) {
      local_60 = (long *)0x0;
LAB_00a9c140:
      if (local_60 == (long *)0x0) goto LAB_00a9c340;
LAB_00a9c148:
      FUN_01a50850(&local_e0);
      pcVar15 = local_e0;
      puVar8 = PTR_DAT_0437a408;
      puVar7 = PTR_DAT_0437a400;
      if (local_e0 == (code *)0x0) {
        uVar9 = 0;
      }
      else {
        if (*(int *)(local_e0 + 0xc) != 0) {
          pcVar2 = local_e0 + 0xc;
          iVar11 = *(int *)(local_e0 + 0xc);
          do {
            plVar16 = *(long **)(pcVar15 + 0x10);
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              uVar12 = FUN_009cdcc0();
              *(undefined8 *)puVar8 = uVar12;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_00a9c524;
              if (plVar16 == (long *)puVar8) break;
              plVar16 = (long *)*plVar16;
            }
            iVar10 = *(int *)pcVar2;
            if (iVar10 == iVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar5) {
                *(int *)pcVar2 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar13 = *(long *)(pcVar15 + 0x18);
                plVar16 = (long *)0x0;
                pcVar15 = local_e0;
                if (lVar13 != 0) {
                  plVar16 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x00a9c414;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_00a9c524:
        plVar16 = (long *)0x0;
        pcVar15 = local_e0;
joined_r0x00a9c414:
        local_e0 = pcVar15;
        if (pcVar15 != (code *)0x0) {
          pcVar2 = pcVar15 + 8;
          do {
            iVar11 = *(int *)pcVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar5) {
              *(int *)pcVar2 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(pcVar15 + 0x10) = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_48 = *(undefined8 *)pcVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_48);
          }
        }
        if (plVar16 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          local_e0 = FUN_00aa06f0;
          local_d8 = FUN_00aa083c;
          local_d0 = &LAB_00aa0840;
          puStack_c8 = &LAB_00aa084c;
          local_c0[0] = (undefined1 *)&local_e0;
          local_48 = FUN_028dd088(plVar16);
          uVar9 = (*local_e0)(local_c0,&local_48);
          pcVar15 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            puStack_c8 = (undefined1 *)0x0;
            local_e0 = (code *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar15)(local_c0);
          }
          lVar13 = plVar16[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
      }
      if (local_60 != (long *)0x0) {
        lVar13 = local_60[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 1) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
      }
      bVar5 = true;
    }
    else {
      FUN_009cf990(&local_60);
      pcVar15 = local_e0;
      if (local_e0 == (code *)0x0) goto LAB_00a9c140;
      pcVar2 = local_e0 + 8;
      do {
        iVar11 = *(int *)pcVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar5) {
          *(int *)pcVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 != 0) goto LAB_00a9c140;
      *(undefined8 *)(local_e0 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *(undefined8 *)pcVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
      if (local_60 != (long *)0x0) goto LAB_00a9c148;
LAB_00a9c340:
      uVar9 = (uint)pcVar15;
      bVar5 = false;
    }
    if (local_58 != (long *)0x0) {
      lVar13 = local_58[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (!bVar5) goto LAB_00a9c1b0;
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
LAB_00a9c1d4:
  return uVar9 & 1;
}


