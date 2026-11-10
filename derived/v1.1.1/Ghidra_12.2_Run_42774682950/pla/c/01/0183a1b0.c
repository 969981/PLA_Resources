/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183a1b0; name: FUN_0183a1b0
 */


void FUN_0183a1b0(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x26;
  undefined8 uVar16;
  float fVar17;
  undefined8 *local_a0 [2];
  long *local_90;
  long *local_88;
  long local_80;
  undefined1 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if ((ulong *)*param_2 == (ulong *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(ulong *)*param_2;
  }
  uVar10 = *(ulong *)(param_1 + 0x298);
  plVar1 = (long *)(param_1 + 0x290);
  if (uVar10 != 0) {
    uVar14 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar9 = uVar10 - 1 & uVar15;
    }
    else {
      uVar9 = uVar15;
      if (uVar10 <= uVar15) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar15 / uVar10;
        }
        uVar9 = uVar15 - uVar9 * uVar10;
      }
    }
    plVar8 = *(long **)(*plVar1 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar8[1] == uVar15) {
            if (plVar8[2] == uVar15) {
              return;
            }
          }
          else if ((plVar8[1] & uVar10 - 1) != uVar9) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar8[1];
          if (uVar14 == uVar15) {
            if (plVar8[2] == uVar15) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar14) {
              uVar13 = 0;
              if (uVar10 != 0) {
                uVar13 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar13 * uVar10;
            }
            if (uVar14 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  local_80 = 0;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_78 = 0;
  FUN_00bd10a0(&local_70,param_2);
  FUN_01839b24(&local_88,param_2);
  if (local_88 == (long *)0x0) {
LAB_0183a2c8:
    uVar10 = *(ulong *)(param_1 + 0x298);
  }
  else {
    FUN_02be8e60(local_a0,local_88,0);
    FUN_01839c8c(&local_90,local_a0);
    if (local_a0[0] != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0[0] + 1);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_a0[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *local_a0[0];
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (local_90 != (long *)0x0) {
      local_78 = *(undefined1 *)((long)local_90 + 0x322);
      lVar11 = local_90[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    if (local_88 == (long *)0x0) goto LAB_0183a2c8;
    lVar11 = local_88[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_0183a2c8;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
    uVar10 = *(ulong *)(param_1 + 0x298);
  }
  if (uVar10 != 0) {
    uVar14 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      unaff_x26 = uVar10 - 1 & uVar15;
    }
    else {
      unaff_x26 = uVar15;
      if (uVar10 <= uVar15) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar15 / uVar10;
        }
        unaff_x26 = uVar15 - uVar9 * uVar10;
      }
    }
    plVar8 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar14 < 2) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != uVar15 && (plVar8[1] & uVar10 - 1) != unaff_x26)) goto LAB_0183a2d0;
        } while (plVar8[2] != uVar15);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0183a2d0;
          uVar14 = plVar8[1];
          if (uVar14 != uVar15) {
            if (uVar10 <= uVar14) {
              uVar9 = 0;
              if (uVar10 != 0) {
                uVar9 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar9 * uVar10;
            }
            if (uVar14 != unaff_x26) goto LAB_0183a2d0;
          }
        } while (plVar8[2] != uVar15);
      }
      goto LAB_0183a430;
    }
  }
LAB_0183a2d0:
  plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))
                             (*(long **)(param_1 + 0x2c8),0x38,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2c8) + 0xb8))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x2c8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar11 == 0) {
    plVar8[2] = uVar15;
    plVar8[5] = 0;
    *(undefined1 *)(plVar8 + 4) = local_78;
    plVar8[3] = local_80;
    plVar8[6] = 0;
    FUN_00bd10a0(plVar8 + 5,&local_70);
  }
  else {
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar8[2] = uVar15;
    plVar8[5] = 0;
    plVar8[6] = 0;
    *(undefined1 *)(plVar8 + 4) = local_78;
    plVar8[3] = local_80;
    FUN_00bd10a0(plVar8 + 5,&local_70);
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar15;
  fVar17 = (float)(*(long *)(param_1 + 0x2e8) + 1);
  if ((uVar10 == 0) || (*(float *)(param_1 + 0x2f0) * (float)uVar10 < fVar17)) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar14 = (ulong)(fVar17 / *(float *)(param_1 + 0x2f0));
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      uVar14 = std::__next_prime(uVar14);
    }
    uVar10 = *(ulong *)(param_1 + 0x298);
    if (uVar10 < uVar14) {
      uVar9 = uVar14;
LAB_0183a3e0:
      FUN_0184192c(plVar1,uVar9);
    }
    else if (uVar14 < uVar10) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x2e8) / *(float *)(param_1 + 0x2f0));
      if ((uVar10 < 3) ||
         (uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
         1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar14) {
        uVar9 = uVar14;
      }
      if (uVar9 < uVar10) goto LAB_0183a3e0;
    }
    uVar10 = *(ulong *)(param_1 + 0x298);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & uVar15;
    }
    else if (uVar15 < uVar10) {
      unaff_x26 = uVar15;
    }
    else {
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar14 = uVar15 / uVar10;
      }
      unaff_x26 = uVar15 - uVar14 * uVar10;
    }
  }
  plVar12 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar8 = *(long *)(param_1 + 0x2c0);
    *(long **)(param_1 + 0x2c0) = plVar8;
    *(long *)(*(long *)(param_1 + 0x290) + unaff_x26 * 8) = param_1 + 0x2c0;
    if (*plVar8 != 0) {
      uVar15 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar15 = uVar15 & uVar10 - 1;
      }
      else if (uVar10 <= uVar15) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar14 * uVar10;
      }
      plVar12 = (long *)(*plVar1 + uVar15 * 8);
      goto LAB_0183a58c;
    }
  }
  else {
    *plVar8 = *plVar12;
LAB_0183a58c:
    *plVar12 = (long)plVar8;
  }
  *(long *)(param_1 + 0x2e8) = *(long *)(param_1 + 0x2e8) + 1;
LAB_0183a430:
  puVar6 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_70 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_a0[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar11 + 0xd8,local_a0);
    }
  }
  return;
}


