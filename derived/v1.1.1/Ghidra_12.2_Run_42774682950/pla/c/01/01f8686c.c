/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8686c; name: FUN_01f8686c
 */


void FUN_01f8686c(long *param_1,ulong *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x26;
  undefined8 *puVar18;
  undefined8 *local_70;
  undefined8 local_68;
  
  uVar16 = *param_2;
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar10 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x26 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x26 = uVar16;
      if (uVar17 <= uVar16) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar16 / uVar17;
        }
        unaff_x26 = uVar16 - uVar9 * uVar17;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      if (uVar10 < 2) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar16 || (plVar6[1] & uVar17 - 1) == unaff_x26))) {
          if (plVar6[2] == uVar16) {
            return;
          }
        }
      }
      else {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar10 = plVar6[1];
          if (uVar10 != uVar16) {
            if (uVar17 <= uVar10) {
              uVar9 = 0;
              if (uVar17 != 0) {
                uVar9 = uVar10 / uVar17;
              }
              uVar10 = uVar10 - uVar9 * uVar17;
            }
            if (uVar10 != unaff_x26) break;
          }
          if (plVar6[2] == uVar16) {
            return;
          }
        }
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x30,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar15 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar5 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar10 = *param_2;
  plVar13 = plVar6 + 3;
  *plVar13 = 0;
  plVar6[2] = uVar10;
  plVar6[4] = 0;
  lVar15 = *(long *)(param_3 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar4 = PTR_DAT_043794a8;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_70,uVar8,lVar15);
  puVar18 = (undefined8 *)*plVar13;
  *plVar13 = 0;
  if (local_70 == (undefined8 *)0x0) {
    if (puVar18 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar18 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 1) {
        puVar18[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)puVar4 = lVar15;
        local_68 = *puVar18;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    lVar15 = 0;
  }
  else {
    puVar12 = local_70;
    if (puVar18 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar18 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        puVar18[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)puVar4 = lVar11;
        local_68 = *puVar18;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
      puVar12 = local_70;
    }
    local_70 = (undefined8 *)0x0;
    *plVar13 = (long)puVar12;
  }
  puVar18 = local_70;
  plVar6[4] = lVar15;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)puVar4 = lVar15;
      local_68 = *puVar18;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  lVar15 = *(long *)(param_3 + 0x10);
  plVar6[5] = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar16;
  if ((uVar17 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar17 < (float)(param_1[0xb] + 1))) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar17) {
      uVar10 = uVar17;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__next_prime(uVar10);
    }
    uVar17 = param_1[1];
    if (uVar17 < uVar10) {
      uVar9 = uVar10;
LAB_01f86af8:
      FUN_01f87ef4(param_1,uVar9);
    }
    else if (uVar10 < uVar17) {
      uVar9 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar17 < 3) ||
         (uVar14 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
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
      if (uVar9 < uVar17) goto LAB_01f86af8;
    }
    uVar17 = param_1[1];
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x26 = uVar17 - 1 & uVar16;
    }
    else if (uVar16 < uVar17) {
      unaff_x26 = uVar16;
    }
    else {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      unaff_x26 = uVar16 - uVar10 * uVar17;
    }
  }
  plVar13 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 6;
    *plVar6 = *plVar13;
    *plVar13 = (long)plVar6;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar13;
    if (*plVar6 == 0) goto LAB_01f86b3c;
    uVar16 = *(ulong *)(*plVar6 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar16 = uVar16 & uVar17 - 1;
    }
    else if (uVar17 <= uVar16) {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar10 * uVar17;
    }
    plVar13 = (long *)(*param_1 + uVar16 * 8);
  }
  else {
    *plVar6 = *plVar13;
  }
  *plVar13 = (long)plVar6;
LAB_01f86b3c:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


