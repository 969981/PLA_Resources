/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7dc50; name: FUN_00b7dc50
 */


void FUN_00b7dc50(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x26;
  long lVar10;
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x26 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x26 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == uVar9 || (plVar4[1] & uVar8 - 1) == unaff_x26))) {
          if (plVar4[2] == uVar9) {
            return;
          }
        }
      }
      else {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar7 = plVar4[1];
          if (uVar7 != uVar9) {
            if (uVar8 <= uVar7) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar1 * uVar8;
            }
            if (uVar7 != unaff_x26) break;
          }
          if (plVar4[2] == uVar9) {
            return;
          }
        }
      }
    }
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x38,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar10 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  plVar4[2] = *param_2;
  plVar4[3] = *param_3;
  plVar4[4] = param_3[1];
  plVar4[5] = param_3[2];
  plVar6 = (long *)param_3[3];
  plVar4[6] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar4 = 0;
  plVar4[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    FUN_00b7df98(param_1,uVar7);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x26 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x26 = uVar9;
    }
    else {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      unaff_x26 = uVar9 - uVar7 * uVar8;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar6;
    if (*plVar4 == 0) goto LAB_00b7ddd0;
    uVar9 = *(ulong *)(*plVar4 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar7 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar4 = *plVar6;
  }
  *plVar6 = (long)plVar4;
LAB_00b7ddd0:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


