/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173330; name: FUN_00173330
 */


void FUN_00173330(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  clock_t cVar3;
  time_t tVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < param_3) {
    do {
      FUN_00151bc0(param_1,1,param_2);
      FUN_00151bc0(param_1,1,param_3);
      iVar2 = FUN_00173770(param_1,0xffffffff,0xfffffffe);
      if (iVar2 == 0) {
        FUN_0014ff10(param_1,0xfffffffd);
      }
      else {
        FUN_001525f0(param_1,1,param_2);
        FUN_001525f0(param_1,1,param_3);
      }
      uVar1 = param_3 - param_2;
      if (uVar1 == 1) {
        return;
      }
      if ((uVar1 < 100) || (param_4 == 0)) {
        uVar5 = param_3 + param_2 >> 1;
      }
      else {
        uVar5 = uVar1 >> 2;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_4 / (uVar5 * 2);
        }
        uVar5 = uVar5 + param_2 + (param_4 - uVar7 * uVar5 * 2);
      }
      FUN_00151bc0(param_1,1,uVar5);
      FUN_00151bc0(param_1,1,param_2);
      iVar2 = FUN_00173770(param_1,0xfffffffe,0xffffffff);
      if (iVar2 == 0) {
        FUN_0014ff10(param_1,0xfffffffe);
        FUN_00151bc0(param_1,1,param_3);
        iVar2 = FUN_00173770(param_1,0xffffffff,0xfffffffe);
        if (iVar2 == 0) {
          FUN_0014ff10(param_1,0xfffffffd);
        }
        else {
          FUN_001525f0(param_1,1,uVar5);
          FUN_001525f0(param_1,1,param_3);
        }
      }
      else {
        FUN_001525f0(param_1,1,uVar5);
        FUN_001525f0(param_1,1,param_2);
      }
      if (uVar1 == 2) {
        return;
      }
      FUN_00151bc0(param_1,1,uVar5);
      FUN_00150260(param_1,0xffffffff);
      uVar1 = param_3 - 1;
      FUN_00151bc0(param_1,1,uVar1);
      uVar6 = param_2;
      uVar7 = uVar1;
      do {
        FUN_001525f0(param_1,1,uVar5);
        FUN_001525f0(param_1,1,uVar7);
        uVar5 = uVar6 + 1;
        FUN_00151bc0(param_1,1,uVar5);
        iVar2 = FUN_00173770(param_1,0xffffffff,0xfffffffe);
        if (iVar2 != 0) {
          uVar6 = uVar6 + 2;
          do {
            uVar5 = uVar6;
            if (param_3 == uVar5) {
              FUN_00154110(param_1,"invalid order function for sorting");
            }
            FUN_0014ff10(param_1,0xfffffffe);
            FUN_00151bc0(param_1,1,uVar5);
            iVar2 = FUN_00173770(param_1,0xffffffff,0xfffffffe);
            uVar6 = uVar5 + 1;
          } while (iVar2 != 0);
        }
        uVar7 = uVar7 - 1;
        FUN_00151bc0(param_1,1,uVar7);
        iVar2 = FUN_00173770(param_1,0xfffffffd,0xffffffff);
        while (iVar2 != 0) {
          if (uVar7 < uVar5) {
            FUN_00154110(param_1,"invalid order function for sorting");
          }
          FUN_0014ff10(param_1,0xfffffffe);
          uVar7 = uVar7 - 1;
          FUN_00151bc0(param_1,1,uVar7);
          iVar2 = FUN_00173770(param_1,0xfffffffd,0xffffffff);
        }
        uVar6 = uVar5;
      } while (uVar7 >= uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_001525f0(param_1,1,uVar1);
      FUN_001525f0(param_1,1,uVar5);
      uVar1 = uVar5 - param_2;
      uVar7 = param_3 - uVar5;
      if (uVar1 < uVar7) {
        FUN_00173330(param_1,param_2,uVar5 - 1,param_4);
        param_2 = uVar5 + 1;
        if (uVar1 < param_3 - param_2 >> 7) goto LAB_00173720;
      }
      else {
        FUN_00173330(param_1,uVar5 + 1,param_3,param_4);
        param_3 = uVar5 - 1;
        if (uVar7 < param_3 - param_2 >> 7) {
LAB_00173720:
          cVar3 = clock();
          tVar4 = time((time_t *)0x0);
          param_4 = (int)((ulong)cVar3 >> 0x20) + (int)cVar3 + (int)tVar4 +
                    (int)((ulong)tVar4 >> 0x20);
        }
      }
    } while (param_2 < param_3);
  }
  return;
}


