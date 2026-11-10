/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030d0c8; name: FUN_0030d0c8
 */


undefined8 *
FUN_0030d0c8(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t __n;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = (long)param_4 - (long)param_3;
  if (lVar11 < 1) {
    return param_2;
  }
  uVar3 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = (long)((long)param_2 - uVar3) >> 4;
  lVar6 = lVar11 >> 4;
  if (lVar6 <= (long)(param_1[2] - (long)puVar8) >> 4) {
    uVar10 = (long)puVar8 - (long)param_2 >> 4;
    puVar2 = puVar8;
    if ((long)uVar10 < lVar6) {
      puVar7 = param_3 + uVar10 * 2;
      if (puVar7 != param_4) {
        uVar10 = (long)param_4 + (~uVar10 * 0x10 - (long)param_3);
        puVar4 = puVar7;
        if (((uint)uVar10 >> 4 & 1) == 0) {
          uVar12 = *puVar7;
          puVar8[1] = puVar7[1];
          *puVar8 = uVar12;
          uVar5 = param_1[1];
          param_1[1] = uVar5 + 0x10;
          puVar2 = (undefined8 *)(uVar5 + 0x10);
          puVar4 = puVar7 + 2;
        }
        if (0xf < uVar10) {
          do {
            uVar12 = *puVar4;
            puVar2[1] = puVar4[1];
            *puVar2 = uVar12;
            uVar10 = param_1[1];
            param_1[1] = uVar10 + 0x10;
            puVar2 = puVar4 + 3;
            uVar12 = puVar4[2];
            puVar4 = puVar4 + 4;
            *(undefined8 *)(uVar10 + 0x18) = *puVar2;
            *(undefined8 *)(uVar10 + 0x10) = uVar12;
            puVar2 = (undefined8 *)(param_1[1] + 0x10);
            param_1[1] = (ulong)puVar2;
          } while (puVar4 != param_4);
        }
      }
      param_4 = puVar7;
      if ((long)puVar8 - (long)param_2 < 1) {
        return param_2;
      }
    }
    puVar7 = puVar2 + lVar6 * -2;
    sVar1 = (long)puVar2 - (long)(param_2 + lVar6 * 2);
    if (puVar7 < puVar8) {
      uVar3 = (long)puVar8 + ~uVar3 + (((long)sVar1 >> 4) + lVar9) * -0x10;
      puVar4 = puVar2;
      if (((uint)uVar3 >> 4 & 1) == 0) {
        uVar12 = *puVar7;
        puVar2[1] = puVar7[1];
        *puVar2 = uVar12;
        uVar10 = param_1[1];
        param_1[1] = uVar10 + 0x10;
        puVar7 = puVar7 + 2;
        puVar4 = (undefined8 *)(uVar10 + 0x10);
      }
      if (0xf < uVar3) {
        do {
          uVar12 = *puVar7;
          puVar4[1] = puVar7[1];
          *puVar4 = uVar12;
          uVar3 = param_1[1];
          param_1[1] = uVar3 + 0x10;
          puVar4 = puVar7 + 3;
          uVar12 = puVar7[2];
          puVar7 = puVar7 + 4;
          *(undefined8 *)(uVar3 + 0x18) = *puVar4;
          *(undefined8 *)(uVar3 + 0x10) = uVar12;
          puVar4 = (undefined8 *)(param_1[1] + 0x10);
          param_1[1] = (ulong)puVar4;
        } while (puVar7 < puVar8);
      }
    }
    if (sVar1 != 0) {
      memmove(puVar2 + ((long)sVar1 >> 4) * -2,param_2,sVar1);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    uVar3 = ((long)param_4 - (long)param_3) - 0x10;
    puVar2 = param_2;
    puVar8 = param_3;
    if (((uint)uVar3 >> 4 & 1) == 0) {
      puVar8 = param_3 + 2;
      uVar12 = *param_3;
      puVar2 = param_2 + 2;
      param_2[1] = param_3[1];
      *param_2 = uVar12;
    }
    if (uVar3 < 0x10) {
      return param_2;
    }
    do {
      uVar12 = *puVar8;
      puVar2[1] = puVar8[1];
      *puVar2 = uVar12;
      puVar7 = puVar8 + 3;
      uVar12 = puVar8[2];
      puVar8 = puVar8 + 4;
      puVar2[3] = *puVar7;
      puVar2[2] = uVar12;
      puVar2 = puVar2 + 4;
    } while (puVar8 != param_4);
    return param_2;
  }
  uVar10 = lVar6 + ((long)((long)puVar8 - uVar3) >> 4);
  if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - uVar3;
  if ((ulong)(lVar6 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar6 >> 3;
    if (uVar10 <= uVar3) {
      uVar10 = uVar3;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
      puVar8 = (undefined8 *)(lVar9 << 4);
      goto joined_r0x0030d1fc;
    }
  }
  else {
    uVar10 = 0xfffffffffffffff;
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar10 << 4);
  puVar8 = (undefined8 *)(lVar6 + lVar9 * 0x10);
joined_r0x0030d1fc:
  puVar2 = puVar8;
  if (param_3 != param_4) {
    if (((uint)(lVar11 - 0x10U) >> 4 & 1) == 0) {
      uVar12 = *param_3;
      puVar8[1] = param_3[1];
      *puVar8 = uVar12;
      puVar2 = puVar8 + 2;
      param_3 = param_3 + 2;
    }
    if (0xf < lVar11 - 0x10U) {
      do {
        uVar12 = *param_3;
        puVar2[1] = param_3[1];
        *puVar2 = uVar12;
        puVar7 = param_3 + 3;
        uVar12 = param_3[2];
        param_3 = param_3 + 4;
        puVar2[3] = *puVar7;
        puVar2[2] = uVar12;
        puVar2 = puVar2 + 4;
      } while (param_3 != param_4);
    }
  }
  sVar1 = (long)param_2 - (long)*param_1;
  if (0 < (long)sVar1) {
    memcpy((void *)((long)puVar8 - sVar1),(void *)*param_1,sVar1);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar2,param_2,__n);
    puVar2 = (undefined8 *)((long)puVar2 + __n);
  }
  uVar3 = *param_1;
  *param_1 = (ulong)((long)puVar8 - sVar1);
  param_1[1] = (ulong)puVar2;
  param_1[2] = lVar6 + uVar10 * 0x10;
  if (uVar3 == 0) {
    return puVar8;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return puVar8;
}


