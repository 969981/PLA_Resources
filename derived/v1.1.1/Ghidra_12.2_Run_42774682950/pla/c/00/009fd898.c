/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009fd898; name: FUN_009fd898
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_009fd898(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  uint local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  ulong uStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar5 = (ushort *)((long)param_1 - (long)*param_1);
  uVar4 = *puVar5;
  if (4 < uVar4) {
    local_14 = 0;
    if ((ulong)puVar5[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar5[2]);
    }
    if (6 < uVar4) {
      local_18 = 0;
      if ((ulong)puVar5[3] != 0) {
        local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar5[3]);
      }
      if (8 < uVar4) {
        local_1c = 0;
        if ((ulong)puVar5[4] != 0) {
          local_1c = *(undefined4 *)((long)param_1 + (ulong)puVar5[4]);
        }
        puVar1 = (undefined4 *)((long)param_1 + (ulong)puVar5[5]);
        puVar3 = (undefined4 *)0x0;
        if (puVar5[5] != 0) {
          puVar3 = puVar1;
        }
        local_30 = CONCAT44(puVar3[1],*puVar1);
        uStack_28 = (ulong)(uint)puVar1[2];
        if (0xc < uVar4) {
          local_34 = 0;
          if ((ulong)puVar5[6] != 0) {
            local_34 = *(undefined4 *)((long)param_1 + (ulong)puVar5[6]);
          }
          if (0xe < uVar4) {
            local_38[0] = false;
            if ((ulong)puVar5[7] != 0) {
              local_38[0] = *(char *)((long)param_1 + (ulong)puVar5[7]) != '\0';
            }
            if (0x10 < uVar4) {
              local_3c[0] = false;
              if ((ulong)puVar5[8] != 0) {
                local_3c[0] = *(char *)((long)param_1 + (ulong)puVar5[8]) != '\0';
              }
              if (0x12 < uVar4) {
                local_40 = 0;
                if ((ulong)puVar5[9] != 0) {
                  local_40 = (uint)*(byte *)((long)param_1 + (ulong)puVar5[9]);
                }
                if ((ulong)puVar5[10] != 0) {
                  pcVar2 = (char *)((long)param_1 + (ulong)puVar5[10]);
                  local_48 = *pcVar2 != '\0';
                  local_47 = pcVar2[1] != '\0';
                  local_46 = pcVar2[2] != '\0';
                  FUN_009fda28(param_2,&local_14,&local_18,&local_1c,&local_30,&local_34,local_38,
                               local_3c,&local_40,&local_48);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


