/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3a924; name: FUN_02b3a924
 */


void FUN_02b3a924(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  long *plVar24;
  ulong uVar25;
  int iVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long *local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long *local_a0;
  uint local_98;
  uint uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x70);
  plVar24 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x78);
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  plVar13 = *(long **)(param_1 + 0xa8);
  *(long **)(param_1 + 0xa8) = plVar24;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  puVar11 = PTR_DAT_04379cd8;
  lVar18 = *(long *)(param_1 + 0xe0);
  if (lVar18 != 0) {
    lVar20 = *(long *)(lVar18 + 0x78);
    lVar18 = *(long *)(lVar18 + 0x80);
    if (lVar20 != lVar18) {
      do {
        FUN_00adcc04(&local_98,lVar20);
        if (CONCAT44(uStack_94,local_98) == 0) {
          puVar19 = (undefined8 *)PTR_PTR_04379d00;
        }
        else {
          puVar19 = (undefined8 *)(CONCAT44(uStack_94,local_98) + 0x60);
        }
        pcVar14 = strrchr((char *)*puVar19,0x2f);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x0;
          if (cRam0000000000000000 == '\0') goto LAB_02b3ac50;
LAB_02b3a9fc:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,puVar11,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar15;
          FUN_02a47cd8(&local_b8,uVar15,pcVar14);
          plVar24 = local_b8;
        }
        else {
          pcVar14 = pcVar14 + 1;
          if (*pcVar14 != '\0') goto LAB_02b3a9fc;
LAB_02b3ac50:
          plVar24 = (long *)FUN_00938550();
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 0x18))(plVar24);
          }
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
        }
        local_98 = (uint)*(undefined8 *)(param_1 + 0x90);
        uStack_94 = (uint)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
        local_90 = (uint)*(undefined8 *)(param_1 + 0x98);
        uStack_8c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
        local_88 = *(undefined8 *)(param_1 + 0xa0);
        local_80 = *(long **)(param_1 + 0xa8);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x18))();
        }
        local_b0 = &DAT_038b4e31;
        local_b8 = (long *)0xaf66b24c8606be2e;
        local_a8 = 1;
        local_a0 = (long *)0x0;
        if (plVar24 == (long *)0x0) {
          local_d8 = *(long *)PTR_DAT_04379c88;
LAB_02b3abfc:
          lStack_d0 = *(long *)PTR_PTR_04379d00;
          if (plVar24 != (long *)0x0) goto LAB_02b3aab4;
LAB_02b3ac0c:
          local_c8 = 0;
          local_c0 = (long *)0x0;
        }
        else {
          local_d8 = plVar24[0xb];
          if (plVar24 == (long *)0x0) goto LAB_02b3abfc;
          lStack_d0 = plVar24[0xc];
          if (plVar24 == (long *)0x0) goto LAB_02b3ac0c;
LAB_02b3aab4:
          local_c8 = plVar24[0xd];
          (**(code **)(*plVar24 + 0x18))(plVar24);
          local_c0 = plVar24;
        }
        FUN_02b3543c(&local_e0,&local_98,&local_b8,&local_d8);
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        plVar13 = local_e0;
        if (local_e0 == (long *)0x0) {
          lVar32 = *(long *)PTR_DAT_04379c88;
LAB_02b3ac2c:
          lVar28 = *(long *)PTR_PTR_04379d00;
          if (local_e0 != (long *)0x0) goto LAB_02b3ab44;
LAB_02b3ac3c:
          lVar29 = 0;
        }
        else {
          lVar32 = local_e0[0xb];
          if (local_e0 == (long *)0x0) goto LAB_02b3ac2c;
          lVar28 = local_e0[0xc];
          if (local_e0 == (long *)0x0) goto LAB_02b3ac3c;
LAB_02b3ab44:
          lVar29 = local_e0[0xd];
          (**(code **)(*local_e0 + 0x18))(local_e0);
        }
        plVar16 = *(long **)(param_1 + 0xa8);
        *(long *)(param_1 + 0x90) = lVar32;
        *(long *)(param_1 + 0x98) = lVar28;
        *(long *)(param_1 + 0xa0) = lVar29;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x20))();
        }
        *(long **)(param_1 + 0xa8) = plVar13;
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x20))();
        }
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x20))(plVar24);
        }
        lVar20 = lVar20 + 0x20;
      } while (lVar18 != lVar20);
    }
  }
  lVar18 = *(long *)(param_1 + 0xb8);
  plVar24 = *(long **)(lVar18 + 0x308);
  if (*(long **)(lVar18 + 0x300) == plVar24) {
LAB_02b3af90:
    uVar25 = *(ulong *)(param_1 + 0x130);
    if (uVar25 == *(ulong *)(param_1 + 0x138)) {
      local_98 = 0;
      uStack_94 = 0xffffffff;
      local_90 = 0;
      puVar19 = (undefined8 *)(param_1 + 0x148);
      if (uVar25 < *(ulong *)(param_1 + 0x140)) {
        FUN_02b3ca7c(puVar19,uVar25,&local_98);
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0xc;
      }
      else {
        uVar30 = *(ulong *)(param_1 + 0x150);
        if (0x7ffffffffffffffe < uVar30) {
          uVar30 = 0x7fffffffffffffff;
        }
        if (uVar30 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = *(ulong *)(param_1 + 0x140) - uVar25;
        lVar20 = lVar18 >> 2;
        uVar25 = lVar20 * 0x5555555555555556;
        if (lVar18 == 0) {
          uVar25 = 1;
        }
        if ((ulong)(lVar20 * -0x5555555555555555) < uVar30 >> 1) {
          uVar30 = uVar25;
        }
        lVar18 = (**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,uVar30 * 0xc,4);
        if (lVar18 == 0) {
          (**(code **)(*(long *)*puVar19 + 0xb8))();
        }
        lVar29 = lVar18 + uVar30 * 0xc;
        FUN_02b3ca7c(puVar19,lVar18,&local_98);
        lVar32 = *(long *)(param_1 + 0x130);
        lVar28 = *(long *)(param_1 + 0x138);
        lVar20 = lVar18 + 0xc;
        if (lVar28 != lVar32) {
          do {
            lVar18 = lVar18 + -0xc;
            lVar28 = lVar28 + -0xc;
            FUN_02b3ca7c(puVar19,lVar18,lVar28);
          } while (lVar32 != lVar28);
          lVar32 = *(long *)(param_1 + 0x130);
        }
        lVar28 = *(long *)(param_1 + 0x140);
        *(long *)(param_1 + 0x130) = lVar18;
        *(long *)(param_1 + 0x138) = lVar20;
        *(long *)(param_1 + 0x140) = lVar29;
        if (lVar32 != 0) {
          plVar24 = (long *)*puVar19;
          lVar28 = lVar28 - lVar32;
          uVar25 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar25 & 1) != 0) {
            lVar18 = tpidr_el0;
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar18 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar32,lVar28,4);
              goto LAB_02b3b11c;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar32,lVar28,4);
        }
      }
    }
  }
  else {
    plVar13 = *(long **)(lVar18 + 0x300);
    iVar12 = *(int *)(param_1 + 0x168);
    do {
      plVar16 = plVar13 + 0xb;
      iVar26 = (int)((ulong)(plVar13[1] - *plVar13) >> 3);
      if (iVar26 <= iVar12) {
        iVar26 = iVar12;
      }
      *(int *)(param_1 + 0x168) = iVar26;
      plVar13 = plVar16;
      iVar12 = iVar26;
    } while (plVar24 != plVar16);
    plVar24 = *(long **)(lVar18 + 0x300);
    plVar13 = *(long **)(lVar18 + 0x308);
    if (plVar24 == plVar13) goto LAB_02b3af90;
    param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    puVar19 = (undefined8 *)(param_1 + 0x148);
    uVar3 = iVar26 - 1U;
    if ((int)param_3 <= (int)(iVar26 - 1U)) {
      uVar3 = param_3;
    }
    do {
      uStack_94 = 0xffffffff;
      iVar12 = (int)((ulong)(plVar24[1] - *plVar24) >> 3);
      uVar9 = iVar12 - 1;
      if ((int)uVar3 <= (int)uVar9) {
        uVar9 = uVar3;
      }
      local_90 = *(uint *)(*plVar24 +
                          (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3));
      if (iVar12 <= (int)uVar3) {
        uStack_94 = uVar9;
      }
      puVar4 = *(uint **)(param_1 + 0x130);
      puVar5 = *(uint **)(param_1 + 0x138);
      puVar23 = puVar4;
      local_98 = uVar3;
      if (puVar4 == puVar5) {
LAB_02b3ad88:
        if (puVar5 == puVar23) goto LAB_02b3ada0;
      }
      else {
        do {
          if ((*puVar23 == uVar3) && (puVar23[2] == local_90)) goto LAB_02b3ad88;
          puVar23 = puVar23 + 3;
        } while (puVar5 != puVar23);
LAB_02b3ada0:
        if (puVar5 == *(uint **)(param_1 + 0x140)) {
          uVar25 = *(ulong *)(param_1 + 0x150);
          lVar18 = (long)puVar5 - (long)puVar4 >> 2;
          if (0x7ffffffffffffffe < uVar25) {
            uVar25 = 0x7fffffffffffffff;
          }
          uVar30 = lVar18 * -0x5555555555555555 + 1;
          if (uVar25 < uVar30) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = (long)*(uint **)(param_1 + 0x140) - (long)puVar4 >> 2;
          uVar21 = lVar20 * 0x5555555555555556;
          if (uVar30 <= uVar21) {
            uVar30 = uVar21;
          }
          if ((ulong)(lVar20 * -0x5555555555555555) < uVar25 >> 1) {
            uVar25 = uVar30;
          }
          if (uVar25 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,uVar25 * 0xc,4);
            if (lVar20 == 0) {
              (**(code **)(*(long *)*puVar19 + 0xb8))();
            }
          }
          lVar29 = lVar20 + lVar18 * 4;
          FUN_02b3c994(puVar19,lVar29,&local_98);
          lVar32 = *(long *)(param_1 + 0x130);
          lVar28 = *(long *)(param_1 + 0x138);
          lVar18 = lVar29 + 0xc;
          if (lVar28 != lVar32) {
            do {
              lVar29 = lVar29 + -0xc;
              lVar28 = lVar28 + -0xc;
              FUN_02b3ca7c(puVar19,lVar29,lVar28);
            } while (lVar32 != lVar28);
            lVar32 = *(long *)(param_1 + 0x130);
          }
          lVar28 = *(long *)(param_1 + 0x140);
          *(ulong *)(param_1 + 0x140) = lVar20 + uVar25 * 0xc;
          *(long *)(param_1 + 0x130) = lVar29;
          *(long *)(param_1 + 0x138) = lVar18;
          if (lVar32 != 0) {
            plVar16 = (long *)*puVar19;
            lVar28 = lVar28 - lVar32;
            uVar25 = (**(code **)(*plVar16 + 0xc0))(plVar16);
            if ((uVar25 & 1) != 0) {
              lVar18 = tpidr_el0;
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar18 + 0x38d480)) {
                FUN_02bcc824(plVar16,lVar32,lVar28,4);
                goto LAB_02b3ad0c;
              }
            }
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar32,lVar28,4);
          }
        }
        else {
          FUN_02b3c994(puVar19,puVar5,&local_98);
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0xc;
        }
      }
