/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a05a2c; name: FUN_00a05a2c
 */


void FUN_00a05a2c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  bool local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    local_24 = 0;
LAB_00a05b68:
    local_28 = 0;
LAB_00a05b6c:
    local_2c[0] = false;
LAB_00a05b70:
    local_30 = 0;
LAB_00a05b74:
    local_34 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_00a05b68;
    local_28 = 0;
    if ((ulong)puVar2[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (uVar1 < 9) goto LAB_00a05b6c;
    local_2c[0] = false;
    if ((ulong)puVar2[4] != 0) {
      local_2c[0] = *(char *)((long)param_2 + (ulong)puVar2[4]) != '\0';
    }
    if (uVar1 < 0xb) goto LAB_00a05b70;
    if ((ulong)puVar2[5] == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined4 *)((long)param_2 + (ulong)puVar2[5]);
    }
    if (uVar1 < 0xd) goto LAB_00a05b74;
    if ((ulong)puVar2[6] == 0) {
      local_34 = 0;
    }
    else {
      local_34 = *(undefined4 *)((long)param_2 + (ulong)puVar2[6]);
    }
    if (0xe < uVar1) {
      if ((ulong)puVar2[7] == 0) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined4 *)((long)param_2 + (ulong)puVar2[7]);
      }
      if (uVar1 < 0x11) {
        local_3c[0] = false;
      }
      else {
        local_3c[0] = false;
        if ((ulong)puVar2[8] != 0) {
          local_3c[0] = *(char *)((long)param_2 + (ulong)puVar2[8]) != '\0';
        }
      }
      goto LAB_00a05b04;
    }
  }
  local_3c[0] = false;
  local_38 = 0;
LAB_00a05b04:
  FUN_00a05b8c(&local_18,param_3,&local_24,&local_28,local_2c,&local_30,&local_34,&local_38,local_3c
              );
  *param_1 = local_18;
  return;
}


