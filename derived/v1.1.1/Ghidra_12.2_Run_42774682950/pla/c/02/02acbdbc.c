/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02acbdbc; name: FUN_02acbdbc
 */


long * FUN_02acbdbc(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long lVar11;
  
  uVar9 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      unaff_x25 = uVar10 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar10 <= uVar9) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar9 / uVar10;
        }
        unaff_x25 = uVar9 - uVar5 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar6 < 2) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != uVar9 && (plVar8[1] & uVar10 - 1) != unaff_x25)) goto LAB_02acbec4;
        } while (plVar8[2] != uVar9);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_02acbec4;
          uVar6 = plVar8[1];
          if (uVar6 != uVar9) {
            if (uVar10 <= uVar6) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar5 * uVar10;
            }
            if (uVar6 != unaff_x25) goto LAB_02acbec4;
          }
        } while (plVar8[2] != uVar9);
      }
      goto LAB_02acc144;
    }
  }
LAB_02acbec4:
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x40,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar11 = param_1[7];
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
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar8[2] = *param_2;
  plVar8[3] = param_2[1];
  plVar8[4] = param_2[2];
  plVar4 = (long *)param_2[3];
  plVar8[5] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    plVar8[6] = 0;
    plVar8[7] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))();
    plVar8[6] = 0;
    plVar8[7] = 0;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar6) {
      uVar5 = uVar6;
LAB_02acc000:
      FUN_02ad3614(param_1,uVar5);
    }
    else if (uVar6 < uVar10) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar10 < 3) ||
         (uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar5 - 1) & 0x3f);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar10) goto LAB_02acc000;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x25 = uVar9;
    }
    else {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar9 / uVar10;
      }
      unaff_x25 = uVar9 - uVar6 * uVar10;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar8 != 0) {
      uVar9 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar9 = uVar9 & uVar10 - 1;
      }
      else if (uVar10 <= uVar9) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar9 / uVar10;
        }
        uVar9 = uVar9 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_02acc134;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_02acc134:
    *plVar4 = (long)plVar8;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_02acc144:
  return plVar8 + 6;
}


