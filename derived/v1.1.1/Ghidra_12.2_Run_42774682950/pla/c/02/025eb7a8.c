/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025eb7a8; name: FUN_025eb7a8
 */


long FUN_025eb7a8(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  
  uVar1 = *param_2;
  uVar10 = (ulong)uVar1;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar2 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar6 < 2) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != uVar10 && (plVar8[1] & uVar9 - 1) != unaff_x24)) goto LAB_025eb870;
        } while (*(uint *)(plVar8 + 2) != uVar1);
      }
      else {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_025eb870;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) {
            if (uVar9 <= uVar6) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar2 * uVar9;
            }
            if (uVar6 != unaff_x24) goto LAB_025eb870;
          }
        } while (*(uint *)(plVar8 + 2) != uVar1);
      }
      goto LAB_025eb854;
    }
  }
LAB_025eb870:
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,4);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar11 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    *(uint *)(plVar8 + 2) = *param_2;
    *(undefined8 *)((long)plVar8 + 0x14) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(uint *)(plVar8 + 2) = *param_2;
    *(undefined8 *)((long)plVar8 + 0x14) = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    FUN_025ed82c(param_1,uVar6);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else if (uVar10 < uVar9) {
      unaff_x24 = uVar10;
    }
    else {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      unaff_x24 = uVar10 - uVar6 * uVar9;
    }
  }
  plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 6;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar7;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar6 * uVar9;
      }
      plVar7 = (long *)(*param_1 + uVar10 * 8);
      goto LAB_025eb9a8;
    }
  }
  else {
    *plVar8 = *plVar7;
LAB_025eb9a8:
    *plVar7 = (long)plVar8;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_025eb854:
  return (long)plVar8 + 0x14;
}


