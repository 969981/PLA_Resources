/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00172420; name: FUN_00172420
 */


undefined8 * FUN_00172420(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long local_30;
  uint local_28;
  
  if (*(byte *)(param_2 + 8) == 4) {
    puVar3 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (long)(int)(*(uint *)(param_2 + 0xc) &
                        (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
    if (*(int *)(puVar3 + 3) == 0x44) goto LAB_00172488;
    do {
      do {
        piVar1 = (int *)((long)puVar3 + 0x1c);
        puVar3 = puVar3 + (long)*piVar1 * 4;
        if (*piVar1 == 0) {
          return &DAT_039c5c28;
        }
      } while (*(int *)(puVar3 + 3) != 0x44);
LAB_00172488:
    } while (puVar3[2] != param_2);
  }
  else {
    local_28 = *(byte *)(param_2 + 8) | 0x40;
    local_30 = param_2;
    puVar3 = (undefined8 *)FUN_001721e0(param_1,&local_30);
    do {
      iVar2 = FUN_00175d10(0,puVar3 + 2,&local_30);
      if (iVar2 != 0) {
        return puVar3;
      }
      piVar1 = (int *)((long)puVar3 + 0x1c);
      puVar3 = puVar3 + (long)*piVar1 * 4;
    } while (*piVar1 != 0);
    puVar3 = &DAT_039c5c28;
  }
  return puVar3;
}


