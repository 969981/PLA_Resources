/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a04a4c; name: FUN_00a04a4c
 */


void FUN_00a04a4c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint local_40;
  bool local_3c [4];
  bool local_38 [4];
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
LAB_00a04b90:
    local_28 = 0;
LAB_00a04b94:
    local_2c = 0;
LAB_00a04b98:
    local_30 = 0;
LAB_00a04b9c:
    local_34 = 0;
LAB_00a04ba0:
    local_38[0] = false;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_00a04b90;
    local_28 = 0;
    if ((ulong)puVar2[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (uVar1 < 9) goto LAB_00a04b94;
    local_2c = 0;
    if ((ulong)puVar2[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar2[4]);
    }
    if (uVar1 < 0xb) goto LAB_00a04b98;
    local_30 = 0;
    if ((ulong)puVar2[5] != 0) {
      local_30 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[5]);
    }
    if (uVar1 < 0xd) goto LAB_00a04b9c;
    local_34 = 0;
    if ((ulong)puVar2[6] != 0) {
      local_34 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[6]);
    }
    if (uVar1 < 0xf) goto LAB_00a04ba0;
    local_38[0] = false;
    if ((ulong)puVar2[7] != 0) {
      local_38[0] = *(char *)((long)param_2 + (ulong)puVar2[7]) != '\0';
    }
    if (0x10 < uVar1) {
      local_3c[0] = false;
      if ((ulong)puVar2[8] != 0) {
        local_3c[0] = *(char *)((long)param_2 + (ulong)puVar2[8]) != '\0';
      }
      if (uVar1 < 0x13) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        if ((ulong)puVar2[9] != 0) {
          local_40 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[9]);
        }
      }
      goto LAB_00a04b3c;
    }
  }
  local_40 = 0;
  local_3c[0] = false;
LAB_00a04b3c:
  FUN_00a04bb8(&local_18,param_3,&local_24,&local_28,&local_2c,&local_30,&local_34,local_38,local_3c
               ,&local_40);
  *param_1 = local_18;
  return;
}


