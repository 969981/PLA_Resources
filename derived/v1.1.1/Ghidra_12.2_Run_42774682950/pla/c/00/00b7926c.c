/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7926c; name: FUN_00b7926c
 */


void FUN_00b7926c(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long lVar11;
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar1 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      if (uVar5 < 2) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar10 || (plVar6[1] & uVar9 - 1) == unaff_x25))) {
          if (plVar6[2] == uVar10) {
            return;
          }
        }
      }
      else {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar5 = plVar6[1];
          if (uVar5 != uVar10) {
            if (uVar9 <= uVar5) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar5 / uVar9;
              }
              uVar5 = uVar5 - uVar1 * uVar9;
            }
            if (uVar5 != unaff_x25) break;
          }
          if (plVar6[2] == uVar10) {
            return;
          }
        }
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar11 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar6[2] = *param_2;
  lVar11 = *param_3;
  *param_3 = 0;
  plVar6[3] = lVar11;
  lVar8 = param_3[3];
  lVar11 = param_3[2];
  plVar6[4] = param_3[1];
  plVar6[5] = lVar11;
  plVar6[6] = lVar8;
  lVar11 = param_3[5];
  plVar6[7] = param_3[4];
  plVar6[8] = lVar11;
  lVar11 = param_3[6];
  param_3[6] = 0;
  plVar6[9] = lVar11;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_00b78cf4(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else if (uVar10 < uVar9) {
      unaff_x25 = uVar10;
    }
    else {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      unaff_x25 = uVar10 - uVar5 * uVar9;
    }
  }
  plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 6;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*plVar6 == 0) goto LAB_00b79424;
    uVar10 = *(ulong *)(*plVar6 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
    }
    plVar7 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar6 = *plVar7;
  }
  *plVar7 = (long)plVar6;
LAB_00b79424:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


