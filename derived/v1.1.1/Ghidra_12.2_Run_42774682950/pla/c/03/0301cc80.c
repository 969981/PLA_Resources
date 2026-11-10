/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301cc80; name: FUN_0301cc80
 */


/* WARNING: Removing unreachable block (ram,0x0301cfac) */
/* WARNING: Removing unreachable block (ram,0x0301cfb8) */
/* WARNING: Removing unreachable block (ram,0x0301cfbc) */
/* WARNING: Removing unreachable block (ram,0x0301cfc4) */
/* WARNING: Removing unreachable block (ram,0x0301cfcc) */
/* WARNING: Removing unreachable block (ram,0x0301cfd0) */
/* WARNING: Removing unreachable block (ram,0x0301cfe4) */
/* WARNING: Removing unreachable block (ram,0x0301cfec) */
/* WARNING: Removing unreachable block (ram,0x0301cff0) */
/* WARNING: Removing unreachable block (ram,0x0301cff8) */
/* WARNING: Removing unreachable block (ram,0x0301d000) */
/* WARNING: Removing unreachable block (ram,0x0301d0b4) */
/* WARNING: Removing unreachable block (ram,0x0301d004) */
/* WARNING: Removing unreachable block (ram,0x0301d00c) */
/* WARNING: Removing unreachable block (ram,0x0301d014) */
/* WARNING: Removing unreachable block (ram,0x0301d018) */
/* WARNING: Removing unreachable block (ram,0x0301d020) */
/* WARNING: Removing unreachable block (ram,0x0301d028) */
/* WARNING: Removing unreachable block (ram,0x0301d0c4) */
/* WARNING: Removing unreachable block (ram,0x0301d02c) */
/* WARNING: Removing unreachable block (ram,0x0301d034) */
/* WARNING: Removing unreachable block (ram,0x0301d03c) */
/* WARNING: Removing unreachable block (ram,0x0301d040) */
/* WARNING: Removing unreachable block (ram,0x0301d048) */
/* WARNING: Removing unreachable block (ram,0x0301d050) */
/* WARNING: Removing unreachable block (ram,0x0301d0d4) */
/* WARNING: Removing unreachable block (ram,0x0301d054) */
/* WARNING: Removing unreachable block (ram,0x0301d05c) */
/* WARNING: Removing unreachable block (ram,0x0301d064) */
/* WARNING: Removing unreachable block (ram,0x0301d068) */
/* WARNING: Removing unreachable block (ram,0x0301d070) */
/* WARNING: Removing unreachable block (ram,0x0301d078) */
/* WARNING: Removing unreachable block (ram,0x0301d0e4) */
/* WARNING: Removing unreachable block (ram,0x0301d07c) */
/* WARNING: Removing unreachable block (ram,0x0301d084) */
/* WARNING: Removing unreachable block (ram,0x0301d08c) */
/* WARNING: Removing unreachable block (ram,0x0301d090) */
/* WARNING: Removing unreachable block (ram,0x0301d098) */
/* WARNING: Removing unreachable block (ram,0x0301d0a0) */
/* WARNING: Removing unreachable block (ram,0x0301d0a4) */

