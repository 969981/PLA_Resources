/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0af34; name: thunk_FUN_01a9a884
 */


undefined1  [16] thunk_FUN_01a9a884(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 extraout_d0;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 in_q3 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *aplStack_70 [2];
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  auVar6._8_8_ = uStack_78;
  auVar6._0_8_ = param_2;
  auVar17._8_8_ = uStack_78;
  auVar17._0_8_ = param_2;
  uVar19 = in_q3._8_8_;
  uVar18 = in_q3._0_8_;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_80 = FUN_00ae8374(&plStack_60,param_1 + 0x220);
  plVar8 = plStack_60;
  puVar10 = PTR_DAT_04379e80;
  puVar9 = PTR_DAT_04379e78;
  if (plStack_60 != (long *)0x0) {
    if (*(int *)((long)plStack_60 + 0xc) != 0) {
      piVar1 = (int *)((long)plStack_60 + 0xc);
      iVar12 = *(int *)((long)plStack_60 + 0xc);
      do {
        plVar16 = (long *)plVar8[2];
        if (((*puVar9 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(puVar9), uStack_80 = extraout_d0, iVar11 != 0)) {
          uVar13 = FUN_0095a420();
          *(undefined8 *)puVar10 = uVar13;
          uStack_80 = __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01a9a9a8;
          if (plVar16 == (long *)puVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar14 = plVar8[3];
            plVar8 = (long *)0x0;
            plVar16 = plStack_60;
            if (lVar14 != 0) {
              plVar8 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x01a9a9cc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01a9a9a8:
    plVar8 = (long *)0x0;
    plVar16 = plStack_60;
joined_r0x01a9a9cc:
    plStack_60 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar15 = plVar16 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        lStack_48 = *plVar16;
        uStack_80 = FUN_02a44274(lVar14 + 0xd8,&lStack_48);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_00aae1c0(&plStack_60,plVar8);
      plVar16 = plStack_60;
      bVar4 = false;
      if (plStack_60 != (long *)0x0) {
        if (*(int *)((long)plStack_60 + 0xc) != 0) {
          piVar1 = (int *)((long)plStack_60 + 0xc);
          iVar12 = *(int *)((long)plStack_60 + 0xc);
          do {
            plVar15 = (long *)plVar16[2];
            lVar14 = FUN_00a3edb8();
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01a9ab58;
              if (plVar15 == (long *)lVar14) break;
              plVar15 = (long *)*plVar15;
            }
            iVar11 = *piVar1;
            if (iVar11 == iVar12) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar14 = plVar16[3];
                plVar16 = (long *)0x0;
                plVar15 = plStack_60;
                if (lVar14 != 0) {
                  plVar16 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x01a9ab50;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar11;
          } while (iVar11 != 0);
        }
LAB_01a9ab58:
        plVar16 = (long *)0x0;
        plVar15 = plStack_60;
joined_r0x01a9ab50:
        plStack_60 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
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
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            lStack_48 = *plVar15;
            FUN_02a44274(lVar14 + 0xd8,&lStack_48);
          }
        }
        bVar4 = false;
        auVar17 = auVar6;
        if (plVar16 != (long *)0x0) {
          FUN_00aae1c0(aplStack_70,plVar8);
          auVar17 = FUN_00ae5e28(aplStack_70,param_2);
          if (aplStack_70[0] != (long *)0x0) {
            plVar15 = aplStack_70[0] + 1;
            do {
              iVar12 = (int)*plVar15 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar4) {
                *(int *)plVar15 = iVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 == 0) {
              aplStack_70[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              plStack_60 = (long *)*aplStack_70[0];
              FUN_02a44274(lVar14 + 0xd8,&plStack_60);
            }
          }
          lVar14 = plVar16[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 == 1) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          bVar4 = true;
        }
      }
      uStack_80 = auVar17._0_8_;
      lVar14 = plVar8[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      if (bVar4) {
        return auVar17;
      }
    }
  }
  FUN_009c69bc(&plStack_60,uStack_80,param_1);
  (**(code **)(*plStack_60 + 0x40))();
  if (plStack_60 != (long *)0x0) {
    lVar14 = plStack_60[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plStack_60 + 0x20))();
    }
  }
  auVar7._8_8_ = uVar19;
  auVar7._0_8_ = uVar18;
  return auVar7;
}


