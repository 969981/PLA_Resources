/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128e27c; name: FUN_0128e27c
 */


undefined8 FUN_0128e27c(long param_1)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  
  puVar9 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar11 = PTR_DAT_04379568;
  puVar10 = PTR_DAT_04379560;
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar19 = *(long **)(lVar17 + 0x280);
  if (plVar19 != (long *)0x0) {
    lVar17 = plVar19[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0128e6c8;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar17 = *(long *)puVar10;
  *(long *)puVar11 = lVar17;
  plVar20 = *(long **)(lVar17 + 0x238);
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0128e6c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iVar13 = *(int *)(param_1 + 0x6d8);
  lVar17 = plVar20[0xa6];
  iVar8 = iVar13;
  if (iVar13 == 2) {
    iVar8 = 0;
  }
  lVar15 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar8 * 0x28);
  lVar18 = *(long *)(lVar15 + 0x8b0);
  piVar1 = (int *)(lVar18 + 0x20);
  if (*(int *)(lVar18 + 0x28) != 0) {
    piVar1 = (int *)(lVar18 + 0x24);
  }
  uVar24 = *(int *)(lVar18 + 0x14) + *piVar1 * *(int *)(lVar18 + 0x10);
  uVar21 = (ulong)uVar24;
  uVar14 = *(undefined8 *)
            (*(long *)(*(long *)(param_1 + (long)iVar13 * 0x60 + 0x638) + 0xa8) + uVar21 * 0x10);
  if (iVar13 == 0) {
    uVar12 = FUN_010dac08(lVar15,0);
    if (uVar24 < uVar12) {
      uVar12 = *(uint *)((long)plVar19 + uVar21 * 4 + 0x68);
      uVar24 = uVar12 & 0xffff;
      uVar22 = uVar12 >> 0x10;
      if (uVar24 != 0 && uVar22 != 0) {
        do {
          uVar16 = FUN_0111d5d4(plVar20,uVar24,uVar22);
          if ((uVar16 & 1) != 0) {
            FUN_0111daac(plVar20,uVar24,uVar22);
            uVar16 = FUN_0128e6e0(param_1,1,uVar24,uVar14);
            FUN_010db560(plVar19,uVar24,uVar22,uVar21);
            if ((uVar22 & 0xffff) == uVar12 >> 0x10) {
              uVar24 = 0;
            }
            FUN_0128eb98(param_1,0,uVar21,uVar14,uVar24);
            FUN_00d42438(param_1,1,1);
            FUN_00d4ba88(param_1,0,1);
            if ((uVar16 & 1) != 0) {
              FUN_00d5f308(param_1,1);
            }
            goto LAB_0128e49c;
          }
          uVar2 = uVar22 & 0xffff;
          uVar23 = 0;
          uVar22 = uVar22 - 1;
        } while (uVar2 != 1);
        goto joined_r0x0128e4b0;
      }
    }
  }
  else {
    uVar24 = uVar24 + (int)lVar17 * 0x1e;
    sVar4 = *(short *)((long)plVar20 + (ulong)uVar24 * 4 + 0x68);
    uVar5 = *(ushort *)((long)plVar20 + (ulong)uVar24 * 4 + 0x6a);
    uVar24 = (uint)uVar5;
    if (sVar4 != 0 && uVar5 != 0) {
      do {
        uVar16 = FUN_010db41c(plVar19,sVar4,uVar24,0xffffffff);
        if ((uVar16 & 1) != 0) {
          FUN_010db1d8(plVar19,sVar4,uVar24,0xffffffff);
          FUN_0128e6e0(param_1,0,sVar4,uVar14);
          FUN_0111e8e4(plVar20,sVar4,uVar24,(int)lVar17,uVar21);
          sVar3 = 0;
          if ((uint)uVar5 != (uVar24 & 0xffff)) {
            sVar3 = sVar4;
          }
          FUN_0128eb98(param_1,1,uVar21,uVar14,sVar3);
          FUN_00d42438(param_1,1,1);
          FUN_00d4ba88(param_1,iVar13,1);
LAB_0128e49c:
          FUN_00d469b4(*(undefined8 *)(param_1 + 0x68),param_1,0);
          uVar23 = 1;
          break;
        }
        uVar12 = uVar24 & 0xffff;
        uVar23 = 0;
        uVar24 = uVar24 - 1;
      } while (uVar12 != 1);
      goto joined_r0x0128e4b0;
    }
  }
  uVar23 = 0;
joined_r0x0128e4b0:
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar17 = plVar19[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return uVar23;
}


