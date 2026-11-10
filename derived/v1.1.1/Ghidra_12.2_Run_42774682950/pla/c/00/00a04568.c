/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a04568; name: FUN_00a04568
 */


void FUN_00a04568(undefined8 *param_1,ulong param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 in_x9;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  ulong local_70;
  ulong uStack_68;
  undefined4 local_54;
  undefined8 local_50;
  ulong uStack_48;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar4 = (ushort *)((long)param_3 - (long)*param_3);
  uVar3 = *puVar4;
  if (uVar3 < 5) {
    local_24 = 0;
LAB_00a04760:
    local_28 = 0;
LAB_00a04764:
    local_2c = 0;
LAB_00a04768:
    local_30 = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar4[2] != 0) {
      local_24 = *(undefined4 *)((long)param_3 + (ulong)puVar4[2]);
    }
    in_x9 = param_4;
    if (uVar3 < 7) goto LAB_00a04760;
    local_28 = 0;
    if ((ulong)puVar4[3] != 0) {
      local_28 = *(undefined4 *)((long)param_3 + (ulong)puVar4[3]);
    }
    if (uVar3 < 9) goto LAB_00a04764;
    local_2c = 0;
    if ((ulong)puVar4[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_3 + (ulong)puVar4[4]);
    }
    if (uVar3 < 0xb) goto LAB_00a04768;
    local_30 = 0;
    if ((ulong)puVar4[5] != 0) {
      local_30 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[5]);
    }
    if (0xc < uVar3) {
      local_34 = 0;
      if ((ulong)puVar4[6] != 0) {
        local_34 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[6]);
      }
      param_2 = 0;
      puVar1 = (undefined4 *)((long)param_3 + (ulong)puVar4[7]);
      puVar2 = (undefined4 *)0x0;
      if (puVar4[7] != 0) {
        puVar2 = puVar1;
      }
      local_50 = CONCAT44(puVar2[1],*puVar1);
      uStack_48 = (ulong)(uint)puVar1[2];
      if (0x10 < uVar3) {
        if ((ulong)puVar4[8] == 0) {
          local_54 = 0;
        }
        else {
          local_54 = *(undefined4 *)((long)param_3 + (ulong)puVar4[8]);
        }
        puVar1 = (undefined4 *)((long)param_3 + (ulong)puVar4[9]);
        puVar2 = (undefined4 *)0x0;
        if (puVar4[9] != 0) {
          puVar2 = puVar1;
        }
        local_70 = CONCAT44(puVar2[1],*puVar1);
        uStack_68 = (ulong)(uint)puVar1[2];
        if (uVar3 < 0x15) {
          local_74 = 0;
          param_2 = local_70;
LAB_00a0474c:
          local_78 = 0;
        }
        else {
          if ((ulong)puVar4[10] == 0) {
            param_2 = 0;
          }
          else {
            param_2 = (ulong)*(uint *)((long)param_3 + (ulong)puVar4[10]);
          }
          local_74 = (undefined4)param_2;
          if (uVar3 < 0x17) goto LAB_00a0474c;
          local_78 = 0;
          if ((ulong)puVar4[0xb] != 0) {
            local_78 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[0xb]);
          }
          if (0x18 < uVar3) {
            local_7c = 0;
            if ((ulong)puVar4[0xc] != 0) {
              local_7c = (uint)*(byte *)((long)param_3 + (ulong)puVar4[0xc]);
            }
            if (0x1a < uVar3) {
              local_80 = 0;
              if ((ulong)puVar4[0xd] != 0) {
                local_80 = (uint)*(byte *)((long)param_3 + (ulong)puVar4[0xd]);
              }
              goto LAB_00a046d0;
            }
            goto LAB_00a0476c;
          }
        }
        local_80 = 0;
        local_7c = 0;
        goto LAB_00a046d0;
      }
    }
  }
LAB_00a0476c:
  local_80 = 0;
  param_4 = in_x9;
LAB_00a046d0:
  FUN_00a04774(&local_18,param_2,param_4,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_50
               ,&local_54,&local_70,&local_74,&local_78,&local_7c,&local_80);
  *param_1 = local_18;
  return;
}


