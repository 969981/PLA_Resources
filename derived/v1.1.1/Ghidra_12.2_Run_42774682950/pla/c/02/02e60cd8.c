/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e60cd8; name: FUN_02e60cd8
 */


void FUN_02e60cd8(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined4 local_80;
  byte local_7c;
  byte local_7b;
  undefined1 auStack_78 [8];
  long local_68;
  
  *param_1 = *(long *)(param_4 + 0x78) + 8;
  FUN_02e54670(param_2,&local_68,auStack_78);
  local_98 = param_3 + 0x40;
  plVar2 = *(long **)(*(long *)(param_5 + 8) + 0x38);
  lVar3 = *(long *)(*plVar2 + 0x20);
  local_a8 = *(undefined4 *)(lVar3 + 0x18);
  uStack_a4 = *(undefined4 *)(lVar3 + 0x1c);
  local_a0 = *(undefined4 *)(lVar3 + 0x20);
  lStack_90 = param_3 + 0x28;
  local_88 = param_3 + 8;
  if (*(uint *)(*(long *)(param_5 + 8) + 0x40) < 6) {
    lVar3 = 0;
  }
  else {
    lVar3 = plVar2[5];
  }
  uVar4 = FUN_02ef71a8(lVar3);
  bVar1 = FUN_02e5be68(param_5);
  local_7b = FUN_02e5bed8(param_5);
  local_7c = bVar1 & 1;
  local_7b = local_7b & 1;
  local_80 = uVar4;
  FUN_02e54a80(auStack_b8,param_2,local_68 != param_4);
  FUN_02e6075c(param_1,auStack_b8,param_2 + (ulong)(local_68 != param_4) * 0x38 + 0x620,&local_a8,1,
               0);
  return;
}


