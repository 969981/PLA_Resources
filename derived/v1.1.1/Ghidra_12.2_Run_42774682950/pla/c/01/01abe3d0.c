/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abe3d0; name: FUN_01abe3d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01abe3d0(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 uVar20;
  long *plVar21;
  undefined8 in_d3;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0 [2];
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  
  lVar12 = nn::os::GetCurrentThread();
  plVar17 = (long *)(param_1 + 0x388);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x37c));
        while (*plVar17 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01abe440;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01abe440:
  FUN_016c24d0(&local_58,param_1 + 0x208);
  if (local_58 == (long *)0x0) goto LAB_01abea34;
  *(undefined1 *)(param_1 + 0x370) = 1;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  uVar14 = *(ulong *)(lVar12 + 0x60);
  if (uVar14 == 0) {
LAB_01abea74:
    uVar20 = 0;
  }
  else {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x8ecbf07035a7ba12;
    }
    else if (uVar14 < 0x8ecbf07035a7ba13) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x8ecbf07035a7ba12 / uVar14;
      }
      uVar16 = 0x8ecbf07035a7ba12 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x8ecbf07035a7ba12;
    }
    plVar17 = *(long **)(*(long *)(lVar12 + 0x58) + uVar16 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_01abea74;
    if (1 < uVar15) {
      do {
        uVar15 = plVar17[1];
        if (uVar15 == 0x8ecbf07035a7ba12) {
          if (plVar17[2] == -0x71340f8fca5845ee) goto LAB_01abe5c4;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar4 * uVar14;
          }
          if (uVar15 != uVar16) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      goto LAB_01abea74;
    }
    do {
      if (plVar17[1] == 0x8ecbf07035a7ba12) {
        if (plVar17[2] == -0x71340f8fca5845ee) goto LAB_01abe5c4;
      }
      else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_01abea74;
      plVar17 = (long *)*plVar17;
      uVar20 = 0;
    } while (plVar17 != (long *)0x0);
  }
  goto LAB_01abe700;
LAB_01abe5c4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_01abea74;
  plVar21 = plVar17 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *(int *)plVar21 = (int)*plVar21 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar14 = plVar17[0x14];
  if (uVar14 == 0) {
    uVar20 = 0;
  }
  else {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x74b5d8dbfa30cfaf;
    }
    else if (uVar14 < 0x74b5d8dbfa30cfb0) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x74b5d8dbfa30cfaf / uVar14;
      }
      uVar16 = 0x74b5d8dbfa30cfaf - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x74b5d8dbfa30cfaf;
    }
    plVar19 = *(long **)(plVar17[0x13] + uVar16 * 8);
    if (plVar19 == (long *)0x0) {
      uVar20 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x74b5d8dbfa30cfaf) {
            if (plVar19[2] == 0x74b5d8dbfa30cfaf) goto LAB_01abe6e8;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) {
            uVar20 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          uVar20 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x74b5d8dbfa30cfaf) {
            if (plVar19[2] == 0x74b5d8dbfa30cfaf) goto LAB_01abe6e8;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) {
              uVar20 = 0;
              goto LAB_01abe6ec;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        uVar20 = 0;
      }
    }
  }
  goto LAB_01abe6ec;
LAB_01abe6e8:
  uVar20 = (undefined4)plVar19[6];
