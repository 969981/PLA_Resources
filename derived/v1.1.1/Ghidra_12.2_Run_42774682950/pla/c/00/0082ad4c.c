/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ad4c; name: FUN_0082ad4c
 */


void FUN_0082ad4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar4 = FUN_0083fd98(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar4 = FUN_0083fd98(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  uVar3 = FUN_0083fda0(param_1 + 0x178);
  *(undefined2 *)(param_1 + 200) = uVar3;
  uVar3 = FUN_0083fda0(param_1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xca) = uVar3;
  puVar2 = PTR_DAT_043773c0;
  lVar5 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar8 = *(long *)(lVar5 + 0x98);
  *(undefined4 *)(param_1 + 0x6c) = 1;
  local_70 = *(undefined8 *)(lVar8 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0xc0);
  local_78[0] = 0;
  FUN_008480f0(*(long *)puVar2 + 0x10,local_78);
  lVar1 = param_1 + 0xd0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    uVar4 = *(undefined8 *)(lVar8 + 0x30);
    lVar6 = FUN_007e9088(param_1 + 0xe8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar6 - *(int *)(param_1 + 0xfc);
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    FUN_007e8fa0(lVar1,lVar1,lVar6);
    *(undefined8 *)(lVar6 + 0x10) = uVar4;
  }
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    if (lVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
    }
    (**(code **)(param_1 + 0x70))(0,uVar4,*(undefined8 *)(param_1 + 0x78));
  }
  *(undefined1 *)(lVar8 + 0x362) = 1;
  lVar6 = *(long *)(lVar5 + 0x20);
  if (lVar6 != lVar5 + 0x18) {
    lVar9 = *(long *)(lVar6 + 0x10);
    while( true ) {
      if (((lVar9 != lVar8) && (*(char *)(lVar9 + 0x90) != -3)) && (*(char *)(lVar9 + 0x91) != -3))
      {
        local_70 = *(undefined8 *)(lVar9 + 0x30);
        uStack_68 = *(undefined8 *)(param_1 + 0xc0);
        local_78[0] = 0;
        FUN_008480f0(*(long *)puVar2 + 0x10,local_78);
        if (*(int *)(param_1 + 0xf8) != 0) {
          uVar4 = *(undefined8 *)(lVar9 + 0x30);
          lVar7 = FUN_007e9088(param_1 + 0xe8);
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = lVar7 - *(int *)(param_1 + 0xfc);
          }
          *(undefined8 *)(lVar7 + 0x10) = 0;
          FUN_007e8fa0(lVar1,lVar1,lVar7);
          *(undefined8 *)(lVar7 + 0x10) = uVar4;
        }
        if (*(code **)(param_1 + 0x70) != (code *)0x0) {
          (**(code **)(param_1 + 0x70))
                    (0,*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(param_1 + 0x78));
        }
        *(undefined1 *)(lVar9 + 0x362) = 1;
      }
      lVar6 = *(long *)(lVar6 + 8);
      if (lVar6 == lVar5 + 0x18) break;
      lVar9 = *(long *)(lVar6 + 0x10);
    }
  }
  FUN_008359a0(*(undefined8 *)(param_1 + 0x10));
  FUN_00839dc0(local_78,*(undefined8 *)(param_1 + 0x10),PTR_LAB_04377cf0);
  return;
}


