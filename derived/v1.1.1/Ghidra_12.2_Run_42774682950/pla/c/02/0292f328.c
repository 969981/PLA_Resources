/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292f328; name: FUN_0292f328
 */


undefined1  [16] FUN_0292f328(long *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  long lVar14;
  undefined1 auVar15 [16];
  
  uVar12 = *param_2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar7 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x25 = uVar13 - 1 & uVar12;
    }
    else {
      unaff_x25 = uVar12;
      if (uVar13 <= uVar12) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar12 / uVar13;
        }
        unaff_x25 = uVar12 - uVar5 * uVar13;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      if (uVar7 < 2) {
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) ||
             (plVar11[1] != uVar12 && (plVar11[1] & uVar13 - 1) != unaff_x25)) goto LAB_0292f438;
        } while (plVar11[2] != uVar12);
      }
      else {
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_0292f438;
          uVar7 = plVar11[1];
          if (uVar7 != uVar12) {
            if (uVar13 <= uVar7) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar7 / uVar13;
              }
              uVar7 = uVar7 - uVar5 * uVar13;
            }
            if (uVar7 != unaff_x25) goto LAB_0292f438;
          }
        } while (plVar11[2] != uVar12);
      }
      uVar6 = 0;
      goto LAB_0292f710;
    }
  }
LAB_0292f438:
  plVar11 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x108,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar14 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar2 = PTR_DAT_04379528;
    if (iVar3 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar11[2] = *param_2;
  lVar10 = *param_3;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[10] = 0x666666666666666;
  plVar11[0xb] = 0;
  lVar14 = DAT_03a7e9dc;
  plVar11[5] = DAT_03a7e9d4;
  plVar11[6] = lVar14;
  lVar1 = DAT_03a7e9cc;
  lVar14 = DAT_03a7e9c4;
  plVar11[9] = lVar10;
  plVar11[0xd] = 0;
  plVar11[0xe] = lVar10;
  *(undefined4 *)(plVar11 + 0xc) = 0;
  plVar11[0xf] = 0x666666666666666;
  plVar11[0x10] = 0;
  *(undefined4 *)(plVar11 + 0x11) = 0;
  plVar11[0x12] = 0;
  plVar11[0x18] = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  *(undefined4 *)(plVar11 + 0x1e) = 0;
  plVar11[0x1f] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = lVar10;
  plVar11[0x17] = 0x666666666666666;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = lVar10;
  plVar11[0x1c] = 0x666666666666666;
  plVar11[0x1d] = 0;
  plVar11[3] = lVar14;
  plVar11[4] = lVar1;
  *(undefined4 *)(plVar11 + 0x13) = 0x3f800000;
  *(undefined4 *)(plVar11 + 0x20) = 0x3f800000;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar12;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar13 < (float)(param_1[0xb] + 1))) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar13) {
      uVar7 = uVar13;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar13 = param_1[1];
    if (uVar13 < uVar7) {
      uVar5 = uVar7;
LAB_0292f5c0:
      FUN_02930ef8(param_1,uVar5);
    }
    else if (uVar7 < uVar13) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar13 < 3) ||
         (uVar8 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar5 - 1) & 0x3f);
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar13) goto LAB_0292f5c0;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      unaff_x25 = uVar12;
    }
    else {
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = uVar12 / uVar13;
      }
      unaff_x25 = uVar12 - uVar7 * uVar13;
    }
  }
  plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 6;
    *plVar11 = *plVar9;
    *plVar9 = (long)plVar11;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar9;
    if (*plVar11 != 0) {
      uVar12 = *(ulong *)(*plVar11 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar7 * uVar13;
      }
      plVar9 = (long *)(*param_1 + uVar12 * 8);
      goto LAB_0292f6fc;
    }
  }
  else {
    *plVar11 = *plVar9;
LAB_0292f6fc:
    *plVar9 = (long)plVar11;
  }
  uVar6 = 1;
  param_1[0xb] = param_1[0xb] + 1;
LAB_0292f710:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = plVar11;
  return auVar15;
}


