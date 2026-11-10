/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d81464; name: FUN_00d81464
 */


void FUN_00d81464(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar16 = *(int *)(lVar11 + 0xc);
    do {
      puVar17 = *(undefined8 **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(puVar4,param_2,param_3), param_2 = extraout_x1_00, iVar9 != 0)
         ) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar10;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
        param_2 = extraout_x1_01;
      }
      while( true ) {
        if (puVar17 == (undefined8 *)0x0) goto LAB_00d8148c;
        if (puVar17 == (undefined8 *)puVar5) break;
        puVar17 = (undefined8 *)*puVar17;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar16) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          plVar12 = (long *)(lVar11 + -0x50);
          if (lVar11 != 0) {
            auVar18 = FUN_00b13c20(lVar11 + 0xa0,auStack_68,param_3);
            if ((auVar18._0_8_ == 0) &&
               (auVar18 = FUN_00aeb4a0(plVar12,*(undefined8 *)(lVar11 + -0x48),param_1 + 0x260),
               auVar18._0_8_ == 0)) goto LAB_00d815d8;
            uVar10 = auVar18._8_8_;
            lVar13 = auVar18._0_8_;
            lVar15 = *(long *)(lVar13 + 0x58);
            if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar15 + 0x10) == 0) {
                auVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                uVar10 = auVar18._8_8_;
                *(long *)(lVar15 + 0x10) = auVar18._0_8_;
              }
              auVar18._8_8_ = uVar10;
              auVar18._0_8_ = lVar13;
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB_00d815d8:
              uVar10 = auVar18._8_8_;
              plVar14 = auVar18._0_8_;
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar16 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
                uVar10 = extraout_x1;
              }
              local_70 = plVar14;
              if (plVar14 == (long *)0x0) goto LAB_00d81490;
              lVar11 = plVar14[0xb];
              puVar17 = *(undefined8 **)(lVar11 + 0x18);
              if (puVar17 != (undefined8 *)0x0) {
                if (*(long *)(lVar11 + 0x10) == 0) {
                  uVar10 = (**(code **)*puVar17)(puVar17,uVar10,param_3);
                  *(undefined8 *)(lVar11 + 0x10) = uVar10;
                }
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                FUN_00d807f4(param_1,&local_70,param_3,param_4 & 1);
                lVar11 = plVar14[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                }
                lVar11 = plVar14[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                  return;
                }
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar9;
    } while (iVar9 != 0);
  }
LAB_00d8148c:
  local_70 = (long *)0x0;
LAB_00d81490:
  FUN_00d807f4(param_1,&local_70,param_3,param_4 & 1);
  return;
}


