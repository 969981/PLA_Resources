/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03328a7c; name: FUN_03328a7c
 */


undefined1  [16] FUN_03328a7c(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar4 = FUN_03328b80();
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == uVar4) {
    puVar6 = (uint *)((long)param_1 + 0xc);
    uVar5 = *puVar6;
    uVar1 = uVar4 + 1;
    if ((int)uVar4 < (int)(uVar5 & 0x3fffffff)) {
      lVar7 = *param_1;
      uVar5 = uVar4;
    }
    else {
      lVar7 = *param_1;
      if (0x3ffffffe < (int)uVar4) {
        FUN_032bd0a8(uVar1);
        uVar5 = *puVar6;
      }
      uVar5 = (uVar5 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar5) {
        uVar3 = uVar5;
      }
      lVar7 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,4,lVar7,uVar4,puVar6);
      *param_1 = lVar7;
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(undefined4 *)(lVar7 + (long)(int)uVar5 * 4) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  auVar8[8] = uVar2 == uVar4;
  auVar8._0_8_ = *param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1e);
  auVar8._9_7_ = 0;
  return auVar8;
}


