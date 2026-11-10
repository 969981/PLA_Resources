/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348630; name: FUN_03348630
 */


void FUN_03348630(long *param_1,ulong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if ((int)param_1[1] != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  puVar3 = PTR_PTR_0434a080;
  if (param_2 != 0) {
    puVar2 = (uint *)((long)param_1 + 0xc);
    uVar5 = 0;
    do {
      uVar7 = *puVar2;
      uVar4 = (undefined4)param_2;
      param_2 = param_2 >> 0x20;
      uVar1 = uVar5 + 1;
      if (uVar5 < (uVar7 & 0x3fffffff)) {
        lVar6 = *param_1;
      }
      else {
        lVar6 = *param_1;
        if (0x3ffffffe < uVar5) {
          FUN_032bd0a8(uVar1);
          uVar7 = *puVar2;
        }
        uVar7 = (uVar7 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar7) {
          uVar7 = 0x3fffffff;
        }
        if ((int)uVar7 < (int)uVar1) {
          uVar7 = uVar5 + 1;
        }
        lVar6 = FUN_032bd1d4(puVar3,uVar7,4,lVar6,uVar5,puVar2);
        uVar5 = *(uint *)(param_1 + 1);
        *param_1 = lVar6;
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar5 * 4) = uVar4;
      *(uint *)(param_1 + 1) = uVar1;
      uVar5 = uVar1;
    } while (param_2 != 0);
  }
  return;
}


