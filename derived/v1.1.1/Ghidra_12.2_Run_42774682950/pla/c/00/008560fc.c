/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008560fc; name: FUN_008560fc
 */


int FUN_008560fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined *local_48 [3];
  undefined2 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  FUN_008565ac(param_1,(long)&local_28 + 4,&local_28,param_2,param_3);
  iVar3 = local_28._4_4_;
  if ((int)local_28 == 0 && local_28._4_4_ == 0) {
    local_48[0] = PTR_DAT_04377418 + 0x10;
    FUN_007e34ac(local_48,0xffffffff);
    local_30 = 0;
    FUN_008565ac(param_1,(long)&local_28 + 4,&local_28,local_48,param_3);
    FUN_007e34a4(local_48);
    iVar3 = local_28._4_4_;
  }
  uVar1 = (int)local_28 - iVar3;
  uVar2 = FUN_00821c5c(param_1 + 0x78);
  return iVar3 + (int)((uVar2 & 0xffffffff) * (ulong)uVar1 >> 0x20);
}


