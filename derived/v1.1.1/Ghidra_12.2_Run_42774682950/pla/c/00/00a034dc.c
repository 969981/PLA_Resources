/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a034dc; name: FUN_00a034dc
 */


void FUN_00a034dc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined8 in_x9;
  ushort *puVar5;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  bool local_44 [4];
  undefined8 local_40;
  ulong uStack_38;
  uint local_28;
  uint local_24;
  long local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar5 = (ushort *)((long)param_1 - (long)*param_1);
  uVar4 = *puVar5;
  if (uVar4 < 5) {
    local_14 = 0;
LAB_00a03654:
    local_18 = 0;
LAB_00a03658:
    local_20 = 0;
LAB_00a0365c:
    local_24 = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar5[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar5[2]);
    }
    in_x9 = param_2;
    if (uVar4 < 7) goto LAB_00a03654;
    local_18 = 0;
    if ((ulong)puVar5[3] != 0) {
      local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar5[3]);
    }
    if (uVar4 < 9) goto LAB_00a03658;
    local_20 = 0;
    if ((ulong)puVar5[4] != 0) {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[4]);
      local_20 = (long)puVar1 + (ulong)*puVar1;
    }
    if (uVar4 < 0xb) goto LAB_00a0365c;
    local_24 = 0;
    if ((ulong)puVar5[5] != 0) {
      local_24 = (uint)*(byte *)((long)param_1 + (ulong)puVar5[5]);
    }
    if (0xc < uVar4) {
      local_28 = 0;
      if ((ulong)puVar5[6] != 0) {
        local_28 = (uint)*(byte *)((long)param_1 + (ulong)puVar5[6]);
      }
      puVar2 = (undefined4 *)((long)param_1 + (ulong)puVar5[7]);
      puVar3 = (undefined4 *)0x0;
      if (puVar5[7] != 0) {
        puVar3 = puVar2;
      }
      local_40 = CONCAT44(puVar3[1],*puVar2);
      uStack_38 = (ulong)(uint)puVar2[2];
      if (uVar4 < 0x11) {
        local_44[0] = false;
      }
      else {
        local_44[0] = false;
        if ((ulong)puVar5[8] != 0) {
          local_44[0] = *(char *)((long)param_1 + (ulong)puVar5[8]) != '\0';
        }
        if (0x12 < uVar4) {
          local_48[0] = false;
          if ((ulong)puVar5[9] != 0) {
            local_48[0] = *(char *)((long)param_1 + (ulong)puVar5[9]) != '\0';
          }
          if (0x14 < uVar4) {
            local_4c[0] = false;
            if ((ulong)puVar5[10] != 0) {
              local_4c[0] = *(char *)((long)param_1 + (ulong)puVar5[10]) != '\0';
            }
            goto LAB_00a03600;
          }
          goto LAB_00a03660;
        }
      }
      local_4c[0] = false;
      local_48[0] = 0;
      goto LAB_00a03600;
    }
  }
LAB_00a03660:
  local_4c[0] = false;
  param_2 = in_x9;
LAB_00a03600:
  FUN_00a03668(param_2,&local_14,&local_18,&local_20,&local_24,&local_28,&local_40,local_44,local_48
               ,local_4c);
  return;
}


