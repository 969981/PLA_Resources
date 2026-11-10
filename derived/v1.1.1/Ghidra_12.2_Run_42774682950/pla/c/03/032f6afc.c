/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6afc; name: FUN_032f6afc
 */


undefined1  [16] FUN_032f6afc(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = FUN_032f6bf8();
  puVar4 = PTR_PTR_0434a080;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == uVar5) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    uVar1 = uVar5 + 1;
    if ((int)uVar5 < (int)(uVar7 & 0x3fffffff)) {
      lVar6 = *param_1;
      uVar7 = uVar5;
    }
    else {
      lVar6 = *param_1;
      if (0x3ffffffe < (int)uVar5) {
        FUN_032bd0a8(uVar1);
        uVar7 = *(uint *)((long)param_1 + 0xc);
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar2 = uVar7;
      }
      lVar6 = FUN_032bd1d4(puVar4,uVar2,8,lVar6,uVar5);
      uVar7 = *(uint *)(param_1 + 1);
      *param_1 = lVar6;
    }
    *(undefined8 *)(lVar6 + (long)(int)uVar7 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  auVar8[8] = uVar3 == uVar5;
  auVar8._0_8_ = *param_1 + ((long)((ulong)uVar5 << 0x20) >> 0x1d);
  auVar8._9_7_ = 0;
  return auVar8;
}


