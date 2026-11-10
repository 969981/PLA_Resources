/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f41bf0; name: FUN_01f41bf0
 */


ulong FUN_01f41bf0(long param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 in_q3 [16];
  undefined8 uVar24;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  int local_108 [30];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  uVar24 = in_q3._8_8_;
  uVar23 = in_q3._0_8_;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    return 0;
  }
  lVar14 = nn::os::GetCurrentThread();
  plVar19 = (long *)(param_1 + 0x538);
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x52c));
        while (*plVar19 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01f41c9c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f41c9c:
  if ((ulong *)*param_2 == (ulong *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(ulong *)*param_2;
  }
  uVar16 = *(ulong *)(param_1 + 0x3e0);
  local_70[0] = uVar20;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & uVar20;
    }
    else {
      uVar18 = uVar20;
      if (uVar16 <= uVar20) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar20 / uVar16;
        }
        uVar18 = uVar20 - uVar18 * uVar16;
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x3d8) + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar20) {
            if (plVar19[2] == uVar20) goto LAB_01f41d30;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar20) {
            if (plVar19[2] == uVar20) goto LAB_01f41d30;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_78 = 0;
  FUN_00b63974(&local_88,param_2);
  uVar1 = DAT_043d4860 + 0x20;
  if (-1 < DAT_043d4860 + 1) {
    uVar1 = DAT_043d4860 + 1;
  }
  local_78 = CONCAT44(1,DAT_043d4860);
  DAT_043d4860 = (DAT_043d4860 + 1) - (uVar1 & 0xffffffe0);
  FUN_01f50040((long *)(param_1 + 0x3d8),local_70,&local_88);
  local_110 = (ulong)local_110._4_4_ << 0x20;
  FUN_01f47bc0(local_108,*(undefined8 *)(param_1 + 8));
  local_90 = 0;
  local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(param_1 + 0x4b8));
  local_120 = 0x500000005;
  local_118 = local_78._4_4_;
  FUN_01f50940(local_108,&local_120);
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  local_90 = 1;
  lVar14 = *param_2;
  if (lVar14 != 0) {
    uVar1 = (uint)local_110;
    lVar21 = (long)(int)(uint)local_110;
    if (*(int *)(lVar14 + 0xc) != 0) {
      piVar2 = (int *)(lVar14 + 0xc);
      iVar12 = *(int *)(lVar14 + 0xc);
      do {
        plVar19 = *(long **)(lVar14 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_01f41e40;
          if (plVar19 == (long *)puVar10) break;
          plVar19 = (long *)*plVar19;
        }
        iVar13 = *piVar2;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar7 = PTR_DAT_043794b8;
          puVar6 = PTR_DAT_043794b0;
          if (cVar3 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            if (lVar14 != 0) {
              lVar22 = *(long *)(lVar14 + 0x158);
              piVar2 = (int *)(lVar22 + 0xc);
              iVar12 = *(int *)(lVar22 + 0xc);
              do {
                while( true ) {
                  plVar19 = *(long **)(lVar22 + 0x10);
                  if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                        uVar15 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)puVar7 = PTR_DAT_043794c8;
                    __cxa_guard_release(puVar6);
                  }
                  for (; plVar19 != (long *)puVar7; plVar19 = (long *)*plVar19) {
                  }
                  iVar13 = *piVar2;
                  if (iVar13 == iVar12) break;
                  ClearExclusiveLocal();
                  iVar12 = iVar13;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                iVar12 = iVar13;
              } while (cVar3 != '\0');
              lVar22 = *(long *)(lVar22 + 0x18);
              plVar19 = (long *)0x0;
              if (lVar22 != 0) {
                plVar19 = (long *)(lVar22 + -0x50);
              }
              (**(code **)(*plVar19 + 0x40))(plVar19);
              if (lVar22 != 0) {
                lVar22 = plVar19[0xb];
                piVar2 = (int *)(lVar22 + 0xc);
                do {
                  iVar12 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar22 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
              if (4 < uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_01f49f10();
              }
              lVar21 = *(long *)(param_1 + lVar21 * 8 + 0x440);
              *(undefined1 *)(lVar21 + 0xe0) = 1;
              *(undefined8 *)(lVar21 + 0xd8) = uVar24;
              *(undefined8 *)(lVar21 + 0xd0) = uVar23;
              lVar21 = *(long *)(lVar14 + 8);
              piVar2 = (int *)(lVar21 + 0xc);
              do {
                iVar12 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
  }
LAB_01f41e40:
  FUN_01f5193c(param_1 + 0x4c0,local_70,&local_110);
  iVar13 = *(int *)(param_1 + 0x4b8);
  iVar12 = iVar13 + -4;
  if (iVar13 + 1U < 5) {
    iVar12 = iVar13 + 1;
  }
  *(int *)(param_1 + 0x4b8) = iVar12;
  FUN_01f47c54(local_108);
  puVar11 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_110 = *puVar11;
      FUN_02a44274(lVar14 + 0xd8,&local_110);
    }
  }
  uVar20 = local_70[0];
LAB_01f41d78:
  *(undefined8 *)(param_1 + 0x538) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x52c));
  return uVar20;
LAB_01f41d30:
  iVar12 = *(int *)((long)plVar19 + 0x2c) + 1;
  *(int *)((long)plVar19 + 0x2c) = iVar12;
  lVar14 = FUN_01f52a24(param_1 + 0x4c0,local_70);
  if (lVar14 != 0) {
    local_110 = 0x500000005;
    local_108[0] = iVar12;
    FUN_01f50940(lVar14 + 0x20,&local_110);
    *(int *)(lVar14 + 0x98) = *(int *)(lVar14 + 0x98) + 1;
  }
  goto LAB_01f41d78;
}


