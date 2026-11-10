/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ec3e0; name: FUN_029ec3e0
 */


void FUN_029ec3e0(long param_1,ushort *param_2,long *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 local_9c;
  long local_98;
  undefined1 auStack_90 [8];
  undefined4 *local_88;
  undefined4 *local_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_54;
  long local_48;
  
  puVar1 = (undefined4 *)*param_3;
  lVar7 = param_3[1];
  local_9c = *(undefined4 *)((long)param_3 + 0x14);
  lVar9 = param_3[3];
  puVar8 = (undefined4 *)param_3[5];
  local_98 = lVar7;
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x93,*(undefined1 *)(lVar7 + 0x7d),
               local_9c,*puVar8);
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x100,
               *(undefined1 *)(lVar7 + 0x7d),0xffff0000);
  FUN_02a3aaac(*(undefined8 *)(param_1 + 0x20),puVar1,1,&local_9c,&local_98,0);
  local_48 = local_98;
  local_70 = &local_48;
  local_68 = &local_54;
  local_78 = CONCAT44(local_78._4_4_,1);
  local_60 = 0;
  local_88 = puVar1;
  local_80 = puVar8;
  local_54 = (int)lVar9;
  FUN_029d9c28(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x560),auStack_90,&local_88);
  local_88 = (undefined4 *)param_3[1];
  uVar3 = *(ushort *)(param_3 + 2);
  uVar4 = *(ushort *)((long)local_88 + 0x496);
  iVar5 = (uint)uVar4 - (uint)uVar3;
  if ((uint)uVar4 < (uint)uVar3 || iVar5 == 0) {
    *(undefined2 *)((long)local_88 + 0x496) = 0;
    local_80 = (undefined4 *)CONCAT71(local_80._1_7_,1);
    FUN_029ec758(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x14c0),&local_48,&local_88);
  }
  else {
    *(short *)((long)local_88 + 0x496) = (short)iVar5;
    uVar4 = uVar3;
  }
  *param_2 = uVar4;
  local_80 = (undefined4 *)*param_3;
  local_78 = param_3[1];
  local_88 = (undefined4 *)param_3[5];
  local_70 = (long *)CONCAT44(local_70._4_4_,(uint)uVar4);
  FUN_029da9c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x5a0),&local_48,&local_88);
  local_78 = *param_3;
  local_70 = (long *)param_3[1];
  local_88 = (undefined4 *)param_3[4];
  local_80 = (undefined4 *)param_3[5];
  local_68._0_5_ = CONCAT14(1,(uint)*param_2);
  FUN_02a012c8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a00),&local_48,&local_88);
  puVar2 = (uint *)param_3[4];
  puVar1 = (undefined4 *)param_3[5];
  lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1a20);
  lVar7 = *param_3;
  iVar5 = FUN_02971598(*(undefined8 *)(lVar9 + 0x38),lVar7,*puVar1);
  if ((iVar5 == 7) && (*(short *)(lVar7 + 0x74) != 0)) {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x60) + 0x6e0);
    uVar6 = FUN_02987c34(*(undefined8 *)(lVar9 + 0x38),puVar1,lVar7,lVar7);
    if ((uVar6 & 1) != 0) {
      local_70._0_5_ = (uint5)*puVar2;
      local_88 = puVar1;
      local_80 = (undefined4 *)lVar7;
      local_78 = lVar7;
      FUN_02a08b94(*(undefined8 *)(*(long *)(lVar9 + 0x60) + 0x1c60),&local_48,&local_88);
    }
  }
  FUN_02989b48(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1a60) + 0x38),*param_3,
               param_3[1],param_3[5],*(undefined4 *)((long)param_3 + 0x14),*param_2,
               (int)param_3[3] != 0,1);
  return;
}


