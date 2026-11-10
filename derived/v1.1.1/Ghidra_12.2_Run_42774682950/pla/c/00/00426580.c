/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426580; name: FUN_00426580
 */


undefined8 FUN_00426580(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = FUN_0040c660();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar2 = 1 << (ulong)(param_5 & 0x1f);
    if ((int)param_5 < 4) {
      if (0 < (int)param_2) {
        lVar4 = *param_1;
        uVar8 = 0;
        do {
          lVar11 = 0;
          uVar9 = 0;
          do {
            lVar1 = lVar11 * 4;
            uVar10 = (uint)lVar11;
            lVar11 = lVar11 + 1;
            uVar9 = *(uint *)(param_3 + lVar1) &
                    (int)((uVar10 ^ param_4) - 1 & (param_4 ^ 0x80000000)) >> 0x1f | uVar9;
          } while (lVar11 < (int)uVar2);
          *(uint *)(lVar4 + uVar8 * 4) = uVar9;
          uVar8 = uVar8 + 1;
          param_3 = param_3 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
        } while (uVar8 != param_2);
      }
    }
    else if (0 < (int)param_2) {
      __s = (void *)*param_1;
      param_5 = param_5 - 2;
      if (param_5 == 0x1f) {
        memset(__s,0,(ulong)param_2 << 2);
      }
      else {
        uVar9 = (int)param_4 >> (param_5 & 0x1f);
        uVar10 = uVar9 ^ 0x80000000;
        iVar3 = 1 << (ulong)(param_5 & 0x1f);
        param_4 = iVar3 - 1U & param_4;
        uVar8 = 0;
        do {
          lVar4 = 0;
          uVar6 = 0;
          do {
            uVar7 = (uint)lVar4;
            lVar11 = lVar4 * 4;
            lVar4 = lVar4 + 1;
            uVar6 = (*(uint *)(param_3 + (long)(int)(iVar3 + uVar7) * 4) &
                     (int)((uVar9 ^ 1) - 1 & uVar10) >> 0x1f |
                     *(uint *)(param_3 + lVar11) & (int)(uVar9 - 1 & uVar10) >> 0x1f |
                     *(uint *)(param_3 + (long)(int)(iVar3 * 2 + uVar7) * 4) &
                     (int)((uVar9 ^ 2) - 1 & uVar10) >> 0x1f |
                    *(uint *)(param_3 + (long)(int)((3 << (ulong)(param_5 & 0x1f)) + uVar7) * 4) &
                    (int)((uVar9 ^ 3) - 1 & uVar10) >> 0x1f) &
                    (int)((param_4 ^ uVar7) - 1 & (param_4 ^ 0x80000000)) >> 0x1f | uVar6;
          } while (lVar4 < iVar3);
          *(uint *)((long)__s + uVar8 * 4) = uVar6;
          uVar8 = uVar8 + 1;
          param_3 = param_3 + (long)(int)uVar2 * 4;
        } while (uVar8 != param_2);
      }
    }
    uVar5 = 1;
    *(uint *)(param_1 + 1) = param_2;
  }
  return uVar5;
}


