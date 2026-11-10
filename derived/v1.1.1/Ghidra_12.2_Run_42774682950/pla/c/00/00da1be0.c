/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da1be0; name: FUN_00da1be0
 */


undefined1 * FUN_00da1be0(long param_1,uint param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 auStack_68 [16];
  int *local_58;
  uint local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 uStack_38;
  int *local_30;
  uint local_28;
  undefined8 local_18;
  
  local_48 = 0x71cfcea90142567d;
  local_40 = "vib_table";
  uStack_38 = 9;
  FUN_010868dc(&local_30,param_1 + 0x38,&local_48);
  if ((((local_30 == (int *)0x0) || (local_28 == 0xffffffff)) ||
      (*(ushort *)((long)local_30 - (long)*local_30) < 5)) ||
     (uVar5 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[2], uVar5 == 0)) {
    iVar3 = 0;
  }
  else {
    puVar4 = (uint *)((long)local_30 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)local_28 * 4 + (ulong)*puVar4 + 4);
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    iVar3 = *(int *)((long)puVar4 + (ulong)*puVar4);
  }
  if ((int)param_2 < 0) {
    return &DAT_cbf29ce484222645;
  }
  if (iVar3 <= (int)param_2) {
    return &DAT_cbf29ce484222645;
  }
  if (local_30 != (int *)0x0) {
    if (((local_28 != 0xffffffff) && (4 < *(ushort *)((long)local_30 - (long)*local_30))) &&
       (uVar5 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[2], uVar5 != 0)) {
      puVar4 = (uint *)((long)local_30 + uVar5);
      puVar4 = (uint *)((long)puVar4 + (ulong)local_28 * 4 + (ulong)*puVar4 + 4);
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      if ((ulong)(long)(int)param_2 < (ulong)*puVar4) {
        local_50 = puVar4[(ulong)param_2 + 1];
        goto LAB_00da1d18;
      }
    }
    local_30 = (int *)0x0;
  }
  local_50 = 0xffffffff;
LAB_00da1d18:
  local_48 = 0x24312a27509e058c;
  local_40 = "key";
  uStack_38 = 3;
  local_58 = local_30;
  FUN_010868dc(auStack_68,&local_58,&local_48);
  local_18 = 0;
  puVar2 = (undefined1 *)FUN_0108703c(auStack_68,&local_18);
  return puVar2;
}


