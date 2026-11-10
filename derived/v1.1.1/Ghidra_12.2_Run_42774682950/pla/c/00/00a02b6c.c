/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a02b6c; name: FUN_00a02b6c
 */


void FUN_00a02b6c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    local_24 = 0;
LAB_00a02c64:
    local_28 = 0;
LAB_00a02c68:
    local_2c = 0;
LAB_00a02c6c:
    local_30 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_00a02c64;
    local_28 = 0;
    if ((ulong)puVar2[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (uVar1 < 9) goto LAB_00a02c68;
    local_2c = 0;
    if ((ulong)puVar2[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar2[4]);
    }
    if (uVar1 < 0xb) goto LAB_00a02c6c;
    local_30 = 0;
    if ((ulong)puVar2[5] != 0) {
      local_30 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[5]);
    }
    if (0xc < uVar1) {
      local_34 = 0;
      if ((ulong)puVar2[6] != 0) {
        local_34 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[6]);
      }
      if (uVar1 < 0xf) {
        local_38 = 0;
      }
      else {
        local_38 = 0;
        if ((ulong)puVar2[7] != 0) {
          local_38 = *(undefined4 *)((long)param_2 + (ulong)puVar2[7]);
        }
      }
      goto LAB_00a02c1c;
    }
  }
  local_38 = 0;
  local_34 = 0;
LAB_00a02c1c:
  FUN_00a02c84(&local_18,param_3,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38);
  *param_1 = local_18;
  return;
}


