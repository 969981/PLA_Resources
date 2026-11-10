/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a04c40; name: FUN_00a04c40
 */


void FUN_00a04c40(undefined8 *param_1,ulong param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 in_x9;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  ulong local_60;
  ulong uStack_58;
  undefined4 local_44;
  undefined8 local_40;
  ulong uStack_38;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar4 = (ushort *)((long)param_3 - (long)*param_3);
  uVar3 = *puVar4;
  if (uVar3 < 5) {
    local_24 = 0;
LAB_00a04e18:
    local_28 = 0;
LAB_00a04e1c:
    local_2c = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar4[2] != 0) {
      local_24 = *(undefined4 *)((long)param_3 + (ulong)puVar4[2]);
    }
    in_x9 = param_4;
    if (uVar3 < 7) goto LAB_00a04e18;
    local_28 = 0;
    if ((ulong)puVar4[3] != 0) {
      local_28 = *(undefined4 *)((long)param_3 + (ulong)puVar4[3]);
    }
    if (uVar3 < 9) goto LAB_00a04e1c;
    local_2c = 0;
    if ((ulong)puVar4[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_3 + (ulong)puVar4[4]);
    }
    if (10 < uVar3) {
      local_30 = 0;
      if ((ulong)puVar4[5] != 0) {
        local_30 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[5]);
      }
      param_2 = 0;
      puVar1 = (undefined4 *)((long)param_3 + (ulong)puVar4[6]);
      puVar2 = (undefined4 *)0x0;
      if (puVar4[6] != 0) {
        puVar2 = puVar1;
      }
      local_40 = CONCAT44(puVar2[1],*puVar1);
      uStack_38 = (ulong)(uint)puVar1[2];
      if (0xe < uVar3) {
        if ((ulong)puVar4[7] == 0) {
          local_44 = 0;
        }
        else {
          local_44 = *(undefined4 *)((long)param_3 + (ulong)puVar4[7]);
        }
        puVar1 = (undefined4 *)((long)param_3 + (ulong)puVar4[8]);
        puVar2 = (undefined4 *)0x0;
        if (puVar4[8] != 0) {
          puVar2 = puVar1;
        }
        local_60 = CONCAT44(puVar2[1],*puVar1);
        uStack_58 = (ulong)(uint)puVar1[2];
        if (uVar3 < 0x13) {
          local_64 = 0;
          param_2 = local_60;
LAB_00a04e04:
          local_68 = 0;
        }
        else {
          if ((ulong)puVar4[9] == 0) {
            param_2 = 0;
          }
          else {
            param_2 = (ulong)*(uint *)((long)param_3 + (ulong)puVar4[9]);
          }
          local_64 = (undefined4)param_2;
          if (uVar3 < 0x15) goto LAB_00a04e04;
          local_68 = 0;
          if ((ulong)puVar4[10] != 0) {
            local_68 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[10]);
          }
          if (0x16 < uVar3) {
            local_6c = 0;
            if ((ulong)puVar4[0xb] != 0) {
              local_6c = (uint)*(byte *)((long)param_3 + (ulong)puVar4[0xb]);
            }
            if (0x18 < uVar3) {
              local_70 = 0;
              if ((ulong)puVar4[0xc] != 0) {
                local_70 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[0xc]);
              }
              goto LAB_00a04d90;
            }
            goto LAB_00a04e20;
          }
        }
        local_70 = 0;
        local_6c = 0;
        goto LAB_00a04d90;
      }
    }
  }
LAB_00a04e20:
  local_70 = 0;
  param_4 = in_x9;
LAB_00a04d90:
  FUN_00a04e28(&local_18,param_2,param_4,&local_24,&local_28,&local_2c,&local_30,&local_40,&local_44
               ,&local_60,&local_64,&local_68,&local_6c,&local_70);
  *param_1 = local_18;
  return;
}


