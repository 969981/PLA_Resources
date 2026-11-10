/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ff0c0; name: FUN_009ff0c0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_009ff0c0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 local_54 [4];
  bool local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined8 local_40;
  ulong uStack_38;
  uint local_2c;
  long local_28;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar6 = (ushort *)((long)param_1 - (long)*param_1);
  uVar5 = *puVar6;
  if (uVar5 < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_14 = 0;
  if ((ulong)puVar6[2] != 0) {
    local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar6[2]);
  }
  if (uVar5 < 7) {
    halt_baddata();
  }
  local_18 = 0;
  if ((ulong)puVar6[3] != 0) {
    local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar6[3]);
  }
  if (uVar5 < 9) {
    halt_baddata();
  }
  local_1c = 0;
  if ((ulong)puVar6[4] != 0) {
    local_1c = (uint)*(byte *)((long)param_1 + (ulong)puVar6[4]);
  }
  if (uVar5 < 0xb) {
    halt_baddata();
  }
  local_20 = 0;
  if ((ulong)puVar6[5] != 0) {
    local_20 = *(undefined4 *)((long)param_1 + (ulong)puVar6[5]);
  }
  if (uVar5 < 0xd) {
    halt_baddata();
  }
  local_28 = 0;
  if ((ulong)puVar6[6] != 0) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar6[6]);
    local_28 = (long)puVar1 + (ulong)*puVar1;
  }
  if (uVar5 < 0xf) {
    halt_baddata();
  }
  local_2c = 0;
  if ((ulong)puVar6[7] != 0) {
    local_2c = (uint)*(byte *)((long)param_1 + (ulong)puVar6[7]);
  }
  puVar2 = (undefined4 *)((long)param_1 + (ulong)puVar6[8]);
  puVar4 = (undefined4 *)0x0;
  if (puVar6[8] != 0) {
    puVar4 = puVar2;
  }
  local_40 = CONCAT44(puVar4[1],*puVar2);
  uStack_38 = (ulong)(uint)puVar2[2];
  if ((ulong)puVar6[9] == 0) {
    halt_baddata();
  }
  pcVar3 = (char *)((long)param_1 + (ulong)puVar6[9]);
  local_48 = *pcVar3 != '\0';
  local_47 = pcVar3[1] != '\0';
  local_46 = pcVar3[2] != '\0';
  if (uVar5 < 0x15) {
    local_4c = 0;
  }
  else {
    local_4c = 0;
    if ((ulong)puVar6[10] != 0) {
      local_4c = *(undefined4 *)((long)param_1 + (ulong)puVar6[10]);
    }
    if (0x16 < uVar5) {
      local_50[0] = false;
      if ((ulong)puVar6[0xb] != 0) {
        local_50[0] = *(char *)((long)param_1 + (ulong)puVar6[0xb]) != '\0';
      }
      if (uVar5 < 0x19) {
        local_54[0] = false;
      }
      else {
        local_54[0] = false;
        if ((ulong)puVar6[0xc] != 0) {
          local_54[0] = *(char *)((long)param_1 + (ulong)puVar6[0xc]) != '\0';
        }
      }
      goto LAB_009ff230;
    }
  }
  local_54[0] = false;
  local_50[0] = false;
LAB_009ff230:
  FUN_009ff2ac(param_2,&local_14,&local_18,&local_1c,&local_20,&local_28,&local_2c,&local_40,
               &local_48,&local_4c,local_50,local_54);
  return;
}


