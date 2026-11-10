/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e516c4; name: FUN_01e516c4
 */


void FUN_01e516c4(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  float fVar28;
  long *local_70;
  undefined8 local_68;
  
  puVar11 = PTR_DAT_04382e90;
  puVar10 = PTR_DAT_04382e88;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar24 = *param_2;
  if (lVar24 == 0) {
    return;
  }
  if (*(int *)(lVar24 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar24 + 0xc);
  iVar15 = *(int *)(lVar24 + 0xc);
  do {
    plVar23 = *(long **)(lVar24 + 0x10);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
          uVar25 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar25;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar11 = puVar9;
      __cxa_guard_release(puVar10);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) {
        return;
      }
      if (plVar23 == (long *)puVar11) break;
      plVar23 = (long *)*plVar23;
    }
    iVar14 = *piVar1;
    if (iVar14 == iVar15) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar24 = *(long *)(lVar24 + 0x18);
        if (lVar24 == 0) {
          return;
        }
        lVar19 = *(long *)(lVar24 + 0x1c8);
        lVar3 = *(long *)(lVar24 + 0x1d0);
        if (lVar19 == lVar3) goto LAB_01e519a8;
        plVar23 = (long *)(param_1 + 0x90);
        plVar2 = (long *)(param_1 + 0xc0);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar15 = iVar14;
    if (iVar14 == 0) {
      return;
    }
  } while( true );
