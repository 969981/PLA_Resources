/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762d20; name: FUN_02762d20
 */


void FUN_02762d20(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar5 = FUN_027631a0(param_1,(param_1[1] - *param_1 >> 4) * -0x1111111111111111 + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  local_68 = 0;
  plStack_48 = plVar1;
  if (lVar5 != 0) {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 * 0xf0,8);
  }
  puVar6 = (undefined8 *)(local_68 + (lVar3 - lVar2 >> 4) * 0x10);
  local_50 = local_68 + lVar5 * 0xf0;
  *puVar6 = &PTR_LAB_0426b978;
  puVar6[1] = &PTR_FUN_0426b958;
  puStack_60 = puVar6;
  FUN_02762fb0(puVar6 + 2,param_2 + 0x10);
  FUN_02762fb0(puVar6 + 6,param_2 + 0x30);
  FUN_02763008(puVar6 + 10,param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  puVar6[0xe] = *(undefined8 *)(param_2 + 0x70);
  puVar6[0xf] = uVar4;
  FUN_02762fb0(puVar6 + 0x10,param_2 + 0x80);
  FUN_027630b8(puVar6 + 0x14,param_2 + 0xa0);
  FUN_02762fb0(puVar6 + 0x18,param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  puVar6[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  puVar6[0x1d] = uVar4;
  local_58 = puVar6 + 0x1e;
  FUN_02763208(param_1,&local_68);
  FUN_02763324(&local_68);
  return;
}


