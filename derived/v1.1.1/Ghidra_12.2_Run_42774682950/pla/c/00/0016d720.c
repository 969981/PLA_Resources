/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d720; name: FUN_0016d720
 */


long FUN_0016d720(long param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if (param_3 < 0x29) {
    lVar8 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(lVar8 + 0x50) ^ (uint)param_3;
    uVar5 = param_3 >> 5;
    if (uVar5 < param_3) {
      uVar6 = param_3;
      do {
        lVar7 = uVar6 - 1;
        uVar6 = uVar6 + ~uVar5;
        uVar9 = uVar9 * 0x20 + (uVar9 >> 2) + (uint)*(byte *)((long)param_2 + lVar7) ^ uVar9;
      } while (uVar5 < uVar6);
    }
    iVar2 = *(int *)(lVar8 + 0x3c);
    plVar10 = (long *)(*(long *)(lVar8 + 0x30) + (long)(int)(iVar2 - 1U & uVar9) * 8);
    for (lVar7 = *plVar10; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
      if ((*(byte *)(lVar7 + 0xb) == param_3) &&
         (iVar4 = memcmp(param_2,(void *)(lVar7 + 0x18),param_3), iVar4 == 0)) {
        bVar1 = *(byte *)(lVar7 + 9) ^ 3;
        if (((*(byte *)(lVar8 + 0x54) ^ 3) & bVar1) == 0) {
          *(byte *)(lVar7 + 9) = bVar1;
          return lVar7;
        }
        return lVar7;
      }
    }
    if ((iVar2 < 0x40000000) && (iVar2 <= *(int *)(lVar8 + 0x38))) {
      FUN_0016d340(param_1,iVar2 << 1);
      plVar10 = (long *)(*(long *)(lVar8 + 0x30) +
                        (long)(int)(*(int *)(lVar8 + 0x3c) - 1U & uVar9) * 8);
    }
    lVar7 = FUN_0015cc60(param_1,4,param_3 + 0x19);
    *(uint *)(lVar7 + 0xc) = uVar9;
    *(undefined1 *)(lVar7 + 10) = 0;
    *(undefined1 *)(lVar7 + 0x18 + param_3) = 0;
    memcpy((void *)(lVar7 + 0x18),param_2,param_3);
    *(char *)(lVar7 + 0xb) = (char)param_3;
    *(long *)(lVar7 + 0x10) = *plVar10;
    *plVar10 = lVar7;
    *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
  }
  else {
    if (0x7fffffffffffffe6 < param_3) {
      auVar11 = FUN_001615b0(param_1);
      lVar8 = auVar11._8_8_;
      uVar3 = *(undefined4 *)(*(long *)(auVar11._0_8_ + 0x18) + 0x50);
      lVar7 = FUN_0015cc60(auVar11._0_8_,0x14,lVar8 + 0x19);
      *(undefined4 *)(lVar7 + 0xc) = uVar3;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined1 *)(lVar7 + lVar8 + 0x18) = 0;
      *(long *)(lVar7 + 0x10) = lVar8;
      return lVar7;
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x50);
    lVar7 = FUN_0015cc60(param_1,0x14,param_3 + 0x19);
    *(undefined4 *)(lVar7 + 0xc) = uVar3;
    *(undefined1 *)(lVar7 + 10) = 0;
    *(undefined1 *)(lVar7 + 0x18 + param_3) = 0;
    *(ulong *)(lVar7 + 0x10) = param_3;
    memcpy((void *)(lVar7 + 0x18),param_2,param_3);
  }
  return lVar7;
}


