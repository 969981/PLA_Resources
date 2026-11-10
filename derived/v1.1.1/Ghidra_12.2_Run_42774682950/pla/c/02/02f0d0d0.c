/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d0d0; name: FUN_02f0d0d0
 */


bool FUN_02f0d0d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  local_70 = param_3;
  puVar1 = (undefined4 *)FUN_02ee1b20(param_1 + 0x38,&local_70);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((*(int *)(param_1 + 0x20) == 0) && (uVar3 = *(uint *)(param_1 + 0x30), uVar3 != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    puVar5 = puVar4;
    do {
      if ((*(char *)((long)*puVar5 + 0x14) != '\0') &&
         (plVar2 = *(long **)*puVar5, plVar2 != (long *)0x0)) {
        local_60 = 0;
        local_68 = 0;
        local_58 = 0xff;
        local_50 = 0xff;
        local_48 = 0;
        local_70 = param_3;
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2,&local_70,0);
        puVar4 = *(undefined8 **)(param_1 + 0x28);
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar4 + uVar3);
  }
  return puVar1 != (undefined4 *)0x0;
}


