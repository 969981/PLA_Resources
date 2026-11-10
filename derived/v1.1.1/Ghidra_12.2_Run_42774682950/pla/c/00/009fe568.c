/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009fe568; name: FUN_009fe568
 */


void FUN_009fe568(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined8 in_x9;
  ushort *puVar5;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  bool local_54 [4];
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  long local_28;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar5 = (ushort *)((long)param_1 - (long)*param_1);
  uVar4 = *puVar5;
  if (uVar4 < 5) {
    local_14 = 0;
LAB_009fe6fc:
    local_18 = 0;
LAB_009fe700:
    local_1c = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar5[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar5[2]);
    }
    in_x9 = param_2;
    if (uVar4 < 7) goto LAB_009fe6fc;
    local_18 = 0;
    if ((ulong)puVar5[3] != 0) {
      local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar5[3]);
    }
    if (uVar4 < 9) goto LAB_009fe700;
    local_1c = 0;
    if ((ulong)puVar5[4] != 0) {
      local_1c = (uint)*(byte *)((long)param_1 + (ulong)puVar5[4]);
    }
    if (10 < uVar4) {
      local_28 = 0;
      if ((ulong)puVar5[5] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar5[5]);
        local_28 = (long)puVar1 + (ulong)*puVar1;
      }
      puVar2 = (undefined4 *)((long)param_1 + (ulong)puVar5[6]);
      puVar3 = (undefined4 *)0x0;
      if (puVar5[6] != 0) {
        puVar3 = puVar2;
      }
      uStack_38 = (ulong)(uint)puVar2[2];
      local_40 = CONCAT44(puVar3[1],*puVar2);
      puVar2 = (undefined4 *)((long)param_1 + (ulong)puVar5[7]);
      puVar3 = (undefined4 *)0x0;
      if (puVar5[7] != 0) {
        puVar3 = puVar2;
      }
      uStack_48 = (ulong)(uint)puVar2[2];
      local_50 = CONCAT44(puVar3[1],*puVar2);
      if (uVar4 < 0x11) {
        local_54[0] = false;
      }
      else {
        local_54[0] = false;
        if ((ulong)puVar5[8] != 0) {
          local_54[0] = *(char *)((long)param_1 + (ulong)puVar5[8]) != '\0';
        }
        if (0x12 < uVar4) {
          local_58[0] = false;
          if ((ulong)puVar5[9] != 0) {
            local_58[0] = *(char *)((long)param_1 + (ulong)puVar5[9]) != '\0';
          }
          if (0x14 < uVar4) {
            local_5c[0] = false;
            if ((ulong)puVar5[10] != 0) {
              local_5c[0] = *(char *)((long)param_1 + (ulong)puVar5[10]) != '\0';
            }
            goto LAB_009fe6a8;
          }
          goto LAB_009fe704;
        }
      }
      local_5c[0] = false;
      local_58[0] = 0;
      goto LAB_009fe6a8;
    }
  }
LAB_009fe704:
  local_5c[0] = false;
  param_2 = in_x9;
LAB_009fe6a8:
  FUN_009fe70c(param_2,&local_14,&local_18,&local_1c,&local_28,&local_40,&local_50,local_54,local_58
               ,local_5c);
  return;
}


