/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a9bd4; name: FUN_010a9bd4
 */


void FUN_010a9bd4(long *param_1,ulong *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  plVar5 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x58,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar12 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar2 = PTR_DAT_04379528;
    if (iVar4 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
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
  uVar7 = *param_2;
  plVar5[2] = uVar7;
  *(undefined1 *)(plVar5 + 3) = *param_3;
  plVar5[4] = *(long *)(param_3 + 8);
  plVar5[5] = *(long *)(param_3 + 0x10);
  plVar5[6] = *(long *)(param_3 + 0x18);
  plVar5[7] = *(long *)(param_3 + 0x20);
  plVar5[8] = *(long *)(param_3 + 0x28);
  plVar5[9] = *(long *)(param_3 + 0x30);
  plVar5[10] = *(long *)(param_3 + 0x38);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    uVar7 = plVar5[2];
  }
  *plVar5 = 0;
  plVar5[1] = uVar7;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar8 = uVar11 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar11 <= uVar7) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar7 / uVar11;
        }
        uVar8 = uVar7 - uVar8 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar10 != (long *)0x0) {
      if (uVar9 < 2) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar11 - 1) != uVar8)) goto LAB_010a9e10;
        } while (plVar10[2] != uVar7);
      }
      else {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_010a9e10;
          uVar9 = plVar10[1];
          if (uVar11 <= uVar9) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar9 / uVar11;
            }
            uVar9 = uVar9 - uVar1 * uVar11;
          }
          if (uVar9 != uVar8) goto LAB_010a9e10;
        } while (plVar10[2] != uVar7);
      }
      if (plVar5 == (long *)0x0) {
        return;
      }
      plVar10 = (long *)param_1[7];
      uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar7 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar10,plVar5,0x58,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x010a9dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar5,0x58,8);
      return;
    }
  }
LAB_010a9e10:
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar9 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
      bVar3 = uVar11 < 3;
      uVar7 = uVar9;
      if (1 < uVar11) goto LAB_010a9f8c;
LAB_010a9f5c:
      FUN_010b29e4(param_1,uVar7);
    }
    else {
      if ((uVar9 & uVar9 - 1) != 0) {
        uVar9 = std::__next_prime(uVar9);
        uVar11 = param_1[1];
      }
      bVar3 = uVar11 <= uVar9;
      uVar7 = uVar9;
      if (uVar11 < uVar9) goto LAB_010a9f5c;
LAB_010a9f8c:
      if (!bVar3) {
        uVar7 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
        if ((uVar11 < 3) ||
           (uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
           uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
           1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar7 = std::__next_prime(uVar7);
        }
        else if (1 < uVar7) {
          uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
        }
        if (uVar7 <= uVar9) {
          uVar7 = uVar9;
        }
        if (uVar7 < uVar11) goto LAB_010a9f5c;
      }
    }
    uVar11 = param_1[1];
    uVar7 = plVar5[1];
  }
  uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar7 = uVar11 - 1 & uVar7;
  }
  else if (uVar11 <= uVar7) {
    uVar8 = 0;
    if (uVar11 != 0) {
      uVar8 = uVar7 / uVar11;
    }
    uVar7 = uVar7 - uVar8 * uVar11;
  }
  plVar10 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 6;
    *plVar5 = *plVar10;
    *plVar10 = (long)plVar5;
    *(long **)(*param_1 + uVar7 * 8) = plVar10;
    if (*plVar5 == 0) goto LAB_010a9e8c;
    uVar7 = *(ulong *)(*plVar5 + 8);
    if (uVar9 < 2) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar9 = 0;
      if (uVar11 != 0) {
        uVar9 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar9 * uVar11;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar5 = *plVar10;
  }
  *plVar10 = (long)plVar5;
LAB_010a9e8c:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


