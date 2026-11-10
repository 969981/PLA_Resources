/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aabe2c; name: FUN_00aabe2c
 */


undefined1  [16] FUN_00aabe2c(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long extraout_d0;
  long lVar19;
  long extraout_d0_00;
  undefined1 auVar20 [16];
  long lVar21;
  undefined1 in_q3 [16];
  long lVar22;
  long local_90;
  long lStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar22 = in_q3._8_8_;
  lVar21 = in_q3._0_8_;
  lVar15 = FUN_0095992c(*param_1 + 0xf0,&local_78);
  lVar19 = extraout_d0;
  if (lVar15 != 0) {
    lVar19 = FUN_01839c8c(&local_78,lVar15 + 0xad0);
    if (local_78 != (long *)0x0) {
      lVar17 = local_78[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      lVar7 = local_78[0xf];
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        lVar19 = (**(code **)(*local_78 + 0x20))();
      }
      if ((char)lVar7 != '\0') {
        local_78 = (long *)0x0;
        uStack_70 = 0;
        lVar19 = FUN_01a0703c(&local_78,lVar15 + 0xad0);
        plVar6 = local_78;
        puVar12 = PTR_DAT_0437a590;
        puVar11 = PTR_DAT_0437a588;
        puVar10 = PTR_DAT_0437a580;
        puVar9 = PTR_DAT_043794d8;
        puVar8 = PTR_DAT_043794d0;
        if (local_78 != (long *)0x0) {
          if (*(int *)((long)local_78 + 0xc) != 0) {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar13 = *(int *)((long)local_78 + 0xc);
            do {
              plVar18 = (long *)plVar6[2];
              if (((*puVar10 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(puVar10), lVar19 = extraout_d0_00, iVar14 != 0)) {
                if (((*PTR_DAT_0437a598 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar14 != 0)) {
                  if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                    uVar16 = FUN_0087f8f0();
                    *(undefined8 *)puVar9 = uVar16;
                    __cxa_guard_release(puVar8);
                  }
                  *(undefined **)puVar11 = puVar9;
                  __cxa_guard_release(PTR_DAT_0437a598);
                }
                *(undefined **)puVar12 = puVar11;
                lVar19 = __cxa_guard_release(puVar10);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto LAB_00aac1ac;
                if (plVar18 == (long *)puVar12) break;
                plVar18 = (long *)*plVar18;
              }
              iVar14 = *piVar1;
              if (iVar14 == iVar13) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar15 = plVar6[3];
                  plVar6 = (long *)0x0;
                  plVar18 = local_78;
                  if (lVar15 != 0) {
                    plVar6 = (long *)(lVar15 + -0x50);
                  }
                  goto joined_r0x00aac0b0;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar13 = iVar14;
            } while (iVar14 != 0);
          }
LAB_00aac1ac:
          plVar6 = (long *)0x0;
          plVar18 = local_78;
joined_r0x00aac0b0:
          local_78 = plVar18;
          if (plVar18 != (long *)0x0) {
            plVar2 = plVar18 + 1;
            do {
              iVar13 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              plVar18[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_68 = *plVar18;
              lVar19 = FUN_02a44274(lVar19 + 0xd8,&local_68);
            }
          }
          if (plVar6 != (long *)0x0) {
            bVar4 = (char)plVar6[0x10] != '\0';
            if (bVar4) {
              lStack_88 = plVar6[0x13];
              local_90 = plVar6[0x12];
            }
            lVar19 = plVar6[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))(plVar6);
            }
            lVar19 = local_90;
            if (bVar4) goto LAB_00aabf7c;
          }
        }
      }
    }
  }
  lVar19 = FUN_009b807c(lVar19,*param_1 + 0xf0,&local_78);
  local_90 = lVar21;
  lStack_88 = lVar22;
  if (lVar19 != 0) {
    FUN_01a73650(&local_78);
    FUN_00956dac(&local_80,&local_78);
    plVar6 = local_78;
    local_90 = lVar21;
    lStack_88 = lVar22;
    if (local_78 != (long *)0x0) {
      plVar18 = local_78 + 1;
      do {
        iVar13 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_68 = *plVar6;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
        local_90 = lVar21;
        lStack_88 = lVar22;
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x40))();
      if (local_80 != (long *)0x0) {
        lVar19 = local_80[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
      goto LAB_00aabf7c;
    }
  }
  (**(code **)(*(long *)*param_1 + 0x40))();
LAB_00aabf7c:
  auVar20._8_8_ = lStack_88;
  auVar20._0_8_ = local_90;
  return auVar20;
}


