/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166460; name: FUN_00166460
 */


void FUN_00166460(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int local_48 [2];
  undefined4 local_40;
  undefined8 local_38;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x30);
  if (iVar1 == 0x125) {
    local_40 = FUN_001677a0(lVar6,*(undefined8 *)(param_1 + 0x18));
    local_38 = 0xffffffffffffffff;
    local_48[0] = 4;
  }
  else {
    if (iVar1 == 0x7b) {
      FUN_00165710(param_1,local_48);
      goto LAB_00166548;
    }
    if (iVar1 != 0x28) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1,"function arguments expected");
    }
    FUN_0016a400(param_1);
    if (*(int *)(param_1 + 0x10) == 0x29) {
      local_48[0] = 0;
    }
    else {
      while( true ) {
        FUN_00165360(param_1,local_48,0);
        if (*(int *)(param_1 + 0x10) != 0x2c) break;
        FUN_0016a400(param_1);
        FUN_00167c00(*(undefined8 *)(param_1 + 0x30),local_48);
      }
      FUN_001679a0(lVar6,local_48,0xffffffff);
      if (*(int *)(param_1 + 0x10) != 0x29) {
        if (*(int *)(param_1 + 4) == param_3) {
          FUN_00166920(param_1,0x29);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar3 = FUN_0016a120(param_1,0x29);
        uVar4 = FUN_0016a120(param_1,0x28);
        uVar3 = FUN_00162fa0(uVar7,"%s expected (to close %s at line %d)",uVar3,uVar4,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1,uVar3);
      }
    }
  }
  FUN_0016a400(param_1);
LAB_00166548:
  iVar1 = param_2[2];
  if (local_48[0] - 0xdU < 2) {
    iVar5 = 0;
  }
  else {
    if (local_48[0] != 0) {
      FUN_00167c00(lVar6,local_48);
    }
    iVar5 = (uint)*(byte *)(lVar6 + 0x3c) - iVar1;
  }
  uVar2 = FUN_00167040(lVar6,0x24,iVar1,iVar5,2);
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  param_2[2] = uVar2;
  *param_2 = 0xd;
  FUN_00169ae0(lVar6,param_3);
  *(char *)(lVar6 + 0x3c) = (char)iVar1 + '\x01';
  return;
}


