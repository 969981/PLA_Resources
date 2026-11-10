/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ebf3b0; name: FUN_01ebf3b0
 */


ulong FUN_01ebf3b0(ulong param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1;
  if ((*PTR_DAT_04379678 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04379678);
    uVar6 = param_1 & 0xffffffff;
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
      uVar6 = param_1 & 0xffffffff;
    }
  }
  lVar3 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar3;
  if ((int)uVar6 != 0) {
    puVar4 = *(ulong **)(lVar3 + 0xd8);
    uVar1 = (int)uVar6 + 1;
    if (uVar1 == 0) {
      uVar5 = *puVar4;
      uVar6 = (ulong)(uint)((int)puVar4[1] + (int)uVar5);
      uVar7 = puVar4[1] ^ uVar5;
      *puVar4 = uVar7 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar7 << 0x10;
      puVar4[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    }
    else {
      lVar3 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
        lVar3 = 0x20;
      }
      uVar5 = lVar3 - LZCOUNT(uVar1);
      uVar6 = uVar5 >> 6;
      if ((uVar5 & 0x3f) != 0) {
        uVar6 = uVar6 + 1;
      }
      if (uVar5 < uVar6) {
        uVar5 = 0;
      }
      else {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        uVar5 = 0xffffffffffffffff >> (-uVar7 & 0x3f);
      }
      uVar7 = *puVar4;
      uVar8 = puVar4[1];
      do {
        uVar9 = uVar7 ^ uVar8;
        uVar6 = uVar7 + uVar8;
        uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
        uVar6 = uVar6 & uVar5;
        uVar7 = uVar9 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar9 << 0x10;
      } while (uVar1 <= (uint)uVar6);
      *puVar4 = uVar7;
      puVar4[1] = uVar8;
    }
  }
  return uVar6;
}


