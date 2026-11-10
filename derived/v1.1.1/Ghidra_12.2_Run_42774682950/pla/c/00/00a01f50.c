/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a01f50; name: FUN_00a01f50
 */


void FUN_00a01f50(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  long local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar3;
  if (uVar2 < 5) {
    local_24 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar3[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar3[2]);
    }
    if (6 < uVar2) {
      local_28 = 0;
      if ((ulong)puVar3[3] != 0) {
        local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar3[3]);
      }
      if (uVar2 < 9) {
        local_30 = 0;
      }
      else {
        local_30 = 0;
        if ((ulong)puVar3[4] != 0) {
          puVar1 = (uint *)((long)param_2 + (ulong)puVar3[4]);
          local_30 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      goto LAB_00a01fc0;
    }
  }
  local_30 = 0;
  local_28 = 0;
LAB_00a01fc0:
  FUN_00a02010(&local_18,param_3,&local_24,&local_28,&local_30);
  *param_1 = local_18;
  return;
}


