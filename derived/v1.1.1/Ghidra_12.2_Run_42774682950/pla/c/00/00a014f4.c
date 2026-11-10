/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a014f4; name: FUN_00a014f4
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00a014f4(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  uint local_38;
  undefined1 local_34 [4];
  undefined8 local_30;
  ulong uStack_28;
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
      puVar1 = (undefined4 *)((long)param_1 + (ulong)puVar5[4]);
      puVar3 = (undefined4 *)0x0;
      if (puVar5[4] != 0) {
        puVar3 = puVar1;
      }
      local_30 = CONCAT44(puVar3[1],*puVar1);
      uStack_28 = (ulong)(uint)puVar1[2];
      if (10 < uVar4) {
        local_34[0] = false;
        if ((ulong)puVar5[5] != 0) {
          local_34[0] = *(char *)((long)param_1 + (ulong)puVar5[5]) != '\0';
        }
        if (0xc < uVar4) {
          local_38 = 0;
          if ((ulong)puVar5[6] != 0) {
            local_38 = (uint)*(byte *)((long)param_1 + (ulong)puVar5[6]);
          }
          if ((ulong)puVar5[7] != 0) {
            pcVar2 = (char *)((long)param_1 + (ulong)puVar5[7]);
            local_40 = *pcVar2 != '\0';
            local_3f = pcVar2[1] != '\0';
            local_3e = pcVar2[2] != '\0';
            FUN_00a01618(param_2,&local_14,&local_18,&local_30,local_34,&local_38,&local_40);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


