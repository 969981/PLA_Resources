/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e58074; name: FUN_02e58074
 */


void FUN_02e58074(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar2 = param_1;
  if (*(int *)(param_1 + 0xf) != 0) {
    puVar2 = (undefined8 *)((long)param_1 + (ulong)(*(int *)(param_1 + 0xf) - 1) * 0xc + 0xc);
  }
  local_60 = *puVar2;
  local_58 = *(undefined4 *)(puVar2 + 1);
  uVar4 = *(ulong *)(param_3 + 0x40);
  uVar5 = *(ulong *)(param_4 + 0x40);
  if (*(int *)(param_2 + 0x78) == 0) {
    puVar2 = (undefined8 *)(param_4 + 0x50);
  }
  else if (uVar4 < uVar5) {
    puVar2 = (undefined8 *)(param_2 + (ulong)(*(int *)(param_2 + 0x78) - 1) * 0xc + 0xc);
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0xc);
  }
  local_70 = *puVar2;
  local_68 = *(undefined4 *)(puVar2 + 1);
  local_80 = 0;
  local_78 = 0;
  FUN_02e54120(param_3,&local_60,&local_70,&local_80);
  uVar1 = *(uint *)(param_1 + 0xf);
  if (uVar1 < 8) {
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0xc) = (undefined4)local_80;
    *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0x10) = local_80._4_4_;
    *(undefined4 *)((long)param_1 + (ulong)uVar1 * 0xc + 0x14) = local_78;
    uVar1 = *(uint *)(param_1 + 0xf);
    param_1[(ulong)uVar1 + 0x16] = param_5;
    param_1[(ulong)uVar1 + 0x1e] = uVar3;
    *(uint *)(param_1 + 0xf) = uVar1 + 1;
  }
  if (uVar4 < uVar5) {
    FUN_02e57fc4();
  }
  else {
    FUN_02e57f1c(param_1,param_2,&local_80,param_6);
  }
  return;
}


