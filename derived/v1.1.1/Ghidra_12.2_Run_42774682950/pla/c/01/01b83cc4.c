/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b83cc4; name: FUN_01b83cc4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b83cc4(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined4 local_7c;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d0;
  lVar25 = *param_3;
  if (lVar25 == 0) {
    return;
  }
  if (*(int *)(lVar25 + 0xc) == 0) {
    return;
  }
  piVar16 = (int *)(lVar25 + 0xc);
  iVar11 = *(int *)(lVar25 + 0xc);
  do {
    plVar28 = *(long **)(lVar25 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar23 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar23;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar28 == (long *)0x0) {
        return;
      }
      if (plVar28 == (long *)puVar9) break;
      plVar28 = (long *)*plVar28;
    }
    iVar10 = *piVar16;
    if (iVar10 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar25 = *(long *)(lVar25 + 0x18);
        if (lVar25 == 0) {
          return;
        }
        plVar22 = (long *)(lVar25 + -0x50);
        puVar12 = (undefined8 *)FUN_0183680c(plVar22);
        local_7c = 0x26;
        uVar13 = FUN_01833e7c(param_1,puVar12);
        uVar15 = *(ulong *)(param_1 + 0x140);
        plVar28 = (long *)(param_1 + 0x138);
        if (uVar15 == 0) goto LAB_01b8475c;
        uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = (ulong)((uint)uVar15 - 1) & 0x26;
        }
        else {
          uVar19 = 0x26;
          if (uVar15 < 0x27) {
            uVar1 = (uint)uVar15 & 0xff;
            uVar4 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar4 = 0x26 / uVar1;
            }
            uVar19 = (ulong)(0x26 - uVar4 * uVar1);
          }
        }
        plVar20 = *(long **)(*plVar28 + uVar19 * 8);
        if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
        goto LAB_01b8475c;
        if (1 < uVar18) break;
        goto LAB_01b83e74;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    uVar18 = plVar20[1];
    if (uVar18 == 0x26) {
      if ((int)plVar20[2] == 0x26) goto LAB_01b83e8c;
    }
    else {
      if (uVar15 <= uVar18) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar18 / uVar15;
        }
        uVar18 = uVar18 - uVar5 * uVar15;
      }
      if (uVar18 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_01b8475c;
LAB_01b83f48:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    lVar27 = plVar20[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar15 = *(ulong *)(param_1 + 0xd8);
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0x26;
    }
    else {
      uVar19 = 0x26;
      if (uVar15 < 0x27) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 0x26 / uVar1;
        }
        uVar19 = (ulong)(0x26 - uVar4 * uVar1);
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0xd0) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0x26) {
            if ((int)plVar21[2] == 0x26) goto LAB_01b84044;
          }
          else if ((plVar21[1] & uVar15 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0x26) {
            if ((int)plVar21[2] == 0x26) goto LAB_01b84044;
          }
          else {
            if (uVar15 <= uVar18) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar5 * uVar15;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01b84ad4;
LAB_01b84044:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    lVar27 = plVar21[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar15 = *(ulong *)(param_1 + 0x140);
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0x26;
    }
    else {
      uVar19 = 0x26;
      if (uVar15 < 0x27) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 0x26 / uVar1;
        }
        uVar19 = (ulong)(0x26 - uVar4 * uVar1);
      }
    }
    plVar28 = *(long **)(*plVar28 + uVar19 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar28[1] == 0x26) {
            if ((int)plVar28[2] == 0x26) goto LAB_01b84140;
          }
          else if ((plVar28[1] & uVar15 - 1) != uVar19) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar28[1];
          if (uVar18 == 0x26) {
            if ((int)plVar28[2] == 0x26) goto LAB_01b84140;
          }
          else {
            if (uVar15 <= uVar18) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar5 * uVar15;
            }
            if (uVar18 != uVar19) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  goto LAB_01b84ad4;
