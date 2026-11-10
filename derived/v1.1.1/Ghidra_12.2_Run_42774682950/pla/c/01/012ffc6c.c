/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffc6c; name: FUN_012ffc6c
 */


void FUN_012ffc6c(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)
           (*(long *)(param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38 + 0x1650) +
           (param_2 & 0xffffffff) * 0x30);
  local_40 = puVar3[2];
  uStack_38 = puVar3[3];
  local_30 = puVar3[4];
  uStack_28 = puVar3[5];
  local_50 = *puVar3;
  uStack_48 = puVar3[1];
  uVar1 = (uint)local_50 & 0xffff;
  uVar2 = FUN_012f0eb8(uVar1);
  FUN_012f0d7c(uVar1,~uVar2 & 1);
  FUN_012f823c(param_1 + 0x1d48,&local_50);
  FUN_00d51e18(param_1,0);
  return;
}


