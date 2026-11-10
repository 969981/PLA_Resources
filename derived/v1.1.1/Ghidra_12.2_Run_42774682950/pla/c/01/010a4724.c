/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a4724; name: FUN_010a4724
 */


void FUN_010a4724(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  long *local_f8 [4];
  long *local_d8;
  long *local_c8;
  uint local_c0;
  ushort local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  ushort local_a8 [28];
  long local_70 [2];
  
  lVar2 = param_1 + 0x4a90;
  lVar21 = 0;
  iVar22 = 0;
  do {
    lVar21 = lVar21 + 1;
    bVar19 = 0;
    plVar23 = (long *)*(&DAT_043f23a0)[lVar21 * 4];
    lVar7 = (&DAT_043f23a0)[lVar21 * 4][1] - (long)plVar23;
    if (lVar7 != 0) {
      bVar15 = 0;
      uVar12 = 0;
      lVar17 = *plVar23;
      while( true ) {
        if (lVar17 != 0) {
          bVar19 = bVar19 + 1;
          local_a8[bVar15] = (ushort)uVar12;
          bVar15 = bVar19;
        }
        uVar12 = uVar12 + 1;
        if ((ulong)(lVar7 >> 3) <= uVar12) break;
        lVar17 = plVar23[uVar12];
      }
    }
    uVar20 = (uint)lVar21;
    lVar7 = 0;
    if ((uVar20 | 1) != 0x38b) {
      lVar7 = lVar21;
    }
    bVar15 = 0;
    do {
      uVar4 = local_a8[bVar15];
      uVar3 = 0;
      if ((uVar20 | 1) != 0x38b) {
        uVar3 = (uint)uVar4;
      }
      uVar12 = (ulong)uVar3;
      if (uVar3 < 0x1c) {
        lVar17 = *(&DAT_043f23a0)[lVar7 * 4];
        uVar16 = (&DAT_043f23a0)[lVar7 * 4][1] - lVar17 >> 3;
        if ((uVar16 <= uVar12) || (*(long *)(lVar17 + uVar12 * 8) == 0)) goto LAB_010a4818;
      }
      else {
LAB_010a4818:
        uVar12 = 0;
        lVar17 = *DAT_043f23a0;
        uVar16 = DAT_043f23a0[1] - lVar17 >> 3;
      }
      if (uVar16 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      piVar13 = *(int **)(lVar17 + uVar12 * 8);
      if (((8 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
          (uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[4], uVar12 != 0)) &&
         (*(char *)((long)piVar13 + uVar12) != '\0')) {
        local_b4 = 0;
        local_b0 = 0xffffffff00000000;
        local_b8 = 0;
        local_c0 = uVar20;
        local_bc = uVar4;
        if (((*PTR_DAT_04379618 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379618), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379618);
        }
        *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
        FUN_00ae4ea0(local_f8);
        FUN_00b12de0(&local_c8,local_f8[0]);
        plVar23 = (long *)local_c8[0x13];
        if (plVar23 != (long *)0x0) {
          lVar17 = plVar23[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_010a4d48;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar9;
          }
          piVar13 = (int *)(lVar17 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = *piVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar10 = local_f8[0];
        plVar18 = local_c8;
        if (local_c8 != (long *)0x0) {
          lVar17 = local_c8[0xb];
          piVar13 = (int *)(lVar17 + 0xc);
          do {
            iVar8 = *piVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            plVar18 = (long *)(**(code **)(*local_c8 + 0x20))();
            plVar10 = local_f8[0];
          }
        }
        local_f8[0] = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 1;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            plVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_70[0] = *plVar10;
            plVar18 = (long *)FUN_02a44274(lVar17 + 0xd8,local_70);
          }
        }
        auVar24 = FUN_010a4d60(plVar18,&local_c0);
        lVar17 = FUN_00b078ec(plVar23,auVar24._0_8_,auVar24._8_8_);
        plVar10 = (long *)0x0;
        if (lVar17 != 0) {
          lVar11 = param_1 + (long)iVar22 * 0x30 + 0x350;
          FUN_00adcc04(local_f8,lVar17 + 0x60);
          uVar12 = FUN_00938764(lVar11,1,local_f8,0,*(undefined8 *)(param_1 + 8),
                                *(long *)(param_1 + 0x4f70) + 0x98);
          if (((uVar12 & 1) != 0) &&
             (plVar10 = *(long **)(param_1 + (long)iVar22 * 0x30 + 0x378), plVar10 != (long *)0x0))
          {
            lVar14 = plVar10[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_010a4d48;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar9;
            }
            piVar13 = (int *)(lVar14 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = *piVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar14 = plVar10[0xb];
            piVar13 = (int *)(lVar14 + 0xc);
            do {
              iVar8 = *piVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
          }
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          if (local_f8[0] != (long *)0x0) {
            (**(code **)(*local_f8[0] + 0x20))();
          }
          local_f8[0] = auVar24._0_8_;
          plVar10 = (long *)FUN_010a4f0c(lVar2,local_f8);
          *plVar10 = lVar11;
          iVar22 = iVar22 + 1;
        }
        local_b8 = 1;
        auVar24 = FUN_010a4d60(plVar10,&local_c0);
        plVar10 = auVar24._0_8_;
        lVar11 = FUN_00b078ec(plVar23,plVar10,auVar24._8_8_);
        if ((lVar11 == 0) || (lVar11 == lVar17)) {
          local_f8[0] = plVar10;
          plVar10 = (long *)FUN_010a4f0c(lVar2,local_f8);
          *plVar10 = param_1 + (long)iVar22 * 0x30 + 800;
        }
        else {
          lVar17 = param_1 + (long)iVar22 * 0x30 + 0x350;
          FUN_00adcc04(local_f8,lVar11 + 0x60);
          uVar12 = FUN_00938764(lVar17,1,local_f8,0,*(undefined8 *)(param_1 + 8),
                                *(long *)(param_1 + 0x4f70) + 0x98);
          if (((uVar12 & 1) != 0) &&
             (plVar18 = *(long **)(param_1 + (long)iVar22 * 0x30 + 0x378), plVar18 != (long *)0x0))
          {
            lVar11 = plVar18[0xb];
            if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_010a4d48:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar9;
            }
            piVar13 = (int *)(lVar11 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = *piVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar11 = plVar18[0xb];
            piVar13 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
          }
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          if (local_f8[0] != (long *)0x0) {
            (**(code **)(*local_f8[0] + 0x20))();
          }
          local_f8[0] = plVar10;
          plVar10 = (long *)FUN_010a4f0c(lVar2,local_f8);
          *plVar10 = lVar17;
          iVar22 = iVar22 + 1;
        }
        if (plVar23 != (long *)0x0) {
          lVar17 = plVar23[0xb];
          piVar13 = (int *)(lVar17 + 0xc);
          do {
            iVar8 = *piVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar23 + 0x20))(plVar23);
          }
        }
      }
      bVar15 = bVar15 + 1;
    } while (bVar15 <= bVar19);
    if (lVar21 == 0x389) {
      return;
    }
  } while( true );
}


