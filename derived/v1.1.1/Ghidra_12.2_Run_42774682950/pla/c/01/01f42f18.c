/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f42f18; name: FUN_01f42f18
 */


void FUN_01f42f18(long param_1,int param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  byte *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 ****local_180 [13];
  undefined8 ****local_118;
  undefined8 ****local_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 ****local_e0;
  undefined8 ****ppppuStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 ****local_a8;
  undefined8 ****ppppuStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  byte local_6c [12];
  
  local_6c[0] = param_3 & 1;
  iVar2 = *(int *)(param_1 + 0x324) + *(int *)(param_1 + 800) + *(int *)(param_1 + 0x328);
  if (0 < iVar2) {
    uStack_100 = *(undefined8 *)(param_1 + 8);
    local_180[0] = &local_118;
    local_e0 = &local_e0;
    local_f8 = 0xfffffffffffffff;
    uStack_f0 = 0;
    local_a8 = &local_a8;
    local_108 = 0;
    local_e8 = 0;
    local_b0 = 0;
    local_78 = 0;
    local_d0 = 0;
    local_c0 = 0xfffffffffffffff;
    uStack_b8 = 0;
    local_98 = 0;
    local_88 = 0xfffffffffffffff;
    uStack_80 = 0;
    local_1a0 = &LAB_01f54a9c;
    local_198 = FUN_01f54dd0;
    local_190 = &LAB_01f54dd4;
    puStack_188 = &LAB_01f54de0;
    local_118 = local_180[0];
    local_110 = local_180[0];
    ppppuStack_d8 = local_e0;
    uStack_c8 = uStack_100;
    ppppuStack_a0 = local_a8;
    uStack_90 = uStack_100;
    FUN_01f432cc(param_1,&local_1a0);
    pcVar5 = local_198;
    if (local_198 != (code *)0x0) {
      local_190 = (undefined1 *)0x0;
      puStack_188 = (undefined1 *)0x0;
      local_1a0 = (byte *)0x0;
      local_198 = (code *)0x0;
      (*pcVar5)(local_180);
    }
    if (0 < param_2) {
      iVar3 = *(int *)(param_1 + 0x324);
      iVar4 = *(int *)(param_1 + 0x328);
      do {
        local_1a8 = local_108 != 0;
        local_1a7 = local_d0 != 0;
        local_1a6 = local_98 != 0;
        iVar6 = FUN_01f439e0(iVar2);
        uVar9 = 1;
        if (iVar6 < iVar3) {
          uVar9 = 2;
        }
        if (iVar4 + iVar3 <= iVar6) {
          uVar9 = 0;
        }
        uVar7 = (ulong)uVar9;
        local_1a0 = local_6c;
        if (*(char *)((ulong)&local_1a8 | uVar7) == '\0') {
          uVar9 = (uVar9 + 1) % 3;
          uVar7 = (ulong)uVar9;
          if ((*(char *)((ulong)&local_1a8 | uVar7) != '\0') ||
             (uVar7 = (ulong)((uVar9 + 1) % 3), *(char *)((ulong)&local_1a8 | uVar7) != '\0'))
          goto LAB_01f4307c;
        }
        else {
LAB_01f4307c:
          FUN_01f43b14(&local_1a0,local_180 + uVar7 * 7 + 0xd);
        }
        param_2 = param_2 + -1;
      } while (0 < param_2);
    }
    FUN_01f48518(&local_a8);
    FUN_01f48518(&local_e0);
    FUN_01f48518(&local_118);
  }
  if (local_6c[0] == 0) {
    lVar1 = param_1 + 0x2a8;
    if (*(int *)(param_1 + 0x18c) == 1) {
      puVar8 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x2b0) + (*(ulong *)(param_1 + 0x2e8) / 0x155) * 8) +
               (*(ulong *)(param_1 + 0x2e8) % 0x155) * 0xc);
      local_118 = (undefined8 ****)*puVar8;
      local_110 = (undefined8 ****)CONCAT44(local_110._4_4_,*(undefined4 *)(puVar8 + 1));
      FUN_01f54dec(lVar1);
      FUN_01f53acc(lVar1,&local_118);
    }
    else {
      FUN_01f54dec(lVar1);
    }
  }
  return;
}


