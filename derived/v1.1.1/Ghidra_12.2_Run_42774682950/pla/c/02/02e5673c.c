/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5673c; name: FUN_02e5673c
 */


uint FUN_02e5673c(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = 0;
  local_48 = 0;
  if ((param_5 & 1) == 0) {
    puVar9 = (undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xe8) - 1) * 0x10);
    local_60 = *puVar9;
    local_58 = *(undefined4 *)(puVar9 + 1);
    lVar1 = param_4;
    if (*(int *)(param_3 + 0x78) != 0) {
      lVar1 = param_3 + (ulong)(*(int *)(param_3 + 0x78) - 1) * 0xc + 0xc;
    }
    FUN_02e54120(param_2,&local_60,lVar1,&local_50);
    iVar6 = *(int *)(param_3 + 0x78) + -1;
    if (-1 < iVar6) {
      puVar9 = (undefined8 *)(param_3 + (long)iVar6 * 0xc + 0xc);
      do {
        local_60 = *puVar9;
        local_58 = *(undefined4 *)(puVar9 + 1);
        local_80 = local_50;
        local_78 = local_48;
        uVar5 = FUN_02e565fc(param_1,&local_80,&local_60);
        local_50 = local_60;
        local_48 = local_58;
        if (iVar6 < 1) break;
        puVar9 = (undefined8 *)((long)puVar9 + -0xc);
        iVar6 = iVar6 + -1;
      } while ((uVar5 & 1) != 0);
      goto LAB_02e568c4;
    }
  }
  else {
    puVar9 = (undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xe8) - 1) * 0x10);
    puVar7 = (undefined8 *)(param_3 + 0xc);
    local_60 = *puVar9;
    local_58 = *(undefined4 *)(puVar9 + 1);
    puVar9 = (undefined8 *)(param_3 + 0x6c);
    if (*(int *)(param_3 + 0x78) != 0) {
      puVar9 = puVar7;
    }
    FUN_02e54120(param_2,&local_60,puVar9,&local_50);
    if (*(int *)(param_3 + 0x78) != 0) {
      uVar8 = 1;
      do {
        local_60 = *puVar7;
        local_58 = *(undefined4 *)(puVar7 + 1);
        local_70 = local_50;
        local_68 = local_48;
        uVar5 = FUN_02e565fc(param_1,&local_70,&local_60);
        local_50 = local_60;
        local_48 = local_58;
        if ((uVar5 & 1) == 0) break;
        bVar3 = uVar8 < *(uint *)(param_3 + 0x78);
        uVar8 = uVar8 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      } while (bVar3);
LAB_02e568c4:
      local_60 = local_50;
      local_58 = local_48;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
        goto LAB_02e568ec;
      }
    }
  }
  local_90 = local_50;
  local_88 = local_48;
  uVar4 = FUN_02e565fc(param_1,&local_90,param_4);
LAB_02e568ec:
  FUN_02e5695c(param_1,param_2);
  uVar2 = *(uint *)(param_3 + 0x88);
  *(uint *)(param_1 + 0xec) =
       (((*(int *)(param_1 + 0xec) * 0x1000193 ^ uVar2 & 0xff) * 0x1000193 ^ uVar2 >> 8 & 0xff) *
        0x1000193 ^ uVar2 >> 0x10 & 0xff) * 0x1000193 ^ uVar2 >> 0x18;
  return uVar4 & 1;
}


