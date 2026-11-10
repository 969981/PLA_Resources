/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2df98; name: FUN_02c2df98
 */


void FUN_02c2df98(long param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *__dest;
  ulong uVar4;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar4 = (ulong)*(uint *)(param_3 + (param_5 & 0xffffffff) * 4 + 0xc);
  if (*(char *)(param_1 + 0xd8) == '\0') {
    *param_2 = uVar4 + param_3;
  }
  else {
    puVar3 = (undefined4 *)*param_2;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar1 = PTR_DAT_0437a508 + 0x10;
    local_68 = 0;
    local_70 = puVar1;
    FUN_00938764(&local_70,0,param_4,0,*(undefined8 *)(param_1 + 8),0);
    if ((local_68 != 0) && (*(long *)(local_68 + 0x240) != 0)) {
      *puVar3 = *(undefined4 *)(*(long *)(local_68 + 0x250) + uVar4);
    }
    FUN_00936104(&local_70);
    __dest = (uint *)*param_2;
    uVar2 = *__dest;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    local_70 = puVar1;
    FUN_00938764(&local_70,0,param_4,0,*(undefined8 *)(param_1 + 8),0);
    if ((local_68 != 0) && (*(long *)(local_68 + 0x240) != 0)) {
      memcpy(__dest,(void *)(*(long *)(local_68 + 0x250) + uVar4),(ulong)uVar2);
    }
    FUN_00936104(&local_70);
  }
  return;
}


