/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00460f00; name: FUN_00460f00
 */


int FUN_00460f00(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_50 [2];
  long local_48;
  
  lVar7 = FUN_0044e530();
  uVar1 = FUN_0044a130();
  uVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x110));
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar1 <= (int)(uVar2 ^ 0x7fffffff)) {
    uVar3 = FUN_00407950(*param_2);
    uVar4 = FUN_00407950(param_2[1]);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar3 <= (int)(uVar4 ^ 0x7fffffff)) {
      uVar2 = uVar2 + uVar1;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = 0x100000 / uVar2;
        }
        if ((int)uVar1 < (int)(uVar4 + uVar3)) {
          return 1;
        }
      }
      iVar5 = FUN_0044a130(lVar7);
      if (0 < iVar5) {
        local_50[0] = 4;
        local_48 = lVar7;
        iVar5 = FUN_00461090(local_50,param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = -1;
        local_50[0] = 1;
        while (iVar5 = FUN_0044a140(lVar7,0x30,iVar5), iVar5 != -1) {
          FUN_0044a0e0(lVar7,iVar5);
          local_48 = FUN_0044a0d0();
          if (*(int *)(local_48 + 4) != 0x16) {
            return 0x35;
          }
          iVar6 = FUN_00461090(local_50,param_2);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
      }
      iVar5 = FUN_00407950(*(undefined8 *)(param_1 + 0x110));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = 0;
      do {
        uVar8 = FUN_00407970(*(undefined8 *)(param_1 + 0x110),iVar5);
        iVar6 = FUN_00461090(uVar8,param_2);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_00407950(*(undefined8 *)(param_1 + 0x110));
      } while (iVar5 < iVar6);
      return 0;
    }
  }
  return 1;
}


