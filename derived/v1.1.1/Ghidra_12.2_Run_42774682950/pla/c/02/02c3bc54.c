/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3bc54; name: FUN_02c3bc54
 */


undefined8 FUN_02c3bc54(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long lStack_68;
  
  local_80 = *(undefined8 *)(param_2 + 8);
  lVar6 = *(long *)(*(long *)(param_3 + 0x58) + 0x58);
  local_78 = *(undefined8 *)(lVar6 + 8);
  local_70 = *(undefined8 *)(lVar6 + 0x6098);
  lStack_68 = lVar6 + 0x10;
  auVar15 = FUN_02b94dac(*(undefined8 *)(lVar6 + 0x6140),&local_78,&local_80,1,
                         *(undefined8 *)(param_2 + 0x10));
  lVar6 = auVar15._8_8_;
  uVar10 = auVar15._0_8_;
  if (lVar6 != 0 && (uVar10 & 0xff) != 0) {
    FUN_00878414(*(long *)(*(long *)(*(long *)(param_3 + 0x58) + 0x58) + 0x6140) + 0x110,param_1,
                 *(undefined4 *)(lVar6 + 0x80));
  }
  if ((uVar10 & 0xff) == 0) {
    return 0;
  }
  uVar12 = *param_1;
  plVar1 = (long *)(param_3 + 0x98);
  uVar11 = *(ulong *)(param_3 + 0xa0);
  if (uVar11 != 0) {
    uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x26 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar11 <= uVar12) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar12 / uVar11;
        }
        unaff_x26 = uVar12 - uVar2 * uVar11;
      }
    }
    plVar8 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar12 || (plVar8[1] & uVar11 - 1) == unaff_x26))) {
          if (plVar8[2] == uVar12) {
            return 1;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar7 = plVar8[1];
          if (uVar7 != uVar12) {
            if (uVar11 <= uVar7) {
              uVar2 = 0;
              if (uVar11 != 0) {
                uVar2 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar2 * uVar11;
            }
            if (uVar7 != unaff_x26) break;
          }
          if (plVar8[2] == uVar12) {
            return 1;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(param_3 + 0xd0) + 0x10))
                             (*(long **)(param_3 + 0xd0),0x28,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_3 + 0xd0) + 0xb8))();
  }
  uVar13 = *(undefined8 *)(param_3 + 0xd0);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    plVar8[2] = uVar12;
    *(undefined1 (*) [16])(plVar8 + 3) = auVar15;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar8[4] = lVar6;
    plVar8[2] = uVar12;
    plVar8[3] = uVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar12;
  fVar14 = (float)(*(long *)(param_3 + 0xf0) + 1);
  if ((uVar11 == 0) || (*(float *)(param_3 + 0xf8) * (float)uVar11 < fVar14)) {
    uVar10 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar11 = (ulong)(fVar14 / *(float *)(param_3 + 0xf8));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    FUN_02c3ca08(plVar1,uVar11);
    uVar11 = *(ulong *)(param_3 + 0xa0);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x26 = uVar11 - 1 & uVar12;
    }
    else if (uVar12 < uVar11) {
      unaff_x26 = uVar12;
    }
    else {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar12 / uVar11;
      }
      unaff_x26 = uVar12 - uVar10 * uVar11;
    }
  }
  plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)(param_3 + 200);
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(*(long *)(param_3 + 0x98) + unaff_x26 * 8) = plVar9;
    if (*plVar8 == 0) goto LAB_02c3bf64;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar12 * uVar11;
    }
    plVar9 = (long *)(*plVar1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar9;
  }
  *plVar9 = (long)plVar8;
LAB_02c3bf64:
  *(long *)(param_3 + 0xf0) = *(long *)(param_3 + 0xf0) + 1;
  return 1;
}


