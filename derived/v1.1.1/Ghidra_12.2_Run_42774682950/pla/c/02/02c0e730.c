/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0e730; name: FUN_02c0e730
 */


void FUN_02c0e730(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *local_a8 [4];
  long *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar14 = (long *)(param_1 + 0xe8);
  lVar6 = *plVar14;
  lVar15 = *(long *)(param_1 + 0xf0);
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x340) -
          *(long *)(*(long *)(param_1 + 0x60) + 0x338) >> 3;
  uVar17 = lVar8 * -0x5555555555555555;
  lVar9 = lVar15 - lVar6 >> 4;
  uVar18 = lVar9 * -0x5555555555555555;
  uVar12 = uVar17 + lVar9 * 0x5555555555555555;
  if (uVar17 < uVar18 || uVar12 == 0) {
    lVar9 = lVar15;
    if (uVar17 < uVar18) {
      lVar9 = lVar6 + lVar8 * 0x10;
      while (lVar9 != lVar15) {
        lVar15 = lVar15 + -0x30;
        FUN_02c130c8(lVar15);
      }
      *(long *)(param_1 + 0xf0) = lVar9;
    }
    goto LAB_02c0eb0c;
  }
  puVar11 = (undefined8 *)(param_1 + 0x100);
  if ((ulong)((*(long *)(param_1 + 0xf8) - lVar15 >> 4) * -0x5555555555555555) < uVar12) {
    uVar12 = *(ulong *)(param_1 + 0x108);
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = *(long *)(param_1 + 0xf8) - lVar6 >> 4;
    uVar10 = lVar15 * 0x5555555555555556;
    if (uVar17 <= uVar10) {
      uVar17 = uVar10;
    }
    if ((ulong)(lVar15 * -0x5555555555555555) < uVar12 >> 1) {
      uVar12 = uVar17;
    }
    if (uVar12 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar12 * 0x30,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar11 + 0xb8))();
      }
    }
    puVar20 = (undefined8 *)(lVar15 + lVar9 * 0x10);
    lVar6 = uVar18 + lVar8 * 0x5555555555555555;
    puVar19 = puVar20;
    do {
      FUN_02c12c78(puVar11,puVar19);
      puVar19 = puVar19 + 6;
      bVar4 = lVar6 != -1;
      lVar6 = lVar6 + 1;
    } while (bVar4);
    lVar6 = *(long *)(param_1 + 0xe8);
    lVar8 = *(long *)(param_1 + 0xf0);
    if (lVar8 == lVar6) {
      lVar8 = lVar6;
    }
    else {
      do {
        uVar13 = *puVar11;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar13;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        puVar20[-6] = &PTR_LAB_04288ae0;
        FUN_02c12d94(puVar20 + -5,lVar8 + -0x28);
        lVar7 = *(long *)(lVar8 + -0x18);
        puVar20[-3] = lVar7;
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 0x50);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar7 = *(long *)(lVar8 + -0x10);
        puVar20[-2] = lVar7;
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 0x50);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar7 = *(long *)(lVar8 + -8);
        puVar20[-1] = lVar7;
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x58);
          if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_02c0edbc;
          if (*(long *)(lVar7 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            *(undefined8 *)(lVar7 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar20 = puVar20 + -6;
        lVar8 = lVar8 + -0x30;
        *puVar20 = &PTR_LAB_04288ac0;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
      } while (lVar8 != lVar6);
      lVar6 = *(long *)(param_1 + 0xe8);
      lVar8 = *(long *)(param_1 + 0xf0);
    }
    *(undefined8 **)(param_1 + 0xe8) = puVar20;
    *(undefined8 **)(param_1 + 0xf0) = puVar19;
    lVar9 = *(long *)(param_1 + 0xf8);
    *(ulong *)(param_1 + 0xf8) = lVar15 + uVar12 * 0x30;
    while (lVar8 != lVar6) {
      lVar8 = lVar8 + -0x30;
      FUN_02c130c8(lVar8);
    }
    if (lVar6 != 0) {
      plVar16 = (long *)*puVar11;
      lVar9 = lVar9 - lVar6;
      uVar17 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar17 & 1) != 0) {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar6,lVar9,8);
          goto LAB_02c0eb00;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar6,lVar9,8);
    }
  }
  else {
    lVar6 = uVar18 + lVar8 * 0x5555555555555555;
    do {
      FUN_02c12c78(puVar11,lVar15);
      lVar15 = *(long *)(param_1 + 0xf0) + 0x30;
      bVar4 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      *(long *)(param_1 + 0xf0) = lVar15;
    } while (bVar4);
  }
LAB_02c0eb00:
  lVar9 = *(long *)(param_1 + 0xf0);
LAB_02c0eb0c:
  if (lVar9 != *plVar14) {
    if ((param_2 & 1) == 0) {
      lVar6 = 0;
      lVar15 = 0;
      uVar17 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x60);
        puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x338) + lVar6);
        local_78 = *puVar11;
        local_70 = puVar11[1];
        local_68 = puVar11[2];
        if (lVar8 == 0) {
          lVar8 = FUN_00b779ac();
        }
        else {
          lVar8 = lVar8 + 0x68;
        }
        FUN_028c94b0(local_a8,lVar8,&local_78,&DAT_03996322);
        FUN_02c132ec(*plVar14 + lVar15,0,local_a8,param_3,param_4);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8[0] != (long *)0x0) {
          (**(code **)(*local_a8[0] + 0x20))();
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x30;
        lVar6 = lVar6 + 0x18;
      } while (uVar17 < (ulong)((*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) *
                               -0x5555555555555555));
    }
    else {
      uVar17 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x60);
        puVar11 = (undefined8 *)(*(long *)(lVar15 + 0x338) + uVar17 * 0x18);
        local_78 = *puVar11;
        local_70 = puVar11[1];
        local_68 = puVar11[2];
        if (lVar15 == 0) {
          lVar15 = FUN_00b779ac();
        }
        else {
          lVar15 = lVar15 + 0x68;
        }
        FUN_028c94b0(local_a8,lVar15,&local_78,&DAT_03996322);
        lVar15 = *plVar14;
        uVar12 = FUN_02c132ec(lVar15 + uVar17 * 0x30,1,local_a8,param_3,param_4);
        if (((uVar12 & 1) != 0) &&
           (plVar16 = *(long **)(lVar15 + uVar17 * 0x30 + 0x28), plVar16 != (long *)0x0)) {
          lVar15 = plVar16[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_02c0edbc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar15 = plVar16[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8[0] != (long *)0x0) {
          (**(code **)(*local_a8[0] + 0x20))();
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulong)((*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) *
                               -0x5555555555555555));
    }
  }
  return;
}