LAB_02b3ad0c:
      plVar24 = plVar24 + 0xb;
    } while (plVar24 != plVar13);
  }
LAB_02b3b11c:
  plVar24 = (long *)(param_1 + 0xe8);
  lVar18 = *plVar24;
  lVar20 = *(long *)(param_1 + 0xf0);
  lVar32 = *(long *)(param_1 + 0xb8);
  if (lVar18 != lVar20) goto LAB_02b3b134;
  uVar25 = (ulong)*(int *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0x168) != 0) {
    puVar19 = (undefined8 *)(param_1 + 0x100);
    if ((ulong)(*(long *)(param_1 + 0xf8) - lVar20 >> 3) < uVar25) {
      uVar21 = *(ulong *)(param_1 + 0x108);
      lVar20 = lVar20 - lVar18 >> 3;
      uVar30 = lVar20 + uVar25;
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar21 < uVar30) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = *(long *)(param_1 + 0xf8) - lVar18;
      if ((ulong)(lVar18 >> 3) < uVar21 >> 1) {
        uVar22 = lVar18 >> 2;
        uVar21 = uVar30;
        if (uVar30 <= uVar22) {
          uVar21 = uVar22;
        }
      }
      if (uVar21 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,uVar21 << 3,8);
        if (lVar18 == 0) {
          (**(code **)(*(long *)*puVar19 + 0xb8))();
        }
      }
      lVar28 = lVar18 + lVar20 * 8;
      lVar20 = lVar28;
      do {
        FUN_02b3cb64(puVar19,lVar20);
        lVar20 = lVar20 + 8;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      plVar13 = *(long **)(param_1 + 0xe8);
      plVar16 = *(long **)(param_1 + 0xf0);
      if (plVar16 == plVar13) {
        plVar16 = plVar13;
      }
      else {
        do {
          lVar28 = lVar28 + -8;
          plVar16 = plVar16 + -1;
          FUN_02aa6e84(puVar19,lVar28,plVar16);
        } while (plVar13 != plVar16);
        plVar13 = *(long **)(param_1 + 0xf0);
        plVar16 = *(long **)(param_1 + 0xe8);
      }
      lVar29 = *(long *)(param_1 + 0xf8);
      *(ulong *)(param_1 + 0xf8) = lVar18 + uVar21 * 8;
      *(long *)(param_1 + 0xe8) = lVar28;
      *(long *)(param_1 + 0xf0) = lVar20;
      while (plVar13 != plVar16) {
        plVar13 = plVar13 + -1;
        plVar17 = (long *)*plVar13;
        if (plVar17 != (long *)0x0) {
          plVar2 = plVar17 + 10;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
        }
      }
      if (plVar16 != (long *)0x0) {
        plVar13 = (long *)*puVar19;
        lVar29 = lVar29 - (long)plVar16;
        uVar25 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar25 & 1) != 0) {
          lVar18 = tpidr_el0;
          if (*(char *)(lVar18 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar18 + 0x38d488) = 1;
            *(undefined8 *)(lVar18 + 0x38d478) = 0;
            *(undefined8 *)(lVar18 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar18 + 0x38d480)) {
            FUN_02bcc824(plVar13,plVar16,lVar29,8);
            goto LAB_02b3b720;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar16,lVar29,8);
      }
    }
    else {
      do {
        FUN_02b3cb64(puVar19);
        uVar25 = uVar25 - 1;
        *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 8;
      } while (uVar25 != 0);
    }
  }
