/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002773b0; name: FUN_002773b0
 */


void FUN_002773b0(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint6 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined3 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = param_3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_00876cd4(&local_90);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876cac(&local_50);
  uVar10 = local_50;
  bVar1 = (byte)local_50 & 0xfe;
  if (*(char *)*param_1 != '\0') {
    bVar1 = (byte)local_50 | 1;
  }
  local_50 = CONCAT71(local_50._1_7_,bVar1);
  bVar4 = ((char *)*param_1)[6];
  if (bVar4 < 6) {
    uVar11 = (ulong)bVar4 << 3;
    uVar12 = 0x10500060606 >> (uVar11 & 0x3f);
    local_50._0_2_ = CONCAT11((char)uVar12,bVar1);
    uVar8 = (undefined2)local_50;
    local_50 = (uVar12 & 0xff) << 0x20;
    uVar5 = (undefined1)(0x70102010107 >> (uVar11 & 0x3f));
    local_50._0_3_ = CONCAT12(uVar5,uVar8);
    uVar9 = (undefined3)local_50;
    local_50._0_6_ = CONCAT15(uVar5,(undefined5)local_50);
    uVar5 = (undefined1)(0x20000L >> (uVar11 & 0x3f));
    uVar6 = (uint6)(undefined6)local_50 >> 0x20;
    local_50._0_4_ = CONCAT13(uVar5,uVar9);
    local_50._7_1_ = SUB81(uVar10,7);
    local_50._0_7_ = CONCAT16(uVar5,CONCAT24((short)uVar6,(undefined4)local_50));
  }
  local_90._1_7_ = (uint7)(local_90 >> 8) & 0xfffffffffffbff;
  local_90 = CONCAT71(local_90._1_7_,1);
  local_78 = &local_50;
  uVar10 = FUN_0087dfac(&local_90);
  FUN_0087dfcc(param_1 + 1,param_1 + 0x10,uVar10);
  FUN_0087dfe0(param_1 + 1,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_00876d0c(&local_90);
  uVar2 = local_90._4_2_ & 0xfffe;
  if (*(char *)(param_3 + 1) != '\0') {
    uVar2 = local_90._4_2_ | 1;
  }
  uVar3 = uVar2 & 0xfffd;
  if (*(char *)(param_3 + 3) != '\0') {
    uVar3 = uVar2 | 2;
  }
  local_90._0_6_ = CONCAT24(uVar3,(undefined4)local_90);
  if (*(byte *)(*param_1 + 2) < 8) {
    local_90 = CONCAT71(local_90._1_7_,*(byte *)(*param_1 + 2));
  }
  FUN_0087e204(param_1 + 6,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_00876c68(&local_90);
  uVar10 = local_90;
  uVar2 = (ushort)local_90;
  local_90._0_3_ = (uint3)(ushort)local_90;
  if (*(byte *)(*param_1 + 7) < 3) {
    local_90._0_3_ = CONCAT12((char)(0x10200 >> (ulong)((*(byte *)(*param_1 + 7) & 3) << 3)),uVar2);
  }
  uVar7 = local_90;
  local_90._6_2_ = SUB82(uVar10,6);
  local_90 = CONCAT26(local_90._6_2_,(int6)uVar7) & 0xfffffff3ffffffff | 0x800000000;
  FUN_0087dddc((long)param_1 + 0x4c,param_2,&local_90);
  return;
}


