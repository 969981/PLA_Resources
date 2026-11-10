/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013634c4; name: FUN_013634c4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013634c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar2 = FUN_00ab974c(*(long *)(param_1 + 0x90) + 0xf0,&local_40), lVar2 != 0)) {
    local_40 = *(undefined8 *)(param_1 + 0x184);
    local_38 = *(undefined8 *)(param_1 + 0x18c);
    auStack_30 = *(undefined1 (*) [8])(param_1 + 0x194);
    puVar1 = (undefined8 *)auStack_30;
    if (*(int *)(param_1 + 0x180) != 0) {
      puVar1 = (undefined8 *)((long)auStack_30 + 4);
    }
    *(undefined4 *)puVar1 = *(undefined4 *)(param_1 + 0xb8);
    local_28 = *(undefined4 *)(param_1 + 0xbc);
    FUN_02dab6dc(lVar2,&local_40);
  }
  return;
}


