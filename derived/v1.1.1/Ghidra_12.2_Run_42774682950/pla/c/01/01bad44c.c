/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bad44c; name: FUN_01bad44c
 */


void FUN_01bad44c(long *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *unaff_x24;
  long *plVar21;
  undefined8 local_a0;
  uint6 local_98;
  undefined2 uStack_92;
  undefined8 local_90;
  long local_88;
  int *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x300);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_0110293c(&local_88,plVar18,param_1 + 8,*param_1 + 0x290);
    puVar6 = PTR_DAT_043796e8;
    puVar5 = PTR_DAT_043796e0;
    if (((local_88 != 0) && (*(int *)(local_88 + 0x30) != 1)) &&
       (*(char *)(local_88 + 0x70) == '\0')) {
      lVar12 = *(long *)(*param_1 + 0x488);
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
        piVar10 = (int *)(lVar12 + 0xc);
        iVar8 = *(int *)(lVar12 + 0xc);
        do {
          plVar21 = *(long **)(lVar12 + 0x10);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar9;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_01bad520;
            if (plVar21 == (long *)puVar6) break;
            plVar21 = (long *)*plVar21;
          }
          iVar7 = *piVar10;
          if (iVar7 == iVar8) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB_01bad708;
            lVar12 = *(long *)(lVar12 + 0x18);
            plVar21 = (long *)(lVar12 + -0x50);
            if (lVar12 != 0) {
              local_a0 = (int *)0x0;
              _local_98 = 0;
              FUN_008802f0(&local_a0,*(long *)(lVar12 + 0x58) + 0x58);
              local_80 = (int *)0x0;
              uStack_78 = 0;
              FUN_00ca524c(&local_80,&local_a0);
              unaff_x24 = local_a0;
              if (local_a0 != (int *)0x0) {
                piVar10 = local_a0 + 2;
                do {
                  iVar8 = *piVar10;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar2) {
                    *piVar10 = iVar8 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar8 + -1 == 0) {
                  local_a0[4] = 0;
                  local_a0[5] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_68 = *(undefined8 *)unaff_x24;
                  FUN_02a44274(lVar15 + 0xd8,&local_68);
                }
              }
              if (local_80 == (int *)0x0) {
                local_70 = (long *)0x0;
LAB_01bad864:
                if (local_70 == (long *)0x0) goto LAB_01bada14;
LAB_01bad86c:
                lVar15 = FUN_018b54c4(local_70,param_1[8]);
                puVar13 = *(uint **)(*(long *)(lVar15 + 8) + 0x250);
                piVar10 = (int *)((long)puVar13 + (ulong)*puVar13);
                puVar13 = (uint *)((long)piVar10 +
                                  (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)));
                puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                if ((ulong)*puVar13 == 0) {
LAB_01bad92c:
                  bVar2 = false;
                  if (local_70 == (long *)0x0) goto LAB_01bad954;
LAB_01bad938:
                  lVar15 = local_70[0xb];
                  piVar10 = (int *)(lVar15 + 0xc);
                  do {
                    iVar8 = *piVar10;
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                    if (bVar3) {
                      *piVar10 = iVar8 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (iVar8 + -1 != 0) goto LAB_01bad954;
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                  if (!bVar2) goto LAB_01bad994;
LAB_01bad958:
                  bVar2 = true;
                  goto joined_r0x01bad960;
                }
                lVar15 = 0;
                while( true ) {
                  uVar14 = (ulong)*(uint *)((long)puVar13 + lVar15 + 4);
                  lVar4 = lVar15 + (uVar14 - (long)*(int *)((long)puVar13 + lVar15 + uVar14 + 4));
                  if ((4 < *(ushort *)((long)puVar13 + lVar4 + 4)) &&
                     (uVar17 = (ulong)*(ushort *)((long)puVar13 + lVar4 + 8), uVar17 != 0)) break;
                  if (param_1[3] == 0) goto LAB_01bad918;
LAB_01bad8fc:
                  lVar15 = lVar15 + 4;
                  if ((ulong)*puVar13 * 4 == lVar15) goto LAB_01bad92c;
                }
                if (param_1[3] != *(long *)((long)puVar13 + lVar15 + uVar14 + uVar17 + 4))
                goto LAB_01bad8fc;
LAB_01bad918:
                unaff_x24 = (int *)((long)puVar13 + lVar15 + uVar14 + 4);
                bVar2 = true;
                if (local_70 != (long *)0x0) goto LAB_01bad938;
LAB_01bad954:
                if (bVar2) goto LAB_01bad958;
LAB_01bad994:
                bVar2 = false;
                if (plVar21 != (long *)0x0) goto LAB_01bad528;
                goto LAB_01bad544;
              }
              FUN_00ca554c(&local_70);
              unaff_x24 = local_80;
              if (local_80 == (int *)0x0) goto LAB_01bad864;
              piVar10 = local_80 + 2;
              do {
                iVar8 = *piVar10;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar2) {
                  *piVar10 = iVar8 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar8 + -1 != 0) goto LAB_01bad864;
              local_80[4] = 0;
              local_80[5] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_a0 = *(int **)unaff_x24;
              FUN_02a44274(lVar15 + 0xd8,&local_a0);
              if (local_70 != (long *)0x0) goto LAB_01bad86c;
LAB_01bada14:
              bVar2 = false;
joined_r0x01bad960:
              if (plVar21 == (long *)0x0) goto LAB_01bad544;
LAB_01bad528:
              lVar12 = *(long *)(lVar12 + 8);
              piVar10 = (int *)(lVar12 + 0xc);
              do {
                iVar8 = *piVar10;
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar3) {
                  *piVar10 = iVar8 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar8 + -1 != 0) goto LAB_01bad544;
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))();
              if (bVar2) goto LAB_01bad548;
              goto LAB_01bad624;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_01bad708:
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_01bad520:
      bVar2 = false;
LAB_01bad544:
      if (bVar2) {
LAB_01bad548:
        if (unaff_x24 != (int *)0x0) {
          puVar13 = (uint *)((long)unaff_x24 +
                            (ulong)*(ushort *)((long)unaff_x24 + (10 - (long)*unaff_x24)));
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13 + 4);
          piVar10 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
          if (*puVar16 < 5) {
            uVar19 = 0;
            uVar20 = 0;
          }
          else {
            if ((ulong)puVar16[2] == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined4 *)((long)piVar10 + (ulong)puVar16[2]);
            }
            if ((*puVar16 < 0xb) || ((ulong)puVar16[5] == 0)) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined4 *)((long)piVar10 + (ulong)puVar16[5]);
            }
          }
          piVar10 = (int *)FUN_02c53064(uVar19,uVar20);
          if (*(ushort *)((long)piVar10 - (long)*piVar10) < 0x21) {
            uVar11 = 0;
          }
          else {
            uVar14 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x10];
            uVar11 = 0;
            if (uVar14 != 0) {
              cVar1 = *(char *)((long)piVar10 + uVar14);
              uVar11 = 2;
              if (cVar1 != -1) {
                uVar11 = (uint)(cVar1 == -2);
              }
            }
          }
          local_a0._0_6_ = CONCAT24((short)uVar20,uVar19);
          local_98 = (uint6)uVar11;
          local_90 = 0;
          FUN_01104098(plVar18,param_1 + 8,*param_1 + 0x290,&local_a0);
        }
      }
    }
LAB_01bad624:
    lVar12 = plVar18[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return;
}


