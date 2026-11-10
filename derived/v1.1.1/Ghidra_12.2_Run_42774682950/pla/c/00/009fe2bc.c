/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009fe2bc; name: FUN_009fe2bc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_009fe2bc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  uint local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  ulong uStack_38;
  long local_28;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar6 = (ushort *)((long)param_1 - (long)*param_1);
  uVar5 = *puVar6;
  if (4 < uVar5) {
    local_14 = 0;
    if ((ulong)puVar6[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar6[2]);
    }
    if (6 < uVar5) {
      local_18 = 0;
      if ((ulong)puVar6[3] != 0) {
        local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar6[3]);
      }
      if (8 < uVar5) {
        local_1c = 0;
        if ((ulong)puVar6[4] != 0) {
          local_1c = (uint)*(byte *)((long)param_1 + (ulong)puVar6[4]);
        }
        if (10 < uVar5) {
          local_28 = 0;
          if ((ulong)puVar6[5] != 0) {
            puVar1 = (uint *)((long)param_1 + (ulong)puVar6[5]);
            local_28 = (long)puVar1 + (ulong)*puVar1;
          }
          puVar2 = (undefined4 *)((long)param_1 + (ulong)puVar6[6]);
          puVar4 = (undefined4 *)0x0;
          if (puVar6[6] != 0) {
            puVar4 = puVar2;
          }
          local_40 = CONCAT44(puVar4[1],*puVar2);
          uStack_38 = (ulong)(uint)puVar2[2];
          if (0xe < uVar5) {
            local_44 = 0;
            if ((ulong)puVar6[7] != 0) {
              local_44 = *(undefined4 *)((long)param_1 + (ulong)puVar6[7]);
            }
            if (0x10 < uVar5) {
              local_48[0] = false;
              if ((ulong)puVar6[8] != 0) {
                local_48[0] = *(char *)((long)param_1 + (ulong)puVar6[8]) != '\0';
              }
              if (0x12 < uVar5) {
                local_4c[0] = false;
                if ((ulong)puVar6[9] != 0) {
                  local_4c[0] = *(char *)((long)param_1 + (ulong)puVar6[9]) != '\0';
                }
                if (0x14 < uVar5) {
                  local_50[0] = false;
                  if ((ulong)puVar6[10] != 0) {
                    local_50[0] = *(char *)((long)param_1 + (ulong)puVar6[10]) != '\0';
                  }
                  if (0x16 < uVar5) {
                    local_54 = 0;
                    if ((ulong)puVar6[0xb] != 0) {
                      local_54 = (uint)*(byte *)((long)param_1 + (ulong)puVar6[0xb]);
                    }
                    if ((ulong)puVar6[0xc] != 0) {
                      pcVar3 = (char *)((long)param_1 + (ulong)puVar6[0xc]);
                      local_58 = *pcVar3 != '\0';
                      local_57 = pcVar3[1] != '\0';
                      local_56 = pcVar3[2] != '\0';
                      if (uVar5 < 0x1b) {
                        local_5c[0] = false;
                      }
                      else {
                        local_5c[0] = false;
                        if ((ulong)puVar6[0xd] != 0) {
                          local_5c[0] = *(char *)((long)param_1 + (ulong)puVar6[0xd]) != '\0';
                        }
                      }
                      FUN_009fe4d0(param_2,&local_14,&local_18,&local_1c,&local_28,&local_40,
                                   &local_44,local_48,local_4c,local_50,&local_54,&local_58,local_5c
                                  );
                      return;
                    }
                  }
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


