/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a018dc; name: FUN_00a018dc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a018dc(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  ushort uVar2;
  ushort *puVar3;
  uint local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = (ushort *)((long)param_1 - (long)*param_1);
  uVar2 = *puVar3;
  if (4 < uVar2) {
    local_14 = 0;
    if ((ulong)puVar3[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar3[2]);
    }
    if (6 < uVar2) {
      local_18 = 0;
      if ((ulong)puVar3[3] != 0) {
        local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar3[3]);
      }
      if (8 < uVar2) {
        local_1c = 0;
        if ((ulong)puVar3[4] != 0) {
          local_1c = (uint)*(byte *)((long)param_1 + (ulong)puVar3[4]);
        }
        if (10 < uVar2) {
          local_20 = 0;
          if ((ulong)puVar3[5] != 0) {
            local_20 = (uint)*(byte *)((long)param_1 + (ulong)puVar3[5]);
          }
          if (0xc < uVar2) {
            if ((ulong)puVar3[6] == 0) {
              local_24 = 0;
            }
            else {
              local_24 = *(undefined4 *)((long)param_1 + (ulong)puVar3[6]);
            }
            if ((ulong)puVar3[7] != 0) {
              pcVar1 = (char *)((long)param_1 + (ulong)puVar3[7]);
              local_28 = *pcVar1 != '\0';
              local_27 = pcVar1[1] != '\0';
              local_26 = pcVar1[2] != '\0';
              if (uVar2 < 0x11) {
                local_2c = 0;
              }
              else {
                local_2c = 0;
                if ((ulong)puVar3[8] != 0) {
                  local_2c = (uint)*(byte *)((long)param_1 + (ulong)puVar3[8]);
                }
              }
              FUN_00a01a18(param_2,&local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,
                           &local_2c);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


