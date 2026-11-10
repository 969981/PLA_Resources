/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194b958; name: FUN_0194b958
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0194b958(long param_1,long *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 in_q3 [16];
  undefined8 uVar28;
  int local_94;
  long *local_90;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar11 = PTR_DAT_04379e90;
  puVar10 = PTR_DAT_04379e88;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  uVar28 = in_q3._8_8_;
  uVar27 = in_q3._0_8_;
  plVar18 = *(long **)(param_1 + 0x98);
  do {
    if (plVar18 == (long *)0x0) {
      return;
    }
    plVar19 = (long *)plVar18[3];
    lVar20 = plVar19[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_0194bbe0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar20 = plVar19[0xb];
    local_80 = plVar19;
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0194bbe0;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar15;
    }
    plVar21 = local_80;
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*(char *)((long)local_80 + 0x81d) != '\0') goto LAB_0194babc;
    if (*(char *)((long)local_80 + 0x956) == '\0') {
      if ((*(char *)((long)local_80 + 0x95c) == '\0') ||
         (uVar16 = FUN_01ba0550(local_80), (uVar16 & 1) != 0)) {
LAB_0194babc:
        plVar21 = local_80;
      }
      else {
        FUN_00956dac(local_78,plVar21 + 0x35);
        (**(code **)(*local_78[0] + 0x40))();
        if (local_78[0] != (long *)0x0) {
          lVar20 = local_78[0][0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_78[0] + 0x20))();
          }
        }
        uVar5 = ((undefined8 *)*param_2)[1];
        uVar15 = *(undefined8 *)*param_2;
        fVar22 = (float)uVar15 - (float)uVar27;
        fVar23 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
        fVar24 = (float)uVar5 - (float)uVar28;
        fVar25 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar28 >> 0x20);
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        fVar24 = fVar24 * fVar24;
        fVar25 = fVar25 * fVar25;
        auVar26._4_4_ = fVar23;
        auVar26._0_4_ = fVar22;
        auVar26._8_4_ = fVar24;
        auVar26._12_4_ = fVar25;
        auVar4._4_4_ = fVar23;
        auVar4._0_4_ = fVar22;
        auVar4._8_4_ = fVar24;
        auVar4._12_4_ = fVar25;
        auVar26 = NEON_ext(auVar26,auVar4,8,1);
        if (*(float *)param_2[1] < auVar26._0_4_ + fVar22 + auVar26._4_4_ + fVar23)
        goto LAB_0194babc;
        FUN_01a73640(local_78,local_80);
        plVar21 = local_78[0];
        if (local_78[0] != (long *)0x0) {
          if (*(int *)((long)local_78[0] + 0xc) != 0) {
            piVar1 = (int *)((long)local_78[0] + 0xc);
            local_94 = *(int *)((long)local_78[0] + 0xc);
            do {
              plVar17 = (long *)plVar21[2];
              if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  if (((*puVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar6), iVar14 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)puVar7 = uVar15;
                    __cxa_guard_release(puVar6);
                  }
                  *(undefined **)puVar9 = puVar7;
                  __cxa_guard_release(puVar8);
                }
                *(undefined **)puVar11 = puVar9;
                __cxa_guard_release(puVar10);
              }
              while( true ) {
                if (plVar17 == (long *)0x0) goto LAB_0194bcc8;
                if (plVar17 == (long *)puVar11) break;
                plVar17 = (long *)*plVar17;
              }
              iVar14 = *piVar1;
              if (iVar14 == local_94) {
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar12) {
                  *piVar1 = local_94 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar20 = plVar21[3];
                  local_90 = (long *)0x0;
                  plVar21 = local_78[0];
                  if (lVar20 != 0) {
                    local_90 = (long *)(lVar20 + -0x50);
                  }
                  goto joined_r0x0194bc98;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              local_94 = iVar14;
            } while (iVar14 != 0);
          }
LAB_0194bcc8:
          local_90 = (long *)0x0;
          plVar21 = local_78[0];
joined_r0x0194bc98:
          local_78[0] = plVar21;
          if (plVar21 != (long *)0x0) {
            plVar17 = plVar21 + 1;
            do {
              iVar14 = (int)*plVar17 + -1;
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar12) {
                *(int *)plVar17 = iVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 == 0) {
              plVar21[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_68 = *plVar21;
              FUN_02a44274(lVar20 + 0xd8,&local_68);
            }
          }
          if (local_90 != (long *)0x0) {
            bVar2 = *(byte *)param_2[2];
            bVar13 = (**(code **)(*local_90 + 0x218))(local_90);
            lVar20 = local_90[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar12) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            bVar12 = iVar14 == 1;
            if (bVar12) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
            }
            if (bVar2 != (bVar13 & 1)) {
              if (bVar12) {
                (**(code **)(*local_90 + 0x20))();
              }
              goto LAB_0194babc;
            }
            if (bVar12) {
              (**(code **)(*local_90 + 0x20))();
            }
          }
        }
        plVar21 = local_80;
        uVar16 = FUN_01ba01f4(local_80);
        if ((uVar16 & 1) != 0) {
          iVar14 = FUN_01b9febc(plVar21);
          if ((iVar14 == 1) ||
             ((iVar14 = FUN_01b9ffe0(plVar21), iVar14 == 1 &&
              (uVar16 = FUN_01ba0104(plVar21), (uVar16 & 1) != 0)))) {
            FUN_0194be4c(*(undefined8 *)param_2[3],&local_80);
          }
          goto LAB_0194babc;
        }
      }
      if (plVar21 != (long *)0x0) goto LAB_0194bac4;
    }
    else {
LAB_0194bac4:
      lVar20 = plVar21[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    lVar20 = plVar19[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
      plVar18 = (long *)*plVar18;
    }
    else {
      plVar18 = (long *)*plVar18;
    }
  } while( true );
}


