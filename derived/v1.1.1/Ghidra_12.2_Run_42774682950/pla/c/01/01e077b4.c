/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e077b4; name: FUN_01e077b4
 */


long * FUN_01e077b4(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong local_50;
  
  uVar5 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      local_50 = uVar11 - 1 & uVar5;
    }
    else {
      local_50 = uVar5;
      if (uVar11 <= uVar5) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar5 / uVar11;
        }
        local_50 = uVar5 - uVar4 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + local_50 * 8);
    if (plVar10 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) ||
             (plVar10[1] != uVar5 && (plVar10[1] & uVar11 - 1) != local_50)) goto LAB_01e07878;
        } while (plVar10[2] != uVar5);
      }
      else {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_01e07878;
          uVar8 = plVar10[1];
          if (uVar8 != uVar5) {
            if (uVar11 <= uVar8) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar4 * uVar11;
            }
            if (uVar8 != local_50) goto LAB_01e07878;
          }
        } while (plVar10[2] != uVar5);
      }
      goto LAB_01e07858;
    }
  }
LAB_01e07878:
  plVar10 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar6 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar2 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    plVar10[2] = *param_2;
    plVar10[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar10[2] = *param_2;
    plVar10[3] = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar5;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__next_prime(uVar8);
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar8) {
LAB_01e07970:
      FUN_01e0896c(param_1);
    }
    else if (uVar8 < uVar11) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
      }
      if (uVar4 <= uVar8) {
        uVar4 = uVar8;
      }
      if (uVar4 < uVar11) goto LAB_01e07970;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      local_50 = uVar11 - 1 & uVar5;
    }
    else if (uVar5 < uVar11) {
      local_50 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar11 != 0) {
        uVar8 = uVar5 / uVar11;
      }
      local_50 = uVar5 - uVar8 * uVar11;
    }
  }
  plVar9 = *(long **)(*param_1 + local_50 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 6;
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
    *(long **)(*param_1 + local_50 * 8) = plVar9;
    if (*plVar10 != 0) {
      uVar5 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar5 = uVar5 & uVar11 - 1;
      }
      else if (uVar11 <= uVar5) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar5 / uVar11;
        }
        uVar5 = uVar5 - uVar8 * uVar11;
      }
      plVar9 = (long *)(*param_1 + uVar5 * 8);
      goto LAB_01e079e8;
    }
  }
  else {
    *plVar10 = *plVar9;
LAB_01e079e8:
    *plVar9 = (long)plVar10;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_01e07858:
  return plVar10 + 3;
}


