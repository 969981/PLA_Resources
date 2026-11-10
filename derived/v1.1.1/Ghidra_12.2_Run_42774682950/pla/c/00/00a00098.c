/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a00098; name: FUN_00a00098
 */


void FUN_00a00098(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    local_24 = 0;
LAB_00a00158:
    local_28 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_00a00158;
    local_28 = 0;
    if ((ulong)puVar2[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (8 < uVar1) {
      local_2c = 0;
      if ((ulong)puVar2[4] != 0) {
        local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar2[4]);
      }
      if (uVar1 < 0xb) {
        local_30 = 0;
      }
      else {
        local_30 = 0;
        if ((ulong)puVar2[5] != 0) {
          local_30 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[5]);
        }
      }
      goto LAB_00a00118;
    }
  }
  local_30 = 0;
  local_2c = 0;
LAB_00a00118:
  FUN_00a00170(&local_18,param_3,&local_24,&local_28,&local_2c,&local_30);
  *param_1 = local_18;
  return;
}


