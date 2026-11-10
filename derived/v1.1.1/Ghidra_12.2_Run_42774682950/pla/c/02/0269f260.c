/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269f260; name: FUN_0269f260
 */


void FUN_0269f260(long *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long lVar11;
  
  uVar10 = param_1[1];
  uVar9 = (ulong)param_2;
  if (uVar10 != 0) {
    uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      unaff_x25 = (ulong)((int)uVar10 - 1U & param_2);
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
    plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      if (uVar8 < 2) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               (plVar3[1] == uVar9 || (plVar3[1] & uVar10 - 1) == unaff_x25))) {
          if (*(uint *)(plVar3 + 2) == param_2) {
            return;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar8 = plVar3[1];
          if (uVar8 != uVar9) {
            if (uVar10 <= uVar8) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar8 / uVar10;
              }
              uVar8 = uVar8 - uVar5 * uVar10;
            }
            if (uVar8 != unaff_x25) break;
          }
          if (*(uint *)(plVar3 + 2) == param_2) {
            return;
          }
        }
      }
    }
  }
  plVar3 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x18,4);
  if (plVar3 == (long *)0x0) {
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
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    *(undefined4 *)(plVar3 + 2) = *param_3;
    *(undefined4 *)((long)plVar3 + 0x14) = *param_4;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(undefined4 *)(plVar3 + 2) = *param_3;
    *(undefined4 *)((long)plVar3 + 0x14) = *param_4;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar3 = 0;
  plVar3[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      uVar8 = std::__next_prime(uVar8);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar8) {
      uVar5 = uVar8;
LAB_0269f388:
      FUN_0269f650(param_1,uVar5);
    }
    else if (uVar8 < uVar10) {
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
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar10) goto LAB_0269f388;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar10 - 1U & param_2);
    }
    else if (uVar9 < uVar10) {
      unaff_x25 = uVar9;
    }
    else {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar9 / uVar10;
      }
      unaff_x25 = uVar9 - uVar8 * uVar10;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar6;
    if (*plVar3 == 0) goto LAB_0269f3d0;
    uVar9 = *(ulong *)(*plVar3 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar8 * uVar10;
    }
    plVar6 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar3 = *plVar6;
  }
  *plVar6 = (long)plVar3;
LAB_0269f3d0:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


