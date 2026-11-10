/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f071f4; name: FUN_02f071f4
 */


void FUN_02f071f4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  long local_90;
  ulong local_88;
  long *local_80;
  ulong local_78;
  long *local_70;
  ulong local_68;
  
  puVar10 = (undefined8 *)(param_1 + 0x10);
  puVar5 = (undefined4 *)*puVar10;
  uVar1 = *(uint *)(param_1 + 0x18);
  puVar11 = (undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined4 *)*puVar11;
  uVar2 = *(uint *)(param_1 + 0x28);
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *puVar11 = 0;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_02ead624(param_2,&local_70,&local_80,&local_90,param_3,param_4,param_5);
  if ((int)local_68 != 0) {
    plVar7 = local_70;
    do {
      lVar8 = *plVar7;
      uVar3 = *(undefined4 *)(lVar8 + 4);
      lVar4 = FUN_02e57a50(puVar10,uVar3,&local_b8);
      if ((lVar4 == 0 || (char)local_b8 == '\0') && (*(int *)(lVar8 + 8) != 0)) {
        FUN_02e578bc(puVar10,uVar3,&local_b8);
        if ((*(ushort *)(lVar8 + 0xc) & 0x500) == 0) {
          local_9c = *(undefined4 *)(lVar8 + 4);
        }
        else {
          local_9c = 0xffffffff;
        }
        local_a0 = (byte)*(ushort *)(lVar8 + 0xc) & 1;
        uStack_b4 = (uint)*(ushort *)(lVar8 + 0x1a);
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_98 = *(undefined4 *)(lVar8 + 8);
        (**(code **)(*DAT_0440a098 + 0x48))
                  (DAT_0440a098,uVar3,&local_b8,*(undefined1 *)(param_1 + 0x30));
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != local_70 + (local_68 & 0xffffffff));
  }
  if ((int)local_78 != 0) {
    plVar7 = local_80;
    do {
      lVar8 = *plVar7;
      uVar3 = *(undefined4 *)(lVar8 + 4);
      lVar4 = FUN_02e57a50(puVar10,uVar3,&local_b8);
      if (lVar4 == 0 || (char)local_b8 == '\0') {
        lVar4 = FUN_02e57a50(puVar11,uVar3,&local_b8);
        if ((lVar4 == 0 || (char)local_b8 == '\0') && (*(int *)(lVar8 + 8) != 0)) {
          FUN_02e578bc(puVar11,uVar3,&local_b8);
          if ((*(ushort *)(lVar8 + 0xc) & 0x500) == 0) {
            local_9c = *(undefined4 *)(lVar8 + 4);
          }
          else {
            local_9c = 0xffffffff;
          }
          local_a0 = (byte)*(ushort *)(lVar8 + 0xc) & 1;
          uStack_b4 = (uint)*(ushort *)(lVar8 + 0x1a);
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_98 = *(undefined4 *)(lVar8 + 8);
          (**(code **)(*DAT_0440a098 + 0x48))
                    (DAT_0440a098,uVar3,&local_b8,*(undefined1 *)(param_1 + 0x31));
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != local_80 + (local_78 & 0xffffffff));
  }
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 2;
    puVar9 = puVar5;
    do {
      (**(code **)(*DAT_0440a098 + 0x50))(DAT_0440a098,*puVar9,*(undefined1 *)(param_1 + 0x30));
      lVar4 = lVar4 + -4;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  if (uVar2 != 0) {
    lVar4 = (ulong)uVar2 << 2;
    puVar9 = puVar6;
    do {
      (**(code **)(*DAT_0440a098 + 0x50))(DAT_0440a098,*puVar9,*(undefined1 *)(param_1 + 0x31));
      lVar4 = lVar4 + -4;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_02f59e60(0,puVar5);
  }
  if (puVar6 == (undefined4 *)0x0) {
    lVar4 = local_90;
  }
  else {
    FUN_02f59e60(0,puVar6);
    lVar4 = local_90;
  }
  local_90 = lVar4;
  if ((int)local_88 != 0) {
    do {
      FUN_02f07b94(param_1,lVar4);
      lVar4 = lVar4 + 8;
    } while (lVar4 != local_90 + (local_88 & 0xffffffff) * 8);
  }
  if (local_70 != (long *)0x0) {
    local_68 = local_68 & 0xffffffff00000000;
    FUN_02f59e60(0);
    local_70 = (long *)0x0;
    local_68 = local_68 & 0xffffffff;
  }
  if (local_80 != (long *)0x0) {
    local_78 = local_78 & 0xffffffff00000000;
    FUN_02f59e60(0);
    local_80 = (long *)0x0;
    local_78 = local_78 & 0xffffffff;
  }
  if (local_90 != 0) {
    local_88 = local_88 & 0xffffffff00000000;
    FUN_02f59e60(0);
  }
  return;
}


