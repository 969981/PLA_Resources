/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00165710; name: FUN_00165710
 */


void FUN_00165710(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50;
  int local_4c;
  int local_48;
  
  plVar7 = *(long **)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = FUN_00167040(plVar7,0xb,0,0,0);
  local_48 = 0;
  local_50 = 0;
  local_4c = 0;
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = 0xc;
  param_2[2] = uVar1;
  local_60 = 0xffffffffffffffff;
  local_68 = 0;
  local_70[0] = 0;
  local_58 = param_2;
  FUN_00167c00(*(undefined8 *)(param_1 + 0x30),param_2);
  if (*(int *)(param_1 + 0x10) != 0x7b) {
LAB_00165988:
    FUN_00166920(param_1,0x7b);
LAB_00165994:
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = FUN_0016a120(param_1,0x7d);
    uVar6 = FUN_0016a120(param_1,0x7b);
    uVar5 = FUN_00162fa0(uVar8,"%s expected (to close %s at line %d)",uVar5,uVar6,iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_0016a180(param_1,uVar5);
  }
  FUN_0016a400(param_1);
  if (*(int *)(param_1 + 0x10) == 0x7d) {
LAB_00165888:
    FUN_0016a400(param_1);
    if (local_48 != 0) {
      if (local_70[0] - 0xdU < 2) {
        FUN_001679a0(plVar7,local_70,0xffffffff);
        FUN_00169b00(plVar7,local_58[2],local_4c,0xffffffff);
        local_4c = local_4c + -1;
      }
      else {
        if (local_70[0] != 0) {
          FUN_00167c00(plVar7,local_70);
        }
        FUN_00169b00(plVar7,local_58[2],local_4c,local_48);
      }
    }
    uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    uVar1 = *(uint *)(*(long *)(*plVar7 + 0x38) + uVar9);
    iVar3 = FUN_00162290(local_4c);
    *(uint *)(*(long *)(*plVar7 + 0x38) + uVar9) = uVar1 & 0x7fffff | iVar3 << 0x17;
    uVar1 = *(uint *)(*(long *)(*plVar7 + 0x38) + uVar9);
    uVar4 = FUN_00162290(local_50);
    *(uint *)(*(long *)(*plVar7 + 0x38) + uVar9) =
         uVar1 & 0xff800000 | uVar1 & 0x3fff | (uVar4 & 0x1ff) << 0xe;
    return;
  }
LAB_001657ec:
  if ((*(int *)(param_1 + 0x10) == 0x5b) ||
     ((*(int *)(param_1 + 0x10) == 0x124 && (iVar2 = FUN_0016bdf0(param_1), iVar2 == 0x3d)))) {
    FUN_00166120(param_1,local_70);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_00165360(param_1,local_70,0);
    local_4c = local_4c + 1;
    local_48 = local_48 + 1;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (iVar2 != 0x2c) {
    if (iVar2 == 0x7d) goto LAB_00165888;
    if (iVar2 != 0x3b) {
      if (*(int *)(param_1 + 4) != iVar3) goto LAB_00165994;
      FUN_00166920(param_1,0x7d);
      goto LAB_00165988;
    }
  }
  FUN_0016a400(param_1);
  if (*(int *)(param_1 + 0x10) == 0x7d) goto LAB_00165888;
  if (local_70[0] != 0) {
    FUN_00167c00(plVar7,local_70);
    local_70[0] = 0;
    if (local_48 == 0x32) {
      FUN_00169b00(plVar7,local_58[2],local_4c,0x32);
      local_48 = 0;
    }
  }
  goto LAB_001657ec;
}