LAB_01b84140:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    lVar27 = plVar28[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((uVar13 & 1) != 0) {
    lVar27 = FUN_01b85730(plVar20 + 10);
    local_c0 = (long *)*param_2;
    if (local_c0 == (long *)0x0) {
      plVar29 = (long *)0x0;
    }
    else {
      lVar30 = local_c0[0xb];
      if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
      if (*(long *)(lVar30 + 0x10) == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
        *(undefined8 *)(lVar30 + 0x10) = uVar23;
      }
      piVar16 = (int *)(lVar30 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar29 = local_c0;
    }
    local_78[0] = puVar12;
    FUN_01b85b50(lVar27 + 0x68,local_78,&local_c0);
    if (plVar29 != (long *)0x0) {
      lVar27 = plVar29[0xb];
      piVar16 = (int *)(lVar27 + 0xc);
      do {
        iVar11 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
    }
  }
  puVar12 = (undefined8 *)(**(code **)plVar28[10])(plVar28 + 10);
  FUN_01b85a7c();
  plVar29 = (long *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      if (puVar12 == (undefined8 *)PTR_DAT_04381e60) {
        plVar29 = plVar28;
        goto LAB_01b8424c;
      }
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)0x0);
    plVar29 = (long *)0x0;
  }
LAB_01b8424c:
  FUN_009c69bc(&local_88,*param_2);
  (**(code **)(*local_88 + 0x10))(local_78);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_68 = *puVar12;
      FUN_02a44274(lVar27 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar24 = (undefined8 *)*local_a8;
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar27 + 0xd8,local_78);
    }
  }
  if (local_88 != (long *)0x0) {
    lVar27 = local_88[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_c8 = (long *)*param_2;
  if (local_c8 == (long *)0x0) {
    plVar26 = (long *)0x0;
  }
  else {
    lVar27 = local_c8[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar26 = local_c8;
  }
  local_78[0] = puVar24;
  FUN_01b866f0(plVar29 + 0xd,local_78,&local_c8);
  if (plVar26 != (long *)0x0) {
    lVar27 = plVar26[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  puVar12 = (undefined8 *)FUN_01836804(plVar22);
  uVar13 = FUN_01833e7c(param_1,puVar12);
  if ((uVar13 & 1) != 0) {
    lVar27 = FUN_01b85730(plVar21 + 10);
    local_78[0] = puVar12;
    lVar30 = FUN_01b8729c(lVar27 + 0x68,local_78);
    if (lVar30 == 0) {
      local_d0 = (long *)*param_2;
      if (local_d0 == (long *)0x0) {
        plVar29 = (long *)0x0;
      }
      else {
        lVar30 = local_d0[0xb];
        if (*(undefined8 **)(lVar30 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
        if (*(long *)(lVar30 + 0x10) == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar30 + 0x18))();
          *(undefined8 *)(lVar30 + 0x10) = uVar23;
        }
        piVar16 = (int *)(lVar30 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = *piVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar29 = local_d0;
      }
      local_78[0] = puVar12;
      FUN_01b85b50(lVar27 + 0x68,local_78,&local_d0);
      if (plVar29 != (long *)0x0) {
        lVar27 = plVar29[0xb];
        piVar16 = (int *)(lVar27 + 0xc);
        do {
          iVar11 = *piVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar3) {
            *piVar16 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
    }
  }
  if (plVar28 != (long *)0x0) {
    lVar27 = plVar28[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar27 = plVar21[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (plVar20 == (long *)0x0) goto LAB_01b8447c;
  lVar27 = plVar20[0xb];
  piVar16 = (int *)(lVar27 + 0xc);
  do {
    iVar11 = *piVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar3) {
      *piVar16 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01b8447c;
  *(undefined8 *)(lVar27 + 0x18) = 0;
  pcVar17 = *(code **)(*plVar20 + 0x20);
  goto LAB_01b845bc;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_01b83e74:
    if (plVar20[1] == 0x26) {
      if ((int)plVar20[2] == 0x26) goto LAB_01b83e8c;
    }
    else if ((plVar20[1] & uVar15 - 1) != uVar19) break;
  }
LAB_01b8475c:
  uVar23 = *(undefined8 *)(param_1 + 8);
  local_88 = (long *)FUN_018a9da0(local_78,uVar23);
  if (local_88 != (long *)0x0) {
    lVar27 = local_88[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar14;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = (long *)FUN_018aaacc(local_78,uVar23);
  if (local_90 != (long *)0x0) {
    lVar27 = local_90[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar20 = local_88;
  if ((uVar13 & 1) != 0) {
    local_98 = (long *)*param_2;
    if (local_98 == (long *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      lVar27 = local_98[0xb];
      if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
      if (*(long *)(lVar27 + 0x10) == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
        *(undefined8 *)(lVar27 + 0x10) = uVar23;
      }
      piVar16 = (int *)(lVar27 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar21 = local_98;
    }
    local_78[0] = puVar12;
    FUN_01b85b50(plVar20 + 0xd,local_78,&local_98);
    if (plVar21 != (long *)0x0) {
      lVar27 = plVar21[0xb];
      piVar16 = (int *)(lVar27 + 0xc);
      do {
        iVar11 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    FUN_01b862e8(param_1 + 0x68,&local_7c,&local_88);
  }
  FUN_009c69bc(&local_b0,*param_2);
  (**(code **)(*local_b0 + 0x10))(local_78);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_0087f944(&local_a8,local_78);
  puVar12 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    piVar16 = (int *)(local_78[0] + 1);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_68 = *puVar12;
      FUN_02a44274(lVar27 + 0xd8,&local_68);
    }
  }
  puVar12 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    piVar16 = (int *)(local_a8 + 1);
    puVar24 = (undefined8 *)*local_a8;
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar27 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar27;
      local_78[0] = (undefined8 *)*puVar12;
      FUN_02a44274(lVar27 + 0xd8,local_78);
    }
  }
  if (local_b0 != (long *)0x0) {
    lVar27 = local_b0[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  plVar20 = local_90;
  local_b8 = (long *)*param_2;
  if (local_b8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    lVar27 = local_b8[0xb];
    if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) goto LAB_01b84ad8;
    if (*(long *)(lVar27 + 0x10) == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
      *(undefined8 *)(lVar27 + 0x10) = uVar23;
    }
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar21 = local_b8;
  }
  local_78[0] = puVar24;
  FUN_01b866f0(plVar20 + 0xd,local_78,&local_b8);
  if (plVar21 != (long *)0x0) {
    lVar27 = plVar21[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  FUN_01b86e88(plVar28,&local_7c,&local_90);
  plVar20 = local_88;
  if (local_90 != (long *)0x0) {
    lVar27 = local_90[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      plVar20 = local_88;
    }
  }
  local_88 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar27 = plVar20[0xb];
    piVar16 = (int *)(lVar27 + 0xc);
    do {
      iVar11 = *piVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      pcVar17 = *(code **)(*plVar20 + 0x20);
LAB_01b845bc:
      (*pcVar17)(plVar20);
    }
  }
LAB_01b8447c:
  lVar25 = *(long *)(lVar25 + 8);
  piVar16 = (int *)(lVar25 + 0xc);
  do {
    iVar11 = *piVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar3) {
      *piVar16 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
LAB_01b83e8c:
  uVar15 = *(ulong *)(param_1 + 0x70);
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = (ulong)((uint)uVar15 - 1) & 0x26;
    }
    else {
      uVar19 = 0x26;
      if (uVar15 < 0x27) {
        uVar1 = (uint)uVar15 & 0xff;
        uVar4 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar4 = 0x26 / uVar1;
        }
        uVar19 = (ulong)(0x26 - uVar4 * uVar1);
      }
    }
    plVar20 = *(long **)(*(long *)(param_1 + 0x68) + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] == 0x26) {
            if ((int)plVar20[2] == 0x26) goto LAB_01b83f48;
          }
          else if ((plVar20[1] & uVar15 - 1) != uVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0x26) {
            if ((int)plVar20[2] == 0x26) goto LAB_01b83f48;
          }
          else {
            if (uVar15 <= uVar18) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar5 * uVar15;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01b84ad4:
  FUN_01b87290();
LAB_01b84ad8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


