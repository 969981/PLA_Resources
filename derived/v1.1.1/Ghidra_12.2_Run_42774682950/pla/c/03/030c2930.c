/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c2930; name: FUN_030c2930
 */


void FUN_030c2930(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7,undefined8 param_8,undefined8 *param_9)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x88) + (param_1 & 0xffffff) * 8);
  if (lVar2 != 0) {
    puVar3 = (uint *)(*(long *)(param_3 + 0x10) + (param_1 & 0xffffff) * 0xc0 + 0x80);
    param_4 = param_4 + (ulong)*puVar3 * 0x80;
    local_58 = *param_9;
    local_70 = 0;
    uStack_68 = 0;
    uVar1 = *(uint *)(param_5 + (ulong)*(ushort *)(param_4 + 0x58) * 0x70 + 4) | 2;
    if ((*(uint *)(param_7 + 0xc60) & uVar1) != 0) {
      lVar4 = 0;
      puVar5 = (undefined8 *)(param_7 + 0xc70);
      local_74 = (undefined4)local_58;
      do {
        if ((*(uint *)(puVar5 + -1) & uVar1) != 0) {
          (**(code **)(*(long *)*puVar5 + 0xa8))
                    ((long *)*puVar5,param_8,*puVar3,param_4,&local_74,&local_70);
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < *(int *)(param_7 + 0xc64));
      local_58 = CONCAT44(local_74,local_74);
    }
    FUN_03017e90(param_2,param_4,lVar2,&local_58,&local_70);
  }
  return;
}


