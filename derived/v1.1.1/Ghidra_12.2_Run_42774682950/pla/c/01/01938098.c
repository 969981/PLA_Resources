/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01938098; name: FUN_01938098
 */


void FUN_01938098(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar6 = param_2[2];
    uVar2 = param_2[3] - iVar6;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379678), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar4 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar4;
    if ((int)uVar2 < 1) {
LAB_01938218:
      uVar11 = 0;
      goto LAB_01938158;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar7 = uVar2 + 1;
    lVar9 = LZCOUNT(uVar7);
    lVar1 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)lVar9 & 0x1f) & uVar7) != 0) {
      lVar1 = 0x20;
    }
    puVar5 = *(ulong **)(lVar4 + 0xd8);
    uVar8 = lVar1 - lVar9;
    uVar10 = uVar8 >> 6;
    if ((uVar8 & 0x3f) != 0) {
      uVar10 = uVar10 + 1;
    }
    if (uVar8 < uVar10) {
      uVar7 = 0;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar7 = (uint)(0xffffffffffffffff >> (-uVar12 & 0x3f));
    }
    uVar10 = *puVar5;
    uVar8 = puVar5[1];
    do {
      uVar12 = uVar10 ^ uVar8;
      iVar3 = (int)uVar8;
      uVar8 = uVar12 >> 0x1b | uVar12 << 0x25;
      uVar11 = (int)uVar10 + iVar3 & uVar7;
      uVar10 = uVar12 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar12 << 0x10;
    } while (uVar2 < uVar11);
  }
  else {
    iVar6 = *param_2;
    uVar2 = param_2[1] - iVar6;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379678), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar4 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar4;
    if ((int)uVar2 < 1) goto LAB_01938218;
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar7 = uVar2 + 1;
    lVar9 = LZCOUNT(uVar7);
    lVar1 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)lVar9 & 0x1f) & uVar7) != 0) {
      lVar1 = 0x20;
    }
    puVar5 = *(ulong **)(lVar4 + 0xd8);
    uVar8 = lVar1 - lVar9;
    uVar10 = uVar8 >> 6;
    if ((uVar8 & 0x3f) != 0) {
      uVar10 = uVar10 + 1;
    }
    if (uVar8 < uVar10) {
      uVar7 = 0;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar7 = (uint)(0xffffffffffffffff >> (-uVar12 & 0x3f));
    }
    uVar10 = *puVar5;
    uVar8 = puVar5[1];
    do {
      uVar12 = uVar10 ^ uVar8;
      iVar3 = (int)uVar8;
      uVar8 = uVar12 >> 0x1b | uVar12 << 0x25;
      uVar11 = (int)uVar10 + iVar3 & uVar7;
      uVar10 = uVar12 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar12 << 0x10;
    } while (uVar2 < uVar11);
  }
  *puVar5 = uVar10;
  puVar5[1] = uVar8;
LAB_01938158:
  *(uint *)(param_1 + 0x10) = uVar11 + iVar6;
  return;
}


