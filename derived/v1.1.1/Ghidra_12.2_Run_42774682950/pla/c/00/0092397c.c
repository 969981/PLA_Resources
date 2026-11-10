/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092397c; name: FUN_0092397c
 */


void FUN_0092397c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uStack_40 = *(undefined8 *)(param_1 + 0x98);
  local_48 = param_2;
  local_38 = FUN_02947534();
  FUN_00923a80(&local_68,param_2,&local_48);
  uVar1 = local_68;
  local_68 = 0;
  lVar2 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (lVar2 != 0) {
    FUN_008c7940(param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_58;
  *(undefined8 *)(param_1 + 0x70) = local_50;
  *(undefined8 *)(param_1 + 0x60) = local_60;
  uStack_40 = *(undefined8 *)(param_1 + 0x98);
  local_48 = param_2;
  local_38 = FUN_02948a74();
  FUN_00923a80(&local_68,param_2,&local_48);
  uVar1 = local_68;
  local_68 = 0;
  lVar2 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  if (lVar2 != 0) {
    FUN_008c7940(param_1 + 0x80);
  }
  *(undefined8 *)(param_1 + 0x88) = uStack_58;
  *(undefined8 *)(param_1 + 0x90) = local_50;
  *(undefined8 *)(param_1 + 0x80) = local_60;
  return;
}


