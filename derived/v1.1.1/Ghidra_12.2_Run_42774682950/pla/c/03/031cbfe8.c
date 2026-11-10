/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cbfe8; name: FUN_031cbfe8
 */


void FUN_031cbfe8(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  uint local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  int local_a0 [2];
  int local_98 [2];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar9 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar9 = *param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_0317857c(*(undefined8 *)(param_1 + 0x18),uVar9,param_3,&local_90);
  lVar11 = (long)DAT_0444b53c;
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar10;
  }
  if (*(long *)(lVar10 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  FUN_031782e4(local_98,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_3 + 0x30));
  FUN_031782e4(local_a0,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_3 + 0x34));
  uVar1 = *(uint *)(param_3 + 0x38);
  uVar2 = *(uint *)(param_3 + 0x3c);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)local_98[0] * 8);
  uVar3 = uVar1 | local_98[0] << 0x16;
  uVar4 = uVar2 | local_a0[0] << 0x16;
  if (local_98[0] == local_a0[0]) {
    local_b0[0] = uVar2;
    local_a8[0] = uVar1;
    FUN_031d5378(*(undefined4 *)(param_1 + 0x9c),uVar8,local_a8,local_b0,&local_90,&local_70,
                 param_1 + 0x40);
  }
  else {
    local_c0[0] = uVar2;
    local_b8[0] = uVar1;
    FUN_031d5648(*(undefined4 *)(param_1 + 0x9c),uVar8,local_b8,&local_90,
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)local_a0[0] * 8),local_c0,
                 &local_70,param_1 + 0x40);
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_031e2fec(param_2,uVar3,uVar4);
  }
  lVar11 = (long)DAT_0444b53c;
  lVar10 = *(long *)(lVar5 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar10;
  }
  if (*(long *)(lVar10 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  iVar6 = FUN_031b36bc(*(undefined8 *)(param_1 + 0x18),uVar3);
  iVar7 = FUN_031b36bc(*(undefined8 *)(param_1 + 0x18),uVar4);
  if (((iVar6 != iVar7) && (iVar6 != -1)) && (iVar7 != -1)) {
    if ((*(byte *)(local_90 + 0x10) >> 5 & 1) == 0) {
      FUN_031b373c(*(undefined8 *)(param_1 + 0x18),iVar7,iVar6,1,*(undefined2 *)(local_90 + 0x12));
      if (param_2 == (undefined4 *)0x0) {
        if (0x3fffff < (uVar4 ^ uVar3)) {
          FUN_031e3e94(param_1 + 0xb0,iVar7,iVar6);
        }
      }
      else {
        FUN_031e34bc(param_2,iVar7,iVar6);
      }
    }
    if ((*(byte *)(local_70 + 0x10) >> 5 & 1) == 0) {
      FUN_031b373c(*(undefined8 *)(param_1 + 0x18),iVar6,iVar7,1,*(undefined2 *)(local_70 + 0x12));
      if (param_2 == (undefined4 *)0x0) {
        if (0x3fffff < (uVar4 ^ uVar3)) {
          FUN_031e3e94(param_1 + 0xb0,iVar6,iVar7);
        }
      }
      else {
        FUN_031e34bc(param_2,iVar6,iVar7);
      }
    }
  }
  return;
}


