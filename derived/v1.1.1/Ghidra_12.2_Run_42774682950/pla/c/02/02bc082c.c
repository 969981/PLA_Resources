/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc082c; name: FUN_02bc082c
 */


void FUN_02bc082c(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  
  local_80 = &local_40;
  puVar3 = param_1 + 2;
  uVar1 = *param_1;
  local_40 = param_2;
  uVar2 = FUN_02bc0910(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,&local_80,puVar3,param_5,param_6,0,0);
  if ((uVar2 & 1) == 0) {
    local_78 = *param_2;
    local_70 = param_2[1];
    local_68 = param_2[2];
    local_80 = (undefined8 **)((ulong)local_80 & 0xffffffff00000000);
    uVar1 = *param_1;
    if (uVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = (undefined1)local_68;
      *(undefined8 *)puVar3 = local_78;
      *(undefined8 *)(param_1 + 4) = local_70;
      uVar1 = 0;
    }
    else {
      FUN_02bc06b0(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,auStack_38,puVar3,param_5,param_6,0,0);
      *(undefined8 *)(param_1 + 4) = local_70;
      *(undefined8 *)(param_1 + 6) = local_68;
      *(undefined8 *)puVar3 = local_78;
      *param_1 = 0;
      uVar1 = (uint)local_80;
    }
    FUN_02bc06b0(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,auStack_38,&local_78,param_5,param_6,0,0);
  }
  return;
}


