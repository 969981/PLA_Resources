/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ceead4; name: FUN_00ceead4
 */


void FUN_00ceead4(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  bool bVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong unaff_x27;
  float fVar23;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_0437ad50;
  uVar15 = *(ulong *)(param_1 + 0x1f8);
  plVar1 = (long *)(param_1 + 0x1f0);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar9 = uVar15 - 1 & uVar10;
    }
    else if (uVar10 < uVar15) {
      uVar9 = uVar10;
    }
    else {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = uVar10 / uVar15;
      }
      uVar9 = uVar10 - uVar9 * uVar15;
    }
    plVar17 = *(long **)(*plVar1 + uVar9 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar17[1] == uVar10) {
            if (plVar17[2] == uVar10) {
              return;
            }
          }
          else if ((plVar17[1] & uVar15 - 1) != uVar9) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar17[1];
          if (uVar16 == uVar10) {
            if (plVar17[2] == uVar10) {
              return;
            }
          }
          else {
            if (uVar15 <= uVar16) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar14 * uVar15;
            }
            if (uVar16 != uVar9) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 600) == 0) {
    return;
  }
  lVar22 = *param_3;
  if (lVar22 != 0) {
    uVar4 = *(uint *)(lVar22 + 0xc);
    unaff_x27 = (ulong)uVar4;
    if (uVar4 != 0) {
      puVar2 = (uint *)(lVar22 + 0xc);
      uVar15 = (ulong)uVar4;
      do {
        puVar21 = *(undefined8 **)(lVar22 + 0x10);
        if (((*PTR_DAT_0437ad48 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437ad48), iVar8 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar8 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar19 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar19;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar7 = PTR_DAT_043795e0;
          __cxa_guard_release(PTR_DAT_0437ad48);
        }
        while( true ) {
          unaff_x27 = uVar15;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00ceec24;
          if (puVar21 == (undefined8 *)puVar7) break;
          puVar21 = (undefined8 *)*puVar21;
        }
        uVar4 = *puVar2;
        unaff_x27 = (ulong)uVar4;
        if (uVar4 == (uint)uVar15) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar18) {
            *puVar2 = (uint)uVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar22 = *(long *)(lVar22 + 0x18);
            plVar17 = (long *)(lVar22 + -0x50);
            unaff_x27 = uVar15;
            if (lVar22 != 0) {
              local_78 = *(long **)(param_1 + 600);
              if (local_78 != (long *)0x0) {
                plVar13 = local_78 + 10;
                do {
                  cVar5 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar18) {
                    *(int *)plVar13 = (int)*plVar13 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              FUN_00ceab9c(plVar17,&local_78);
              if (local_78 != (long *)0x0) {
                plVar13 = local_78 + 10;
                do {
                  iVar8 = (int)*plVar13 + -1;
                  cVar5 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar18) {
                    *(int *)plVar13 = iVar8;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
              }
              lVar22 = *(long *)(lVar22 + 8);
              piVar3 = (int *)(lVar22 + 0xc);
              do {
                iVar8 = *piVar3;
                cVar5 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar18) {
                  *piVar3 = iVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar22 + 0x18) = 0;
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar15 = unaff_x27;
      } while (uVar4 != 0);
    }
  }
LAB_00ceec24:
  uVar15 = *param_2;
  uVar16 = *(ulong *)(param_1 + 0x1f8);
  if (uVar16 != 0) {
    uVar10 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x27 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x27 = uVar15;
      if (uVar16 <= uVar15) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar15 / uVar16;
        }
        unaff_x27 = uVar15 - uVar9 * uVar16;
      }
    }
    plVar17 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar17 != (long *)0x0) {
      if (uVar10 < 2) {
        while ((plVar17 = (long *)*plVar17, plVar17 != (long *)0x0 &&
               (plVar17[1] == uVar15 || (plVar17[1] & uVar16 - 1) == unaff_x27))) {
          if (plVar17[2] == uVar15) {
            return;
          }
        }
      }
      else {
        while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
          uVar10 = plVar17[1];
          if (uVar10 != uVar15) {
            if (uVar16 <= uVar10) {
              uVar9 = 0;
              if (uVar16 != 0) {
                uVar9 = uVar10 / uVar16;
              }
              uVar10 = uVar10 - uVar9 * uVar16;
            }
            if (uVar10 != unaff_x27) break;
          }
          if (plVar17[2] == uVar15) {
            return;
          }
        }
      }
    }
  }
  plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0x228) + 0x10))
                              (*(long **)(param_1 + 0x228),0x28,8);
  if (plVar17 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x228) + 0xb8))();
  }
  uVar19 = *(undefined8 *)(param_1 + 0x228);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar22 == 0) {
    bVar18 = true;
  }
  else {
    if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar19;
    bVar18 = false;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
  }
  uVar10 = *param_2;
  plVar13 = plVar17 + 3;
  *plVar13 = 0;
  plVar17[2] = uVar10;
  plVar17[4] = 0;
  lVar20 = param_3[1];
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar19 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar19;
  FUN_02a44e0c(&local_70,uVar19,lVar20);
  puVar21 = (undefined8 *)*plVar13;
  *plVar13 = 0;
  if (local_70 == (undefined8 *)0x0) {
    if (puVar21 != (undefined8 *)0x0) {
      piVar3 = (int *)(puVar21 + 1);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 1) {
        puVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_68 = *puVar21;
        FUN_02a44274(lVar20 + 0xd8,&local_68);
      }
    }
    lVar20 = 0;
  }
  else {
    puVar12 = local_70;
    if (puVar21 != (undefined8 *)0x0) {
      piVar3 = (int *)(puVar21 + 1);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        puVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar21;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
      puVar12 = local_70;
    }
    local_70 = (undefined8 *)0x0;
    *plVar13 = (long)puVar12;
  }
  puVar21 = local_70;
  plVar17[4] = lVar20;
  if (local_70 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_70 + 1);
    do {
      iVar8 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68 = *puVar21;
      FUN_02a44274(lVar20 + 0xd8,&local_68);
    }
  }
  if (!bVar18) {
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
  }
  *plVar17 = 0;
  plVar17[1] = uVar15;
  fVar23 = (float)(*(long *)(param_1 + 0x248) + 1);
  if ((uVar16 == 0) || (*(float *)(param_1 + 0x250) * (float)uVar16 < fVar23)) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar10 = (ulong)(fVar23 / *(float *)(param_1 + 0x250));
    if (uVar10 <= uVar16) {
      uVar10 = uVar16;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__next_prime(uVar10);
    }
    uVar16 = *(ulong *)(param_1 + 0x1f8);
    if (uVar16 < uVar10) {
      uVar9 = uVar10;
LAB_00ceef80:
      FUN_00cf02ec(plVar1,uVar9);
    }
    else if (uVar10 < uVar16) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x248) / *(float *)(param_1 + 0x250));
      if ((uVar16 < 3) ||
         (uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
         1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (uVar9 < uVar16) goto LAB_00ceef80;
    }
    uVar16 = *(ulong *)(param_1 + 0x1f8);
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar15;
    }
    else if (uVar15 < uVar16) {
      unaff_x27 = uVar15;
    }
    else {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = uVar15 / uVar16;
      }
      unaff_x27 = uVar15 - uVar10 * uVar16;
    }
  }
  plVar13 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar17 = *(long *)(param_1 + 0x220);
    *(long **)(param_1 + 0x220) = plVar17;
    *(long *)(*(long *)(param_1 + 0x1f0) + unaff_x27 * 8) = param_1 + 0x220;
    if (*plVar17 == 0) goto LAB_00ceef48;
    uVar15 = *(ulong *)(*plVar17 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar10 * uVar16;
    }
    plVar13 = (long *)(*plVar1 + uVar15 * 8);
  }
  else {
    *plVar17 = *plVar13;
  }
  *plVar13 = (long)plVar17;
LAB_00ceef48:
  *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + 1;
  return;
}


