/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a05694; name: FUN_00a05694
 */


void FUN_00a05694(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint local_48;
  undefined4 local_44;
  bool local_40 [4];
  bool local_3c [4];
  bool local_38 [4];
  bool local_34 [4];
  bool local_30 [4];
  bool local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar2;
  if (uVar1 < 5) {
    local_24 = 0;
LAB_00a0583c:
    local_28 = 0;
LAB_00a05840:
    local_2c[0] = false;
LAB_00a05844:
    local_30[0] = false;
LAB_00a05848:
    local_34[0] = false;
LAB_00a0584c:
    local_38[0] = false;
LAB_00a05850:
    local_3c[0] = false;
LAB_00a05854:
    local_40[0] = false;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar2[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar2[2]);
    }
    if (uVar1 < 7) goto LAB_00a0583c;
    local_28 = 0;
    if ((ulong)puVar2[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar2[3]);
    }
    if (uVar1 < 9) goto LAB_00a05840;
    local_2c[0] = false;
    if ((ulong)puVar2[4] != 0) {
      local_2c[0] = *(char *)((long)param_2 + (ulong)puVar2[4]) != '\0';
    }
    if (uVar1 < 0xb) goto LAB_00a05844;
    local_30[0] = false;
    if ((ulong)puVar2[5] != 0) {
      local_30[0] = *(char *)((long)param_2 + (ulong)puVar2[5]) != '\0';
    }
    if (uVar1 < 0xd) goto LAB_00a05848;
    local_34[0] = false;
    if ((ulong)puVar2[6] != 0) {
      local_34[0] = *(char *)((long)param_2 + (ulong)puVar2[6]) != '\0';
    }
    if (uVar1 < 0xf) goto LAB_00a0584c;
    local_38[0] = false;
    if ((ulong)puVar2[7] != 0) {
      local_38[0] = *(char *)((long)param_2 + (ulong)puVar2[7]) != '\0';
    }
    if (uVar1 < 0x11) goto LAB_00a05850;
    local_3c[0] = false;
    if ((ulong)puVar2[8] != 0) {
      local_3c[0] = *(char *)((long)param_2 + (ulong)puVar2[8]) != '\0';
    }
    if (uVar1 < 0x13) goto LAB_00a05854;
    local_40[0] = false;
    if ((ulong)puVar2[9] != 0) {
      local_40[0] = *(char *)((long)param_2 + (ulong)puVar2[9]) != '\0';
    }
    if (0x14 < uVar1) {
      if ((ulong)puVar2[10] == 0) {
        local_44 = 0;
      }
      else {
        local_44 = *(undefined4 *)((long)param_2 + (ulong)puVar2[10]);
      }
      if (uVar1 < 0x17) {
        local_48 = 0;
      }
      else {
        local_48 = 0;
        if ((ulong)puVar2[0xb] != 0) {
          local_48 = (uint)*(byte *)((long)param_2 + (ulong)puVar2[0xb]);
        }
      }
      goto LAB_00a057d4;
    }
  }
  local_48 = 0;
  local_44 = 0;
LAB_00a057d4:
  FUN_00a0586c(&local_18,param_3,&local_24,&local_28,local_2c,local_30,local_34,local_38,local_3c,
               local_40,&local_44,&local_48);
  *param_1 = local_18;
  return;
}


