/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00276cb0; name: FUN_00276cb0
 */


void FUN_00276cb0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  puVar1 = PTR_DAT_04372ec8;
  *(undefined4 *)PTR_DAT_04372ec8 = 0x20;
  *(undefined1 **)(puVar1 + 8) = &DAT_039d017a;
  puVar1 = PTR_DAT_04372ed0;
  local_48 = 0;
  local_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  FUN_00876d98(&local_80);
  uStack_6c = 0x20;
  local_68 = 0x20;
  local_90 = 0;
  uStack_88 = 0;
  uStack_64 = 0x20;
  local_80._0_2_ = CONCAT11(3,(undefined1)local_80);
  uStack_74 = 0xb01;
  uStack_70 = 0x20;
  local_a0 = 0;
  local_98 = 0;
  FUN_00876bb0(&local_a0);
  local_a0 = CONCAT44(local_a0._4_4_,0x24);
  FUN_0087e9d4(puVar1 + 0x248,&local_38,param_1,&local_80);
  lVar5 = local_38 + *(long *)(puVar1 + 0x248);
  *(long *)(puVar1 + 600) = lVar5;
  lVar2 = FUN_00878470(param_1,&local_a0);
  uVar11 = (lVar5 + lVar2) - 1U & -lVar2;
  *(ulong *)(puVar1 + 600) = uVar11;
  uVar3 = FUN_00878468(param_1,&local_a0);
  local_98 = FUN_00271680(uVar11,uVar3);
  *(undefined8 *)(puVar1 + 0x250) = local_98;
  local_a0 = CONCAT44((int)*(undefined8 *)(puVar1 + 600),(undefined4)local_a0);
  FUN_00878498(puVar1,param_1,&local_a0);
  *(long *)(puVar1 + 0x240) = *(long *)(puVar1 + 0x250) + local_38;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x20000,0x80);
  lVar2 = 0;
  lVar5 = 0;
  lVar7 = lVar4;
  do {
    lVar8 = 0;
    lVar9 = lVar7;
    do {
      lVar10 = 0;
      lVar6 = (long)(int)lVar5;
      do {
        lVar5 = lVar6 + 3;
        *(uint *)(lVar9 + lVar10) =
             ((byte)(&DAT_039d017b)[lVar6] ^ 0x80) << 8 |
             ((byte)(&DAT_039d017a)[lVar6] ^ 0x80) << 0x10 | (byte)(&DAT_039d017c)[lVar6] ^ 0x80 |
             0xff000000;
        lVar10 = lVar10 + 4;
        lVar6 = lVar5;
      } while (lVar10 != 0x80);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x80;
    } while (lVar8 != 0x20);
    lVar2 = lVar2 + 1;
    lVar7 = lVar7 + 0x1000;
  } while (lVar2 != 0x20);
  local_80 = CONCAT26(1,(undefined6)local_80);
  FUN_0087ea9c(puVar1 + 0x168,param_1,&local_80,puVar1,local_38,*(undefined8 *)(puVar1 + 0x248));
  local_b0 = (undefined *)0x0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_00876dc8(&local_e0);
  local_e0 = CONCAT71(local_e0._1_7_,2);
  local_e0 = CONCAT44(0xb01,(undefined4)local_e0);
  local_b0 = puVar1 + 0x168;
  FUN_0087ebc0(puVar1 + 0x120,param_1,&local_e0);
  local_e0 = 0;
  local_d8 = 0x2000000000;
  local_d0 = 0x2000000020;
  (**(code **)PTR_DAT_04372ed8)(*(undefined8 *)(puVar1 + 0x170),0,&local_e0,lVar4);
  (**(code **)PTR_DAT_04372ee0)(*(undefined8 *)(puVar1 + 0x170),0,&local_e0);
  (**(code **)(*param_2 + 0x18))(param_2,lVar4);
  return;
}