LAB_01abe6ec:
  do {
    iVar11 = (int)*plVar21 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *(int *)plVar21 = iVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_01abe700:
  FUN_01abecb4(param_1,0,uVar20);
  *(undefined4 *)(param_1 + 0x290) = 1;
  pbVar6 = PTR_DAT_043794b0;
  puVar7 = (undefined8 *)PTR_DAT_043794b8;
  puVar8 = (undefined8 *)PTR_DAT_043794c8;
  if (*(char *)(param_1 + 0x294) != '\0') {
    local_e0 = local_58[0x3e];
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar12 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar12;
    plVar17 = *(long **)(lVar12 + 0x270);
    if (plVar17 == (long *)0x0) {
LAB_01abeba8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar12 = plVar17[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01abeba8;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_010fae78(plVar17,&DAT_03a78e90,&local_e0,1);
    lVar12 = plVar17[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
      cVar2 = *(char *)(param_1 + 0x373);
      pbVar5 = PTR_DAT_043794d0;
      puVar18 = (undefined8 *)PTR_DAT_043794d8;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x373);
      pbVar5 = PTR_DAT_043794d0;
      puVar18 = (undefined8 *)PTR_DAT_043794d8;
    }
    pbVar6 = PTR_DAT_043794b0;
    puVar7 = (undefined8 *)PTR_DAT_043794b8;
    puVar8 = (undefined8 *)PTR_DAT_043794c8;
    PTR_DAT_043794d0 = pbVar5;
    PTR_DAT_043794d8 = (undefined *)puVar18;
    if (((cVar2 == '\0') && (lVar12 = *(long *)(param_1 + 0x278), lVar12 != 0)) &&
       (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar11 = *(int *)(lVar12 + 0xc);
      do {
        plVar17 = *(long **)(lVar12 + 0x10);
        if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
          uVar13 = FUN_0087f8f0();
          *puVar18 = uVar13;
          __cxa_guard_release(pbVar5);
        }
        while( true ) {
          pbVar6 = PTR_DAT_043794b0;
          puVar7 = (undefined8 *)PTR_DAT_043794b8;
          puVar8 = (undefined8 *)PTR_DAT_043794c8;
          if (plVar17 == (long *)0x0) goto joined_r0x01abeca0;
          if (plVar17 == puVar18) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            pbVar6 = PTR_DAT_043794b0;
            puVar7 = (undefined8 *)PTR_DAT_043794b8;
            puVar8 = (undefined8 *)PTR_DAT_043794c8;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar21 = *(long **)(param_1 + 0x288);
              plVar17 = (long *)(*(long *)(lVar12 + 0x18) + -8);
              if (plVar21 == (long *)0x0) {
                lVar12 = *plVar17;
              }
              else {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                (**(code **)(*plVar21 + 0x30))(plVar21,local_e0);
                lVar12 = *plVar21;
                plVar17 = plVar21;
              }
              (**(code **)(lVar12 + 0x18))(plVar17);
              pbVar6 = PTR_DAT_043794b0;
              puVar7 = (undefined8 *)PTR_DAT_043794b8;
              puVar8 = (undefined8 *)PTR_DAT_043794c8;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
        pbVar6 = PTR_DAT_043794b0;
        puVar7 = (undefined8 *)PTR_DAT_043794b8;
        puVar8 = (undefined8 *)PTR_DAT_043794c8;
      } while (iVar10 != 0);
    }
  }
joined_r0x01abeca0:
  PTR_DAT_043794b0 = pbVar6;
  PTR_DAT_043794b8 = (undefined *)puVar7;
  PTR_DAT_043794c8 = (undefined *)puVar8;
  if ((param_2 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x1a8);
    piVar1 = (int *)(lVar12 + 0xc);
    iVar11 = *(int *)(lVar12 + 0xc);
    do {
      while( true ) {
        puVar18 = *(undefined8 **)(lVar12 + 0x10);
        if (((*pbVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar6), iVar10 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *puVar7 = puVar8;
          __cxa_guard_release(pbVar6);
        }
        for (; puVar18 != puVar7; puVar18 = (undefined8 *)*puVar18) {
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar10;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar11 = iVar10;
    } while (cVar2 != '\0');
    lVar12 = *(long *)(lVar12 + 0x18);
    plVar17 = (long *)0x0;
    if (lVar12 != 0) {
      plVar17 = (long *)(lVar12 + -0x50);
    }
    (**(code **)(*plVar17 + 0x40))(plVar17);
    local_f0[0] = in_d3;
    if (lVar12 != 0) {
      lVar12 = plVar17[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_100 = 0x10;
    local_f8 = (long *)0x0;
    local_110 = 0x1827b420ce9fd8a9;
    pcStack_108 = "PLAY_OBJ_GET_RND";
    uVar13 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar13;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    FUN_0291356c(uVar13,&local_110,local_f0,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_e0,0,0);
    pcVar9 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar9)(&local_c0);
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar12 = local_58[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
LAB_01abea34:
  *(undefined8 *)(param_1 + 0x388) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x37c));
  return;
}


