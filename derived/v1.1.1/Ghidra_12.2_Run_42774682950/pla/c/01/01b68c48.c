/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b68c48; name: FUN_01b68c48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b68c48(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  float fVar21;
  long *local_e8;
  undefined8 uStack_e0;
  long *local_d8 [4];
  long *local_b8;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x220) != 0) {
    FUN_009acf14(&local_70);
    puVar9 = PTR_DAT_043796e8;
    puVar6 = PTR_DAT_043796e0;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_70 != (long *)0x0) {
      lVar16 = *(long *)(param_1 + 0x240);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
        piVar1 = (int *)(lVar16 + 0xc);
        iVar11 = *(int *)(lVar16 + 0xc);
        while( true ) {
          plVar19 = *(long **)(lVar16 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar15;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar9 = puVar8;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar19 == (long *)0x0) goto LAB_01b68cb0;
            if (plVar19 == (long *)puVar9) break;
            plVar19 = (long *)*plVar19;
          }
          iVar10 = *piVar1;
          if (iVar10 == iVar11) break;
          ClearExclusiveLocal();
LAB_01b68d1c:
          iVar11 = iVar10;
          if (iVar10 == 0) goto LAB_01b68cb0;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01b68d1c;
        lVar16 = *(long *)(lVar16 + 0x18);
        plVar19 = (long *)(lVar16 + -0x50);
        if (lVar16 == 0) goto LAB_01b68cb0;
        FUN_0199c5b0(&local_a8,plVar19);
        if (local_a8 == (undefined8 *)0x0) {
          local_78 = (long *)0x0;
          pbVar4 = PTR_DAT_043794b0;
          puVar20 = (undefined8 *)PTR_DAT_043794b8;
        }
        else {
          FUN_009cd8d4(&local_78);
          puVar17 = local_a8;
          pbVar4 = PTR_DAT_043794b0;
          puVar20 = (undefined8 *)PTR_DAT_043794b8;
          if (local_a8 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_a8 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            pbVar4 = PTR_DAT_043794b0;
            puVar20 = (undefined8 *)PTR_DAT_043794b8;
            if (iVar11 + -1 == 0) {
              local_a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_d8[0] = (long *)*puVar17;
              FUN_02a44274(lVar18 + 0xd8,local_d8);
              pbVar4 = PTR_DAT_043794b0;
              puVar20 = (undefined8 *)PTR_DAT_043794b8;
            }
          }
        }
        PTR_DAT_043794b0 = pbVar4;
        PTR_DAT_043794b8 = (undefined *)puVar20;
        if (local_78 != (long *)0x0) {
          lVar18 = *(long *)(param_1 + 0x1a8);
          if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) {
LAB_01b68d90:
            plVar12 = (long *)0x0;
          }
          else {
            piVar1 = (int *)(lVar18 + 0xc);
            iVar11 = *(int *)(lVar18 + 0xc);
            do {
              puVar17 = *(undefined8 **)(lVar18 + 0x10);
              if (((*pbVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar4), iVar10 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)puVar8 = uVar15;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)PTR_DAT_043794c8 = puVar8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *puVar20 = PTR_DAT_043794c8;
                __cxa_guard_release(pbVar4);
              }
              if (puVar17 == (undefined8 *)0x0) goto LAB_01b68d90;
              while (puVar17 != puVar20) {
                puVar17 = (undefined8 *)*puVar17;
                plVar12 = (long *)0x0;
                if (puVar17 == (undefined8 *)0x0) goto LAB_01b68d94;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 != '\0') goto LAB_01b69420;
                plVar12 = (long *)0x0;
                if (*(long *)(lVar18 + 0x18) != 0) {
                  plVar12 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
                }
                break;
              }
              ClearExclusiveLocal();
LAB_01b69420:
              plVar12 = (long *)0x0;
              iVar11 = iVar10;
            } while (iVar10 != 0);
          }
LAB_01b68d94:
          uVar5 = _UNK_03888fc8;
          uVar15 = _DAT_03888fc0;
          fVar21 = *(float *)(param_1 + 0x278);
          *(undefined1 *)(plVar12 + 0x1c) = 1;
          plVar12[0x17] = CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar21,(float)uVar5 * fVar21);
          plVar12[0x16] = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar21,(float)uVar15 * fVar21);
          if (plVar12 == (long *)0x0) {
LAB_01b68dd0:
            lVar18 = *(long *)(param_1 + 0x1a8);
            if (lVar18 == 0) goto LAB_01b68dd8;
LAB_01b690b8:
            puVar6 = PTR_DAT_043794b0;
            if (*(int *)(lVar18 + 0xc) == 0) goto LAB_01b68dd8;
            piVar1 = (int *)(lVar18 + 0xc);
            iVar11 = *(int *)(lVar18 + 0xc);
            do {
              puVar20 = *(undefined8 **)(lVar18 + 0x10);
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)puVar8 = uVar15;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)PTR_DAT_043794c8 = puVar8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                __cxa_guard_release(puVar6);
                if (puVar20 != (undefined8 *)0x0) goto LAB_01b69120;
                goto LAB_01b68dd8;
              }
              if (puVar20 == (undefined8 *)0x0) goto LAB_01b68dd8;
