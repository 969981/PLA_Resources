/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00370b04; name: FUN_00370b04
 */


void FUN_00370b04(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puStack_58 = &local_50;
  local_40 = &local_38;
  local_50 = 0;
  uStack_48 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined8 *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0;
  plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  plVar4 = local_60;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_04373c48 + 0x10);
  }
  if (local_60 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*local_60;
    local_60 = plVar5;
    (*(code *)*puVar6)(plVar4);
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
    plVar5 = local_60;
  }
  local_60 = plVar5;
  local_78._0_5_ = CONCAT14(1,(undefined4)local_78);
  local_70 = CONCAT11(1,(undefined1)local_70);
                    /* try { // try from 00370ba4 to 00370c0b has its CatchHandler @ 00370c88 */
  FUN_00370a30(&local_78,param_2,param_1);
  bVar3 = *param_1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar2 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar2 = param_1 + 1;
    }
    if (pbVar2[uVar1 - 1] == 0x20) {
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      uVar7 = uVar1 - 1;
      if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
        if ((bVar3 & 1) == 0) {
          param_1[uVar1] = 0;
          *param_1 = (byte)((int)uVar7 << 1);
        }
        else {
          (*(byte **)(param_1 + 0x10))[uVar7] = 0;
          *(ulong *)(param_1 + 8) = uVar7;
        }
      }
      else {
        FUN_002e6bd4(param_1,uVar7 - uVar1,0);
      }
    }
  }
  FUN_00365d78(&local_40,local_38);
  FUN_00365de8(&puStack_58,local_50);
  plVar4 = local_60;
  local_60 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)(plVar4);
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  return;
}


