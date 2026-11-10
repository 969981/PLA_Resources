/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a0528c; name: FUN_00a0528c
 */


void FUN_00a0528c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 in_x9;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulong uStack_38;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar4 = (ushort *)((long)param_2 - (long)*param_2);
  uVar3 = *puVar4;
  if (uVar3 < 5) {
    local_24 = 0;
LAB_00a053f4:
    local_28 = 0;
LAB_00a053f8:
    local_2c = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar4[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar4[2]);
    }
    in_x9 = param_3;
    if (uVar3 < 7) goto LAB_00a053f4;
    local_28 = 0;
    if ((ulong)puVar4[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar4[3]);
    }
    if (uVar3 < 9) goto LAB_00a053f8;
    local_2c = 0;
    if ((ulong)puVar4[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar4[4]);
    }
    if (10 < uVar3) {
      local_30 = 0;
      if ((ulong)puVar4[5] != 0) {
        local_30 = (uint)*(byte *)((long)param_2 + (ulong)puVar4[5]);
      }
      puVar1 = (undefined4 *)((long)param_2 + (ulong)puVar4[6]);
      puVar2 = (undefined4 *)0x0;
      if (puVar4[6] != 0) {
        puVar2 = puVar1;
      }
      local_40 = CONCAT44(puVar2[1],*puVar1);
      uStack_38 = (ulong)(uint)puVar1[2];
      if (uVar3 < 0xf) {
        local_44 = 0;
      }
      else {
        if ((ulong)puVar4[7] == 0) {
          local_44 = 0;
        }
        else {
          local_44 = *(undefined4 *)((long)param_2 + (ulong)puVar4[7]);
        }
        if (0x10 < uVar3) {
          if ((ulong)puVar4[8] == 0) {
            local_48 = 0;
          }
          else {
            local_48 = *(undefined4 *)((long)param_2 + (ulong)puVar4[8]);
          }
          if (0x12 < uVar3) {
            local_4c = 0;
            if ((ulong)puVar4[9] != 0) {
              local_4c = (uint)*(byte *)((long)param_2 + (ulong)puVar4[9]);
            }
            goto LAB_00a05380;
          }
          goto LAB_00a053fc;
        }
      }
      local_4c = 0;
      local_48 = 0;
      goto LAB_00a05380;
    }
  }
LAB_00a053fc:
  local_4c = 0;
  param_3 = in_x9;
LAB_00a05380:
  FUN_00a05404(&local_18,param_3,&local_24,&local_28,&local_2c,&local_30,&local_40,&local_44,
               &local_48,&local_4c);
  *param_1 = local_18;
  return;
}


