/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03384ed4; name: FUN_03384ed4
 */


int * FUN_03384ed4(int *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *local_1f0;
  undefined8 uStack_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [384];
  
  if (((param_1[6] != 0) && (param_1[0x42] == -1)) && (param_1[0x4e] != 1)) {
    return (int *)0x0;
  }
  piVar8 = param_1 + 2;
  FUN_03384c74(piVar8);
  uStack_1e8 = 0x7fffffffffffffff;
  local_1e0 = auStack_1d0;
  local_1d8 = -0x7ffffff000000000;
  local_1f0 = param_2;
  iVar2 = FUN_03385070(param_1,&local_1f0);
  if (iVar2 != 0) {
    lVar4 = param_2[5];
    lVar6 = param_2[2];
    lVar7 = *param_2;
    uVar1 = *(uint *)(local_1e0 + (long)(int)local_1d8 * 0x18 + -0x14);
    uVar3 = FUN_03321694(param_2);
    FUN_03321654(param_2,((ulong)uVar1 & 0x3fffffff) + (lVar4 - lVar6) + lVar7 + -8);
    param_1[0x42] = param_1[0x42] + 1;
    FUN_033851a0(&local_1f0,param_1,*(undefined8 *)(param_1 + 0x9c),*(undefined8 *)(param_1 + 0x9e))
    ;
    if (-1 < *param_1) {
      FUN_0338e78c(&local_1f0);
      if (iVar2 == 0x54434d30) {
        param_1[0x4e] = 1;
      }
      FUN_03321654(param_2,uVar3);
      goto LAB_03384ffc;
    }
    FUN_03321654(param_2,uVar3);
  }
  piVar8 = (int *)0x0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
LAB_03384ffc:
  lVar4 = local_1d8;
  uVar5 = (ulong)local_1d8._4_4_;
  local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_1e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_1e0,(uVar5 & 0x3fffffff) * 0x18);
  }
  return piVar8;
}


