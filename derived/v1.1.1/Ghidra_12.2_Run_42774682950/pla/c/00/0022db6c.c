/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022db6c; name: FUN_0022db6c
 */


void FUN_0022db6c(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5
                 ,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  uVar1 = nn::util::BinaryFileHeader::GetAlignment();
  pvVar2 = (void *)FUN_00232638(0x231b0,uVar1);
  *(void **)(param_2 + 0x40) = pvVar2;
  memcpy(pvVar2,&DAT_04128000,0x231b0);
  FUN_0022f740(param_2,param_3,*(undefined8 *)(param_2 + 0x40));
  if (param_5 == 0) {
    lVar3 = 0;
    if (param_8 != 0) goto LAB_0022dc08;
LAB_0022dc20:
    lVar4 = FUN_00232654(0x418);
    if (lVar4 != 0) {
      FUN_0021d3d8(lVar4);
    }
    *(long *)(param_2 + 0x80) = lVar4;
    *(undefined1 *)(param_2 + 0x3b5) = 1;
    uVar1 = FUN_0021d20c();
    lVar4 = FUN_0021d218(param_3,param_4);
    if (param_5 != 0) {
      plVar7 = *(long **)(param_2 + 0x80);
      uVar1 = FUN_00232638(lVar4 - lVar3,uVar1);
      (**(code **)(*plVar7 + 0x10))(plVar7,param_3,uVar1,param_4,param_5,param_6,lVar3);
LAB_0022dc94:
      lVar3 = lVar3 + param_6;
      goto LAB_0022dcf4;
    }
    plVar7 = *(long **)(param_2 + 0x80);
    uVar1 = FUN_00232638(lVar4,uVar1);
    (**(code **)(*plVar7 + 0x10))(plVar7,param_3,uVar1,param_4,0,0,0);
  }
  else {
    lVar3 = FUN_0021d2f8(param_3,param_4);
    if (param_8 == 0) goto LAB_0022dc20;
LAB_0022dc08:
    *(long *)(param_2 + 0x80) = param_8;
    *(undefined1 *)(param_2 + 0x3b5) = 0;
    if (param_5 != 0) goto LAB_0022dc94;
  }
  param_5 = 0;
  lVar3 = 0;
LAB_0022dcf4:
  FUN_0022e0c8(param_2,param_3,param_5,lVar3);
  pvVar2 = (void *)FUN_00232654(0x1158);
  *(void **)(param_2 + 600) = pvVar2;
  memset(pvVar2,0,0x1158);
  pvVar2 = (void *)FUN_00232654(0x128);
  *(void **)(param_2 + 0x260) = pvVar2;
  memset(pvVar2,0,0x128);
  lVar3 = 0;
  uVar6 = 0;
  *(undefined4 *)(param_2 + 0x268) = param_1;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  do {
    FUN_00876c24(&local_a8);
    local_98 = CONCAT44(local_98._4_4_,param_1);
    if (uVar6 == 0x24) {
      local_a8 = CONCAT62(local_a8._2_6_,0x303);
      uVar1 = local_a8;
      local_a8 = CONCAT26(0x29,(undefined6)local_a8);
      local_a8._0_4_ = (undefined4)uVar1;
      local_a8._0_5_ = CONCAT14(1,(undefined4)local_a8);
    }
    else {
      local_a8._0_2_ =
           CONCAT11((char)*(undefined4 *)
                           (&DAT_039cf8c8 + (ulong)(((uint)uVar6 >> 2 & 0x3f) % 3) * 4),
                    (char)*(undefined4 *)(&DAT_039cf8c8 + ((ulong)((uint)uVar6 & 0xff) / 3 & 0x7c)))
      ;
      local_a8 = CONCAT26((short)(&DAT_038892a0)[uVar6 & 3],(undefined6)local_a8);
    }
    FUN_0087cb9c(*(long *)(param_2 + 600) + lVar3,param_3,&local_a8);
    *(undefined8 *)(*(long *)(param_2 + 0x260) + uVar6 * 8) = 0xffffffffffffffff;
    uVar6 = uVar6 + 1;
    lVar3 = lVar3 + 0x78;
  } while (uVar6 != 0x25);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_00876ba8(&local_c8);
  local_c8 = CONCAT44(0x10,(undefined4)local_c8);
  uVar1 = FUN_00877190(param_3,&local_c8);
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_00876ba8(&local_a8);
  local_a8 = CONCAT44(4,(undefined4)local_a8);
  uVar1 = FUN_00877190(param_3,&local_a8);
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_00876ba8(&local_a8);
  local_a8 = CONCAT44(8,(undefined4)local_a8);
  uVar1 = FUN_00877190(param_3,&local_a8);
  *(undefined8 *)(param_2 + 0x78) = uVar1;
  FUN_0022e2f8(&local_68,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68,local_78);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x270,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x270,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68 + 4,local_78 + 4);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x298,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x298,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68 + 8,local_78 + 8);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x2c0,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x2c0,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68 + 0xc,local_78 + 0xc);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x2e8,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x2e8,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68 + 0x10,local_78 + 0x10);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x310,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x310,param_3,&local_a8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = FUN_0022e43c(&local_a8,&local_c8,local_68 + 0x14,local_78 + 0x14);
  uVar5 = FUN_00232638(uVar1,8);
  FUN_0087dfcc(param_2 + 0x338,uVar5,uVar1);
  FUN_0087dfe0(param_2 + 0x338,param_3,&local_a8);
  FUN_0022e790(param_2,param_3);
  *(undefined1 *)(param_2 + 0x3b4) = 1;
  return;
}


