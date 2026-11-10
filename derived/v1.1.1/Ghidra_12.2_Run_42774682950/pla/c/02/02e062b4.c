/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e062b4; name: FUN_02e062b4
 */


undefined8
FUN_02e062b4(long *param_1,long *param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)(param_3 >> 1) << 2);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x34;
  }
  else {
    if (param_4 == 1) {
      FUN_02e063d8(param_1,param_5 & 1,param_6 & 1);
    }
    else if (param_4 == 2) {
      FUN_02e06524(param_1,param_5 & 1,param_6 & 1);
    }
    else if (param_4 == 3) {
      FUN_02e06620(param_1,param_5 & 1,param_6 & 1);
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      uVar1 = uVar4 >> 1;
      if (uVar1 != 0) {
        uVar5 = (ulong)(uVar4 >> 1) & 3;
        if ((ulong)uVar1 - 1 < 3) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          puVar8 = (undefined8 *)(lVar2 + 8);
          do {
            lVar6 = lVar6 + 4;
            puVar8[-1] = 0x3f8000003f800000;
            *puVar8 = 0x3f8000003f800000;
            puVar8 = puVar8 + 2;
          } while (uVar1 - uVar5 != lVar6);
        }
        if ((uVar4 >> 1 & 3) != 0) {
          puVar7 = (undefined4 *)(lVar2 + lVar6 * 4);
          do {
            uVar5 = uVar5 - 1;
            *puVar7 = 0x3f800000;
            puVar7 = puVar7 + 1;
          } while (uVar5 != 0);
        }
        uVar4 = *(uint *)(param_1 + 1);
      }
      *(float *)((long)param_1 + 0xc) = (float)uVar4;
    }
    uVar3 = 1;
  }
  return uVar3;
}


