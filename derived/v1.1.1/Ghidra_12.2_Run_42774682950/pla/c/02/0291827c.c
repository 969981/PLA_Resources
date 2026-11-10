/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291827c; name: FUN_0291827c
 */


long FUN_0291827c(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  long local_f0;
  code *local_e8;
  long local_e0;
  code *local_d8;
  undefined1 auStack_d0 [96];
  long local_70;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe));
  uVar11 = param_1[0xd] + 1;
  param_1[0xd] = uVar11;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_d0);
    local_f0 = *param_2;
    local_e8 = (code *)param_2[1];
    local_e0 = param_2[2];
    local_d8 = (code *)param_2[3];
    uVar11 = param_1[0xd];
  }
  pcVar2 = local_e8;
  uVar12 = param_1[1];
  local_70 = param_3;
  if (uVar12 != 0) {
    uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar5 * uVar12;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      if (uVar6 < 2) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar11 && (plVar7[1] & uVar12 - 1) != unaff_x26)) goto LAB_029183dc;
        } while (plVar7[2] != uVar11);
      }
      else {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_029183dc;
          uVar6 = plVar7[1];
          if (uVar6 != uVar11) {
            if (uVar12 <= uVar6) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar5 * uVar12;
            }
            if (uVar6 != unaff_x26) goto LAB_029183dc;
          }
        } while (plVar7[2] != uVar11);
      }
      goto LAB_029186a0;
    }
  }
LAB_029183dc:
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0xb0,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar10 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar3 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  lVar10 = param_1[0xd];
  plVar7[4] = 0;
  plVar7[2] = lVar10;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  if (local_d8 != (code *)0x0) {
    (*local_d8)(auStack_d0,plVar7 + 8);
    plVar7[7] = (long)local_d8;
    plVar7[4] = local_f0;
    plVar7[5] = (long)local_e8;
    plVar7[6] = local_e0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
      (*pcVar2)(auStack_d0);
    }
  }
  plVar7[0x14] = local_70;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar11;
  if ((uVar12 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar12 < (float)(param_1[0xb] + 1))) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar12) {
      uVar6 = uVar12;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar12 = param_1[1];
    if (uVar12 < uVar6) {
      uVar5 = uVar6;
LAB_0291855c:
      FUN_02919030(param_1,uVar5);
    }
    else if (uVar6 < uVar12) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar12 < 3) ||
         (uVar8 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar5 - 1) & 0x3f);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar12) goto LAB_0291855c;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else if (uVar11 < uVar12) {
      unaff_x26 = uVar11;
    }
    else {
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar11 / uVar12;
      }
      unaff_x26 = uVar11 - uVar6 * uVar12;
    }
  }
  plVar9 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 6;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar9;
    if (*plVar7 != 0) {
      uVar11 = *(ulong *)(*plVar7 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar6 * uVar12;
      }
      plVar9 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_02918690;
    }
  }
  else {
    *plVar7 = *plVar9;
LAB_02918690:
    *plVar9 = (long)plVar7;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_029186a0:
  if (local_e8 != (code *)0x0) {
    (*local_e8)(auStack_d0);
  }
  lVar10 = param_1[0xd];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe));
  return lVar10;
}


