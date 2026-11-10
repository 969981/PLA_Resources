/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a03e68; name: FUN_00a03e68
 */


void FUN_00a03e68(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined8 in_x9;
  ushort *puVar4;
  uint local_38;
  undefined1 local_34 [4];
  undefined8 local_30;
  ulong uStack_28;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar4 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar4;
  if (uVar3 < 5) {
    local_14 = 0;
LAB_00a03f6c:
    local_18 = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar4[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar4[2]);
    }
    in_x9 = param_2;
    if (uVar3 < 7) goto LAB_00a03f6c;
    local_18 = 0;
    if ((ulong)puVar4[3] != 0) {
      local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar4[3]);
    }
    if (8 < uVar3) {
      local_1c = 0;
      if ((ulong)puVar4[4] != 0) {
        local_1c = (uint)*(byte *)((long)param_1 + (ulong)puVar4[4]);
      }
      puVar1 = (undefined4 *)((long)param_1 + (ulong)puVar4[5]);
      puVar2 = (undefined4 *)0x0;
      if (puVar4[5] != 0) {
        puVar2 = puVar1;
      }
      local_30 = CONCAT44(puVar2[1],*puVar1);
      uStack_28 = (ulong)(uint)puVar1[2];
      if (uVar3 < 0xd) {
        local_38 = 0;
        local_34[0] = 0;
        goto LAB_00a03f2c;
      }
      local_34[0] = false;
      if ((ulong)puVar4[6] != 0) {
        local_34[0] = *(char *)((long)param_1 + (ulong)puVar4[6]) != '\0';
      }
      if (0xe < uVar3) {
        local_38 = 0;
        if ((ulong)puVar4[7] != 0) {
          local_38 = (uint)*(byte *)((long)param_1 + (ulong)puVar4[7]);
        }
        goto LAB_00a03f2c;
      }
    }
  }
  local_38 = 0;
  param_2 = in_x9;
LAB_00a03f2c:
  FUN_00a03f78(param_2,&local_14,&local_18,&local_1c,&local_30,local_34,&local_38);
  return;
}


