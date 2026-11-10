/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed1038; name: FUN_01ed1038
 */


void FUN_01ed1038(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 local_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  plVar14 = (long *)*param_2;
  *param_2 = 0;
  plVar10 = (long *)(**(code **)plVar14[10])(plVar14 + 10);
  puVar6 = PTR_DAT_043794b8;
  if (((*PTR_DAT_043794b0 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar7 = PTR_DAT_043794c8, iVar9 != 0)) {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar8 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar11;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar7 = puVar8;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar6 = puVar7;
    __cxa_guard_release(PTR_DAT_043794b0);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (plVar10 == (long *)puVar6) {
      plVar10 = (long *)FUN_01ece0a8(plVar14 + 0x1e);
      puVar6 = PTR_DAT_0437ada0;
      if (((plVar10 != (long *)0x0) && (lVar15 = *param_1, lVar15 != 0)) &&
         (*(int *)(lVar15 + 0xc) != 0)) {
        piVar1 = (int *)(lVar15 + 0xc);
        iVar9 = *(int *)(lVar15 + 0xc);
        goto LAB_01ed1118;
      }
      break;
    }
  }
  goto LAB_01ed10ac;
LAB_01ed1118:
  do {
    plVar17 = *(long **)(lVar15 + 0x10);
    FUN_01ecaa70();
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_01ed10ac;
      if (plVar17 == (long *)puVar6) break;
      plVar17 = (long *)*plVar17;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01ed1158;
      lVar15 = *(long *)(lVar15 + 0x18);
      if (lVar15 != 0) {
        local_70 = 0;
        local_88 = 0;
        local_7c = 0;
        uStack_78 = 0;
        local_74 = local_74 & 0xffffff00;
        local_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        (**(code **)(*plVar10 + 0x18))(local_68);
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        FUN_01eacb9c(&local_a8,local_68);
        puVar5 = local_68[0];
        if (local_68[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68[0] + 1);
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
            local_68[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar5;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        plVar17 = (long *)(lVar15 + -0x50);
        FUN_01eacf70(&local_98,&local_a8);
        puVar5 = local_a8;
        if (local_a8 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a8 + 1);
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
            local_a8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68[0] = (undefined8 *)*puVar5;
            FUN_02a44274(lVar13 + 0xd8,local_68);
          }
        }
        lVar13 = plVar10[0xc2];
        plVar16 = (long *)plVar10[0xc5];
        if (plVar16 == (long *)0x0) {
          local_88 = lVar13;
        }
        else {
          (**(code **)(*plVar16 + 0x18))(plVar16);
          local_88 = lVar13;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
        local_80 = (undefined4)plVar10[0xbf];
        local_7c = *(undefined4 *)(lVar15 + 0x36c);
        if (((*PTR_DAT_0437a708 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a708);
        }
        uVar11 = *(undefined8 *)PTR_DAT_0437a710;
        *(undefined8 *)PTR_DAT_0437a718 = uVar11;
        FUN_010aace4(uVar11,*(undefined8 *)(lVar15 + 0x328),*(undefined1 *)(lVar15 + 0x348));
        FUN_01ed0828(lVar15 + 0x200,*(undefined8 *)(lVar15 + 0x200),&local_98);
        plVar18 = *(long **)(lVar15 + 0x240);
        for (plVar16 = *(long **)(lVar15 + 0x238); plVar16 != plVar18; plVar16 = plVar16 + 1) {
          lVar13 = *plVar16;
          if ((*(char *)(lVar13 + 0x68) == '\0') && (*(long *)(lVar13 + 0xa0) == local_88)) {
            *(undefined8 *)(lVar13 + 0x70) = 0;
            *(undefined8 *)(lVar13 + 0x78) = 0;
            FUN_01ead384((undefined8 *)(lVar13 + 0x70),&local_98);
            *(undefined4 *)(lVar13 + 0x98) = local_70;
            *(long *)(lVar13 + 0x80) = local_88;
            *(ulong *)(lVar13 + 0x88) = CONCAT44(local_7c,local_80);
            *(ulong *)(lVar13 + 0x90) = CONCAT44(local_74,uStack_78);
            *(undefined1 *)(lVar13 + 0x68) = 1;
          }
        }
        *(undefined1 *)(lVar15 + 0x349) = 1;
        if (((*PTR_DAT_04379578 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379578);
        }
        uVar11 = *(undefined8 *)PTR_DAT_04379580;
        *(undefined8 *)PTR_DAT_04379588 = uVar11;
        uVar12 = FUN_00956f14(uVar11,1,0);
        if (((uVar12 & 1) != 0) || (uVar12 = FUN_01f05ac0(), puVar5 = local_98, (uVar12 & 1) != 0))
        {
          lVar13 = plVar10[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_01ec885c(plVar17);
          if ((char)plVar10[0xc6] == '\0') {
            *(undefined1 *)((long)plVar10 + 0x4da) = 1;
          }
          else {
            FUN_01e9ba4c(plVar10);
          }
          (**(code **)(*plVar10 + 0x128))(plVar10);
          lVar13 = plVar10[0xb];
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
          puVar5 = local_98;
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))();
            puVar5 = local_98;
          }
        }
        local_98 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
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
            puVar5[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68[0] = (undefined8 *)*puVar5;
            FUN_02a44274(lVar13 + 0xd8,local_68);
          }
        }
        lVar15 = *(long *)(lVar15 + 8);
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 != 0) break;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
        if (plVar14 == (long *)0x0) {
          return;
        }
        goto LAB_01ed10b0;
      }
      break;
    }
    ClearExclusiveLocal();
LAB_01ed1158:
    iVar9 = iVar2;
  } while (iVar2 != 0);
LAB_01ed10ac:
  if (plVar14 != (long *)0x0) {
LAB_01ed10b0:
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
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
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


