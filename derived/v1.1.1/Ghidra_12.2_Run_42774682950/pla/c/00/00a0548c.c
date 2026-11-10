/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a0548c; name: FUN_00a0548c
 */


void FUN_00a0548c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 in_x9;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulong uStack_48;
  long local_38;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar4 = *puVar5;
  if (uVar4 < 5) {
    local_24 = 0;
LAB_00a055fc:
    local_28 = 0;
LAB_00a05600:
    local_2c = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar5[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar5[2]);
    }
    in_x9 = param_3;
    if (uVar4 < 7) goto LAB_00a055fc;
    local_28 = 0;
    if ((ulong)puVar5[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar5[3]);
    }
    if (uVar4 < 9) goto LAB_00a05600;
    local_2c = 0;
    if ((ulong)puVar5[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar5[4]);
    }
    if (10 < uVar4) {
      local_38 = 0;
      if ((ulong)puVar5[5] != 0) {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar5[5]);
        local_38 = (long)puVar1 + (ulong)*puVar1;
      }
      puVar2 = (undefined4 *)((long)param_2 + (ulong)puVar5[6]);
      puVar3 = (undefined4 *)0x0;
      if (puVar5[6] != 0) {
        puVar3 = puVar2;
      }
      local_50 = CONCAT44(puVar3[1],*puVar2);
      uStack_48 = (ulong)(uint)puVar2[2];
      if (uVar4 < 0xf) {
        local_54 = 0;
      }
      else {
        if ((ulong)puVar5[7] == 0) {
          local_54 = 0;
        }
        else {
          local_54 = *(undefined4 *)((long)param_2 + (ulong)puVar5[7]);
        }
        if (0x10 < uVar4) {
          if ((ulong)puVar5[8] == 0) {
            local_58 = 0;
          }
          else {
            local_58 = *(undefined4 *)((long)param_2 + (ulong)puVar5[8]);
          }
          if (0x12 < uVar4) {
            local_5c = 0;
            if ((ulong)puVar5[9] != 0) {
              local_5c = (uint)*(byte *)((long)param_2 + (ulong)puVar5[9]);
            }
            goto LAB_00a05588;
          }
          goto LAB_00a05604;
        }
      }
      local_5c = 0;
      local_58 = 0;
      goto LAB_00a05588;
    }
  }
LAB_00a05604:
  local_5c = 0;
  param_3 = in_x9;
LAB_00a05588:
  FUN_00a0560c(&local_18,param_3,&local_24,&local_28,&local_2c,&local_38,&local_50,&local_54,
               &local_58,&local_5c);
  *param_1 = local_18;
  return;
}


