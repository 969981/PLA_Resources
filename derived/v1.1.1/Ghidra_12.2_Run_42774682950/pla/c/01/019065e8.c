/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019065e8; name: FUN_019065e8
 */


int FUN_019065e8(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x2c9e96da352a7fc0;
  pcStack_48 = "evaluation_num";
  local_40 = 0xe;
  local_38 = (long *)0x0;
  uVar2 = FUN_01904f70(&local_50);
  iVar3 = *(int *)(param_1 + 0x94);
  if (iVar3 == 1) {
    local_50 = 0x8a148dc1a556becd;
    pcStack_48 = "random_value_max";
    local_40 = 0x10;
    local_38 = (long *)0x0;
    iVar3 = FUN_01904f70(&local_50);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar5 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar5;
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    else {
      puVar6 = *(ulong **)(lVar5 + 0xd8);
      uVar1 = iVar3 + 1;
      if (uVar1 == 0) {
        uVar10 = *puVar6;
        uVar9 = (int)puVar6[1] + (int)uVar10;
        uVar8 = puVar6[1] ^ uVar10;
        *puVar6 = uVar8 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar8 << 0x10;
        puVar6[1] = uVar8 >> 0x1b | uVar8 << 0x25;
      }
      else {
        lVar5 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
          lVar5 = 0x20;
        }
        uVar8 = lVar5 - LZCOUNT(uVar1);
        uVar10 = uVar8 >> 6;
        if ((uVar8 & 0x3f) != 0) {
          uVar10 = uVar10 + 1;
        }
        if (uVar8 < uVar10) {
          uVar7 = 0;
        }
        else {
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = uVar8 / uVar10;
          }
          uVar7 = (uint)(0xffffffffffffffff >> (-uVar11 & 0x3f));
        }
        uVar10 = *puVar6;
        uVar8 = puVar6[1];
        do {
          uVar11 = uVar10 ^ uVar8;
          iVar3 = (int)uVar8;
          uVar8 = uVar11 >> 0x1b | uVar11 << 0x25;
          uVar9 = (int)uVar10 + iVar3 & uVar7;
          uVar10 = uVar11 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar11 << 0x10;
        } while (uVar1 <= uVar9);
        *puVar6 = uVar10;
        puVar6[1] = uVar8;
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (*(float *)(param_1 + 0x88) <= (float)(int)uVar9) {
      uVar9 = *(int *)(param_1 + 0x90) + 1;
      *(uint *)(param_1 + 0x90) = uVar9;
      if (uVar9 < uVar2) {
        *(undefined4 *)(param_1 + 0x94) = 1;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x94) = 2;
LAB_0190677c:
      if (*(int *)(param_1 + 0x80) == 1) {
        return 0;
      }
      return 2;
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else if (iVar3 != 0) {
    if (iVar3 != 2) {
      return iVar3;
    }
    goto LAB_0190677c;
  }
  if (*(int *)(param_1 + 0x80) == 2) {
    return 2;
  }
  return 0;
}


