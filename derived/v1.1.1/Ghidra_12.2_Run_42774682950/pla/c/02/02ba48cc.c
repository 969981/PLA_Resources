/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba48cc; name: FUN_02ba48cc
 */


void FUN_02ba48cc(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_2 < 2) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10) - lVar1;
  lVar2 = lVar4 >> 3;
  uVar3 = lVar2 * -0x5555555555555555;
  if (uVar3 == param_2) {
    return;
  }
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = uVar3 / param_2;
  }
  if (uVar3 == uVar6 * param_2) {
    return;
  }
  if (param_2 < uVar3) {
    uVar6 = uVar3;
    uVar7 = param_2;
LAB_02ba4938:
    uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    uVar7 = uVar7 >> (uVar8 & 0x3f);
    uVar6 = uVar6 >> (uVar5 & 0x3f);
    if ((uint)uVar8 <= (uint)uVar5) {
      uVar5 = uVar8;
    }
    while (1 < uVar7) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar6 / uVar7;
      }
      uVar8 = uVar6 - uVar8 * uVar7;
      uVar6 = uVar7 - uVar8;
      if (uVar8 == 0) goto LAB_02ba49a8;
      if (uVar6 == 0) {
        uVar6 = uVar8 << (uVar5 & 0x3f);
        goto joined_r0x02ba49d0;
      }
      uVar7 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> (LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) & 0x3fU);
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> (LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) & 0x3fU);
      uVar7 = uVar8;
      if (uVar6 <= uVar8) {
        uVar7 = uVar6;
        uVar6 = uVar8;
      }
    }
    if (uVar7 == 1) {
      uVar6 = 1;
    }
LAB_02ba49a8:
    uVar6 = uVar6 << (uVar5 & 0x3f);
joined_r0x02ba49d0:
    if (uVar6 != 0) goto LAB_02ba49b0;
    uVar7 = 0;
  }
  else {
    uVar6 = param_2;
    uVar7 = uVar3;
    if (lVar4 != 0) goto LAB_02ba4938;
LAB_02ba49b0:
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = param_2 / uVar6;
    }
    uVar7 = uVar7 * uVar3;
    lVar2 = uVar7 + lVar2 * 0x5555555555555555;
    if (uVar3 <= uVar7 && lVar2 != 0) {
      FUN_02ba4a08((long *)(param_1 + 8),lVar2);
      goto LAB_02ba49ec;
    }
  }
  if (uVar7 < uVar3) {
    *(ulong *)(param_1 + 0x10) = lVar1 + uVar7 * 0x18;
  }
LAB_02ba49ec:
  if (uVar7 <= *(uint *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}


