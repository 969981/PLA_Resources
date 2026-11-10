/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033962f8; name: FUN_033962f8
 */


long FUN_033962f8(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar4 = FUN_033961e0();
  puVar3 = PTR_PTR_0434a080;
  if (*(uint *)(param_1 + 1) == uVar4) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    uVar1 = uVar4 + 1;
    if ((int)uVar4 < (int)(uVar6 & 0x3fffffff)) {
      lVar5 = *param_1;
      uVar6 = uVar4;
    }
    else {
      lVar5 = *param_1;
      if (0x3ffffffe < (int)uVar4) {
        FUN_032bd0a8(uVar1);
        uVar6 = *(uint *)((long)param_1 + 0xc);
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar6) {
        uVar2 = uVar6;
      }
      lVar5 = FUN_032bd1d4(puVar3,uVar2,8,lVar5,uVar4);
      uVar6 = *(uint *)(param_1 + 1);
      *param_1 = lVar5;
    }
    *(undefined8 *)(lVar5 + (long)(int)uVar6 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  return *param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1d);
}