LAB_01e517a8:
  FUN_01e4f49c(&local_70,lVar19);
  if (local_70 != (long *)0x0) {
    uVar13 = (**(code **)(*local_70 + 0x58))();
    if (uVar13 == 0xffff) goto joined_r0x01e5198c;
    plVar16 = (long *)(**(code **)(**(long **)(param_1 + 200) + 0x10))
                                (*(long **)(param_1 + 200),0x28,8);
    if (plVar16 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 200) + 0xb8))();
    }
    uVar25 = *(undefined8 *)(param_1 + 200);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar17 == 0) {
      plVar16[3] = 0;
      *(uint *)(plVar16 + 2) = (uint)uVar13;
      plVar16[4] = 0;
      FUN_00b63974(plVar16 + 3,param_3);
    }
    else {
      if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar25;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      plVar16[3] = 0;
      *(uint *)(plVar16 + 2) = (uint)uVar13;
      plVar16[4] = 0;
      FUN_00b63974(plVar16 + 3,param_3);
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    }
    uVar4 = *(uint *)(plVar16 + 2);
    uVar18 = (ulong)uVar4;
    *plVar16 = 0;
    plVar16[1] = uVar18;
    uVar27 = *(ulong *)(param_1 + 0x98);
    if (uVar27 == 0) {
LAB_01e518c8:
      fVar28 = (float)(*(long *)(param_1 + 0xe8) + 1);
      if ((uVar27 == 0) || (*(float *)(param_1 + 0xf0) * (float)uVar27 < fVar28)) {
        uVar18 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
        uVar21 = (ulong)(fVar28 / *(float *)(param_1 + 0xf0));
        if (uVar21 <= uVar18) {
          uVar21 = uVar18;
        }
        if (uVar21 - 1 == 0) {
          uVar21 = 2;
          bVar12 = uVar27 < 3;
          uVar18 = uVar21;
          if (1 < uVar27) goto LAB_01e51bb4;
LAB_01e51a38:
          FUN_01e52fac(plVar23,uVar18);
        }
        else {
          if ((uVar21 & uVar21 - 1) != 0) {
            uVar21 = std::__next_prime(uVar21);
            uVar27 = *(ulong *)(param_1 + 0x98);
          }
          bVar12 = uVar27 <= uVar21;
          uVar18 = uVar21;
          if (uVar27 < uVar21) goto LAB_01e51a38;
LAB_01e51bb4:
          if (!bVar12) {
            uVar18 = (ulong)((float)*(ulong *)(param_1 + 0xe8) / *(float *)(param_1 + 0xf0));
            if ((uVar27 < 3) ||
               (uVar20 = uVar27 - (uVar27 >> 1 & 0x5555555555555555),
               uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
               1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar18 = std::__next_prime(uVar18);
            }
            else if (1 < uVar18) {
              uVar18 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar18 - 1) & 0x3f);
            }
            if (uVar18 <= uVar21) {
              uVar18 = uVar21;
            }
            if (uVar18 < uVar27) goto LAB_01e51a38;
          }
        }
        uVar27 = *(ulong *)(param_1 + 0x98);
        uVar18 = plVar16[1];
      }
      uVar21 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar18 = uVar27 - 1 & uVar18;
      }
      else if (uVar27 <= uVar18) {
        uVar20 = 0;
        if (uVar27 != 0) {
          uVar20 = uVar18 / uVar27;
        }
        uVar18 = uVar18 - uVar20 * uVar27;
      }
      plVar22 = *(long **)(*plVar23 + uVar18 * 8);
      if (plVar22 == (long *)0x0) {
        *plVar16 = *plVar2;
        *plVar2 = (long)plVar16;
        *(long **)(*plVar23 + uVar18 * 8) = plVar2;
        if (*plVar16 != 0) {
          uVar18 = *(ulong *)(*plVar16 + 8);
          if (uVar21 < 2) {
            uVar18 = uVar18 & uVar27 - 1;
          }
          else if (uVar27 <= uVar18) {
            uVar21 = 0;
            if (uVar27 != 0) {
              uVar21 = uVar18 / uVar27;
            }
            uVar18 = uVar18 - uVar21 * uVar27;
          }
          plVar22 = (long *)(*plVar23 + uVar18 * 8);
          goto LAB_01e51974;
        }
      }
      else {
        *plVar16 = *plVar22;
LAB_01e51974:
        *plVar22 = (long)plVar16;
      }
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
    }
    else {
      uVar21 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar20 = (ulong)((int)uVar27 - 1U & uVar4);
      }
      else {
        uVar20 = uVar18;
        if (uVar27 <= uVar18) {
          uVar20 = 0;
          if (uVar27 != 0) {
            uVar20 = uVar18 / uVar27;
          }
          uVar20 = uVar18 - uVar20 * uVar27;
        }
      }
      plVar22 = *(long **)(*plVar23 + uVar20 * 8);
      if (plVar22 == (long *)0x0) goto LAB_01e518c8;
      if (uVar21 < 2) {
        do {
          plVar22 = (long *)*plVar22;
          if ((plVar22 == (long *)0x0) || ((plVar22[1] & uVar27 - 1) != uVar20)) goto LAB_01e518c8;
        } while (*(uint *)(plVar22 + 2) != uVar4);
      }
      else {
        do {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_01e518c8;
          uVar21 = plVar22[1];
          if (uVar27 <= uVar21) {
            uVar6 = 0;
            if (uVar27 != 0) {
              uVar6 = uVar21 / uVar27;
            }
            uVar21 = uVar21 - uVar6 * uVar27;
          }
          if (uVar21 != uVar20) goto LAB_01e518c8;
        } while (*(uint *)(plVar22 + 2) != uVar4);
      }
      if (plVar16 != (long *)0x0) {
        puVar26 = (undefined8 *)plVar16[3];
        if (puVar26 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar26 + 1);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            puVar26[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_68 = *puVar26;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
          }
        }
        plVar22 = *(long **)(param_1 + 200);
        uVar18 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar18 & 1) != 0) {
          lVar17 = tpidr_el0;
          if (*(char *)(lVar17 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar17 + 0x38d488) = 1;
            *(undefined8 *)(lVar17 + 0x38d478) = 0;
            *(undefined8 *)(lVar17 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar17 + 0x38d480)) {
            FUN_02bcc824(plVar22,plVar16,0x28,8);
            goto joined_r0x01e5198c;
          }
        }
        (**(code **)(*plVar22 + 0x18))(plVar22,plVar16,0x28,8);
      }
    }
joined_r0x01e5198c:
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  lVar19 = lVar19 + 0x18;
  if (lVar19 == lVar3) {
LAB_01e519a8:
    lVar19 = *(long *)(lVar24 + 8);
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*(long *)(lVar24 + -0x50) + 0x20))();
    }
    return;
  }
  goto LAB_01e517a8;
}


