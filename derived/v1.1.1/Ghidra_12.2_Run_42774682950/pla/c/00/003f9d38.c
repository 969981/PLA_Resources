/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f9d38; name: FUN_003f9d38
 */


undefined8 *
FUN_003f9d38(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t __n;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  uVar3 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar10 = (long)((long)param_2 - uVar3) >> 4;
  lVar7 = (long)param_4 - (long)param_3 >> 4;
  if (lVar7 <= (long)(param_1[2] - (long)puVar2) >> 4) {
    lVar4 = (long)puVar2 - (long)param_2 >> 4;
    puVar5 = puVar2;
    if (lVar4 < lVar7) {
      puVar8 = param_3 + lVar4 * 2;
      if (puVar8 != param_4) {
        puVar6 = puVar8;
        do {
          lVar4 = puVar6[1];
          if (lVar4 < 0) goto LAB_003f9fb8;
          puVar9 = puVar6 + 2;
          *puVar5 = *puVar6;
          puVar5[1] = lVar4;
          puVar5 = (undefined8 *)(param_1[1] + 0x10);
          param_1[1] = (ulong)puVar5;
          puVar6 = puVar9;
        } while (param_4 != puVar9);
      }
      param_4 = puVar8;
      if ((long)puVar2 - (long)param_2 < 1) {
        return param_2;
      }
    }
    puVar8 = puVar5 + lVar7 * -2;
    sVar1 = (long)puVar5 - (long)(param_2 + lVar7 * 2);
    if (puVar8 < puVar2) {
      uVar3 = (long)puVar2 + ~uVar3 + (((long)sVar1 >> 4) + lVar10) * -0x10;
      puVar6 = puVar5;
      if (((uint)uVar3 >> 4 & 1) == 0) {
        uVar12 = *puVar8;
        puVar5[1] = puVar8[1];
        *puVar5 = uVar12;
        uVar11 = param_1[1];
        param_1[1] = uVar11 + 0x10;
        puVar8 = puVar8 + 2;
        puVar6 = (undefined8 *)(uVar11 + 0x10);
      }
      if (0xf < uVar3) {
        do {
          uVar12 = *puVar8;
          puVar6[1] = puVar8[1];
          *puVar6 = uVar12;
          uVar3 = param_1[1];
          param_1[1] = uVar3 + 0x10;
          puVar6 = puVar8 + 3;
          uVar12 = puVar8[2];
          puVar8 = puVar8 + 4;
          *(undefined8 *)(uVar3 + 0x18) = *puVar6;
          *(undefined8 *)(uVar3 + 0x10) = uVar12;
          puVar6 = (undefined8 *)(param_1[1] + 0x10);
          param_1[1] = (ulong)puVar6;
        } while (puVar8 < puVar2);
      }
    }
    if (sVar1 != 0) {
      memmove(puVar5 + ((long)sVar1 >> 4) * -2,param_2,sVar1);
    }
    if (param_4 == param_3) {
      return param_2;
    }
    puVar2 = param_2;
    while (lVar7 = param_3[1], -1 < lVar7) {
      puVar5 = param_3 + 2;
      *puVar2 = *param_3;
      puVar2[1] = lVar7;
      puVar2 = puVar2 + 2;
      param_3 = puVar5;
      if (param_4 == puVar5) {
        return param_2;
      }
    }
LAB_003f9fb8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  uVar11 = lVar7 + ((long)((long)puVar2 - uVar3) >> 4);
  if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - uVar3;
  if ((ulong)(lVar7 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar7 >> 3;
    if (uVar11 <= uVar3) {
      uVar11 = uVar3;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
      puVar2 = (undefined8 *)(lVar10 << 4);
      goto joined_r0x003f9ea0;
    }
  }
  else {
    uVar11 = 0xfffffffffffffff;
  }
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 4);
  puVar2 = (undefined8 *)(lVar7 + lVar10 * 0x10);
joined_r0x003f9ea0:
  puVar5 = puVar2;
  if (param_3 != param_4) {
    puVar8 = puVar2;
    do {
      lVar10 = param_3[1];
      if (lVar10 < 0) {
                    /* try { // try from 003f9fd8 to 003f9ff7 has its CatchHandler @ 003fa000 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      puVar6 = param_3 + 2;
      *puVar8 = *param_3;
      puVar8[1] = lVar10;
      param_3 = puVar6;
      puVar5 = puVar8 + 2;
      puVar8 = puVar8 + 2;
    } while (param_4 != puVar6);
  }
  sVar1 = (long)param_2 - (long)*param_1;
  if (0 < (long)sVar1) {
    memcpy((void *)((long)puVar2 - sVar1),(void *)*param_1,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar5,param_2,__n);
    puVar5 = (undefined8 *)((long)puVar5 + __n);
  }
  uVar3 = *param_1;
  *param_1 = (ulong)((long)puVar2 - sVar1);
  param_1[1] = (ulong)puVar5;
  param_1[2] = lVar7 + uVar11 * 0x10;
  if (uVar3 == 0) {
    return puVar2;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return puVar2;
}


