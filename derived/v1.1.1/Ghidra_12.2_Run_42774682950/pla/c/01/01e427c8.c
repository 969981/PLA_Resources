/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e427c8; name: FUN_01e427c8
 */


void FUN_01e427c8(void)

{
  int *piVar1;
  MutexType *pMVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  undefined *local_90;
  long local_88 [2];
  long local_78;
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar15 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar15;
  lVar15 = *(long *)(lVar15 + 0x78);
  local_90 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(local_88,lVar15 + 0xa0);
  local_78 = *(long *)(lVar15 + 0xb0);
  if (local_78 != 0) {
    piVar1 = (int *)(local_78 + 0x50);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_70 = *(long *)(lVar15 + 0xb8);
  if (local_70 != 0) {
    piVar1 = (int *)(local_70 + 0x50);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_68 = *(long *)(lVar15 + 0xc0);
  if (local_68 != 0) {
    lVar15 = *(long *)(local_68 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01e42f78;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_90 = PTR_DAT_0437a508 + 0x10;
  if (local_88[0] != 0) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar15 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar15;
    lVar28 = *(long *)(lVar15 + 0x230);
    pMVar2 = (MutexType *)(lVar28 + 0x128);
    nn::os::LockMutex(pMVar2);
    uVar16 = 0;
    lVar15 = *(long *)(lVar28 + 0x110) + 0x28;
    do {
      if ((1L << (uVar16 & 0x3f) & 0xfffffffeU) != 0) {
        *(ulong *)(lVar15 + uVar16 * 8) = *(ulong *)(lVar15 + uVar16 * 8) & 0xffffffff00000001;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x40);
    nn::os::UnlockMutex(pMVar2);
    puVar17 = *(uint **)(local_88[0] + 0x250);
    uVar16 = (ulong)*puVar17;
    piVar1 = (int *)((long)puVar17 + uVar16);
    uVar18 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    uVar20 = (ulong)*(uint *)((long)piVar1 + uVar18);
    puVar3 = (uint *)((long)((long)piVar1 + uVar18) + uVar20);
    puVar24 = puVar3 + 1;
    uVar22 = (ulong)*puVar3;
    if (uVar22 != 0) {
      puVar3 = puVar24 + uVar22;
      lVar15 = (long)puVar17 + uVar20 + uVar18 + uVar16 + 8;
      lVar25 = (long)puVar17 + uVar20 + uVar16 + uVar18 + 8;
      uVar26 = 1;
      do {
        piVar1 = (int *)((long)puVar24 + (ulong)*puVar24);
        uVar18 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
        puVar17 = (uint *)((long)piVar1 + uVar18);
        uVar20 = (ulong)*puVar17;
        puVar17 = (uint *)((long)puVar17 + uVar20);
        uVar9 = *puVar17;
        uVar16 = (ulong)uVar9;
        if (uVar9 == 0) {
          uVar27 = 0;
        }
        else {
          uVar22 = uVar16 & 3;
          if (uVar16 - 1 < 3) {
            uVar27 = 0;
            puVar17 = puVar17 + 1;
          }
          else {
            lVar21 = uVar20 + uVar18 + (ulong)*puVar24;
            lVar19 = 0;
            uVar27 = 0;
            lVar23 = uVar16 - uVar22;
            do {
              pcVar4 = (char *)(lVar25 + lVar21 + lVar19);
              lVar19 = lVar19 + 4;
              uVar14 = (uint)uVar16;
              uVar5 = 0;
              if (*pcVar4 != '\0') {
                uVar5 = 1 << (ulong)(uVar14 & 0x1f);
              }
              uVar6 = 0;
              if (pcVar4[1] != '\0') {
                uVar6 = 1 << (ulong)(uVar14 - 1 & 0x1f);
              }
              uVar16 = (ulong)(uVar14 - 4);
              uVar7 = 0;
              if (pcVar4[2] != '\0') {
                uVar7 = 1 << (ulong)(uVar14 - 2 & 0x1f);
              }
              uVar8 = 0;
              if (pcVar4[3] != '\0') {
                uVar8 = 1 << (ulong)(uVar14 - 3 & 0x1f);
              }
              uVar27 = uVar8 | uVar7 | uVar6 | uVar5 | uVar27;
            } while (lVar23 != lVar19);
            puVar17 = (uint *)(lVar15 + lVar21 + lVar19);
          }
          if ((uVar9 & 3) != 0) {
            do {
              uVar9 = 0;
              if ((char)*puVar17 != '\0') {
                uVar9 = 1 << (ulong)((uint)uVar16 & 0x1f);
              }
              uVar22 = uVar22 - 1;
              uVar27 = uVar9 | uVar27;
              uVar16 = (ulong)((uint)uVar16 - 1);
              puVar17 = (uint *)((long)puVar17 + 1);
            } while (uVar22 != 0);
          }
        }
        uVar18 = (ulong)(uint)(1 << (ulong)(uVar26 & 0x1f));
        nn::os::LockMutex(pMVar2);
        uVar16 = 0;
        lVar19 = *(long *)(lVar28 + 0x110) + 0x28;
        do {
          uVar20 = 1L << (uVar16 & 0x3f);
          lVar21 = uVar16 * 8;
          if ((uVar20 & uVar18) != 0) {
            *(ulong *)(lVar19 + lVar21) = *(ulong *)(lVar19 + lVar21) | (ulong)uVar27;
          }
          if ((uVar20 & uVar27) != 0) {
            *(ulong *)(lVar19 + lVar21) = *(ulong *)(lVar19 + lVar21) | uVar18;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x40);
        nn::os::UnlockMutex(pMVar2);
        puVar24 = puVar24 + 1;
        uVar26 = uVar26 + 1;
        lVar15 = lVar15 + 4;
        lVar25 = lVar25 + 4;
      } while (puVar24 != puVar3);
    }
  }
  FUN_00936104(&local_90);
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar15 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar15;
  lVar15 = *(long *)(lVar15 + 0x78);
  local_90 = PTR_DAT_0437ace8 + 0x10;
  FUN_00937ea0(local_88,lVar15 + 0xd0);
  local_78 = *(long *)(lVar15 + 0xe0);
  if (local_78 != 0) {
    piVar1 = (int *)(local_78 + 0x50);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_70 = *(long *)(lVar15 + 0xe8);
  if (local_70 != 0) {
    piVar1 = (int *)(local_70 + 0x50);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_68 = *(long *)(lVar15 + 0xf0);
  if (local_68 != 0) {
    lVar15 = *(long *)(local_68 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01e42f78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_90 = PTR_DAT_0437a508 + 0x10;
  if (local_88[0] != 0) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar15 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar15;
    lVar15 = *(long *)(lVar15 + 0x230);
    FUN_02bf2f70(lVar15,0xfffffffe,0xfffffffe);
    puVar17 = *(uint **)(local_88[0] + 0x250);
    uVar16 = (ulong)*puVar17;
    piVar1 = (int *)((long)puVar17 + uVar16);
    uVar18 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    uVar20 = (ulong)*(uint *)((long)piVar1 + uVar18);
    puVar3 = (uint *)((long)((long)piVar1 + uVar18) + uVar20);
    puVar24 = puVar3 + 1;
    uVar22 = (ulong)*puVar3;
    if (uVar22 != 0) {
      puVar3 = puVar24 + uVar22;
      lVar28 = (long)puVar17 + uVar20 + uVar18 + uVar16 + 8;
      lVar25 = (long)puVar17 + uVar20 + uVar16 + uVar18 + 8;
      uVar26 = 1;
      do {
        piVar1 = (int *)((long)puVar24 + (ulong)*puVar24);
        uVar18 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
        puVar17 = (uint *)((long)piVar1 + uVar18);
        uVar20 = (ulong)*puVar17;
        puVar17 = (uint *)((long)puVar17 + uVar20);
        uVar9 = *puVar17;
        uVar16 = (ulong)uVar9;
        if (uVar9 == 0) {
          uVar27 = 0;
        }
        else {
          uVar22 = uVar16 & 3;
          if (uVar16 - 1 < 3) {
            uVar27 = 0;
            puVar17 = puVar17 + 1;
          }
          else {
            lVar21 = uVar20 + uVar18 + (ulong)*puVar24;
            lVar19 = 0;
            uVar27 = 0;
            lVar23 = uVar16 - uVar22;
            do {
              pcVar4 = (char *)(lVar25 + lVar21 + lVar19);
              lVar19 = lVar19 + 4;
              uVar14 = (uint)uVar16;
              uVar5 = 0;
              if (*pcVar4 != '\0') {
                uVar5 = 1 << (ulong)(uVar14 & 0x1f);
              }
              uVar6 = 0;
              if (pcVar4[1] != '\0') {
                uVar6 = 1 << (ulong)(uVar14 - 1 & 0x1f);
              }
              uVar16 = (ulong)(uVar14 - 4);
              uVar7 = 0;
              if (pcVar4[2] != '\0') {
                uVar7 = 1 << (ulong)(uVar14 - 2 & 0x1f);
              }
              uVar8 = 0;
              if (pcVar4[3] != '\0') {
                uVar8 = 1 << (ulong)(uVar14 - 3 & 0x1f);
              }
              uVar27 = uVar8 | uVar7 | uVar6 | uVar5 | uVar27;
            } while (lVar23 != lVar19);
            puVar17 = (uint *)(lVar28 + lVar21 + lVar19);
          }
          if ((uVar9 & 3) != 0) {
            do {
              uVar9 = 0;
              if ((char)*puVar17 != '\0') {
                uVar9 = 1 << (ulong)((uint)uVar16 & 0x1f);
              }
              uVar22 = uVar22 - 1;
              uVar27 = uVar9 | uVar27;
              uVar16 = (ulong)((uint)uVar16 - 1);
              puVar17 = (uint *)((long)puVar17 + 1);
            } while (uVar22 != 0);
          }
        }
        uVar18 = (ulong)(uint)(1 << (ulong)(uVar26 & 0x1f));
        nn::os::LockMutex((MutexType *)(lVar15 + 0x128));
        uVar16 = 0;
        lVar19 = *(long *)(lVar15 + 0x118) + 0x28;
        do {
          uVar20 = 1L << (uVar16 & 0x3f);
          lVar21 = uVar16 * 8;
          if ((uVar20 & uVar18) != 0) {
            *(ulong *)(lVar19 + lVar21) = *(ulong *)(lVar19 + lVar21) | (ulong)uVar27;
          }
          if ((uVar20 & uVar27) != 0) {
            *(ulong *)(lVar19 + lVar21) = *(ulong *)(lVar19 + lVar21) | uVar18;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x40);
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x128));
        puVar24 = puVar24 + 1;
        uVar26 = uVar26 + 1;
        lVar28 = lVar28 + 4;
        lVar25 = lVar25 + 4;
      } while (puVar24 != puVar3);
    }
  }
  FUN_00936104(&local_90);
  return;
}


