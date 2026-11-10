/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cec714; name: FUN_00cec714
 */


void FUN_00cec714(long *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  long lVar12;
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar3 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar11 || (plVar8[1] & uVar10 - 1) == unaff_x25))) {
          if (plVar8[2] == uVar11) {
            return;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar7 = plVar8[1];
          if (uVar7 != uVar11) {
            if (uVar10 <= uVar7) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar3 * uVar10;
            }
            if (uVar7 != unaff_x25) break;
          }
          if (plVar8[2] == uVar11) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x58,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar12 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar8[2] = *param_2;
  lVar12 = *param_3;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[3] = lVar12;
  plVar8[4] = 0;
  lVar12 = param_3[4];
  lVar1 = param_3[5];
  lVar2 = param_3[7];
  plVar8[9] = param_3[6];
  plVar8[10] = lVar2;
  plVar8[7] = lVar12;
  plVar8[8] = lVar1;
  plVar8[4] = param_3[1];
  plVar8[5] = param_3[2];
  plVar8[6] = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar11;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    FUN_00ced110(param_1,uVar7);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else if (uVar11 < uVar10) {
      unaff_x25 = uVar11;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar11 / uVar10;
      }
      unaff_x25 = uVar11 - uVar7 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 6;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar9;
    if (*plVar8 == 0) goto LAB_00cec8e8;
    uVar11 = *(ulong *)(*plVar8 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar7 * uVar10;
    }
    plVar9 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar8 = *plVar9;
  }
  *plVar9 = (long)plVar8;
LAB_00cec8e8:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


