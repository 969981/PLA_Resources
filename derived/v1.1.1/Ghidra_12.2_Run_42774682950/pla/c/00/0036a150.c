/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036a150; name: FUN_0036a150
 */


void FUN_0036a150(long *param_1,ulong param_2)

{
  uint uVar1;
  void *__s;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *__s_00;
  long *plVar11;
  ulong uVar12;
  
  __s = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s >> 3)) {
    memset(__s,0,param_2 * 8);
    param_1[1] = (long)((long)__s + param_2 * 8);
    return;
  }
  lVar10 = (long)__s - *param_1 >> 3;
  uVar7 = lVar10 + param_2;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    uVar12 = uVar7;
    if (uVar7 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 == 0) {
      lVar4 = 0;
      goto LAB_0036a1f0;
    }
  }
  else {
    uVar12 = 0x1fffffffffffffff;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
LAB_0036a1f0:
  __s_00 = (long *)(lVar4 + lVar10 * 8);
  lVar10 = lVar4 + uVar12 * 8;
  memset(__s_00,0,param_2 << 3);
  lVar4 = lVar4 + uVar7 * 8;
  plVar11 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if ((long)plVar6 - (long)plVar11 == 0) {
    *param_1 = (long)__s_00;
    param_1[1] = lVar4;
    param_1[2] = lVar10;
  }
  else {
    uVar7 = ((long)plVar6 - (long)plVar11) - 8;
    uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar8 = -((ulong)uVar1 & 3);
      do {
        plVar6 = plVar6 + -1;
        lVar9 = *plVar6;
        *plVar6 = 0;
        __s_00 = __s_00 + -1;
        *__s_00 = lVar9;
        bVar3 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar7) {
      do {
        lVar8 = plVar6[-1];
        plVar6[-1] = 0;
        __s_00[-1] = lVar8;
        lVar8 = plVar6[-2];
        plVar6[-2] = 0;
        __s_00[-2] = lVar8;
        lVar8 = plVar6[-3];
        plVar6[-3] = 0;
        __s_00[-3] = lVar8;
        plVar6 = plVar6 + -4;
        lVar8 = *plVar6;
        *plVar6 = 0;
        __s_00 = __s_00 + -4;
        *__s_00 = lVar8;
      } while (plVar11 != plVar6);
    }
    plVar11 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    *param_1 = (long)__s_00;
    param_1[1] = lVar4;
    param_1[2] = lVar10;
    puVar2 = PTR_LAB_04373088;
    if (plVar6 != plVar11) {
      plVar6 = plVar6 + -1;
      lVar10 = *plVar6;
      *plVar6 = 0;
      if (lVar10 != 0) goto LAB_0036a2d8;
      while (plVar11 != plVar6) {
        while( true ) {
          plVar6 = plVar6 + -1;
          lVar10 = *plVar6;
          *plVar6 = 0;
          if (lVar10 == 0) break;
LAB_0036a2d8:
          FUN_0033e9f8(lVar10);
          FUN_002e2ea0(puVar2,lVar10);
          if (plVar11 == plVar6) goto LAB_0036a2f4;
        }
      }
    }
  }
LAB_0036a2f4:
  if (plVar11 == (long *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar11);
  return;
}