LAB_01b69120:
              while (puVar20 != (undefined8 *)PTR_DAT_043794b8) {
                puVar20 = (undefined8 *)*puVar20;
                plVar12 = (long *)0x0;
                if (puVar20 == (undefined8 *)0x0) goto LAB_01b68ddc;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 != '\0') goto LAB_01b69104;
                plVar12 = (long *)0x0;
                if (*(long *)(lVar18 + 0x18) != 0) {
                  plVar12 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
                }
                break;
              }
              ClearExclusiveLocal();
LAB_01b69104:
              plVar12 = (long *)0x0;
              iVar11 = iVar10;
            } while (iVar10 != 0);
          }
          else {
            lVar18 = plVar12[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 != 0) goto LAB_01b68dd0;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))();
            lVar18 = *(long *)(param_1 + 0x1a8);
            if (lVar18 != 0) goto LAB_01b690b8;
LAB_01b68dd8:
            plVar12 = (long *)0x0;
          }
LAB_01b68ddc:
          FUN_01f07da0(&local_a8,local_78,0);
          puVar20 = local_a8;
          puVar6 = PTR_DAT_0437a740;
          if ((local_a8 == (undefined8 *)0x0) || (*(int *)((long)local_a8 + 0xc) == 0)) {
LAB_01b68df4:
            local_e8 = (long *)0x0;
          }
          else {
            piVar1 = (int *)((long)local_a8 + 0xc);
            iVar11 = *(int *)((long)local_a8 + 0xc);
            while( true ) {
              plVar13 = (long *)puVar20[2];
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                  uVar15 = FUN_0087f8f0();
                  *(undefined8 *)puVar8 = uVar15;
                  __cxa_guard_release(puVar7);
                }
                *(undefined **)PTR_DAT_0437a748 = puVar8;
                __cxa_guard_release(puVar6);
                if (plVar13 != (long *)0x0) goto LAB_01b692f0;
                goto LAB_01b68df4;
              }
              while( true ) {
                if (plVar13 == (long *)0x0) goto LAB_01b68df4;
LAB_01b692f0:
                if (plVar13 == (long *)PTR_DAT_0437a748) break;
                plVar13 = (long *)*plVar13;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) break;
              ClearExclusiveLocal();
LAB_01b692d8:
              iVar11 = iVar10;
              if (iVar10 == 0) goto LAB_01b68df4;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01b692d8;
            lVar18 = puVar20[3];
            local_e8 = (long *)0x0;
            if (lVar18 != 0) {
              local_e8 = (long *)(lVar18 + -0x50);
            }
          }
          plVar13 = (long *)FUN_00ad6a1c(plVar12,plVar12[1],&local_e8);
          puVar20 = local_a8;
          if (local_e8 != (long *)0x0) {
            lVar18 = local_e8[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_e8 + 0x20))();
              puVar20 = local_a8;
            }
          }
          if (puVar20 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar20 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              puVar20[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_d8[0] = (long *)*puVar20;
              FUN_02a44274(lVar18 + 0xd8,local_d8);
            }
          }
          lVar18 = plVar12[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          local_88 = 0;
          local_80 = (long *)0x0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = (undefined8 *)(PTR_DAT_0437a6d0 + 0x10);
          uStack_a0 = 0;
          FUN_00adcc04(local_d8,param_1 + 0x200);
          uVar14 = FUN_00ad3ac4(&local_a8,1,local_d8,0,*(undefined8 *)(param_1 + 8),0);
          plVar12 = local_80;
          if (((uVar14 & 1) != 0) && (local_80 != (long *)0x0)) {
            lVar18 = local_80[0xb];
            if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar18 + 0x10) == 0) {
              uVar15 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
              *(undefined8 *)(lVar18 + 0x10) = uVar15;
            }
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar18 = plVar12[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
          }
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (local_d8[0] != (long *)0x0) {
            (**(code **)(*local_d8[0] + 0x20))();
          }
          FUN_02c90b20(plVar13,&local_a8);
          FUN_02c90b30(plVar13);
          (**(code **)(*plVar13 + 0x10))(local_d8,plVar13);
          local_e8 = (long *)0x0;
          uStack_e0 = 0;
          FUN_00ad3450(&local_e8,local_d8);
          plVar12 = local_d8[0];
          if (local_d8[0] != (long *)0x0) {
            plVar13 = local_d8[0] + 1;
            do {
              iVar11 = (int)*plVar13 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *(int *)plVar13 = iVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 == 0) {
              local_d8[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_68 = *plVar12;
              FUN_02a44274(lVar18 + 0xd8,&local_68);
            }
          }
          FUN_00ad52f4(param_1 + 0x1f0,&local_e8);
          plVar12 = local_e8;
          if (local_e8 != (long *)0x0) {
            plVar13 = local_e8 + 1;
            do {
              iVar11 = (int)*plVar13 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *(int *)plVar13 = iVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 == 0) {
              local_e8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_d8[0] = (long *)*plVar12;
              FUN_02a44274(lVar18 + 0xd8,local_d8);
            }
          }
          FUN_00984b00(&local_a8);
          if (local_78 != (long *)0x0) {
            lVar18 = local_78[0xb];
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
        }
        lVar16 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 != 0) goto LAB_01b68cb0;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
        if (local_70 == (long *)0x0) {
          return;
        }
        goto LAB_01b68cb8;
      }
LAB_01b68cb0:
      if (local_70 != (long *)0x0) {
LAB_01b68cb8:
        lVar16 = local_70[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
  }
  return;
}


