/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012911b8; name: FUN_012911b8
 */


void FUN_012911b8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  lVar16 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar16;
  plVar19 = *(long **)(lVar16 + 0x280);
  if (plVar19 != (long *)0x0) {
    lVar16 = plVar19[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0129167c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar16 = *(long *)puVar9;
  *(long *)puVar10 = lVar16;
  plVar20 = *(long **)(lVar16 + 0x238);
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0129167c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iVar13 = (int)param_1[0xdb];
  iVar3 = iVar13;
  if (iVar13 == 2) {
    iVar3 = 0;
  }
  plVar2 = param_1 + 0x30;
  lVar16 = FUN_00d2ee28(plVar2,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  lVar17 = *(long *)(lVar16 + 0x8b0);
  piVar1 = (int *)(lVar17 + 0x20);
  if (*(int *)(lVar17 + 0x28) != 0) {
    piVar1 = (int *)(lVar17 + 0x24);
  }
  uVar21 = *(int *)(lVar17 + 0x14) + *piVar1 * *(int *)(lVar17 + 0x10);
  if (iVar13 == 0) {
    uVar12 = FUN_010dac08(lVar16,0);
    if (uVar12 <= uVar21) goto joined_r0x01291318;
    lVar16 = (long)plVar19 + (ulong)uVar21 * 4;
    uVar5 = *(ushort *)(lVar16 + 0x68);
    uVar21 = (uint)uVar5;
  }
  else {
    lVar16 = (long)plVar20 + (ulong)(uVar21 + (int)plVar20[0xa6] * 0x1e) * 4;
    uVar5 = *(ushort *)(lVar16 + 0x68);
    uVar21 = *(uint *)(lVar16 + 0x68);
  }
  if ((uVar21 & 0xffff) != 0 && *(short *)(lVar16 + 0x6a) != 0) {
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar16 = *(long *)puVar9;
    *(long *)puVar10 = lVar16;
    plVar22 = *(long **)(lVar16 + 0x260);
    if (plVar22 != (long *)0x0) {
      lVar16 = plVar22[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0129167c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar21 = (uint)uVar5;
    FUN_01117218(plVar22,uVar5,
                 (*(uint *)((long)plVar22 + ((ulong)(uVar5 >> 3) & 0x1ffc) + 0x1a8) &
                 1 << (ulong)(uVar21 & 0x1f)) == 0);
    lVar16 = FUN_00d4de1c(param_1,0);
    iVar13 = *(int *)(lVar16 + 0x758);
    iVar3 = *(int *)(lVar16 + 0x75c);
    local_68 = 0;
    FUN_00d51c38(param_1,(long)&local_68 + 4,&local_68,0);
    iVar4 = (int)local_68;
    uVar15 = FUN_010dac08(plVar19,0);
    iVar3 = iVar3 * iVar13;
    if ((0 < iVar3) && (uVar12 = iVar4 * iVar13, uVar12 < (uint)uVar15)) {
      iVar13 = 0;
      uVar23 = (ulong)uVar12;
      uVar24 = uVar15 & 0xffffffff;
      do {
        uVar15 = FUN_010dac08(uVar15,0);
        if (((uVar23 < (uVar15 & 0xffffffff)) &&
            (uVar12 = *(uint *)((long)plVar19 + uVar23 * 4 + 0x68), 0xffff < uVar12)) &&
           (uVar21 == (uVar12 & 0xffff))) {
          uVar15 = FUN_00d2ee28(plVar2,&DAT_043ab7d8);
          lVar16 = **(long **)(uVar15 + 0x838);
          lVar17 = (*(long **)(uVar15 + 0x838))[1];
          if ((lVar16 != lVar17) &&
             (*(char *)(lVar16 + 0x20) != '\0' || uVar23 != *(uint *)(lVar16 + 0x24))) {
            lVar11 = lVar16 + 0x30;
            do {
              lVar18 = lVar11;
              lVar16 = lVar17;
              if (lVar17 == lVar18) break;
              lVar11 = lVar18 + 0x30;
            } while ((*(char *)(lVar18 + 0x20) != '\0') ||
                    (lVar16 = lVar18, uVar23 != *(uint *)(lVar18 + 0x24)));
          }
          if ((lVar16 != 0) &&
             ((lVar17 != lVar16 && (iVar4 = *(int *)(lVar16 + 0x28), iVar4 != -1)))) {
            uVar12 = (**(code **)(*param_1 + 0x1f0))(param_1,0,uVar23 & 0xffffffff);
            uVar15 = FUN_00d5b258(param_1,0,iVar4,uVar12 & 1);
          }
        }
        uVar23 = uVar23 + 1;
      } while ((uVar23 < uVar24) && (iVar13 = iVar13 + 1, iVar13 < iVar3));
    }
    FUN_00d4de1c(param_1,1);
    iVar13 = 0;
    do {
      uVar15 = (ulong)(uint)(iVar13 + (int)plVar20[0xa6] * 0x1e);
      if ((*(ushort *)((long)plVar20 + uVar15 * 4 + 0x68) == uVar21) &&
         (*(short *)((long)plVar20 + uVar15 * 4 + 0x6a) != 0)) {
        lVar17 = FUN_00d2ee28(plVar2,&DAT_043ab918);
        lVar16 = **(long **)(lVar17 + 0x838);
        lVar17 = (*(long **)(lVar17 + 0x838))[1];
        if ((lVar16 != lVar17) &&
           (*(char *)(lVar16 + 0x20) != '\0' || *(int *)(lVar16 + 0x24) != iVar13)) {
          lVar11 = lVar16 + 0x30;
          do {
            lVar18 = lVar11;
            lVar16 = lVar17;
            if (lVar17 == lVar18) break;
            lVar11 = lVar18 + 0x30;
          } while ((*(char *)(lVar18 + 0x20) != '\0') ||
                  (lVar16 = lVar18, *(int *)(lVar18 + 0x24) != iVar13));
        }
        if ((lVar16 != 0) && ((lVar17 != lVar16 && (iVar3 = *(int *)(lVar16 + 0x28), iVar3 != -1))))
        {
          uVar12 = (**(code **)(*param_1 + 0x1f0))(param_1,1,iVar13);
          FUN_00d5b258(param_1,1,iVar3,uVar12 & 1);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x1e);
    if (plVar22 != (long *)0x0) {
      lVar16 = plVar22[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))();
      }
    }
  }
joined_r0x01291318:
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar16 = plVar19[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return;
}


