/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00172500; name: FUN_00172500
 */


undefined8 * FUN_00172500(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_28;
  
  puVar5 = &DAT_039c5c28;
  switch(*(uint *)(param_2 + 1) & 0x3f) {
  case 0:
    break;
  case 3:
    iVar2 = FUN_00175390(param_2,&local_28,0);
    if (iVar2 != 0) {
      uVar4 = local_28 - 1;
      if (*(uint *)(param_1 + 0xc) <= uVar4) {
        puVar5 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) +
                 (long)(int)((uint)local_28 &
                            (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
        iVar2 = *(int *)(puVar5 + 3);
        while( true ) {
          if ((iVar2 == 0x13) && (puVar5[2] == local_28)) {
            return puVar5;
          }
          piVar1 = (int *)((long)puVar5 + 0x1c);
          puVar5 = puVar5 + (long)*piVar1 * 4;
          if (*piVar1 == 0) break;
          iVar2 = *(int *)(puVar5 + 3);
        }
        goto LAB_001726e0;
      }
      goto LAB_0017267c;
    }
  default:
    puVar5 = (undefined8 *)FUN_001721e0(param_1,param_2);
    do {
      iVar2 = FUN_00175d10(0,puVar5 + 2,param_2);
      if (iVar2 != 0) {
        return puVar5;
      }
      piVar1 = (int *)((long)puVar5 + 0x1c);
      puVar5 = puVar5 + (long)*piVar1 * 4;
    } while (*piVar1 != 0);
    puVar5 = &DAT_039c5c28;
    break;
  case 4:
    puVar5 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (long)(int)(*(uint *)(*param_2 + 0xc) &
                        (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
    if (*(int *)(puVar5 + 3) == 0x44) goto LAB_00172658;
    do {
      do {
        piVar1 = (int *)((long)puVar5 + 0x1c);
        puVar5 = puVar5 + (long)*piVar1 * 4;
        if (*piVar1 == 0) goto LAB_001726e0;
      } while (*(int *)(puVar5 + 3) != 0x44);
LAB_00172658:
    } while (puVar5[2] != *param_2);
    break;
  case 0x13:
    lVar3 = *param_2;
    uVar4 = lVar3 - 1;
    if (*(uint *)(param_1 + 0xc) <= uVar4) {
      puVar5 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (long)(int)((uint)lVar3 &
                          (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
      iVar2 = *(int *)(puVar5 + 3);
      while( true ) {
        if ((iVar2 == 0x13) && (puVar5[2] == lVar3)) {
          return puVar5;
        }
        piVar1 = (int *)((long)puVar5 + 0x1c);
        puVar5 = puVar5 + (long)*piVar1 * 4;
        if (*piVar1 == 0) break;
        iVar2 = *(int *)(puVar5 + 3);
      }
LAB_001726e0:
      return &DAT_039c5c28;
    }
LAB_0017267c:
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar4 * 0x10);
  }
  return puVar5;
}