void FUN_0301cc80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_100;
  undefined8 *puStack_f8;
  long local_f0;
  long local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined **local_b0;
  undefined8 *local_a8 [3];
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  if (*(int *)(param_1 + 0x548) == 0) {
    lVar1 = (long)*(int *)(param_1 + 0x528);
    if (0 < *(int *)(param_1 + 0x528)) {
      piVar2 = (int *)(*(long *)(param_1 + 0x520) + 0xc);
      do {
        if (*piVar2 != 0) goto LAB_0301ccf8;
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 8;
      } while (lVar1 != 0);
    }
  }
  else {
LAB_0301ccf8:
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    local_90 = 0;
    local_88 = (undefined8 *)0x0;
    local_b0 = &PTR_LAB_042b15c0;
    local_a8[0] = &DAT_04444b58;
    local_a8[1] = &DAT_04444b58;
    local_a8[2] = &DAT_04444b58;
    if (*(long *)(param_3 + 0x20) != 0) {
      local_90 = *(long *)(param_3 + 0x20);
    }
    local_88 = &DAT_04444b58;
    local_80 = &DAT_04444b58;
    local_78 = &DAT_04444b58;
    local_70 = &DAT_04444b58;
    local_68 = &DAT_04444b58;
    local_68 = &DAT_04444b58;
    local_70 = &DAT_04444b58;
    local_78 = &DAT_04444b58;
    local_80 = &DAT_04444b58;
    local_88 = &DAT_04444b58;
    local_a8[2] = &DAT_04444b58;
    local_a8[1] = &DAT_04444b58;
    local_a8[0] = &DAT_04444b58;
    local_b0 = &PTR_LAB_042b15c0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_100 = &PTR_LAB_042b15f8;
    puStack_f8 = &DAT_04444b58;
    if (*(long *)(param_3 + 0x10) != 0) {
      local_f0 = *(long *)(param_3 + 0x10);
    }
    if (*(long *)(param_3 + 0x18) != 0) {
      local_e8 = *(long *)(param_3 + 0x18);
    }
    local_e0 = &DAT_04444b58;
    if (*(long *)(param_3 + 0x28) != 0) {
      local_d8 = *(long *)(param_3 + 0x28);
    }
    if (*(long *)(param_3 + 0x30) != 0) {
      local_d0 = *(long *)(param_3 + 0x30);
    }
    if (*(long *)(param_3 + 0x38) != 0) {
      local_c8 = *(long *)(param_3 + 0x38);
    }
    if (*(long *)(param_3 + 0x40) != 0) {
      local_c0 = *(long *)(param_3 + 0x40);
    }
    if (*(long *)(param_3 + 0x48) != 0) {
      local_b8 = *(long *)(param_3 + 0x48);
    }
    puVar4 = (uint *)**(undefined8 **)(param_1 + 0x550);
    if ((*puVar4 & 0xffff) != 0) {
      puVar3 = puVar4 + 8;
      uVar6 = *puVar4 & 0xffff;
      uVar5 = 0x7fffffff;
      do {
        while( true ) {
          (**(code **)(*local_a8[*(byte *)((long)puVar3 + 3)] + 0x20))
                    (local_a8[*(byte *)((long)puVar3 + 3)],puVar3);
          uVar6 = uVar6 - 1;
          if (0 < (int)uVar6) break;
          if ((uVar5 == 0) || (puVar4 = *(uint **)(puVar4 + 2), puVar4 == (uint *)0x0))
          goto LAB_0301ce24;
          uVar6 = *puVar4 & 0xffff;
          if ((int)uVar5 <= (int)(*puVar4 & 0xffff)) {
            uVar6 = uVar5;
          }
          if ((int)uVar6 < 1) goto LAB_0301ce24;
          uVar5 = uVar5 - uVar6;
          puVar3 = puVar4 + 8;
          Hint_Prefetch(*(long *)(puVar4 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar4 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar4 + 0x20,0,0,0);
          Hint_Prefetch(puVar4 + 0x30,0,0,0);
          if (puVar3 == (uint *)0x0) goto LAB_0301ce24;
        }
        puVar3 = (uint *)((long)puVar3 + (ulong)(ushort)*puVar3);
      } while (puVar3 != (uint *)0x0);
    }
LAB_0301ce24:
    FUN_0301e620(param_1 + 0x520,&local_b0);
    puVar4 = (uint *)**(undefined8 **)(param_1 + 0x550);
    if ((*puVar4 & 0xffff) != 0) {
      puVar3 = puVar4 + 8;
      uVar6 = *puVar4 & 0xffff;
      uVar5 = 0x7fffffff;
      do {
        while( true ) {
          (**(code **)(*(&puStack_f8)[*(byte *)((long)puVar3 + 3)] + 0x20))
                    ((&puStack_f8)[*(byte *)((long)puVar3 + 3)],puVar3);
          uVar6 = uVar6 - 1;
          if (0 < (int)uVar6) break;
          if ((uVar5 == 0) || (puVar4 = *(uint **)(puVar4 + 2), puVar4 == (uint *)0x0))
          goto LAB_0301ce44;
          uVar6 = *puVar4 & 0xffff;
          if ((int)uVar5 <= (int)(*puVar4 & 0xffff)) {
            uVar6 = uVar5;
          }
          if ((int)uVar6 < 1) goto LAB_0301ce44;
          uVar5 = uVar5 - uVar6;
          puVar3 = puVar4 + 8;
          Hint_Prefetch(*(long *)(puVar4 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar4 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar4 + 0x20,0,0,0);
          Hint_Prefetch(puVar4 + 0x30,0,0,0);
          if (puVar3 == (uint *)0x0) goto LAB_0301ce44;
        }
        puVar3 = (uint *)((long)puVar3 + (ulong)(ushort)*puVar3);
      } while (puVar3 != (uint *)0x0);
    }
LAB_0301ce44:
    FUN_0301e620(param_1 + 0x520,&local_100);
    local_100 = &PTR_LAB_042b15f8;
    puStack_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_032c084c(&local_100);
    local_b0 = &PTR_LAB_042b15c0;
    local_a8[0] = (undefined8 *)0x0;
    local_a8[1] = (undefined8 *)0x0;
    local_a8[2] = (undefined8 *)0x0;
    local_90 = 0;
    local_88 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    FUN_032c084c(&local_b0);
  }
  return;
}