LAB_02b3b720:
  if (*(long *)(lVar32 + 0x300) == *(long *)(lVar32 + 0x308)) {
    lVar20 = *(long *)(lVar32 + 0x278);
    lVar28 = *(long *)(lVar32 + 0x270);
    lVar18 = FUN_02a982f4(&local_98,*(undefined8 *)(param_1 + 8));
    if (lVar18 != 0) {
      piVar27 = (int *)(lVar18 + 0x50);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar8) {
          *piVar27 = *piVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    lVar20 = lVar20 - lVar28 >> 5;
    plVar16 = (long *)*plVar24;
    plVar13 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar13 != (long *)0x0) {
      plVar17 = plVar13 + 10;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *(int *)plVar17 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *plVar16 = lVar18;
    if ((param_6 & 1) != 0) {
      lVar18 = **(long **)(param_1 + 0xe8);
      *(undefined8 *)(lVar18 + 200) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(lVar18 + 0xd0) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(param_1 + 0xa0);
      plVar13 = *(long **)(param_1 + 0xa8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      plVar16 = *(long **)(lVar18 + 0xe0);
      *(long **)(lVar18 + 0xe0) = plVar13;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))();
      }
    }
    lVar18 = *(long *)*plVar24;
    FUN_02b44df0(lVar18 + 0x58,lVar20);
    FUN_02b45014(lVar18 + 0x90,lVar20);
  }
  else if (0 < *(int *)(param_1 + 0x168)) {
    lVar18 = (*(long *)(lVar32 + 0x308) - *(long *)(lVar32 + 0x300) >> 3) * 0x2e8ba2e8ba2e8ba3;
    if ((param_6 & 1) == 0) {
      lVar20 = 0;
      do {
        lVar28 = FUN_02a982f4(&local_98,*(undefined8 *)(param_1 + 8));
        if (lVar28 != 0) {
          piVar27 = (int *)(lVar28 + 0x50);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar8) {
              *piVar27 = *piVar27 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lVar29 = *plVar24;
        lVar31 = lVar20 * 8;
        plVar13 = *(long **)(lVar29 + lVar31);
        *(undefined8 *)(lVar29 + lVar31) = 0;
        if (plVar13 != (long *)0x0) {
          plVar16 = plVar13 + 10;
          do {
            iVar12 = (int)*plVar16 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *(int *)plVar16 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        *(long *)(lVar29 + lVar31) = lVar28;
        lVar28 = *(long *)(*(long *)(param_1 + 0xe8) + lVar31);
        FUN_02b44df0(lVar28 + 0x58,lVar18);
        FUN_02b45014(lVar28 + 0x90,lVar18);
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(param_1 + 0x168));
    }
    else {
      lVar20 = 0;
      do {
        lVar28 = FUN_02a982f4(&local_98,*(undefined8 *)(param_1 + 8));
        if (lVar28 != 0) {
          piVar27 = (int *)(lVar28 + 0x50);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar8) {
              *piVar27 = *piVar27 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lVar29 = *plVar24;
        lVar31 = lVar20 * 8;
        plVar13 = *(long **)(lVar29 + lVar31);
        *(undefined8 *)(lVar29 + lVar31) = 0;
        if (plVar13 != (long *)0x0) {
          plVar16 = plVar13 + 10;
          do {
            iVar12 = (int)*plVar16 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *(int *)plVar16 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        *(long *)(lVar29 + lVar31) = lVar28;
        lVar28 = *(long *)(*(long *)(param_1 + 0xe8) + lVar31);
        *(undefined8 *)(lVar28 + 200) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(lVar28 + 0xd0) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(lVar28 + 0xd8) = *(undefined8 *)(param_1 + 0xa0);
        plVar13 = *(long **)(param_1 + 0xa8);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        plVar16 = *(long **)(lVar28 + 0xe0);
        *(long **)(lVar28 + 0xe0) = plVar13;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x20))();
        }
        lVar28 = *(long *)(*(long *)(param_1 + 0xe8) + lVar20 * 8);
        FUN_02b44df0(lVar28 + 0x58,lVar18);
        FUN_02b45014(lVar28 + 0x90,lVar18);
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(param_1 + 0x168));
    }
  }
LAB_02b3b134:
  if (*(long *)(lVar32 + 0x300) == *(long *)(lVar32 + 0x308)) {
    lVar20 = *(long *)(param_1 + 0xb8);
    lVar18 = *(long *)(lVar20 + 0x278) - *(long *)(lVar20 + 0x270);
    if (lVar18 != 0) {
      lVar32 = 0;
      uVar25 = 1;
      while( true ) {
        FUN_010c4f0c(&local_98,param_1 + 0x60,*(long *)(lVar20 + 0x270) + lVar32,&DAT_03996322);
        FUN_02b45240(**(undefined8 **)(param_1 + 0xe8),&local_98,param_2 & 1,param_4,param_5);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
        }
        if ((ulong)(lVar18 >> 5) <= uVar25) break;
        lVar20 = *(long *)(param_1 + 0xb8);
        uVar25 = uVar25 + 1;
        lVar32 = lVar32 + 0x20;
      }
    }
  }
  else {
    piVar27 = *(int **)(param_1 + 0x130);
    piVar6 = *(int **)(param_1 + 0x138);
    if (piVar27 != piVar6) {
      do {
        iVar12 = *piVar27;
        lVar18 = *(long *)(param_1 + 0xb8);
        iVar26 = piVar27[2];
        if (piVar27[1] != -1) {
          lVar20 = *(long *)(param_1 + 0xe8);
          lVar32 = *(long *)(lVar20 + (long)piVar27[1] * 8);
          if (lVar32 != 0) {
            piVar1 = (int *)(lVar32 + 0x50);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = *piVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          lVar28 = (long)iVar12 * 8;
          plVar24 = *(long **)(lVar20 + lVar28);
          *(long *)(lVar20 + lVar28) = lVar32;
          if (plVar24 != (long *)0x0) {
            plVar13 = plVar24 + 10;
            do {
              iVar10 = (int)*plVar13 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar8) {
                *(int *)plVar13 = iVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar24 + 0x10))();
            }
          }
        }
        FUN_010c4f0c(&local_98,param_1 + 0x60,*(long *)(lVar18 + 0x270) + (long)iVar26 * 0x20,
                     &DAT_03996322);
        FUN_02b45240(*(undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar12 * 8),&local_98,
                     param_2 & 1,param_4,param_5);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
        }
        piVar27 = piVar27 + 3;
      } while (piVar27 != piVar6);
    }
  }
  lVar18 = *(long *)(param_1 + 0xe0);
  if ((lVar18 == 0) || (plVar24 = (long *)(lVar18 + 0x78), *plVar24 == *(long *)(lVar18 + 0x80))) {
    plVar24 = (long *)(*(long *)(param_1 + 0xb8) + 0x2c8);
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    lVar18 = *plVar24;
    lVar20 = plVar24[1];
    lVar32 = FUN_02aab204(&local_98,*(undefined8 *)(param_1 + 8));
    if (lVar32 != 0) {
      piVar27 = (int *)(lVar32 + 0x50);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar8) {
          *piVar27 = *piVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar13 = *(long **)(param_1 + 0x120);
    uVar25 = lVar20 - lVar18 >> 5;
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar13 != (long *)0x0) {
      plVar16 = plVar13 + 10;
      do {
        iVar12 = (int)*plVar16 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *(int *)plVar16 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x120) = lVar32;
    if ((param_6 & 1) != 0) {
      *(undefined8 *)(lVar32 + 0xd8) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(lVar32 + 0xe0) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(lVar32 + 0xe8) = *(undefined8 *)(param_1 + 0xa0);
      plVar13 = *(long **)(param_1 + 0xa8);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      plVar16 = *(long **)(lVar32 + 0xf0);
      *(long **)(lVar32 + 0xf0) = plVar13;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))();
      }
    }
    lVar32 = *(long *)(param_1 + 0x120);
    FUN_02b4630c(lVar32 + 0x60,uVar25);
    FUN_02b46530(lVar32 + 0x98,uVar25);
    if (lVar20 - lVar18 != 0) {
      lVar18 = 0;
      uVar30 = 0;
      do {
        FUN_010c4f0c(&local_98,param_1 + 0x60,*plVar24 + lVar18,&DAT_03996322);
        FUN_02b46770(*(undefined8 *)(param_1 + 0x120),&local_98,param_2 & 1,param_4,param_5);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
        }
        uVar30 = uVar30 + 1;
        lVar18 = lVar18 + 0x20;
      } while (uVar30 < uVar25);
    }
  }
  lVar18 = *(long *)(param_1 + 0xb8);
  if ((**(char **)(lVar18 + 0x2b0) != '\0') && (*(long *)(param_1 + 0x128) == 0)) {
    lVar20 = FUN_02aacc78(&local_98,*(undefined8 *)(param_1 + 8));
    if (lVar20 != 0) {
      piVar27 = (int *)(lVar20 + 0x50);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar8) {
          *piVar27 = *piVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar24 = *(long **)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (plVar24 != (long *)0x0) {
      plVar13 = plVar24 + 10;
      do {
        iVar12 = (int)*plVar13 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar8) {
          *(int *)plVar13 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar24 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x128) = lVar20;
    FUN_010c4f0c(&local_98,param_1 + 0x60,lVar18 + 0x2a8,&DAT_03996322);
    FUN_02b47794(lVar20,&local_98,param_2 & 1,param_4,param_5);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
    }
  }
  return;
}


