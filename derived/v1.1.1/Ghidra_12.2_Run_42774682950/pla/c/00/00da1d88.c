/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da1d88; name: FUN_00da1d88
 */


void FUN_00da1d88(undefined8 *param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  long *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  uint local_38;
  
  local_70 = 0x71cfcea90142567d;
  local_68 = "vib_table";
  uStack_60 = 9;
  FUN_010868dc(&local_40,param_2 + 0x38,&local_70);
  if ((((local_40 == (int *)0x0) || (local_38 == 0xffffffff)) ||
      (*(ushort *)((long)local_40 - (long)*local_40) < 5)) ||
     (uVar4 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[2], uVar4 == 0)) {
    iVar2 = 0;
  }
  else {
    puVar3 = (uint *)((long)local_40 + uVar4);
    puVar3 = (uint *)((long)puVar3 + (ulong)local_38 * 4 + (ulong)*puVar3 + 4);
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    iVar2 = *(int *)((long)puVar3 + (ulong)*puVar3);
  }
  if (((int)param_3 < 0) || (iVar2 <= (int)param_3)) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = &DAT_cbf29ce484222645;
    param_1[2] = &DAT_03996322;
    param_1[3] = 0;
    return;
  }
  if (local_40 == (int *)0x0) {
    local_48 = 0xffffffff;
  }
  else {
    if (((local_38 != 0xffffffff) && (4 < *(ushort *)((long)local_40 - (long)*local_40))) &&
       (uVar4 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[2], uVar4 != 0)) {
      puVar3 = (uint *)((long)local_40 + uVar4);
      puVar3 = (uint *)((long)puVar3 + (ulong)local_38 * 4 + (ulong)*puVar3 + 4);
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      if ((ulong)(long)(int)param_3 < (ulong)*puVar3) {
        local_48 = puVar3[(ulong)param_3 + 1];
        goto LAB_00da1ec8;
      }
    }
    local_40 = (int *)0x0;
    local_48 = 0xffffffff;
  }
LAB_00da1ec8:
  local_98 = 0x72b64509739af096;
  local_90 = &DAT_039a01d4;
  uStack_88 = 4;
  local_50 = local_40;
  FUN_010868dc(auStack_80,&local_50,&local_98);
  local_b8 = &DAT_cbf29ce484222645;
  puStack_b0 = &DAT_03996322;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  FUN_01086e24(&local_70,auStack_80,&local_b8);
  FUN_00da1fa0(param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


