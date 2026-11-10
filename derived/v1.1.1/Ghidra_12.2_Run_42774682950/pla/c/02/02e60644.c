/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e60644; name: FUN_02e60644
 */


void FUN_02e60644(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined4 local_78;
  byte local_74;
  byte local_73;
  
  *param_1 = param_4;
  plVar5 = *(long **)(*(long *)(param_3 + 8) + 0x38);
  lVar6 = *(long *)(*plVar5 + 0x20);
  uVar1 = *(undefined4 *)(lVar6 + 0x18);
  uVar2 = *(undefined4 *)(lVar6 + 0x1c);
  uVar3 = *(undefined4 *)(lVar6 + 0x20);
  if (*(uint *)(*(long *)(param_3 + 8) + 0x40) < 6) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar5[5];
  }
  uVar7 = FUN_02ef71a8(lVar6);
  bVar4 = FUN_02e5be68(param_3);
  local_73 = FUN_02e5bed8(param_3);
  local_74 = bVar4 & 1;
  local_73 = local_73 & 1;
  lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x10);
  local_b0 = *(undefined4 *)(lVar6 + 0x78);
  local_ac = *(undefined4 *)(lVar6 + 0x7c);
  uStack_a8 = *(undefined4 *)(lVar6 + 0x80);
  local_a0 = uVar1;
  uStack_9c = uVar2;
  local_98 = uVar3;
  local_90 = param_3 + 0x98;
  lStack_88 = param_3 + 0x40;
  local_80 = param_3 + 0x58;
  local_78 = uVar7;
  FUN_02e6075c(param_1,&local_b0,param_2 + 0x60,&local_a0,param_5 & 1,DAT_042a5cb2);
  return;
}


