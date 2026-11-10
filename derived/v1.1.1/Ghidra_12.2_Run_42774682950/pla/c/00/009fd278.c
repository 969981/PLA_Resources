/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009fd278; name: FUN_009fd278
 */


void FUN_009fd278(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined1 local_50 [4];
  bool local_4c [4];
  long local_48;
  long local_40;
  long local_38;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar3;
  if (uVar2 < 5) {
    local_24 = 0;
LAB_009fd3d4:
    local_28 = 0;
LAB_009fd3d8:
    local_2c = 0;
LAB_009fd3dc:
    local_38 = 0;
LAB_009fd3e0:
    local_40 = 0;
LAB_009fd3e4:
    local_48 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar3[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar3[2]);
    }
    if (uVar2 < 7) goto LAB_009fd3d4;
    local_28 = 0;
    if ((ulong)puVar3[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar3[3]);
    }
    if (uVar2 < 9) goto LAB_009fd3d8;
    local_2c = 0;
    if ((ulong)puVar3[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar3[4]);
    }
    if (uVar2 < 0xb) goto LAB_009fd3dc;
    local_38 = 0;
    if ((ulong)puVar3[5] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar3[5]);
      local_38 = (long)puVar1 + (ulong)*puVar1;
    }
    if (uVar2 < 0xd) goto LAB_009fd3e0;
    local_40 = 0;
    if ((ulong)puVar3[6] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar3[6]);
      local_40 = (long)puVar1 + (ulong)*puVar1;
    }
    if (uVar2 < 0xf) goto LAB_009fd3e4;
    local_48 = 0;
    if ((ulong)puVar3[7] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar3[7]);
      local_48 = (long)puVar1 + (ulong)*puVar1;
    }
    if (0x10 < uVar2) {
      local_4c[0] = false;
      if ((ulong)puVar3[8] != 0) {
        local_4c[0] = *(char *)((long)param_2 + (ulong)puVar3[8]) != '\0';
      }
      if (uVar2 < 0x13) {
        local_50[0] = false;
      }
      else {
        local_50[0] = false;
        if ((ulong)puVar3[9] != 0) {
          local_50[0] = *(char *)((long)param_2 + (ulong)puVar3[9]) != '\0';
        }
      }
      goto LAB_009fd380;
    }
  }
  local_50[0] = false;
  local_4c[0] = false;
LAB_009fd380:
  FUN_009fd3fc(&local_18,param_3,&local_24,&local_28,&local_2c,&local_38,&local_40,&local_48,
               local_4c,local_50);
  *param_1 = local_18;
  return;
}


