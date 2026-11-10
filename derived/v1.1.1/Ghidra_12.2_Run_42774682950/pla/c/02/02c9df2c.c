/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9df2c; name: FUN_02c9df2c
 */


void FUN_02c9df2c(long param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = 0;
  lVar7 = param_1 + 0x8e0;
  do {
    uVar8 = (uint)uVar9;
    uVar3 = uVar8 >> 4 & 7;
    uVar10 = (undefined1)uVar3;
    if (uVar3 == 1) {
      uVar10 = 4;
    }
    else if (uVar3 == 3) {
      uVar10 = 6;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_00876d0c(&local_a0);
    uVar6 = uStack_98;
    uVar4 = local_a0;
    uVar1 = local_a0._4_2_ & 0xfffe;
    if ((uVar9 & 2) != 0) {
      uVar1 = local_a0._4_2_ | 1;
    }
    uVar2 = uVar1 & 0xfffd;
    if ((uVar9 & 1) != 0) {
      uVar2 = uVar1 | 2;
    }
    uVar1 = uVar2 & 0xfffb;
    if ((uVar9 & 0xc) != 0) {
      uVar1 = uVar2 | 4;
    }
    local_a0 = CONCAT71(local_a0._1_7_,uVar10);
    uVar5 = local_a0;
    local_a0._6_2_ = SUB82(uVar4,6);
    local_a0._0_6_ = CONCAT24(uVar1,(int)uVar5);
    if ((uVar8 >> 3 & 1) == 0) {
      if ((uVar8 >> 2 & 1) != 0) {
        uStack_98._0_4_ = CONCAT22(0x702,(undefined2)uStack_98);
        goto LAB_02c9df74;
      }
    }
    else {
      uStack_98._0_4_ = CONCAT13(5,(undefined3)uStack_98);
LAB_02c9df74:
      uStack_98._5_3_ = SUB83(uVar6,5);
      uStack_98._0_5_ = CONCAT14(param_2,(undefined4)uStack_98);
    }
    FUN_0087e204(lVar7,*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x3010,&local_a0);
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + 0x1c;
    if (uVar9 == 0x80) {
      return;
    }
  } while( true );
}


