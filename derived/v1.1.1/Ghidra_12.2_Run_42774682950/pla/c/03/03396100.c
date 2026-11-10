/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03396100; name: FUN_03396100
 */


void FUN_03396100(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = FUN_033961e0();
  puVar3 = PTR_PTR_0434a080;
  iVar6 = (int)uVar4;
  if ((int)param_1[1] == iVar6) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    uVar1 = iVar6 + 1;
    if (iVar6 < (int)(uVar7 & 0x3fffffff)) {
      lVar5 = *param_1;
    }
    else {
      lVar5 = *param_1;
      if (0x3ffffffe < iVar6) {
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
      lVar5 = FUN_032bd1d4(puVar3,uVar2,8,lVar5,uVar4);
      uVar4 = (ulong)*(uint *)(param_1 + 1);
      *param_1 = lVar5;
    }
    *(undefined8 *)(lVar5 + (long)(int)uVar4 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  return;
}


