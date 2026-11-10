/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57134; name: FUN_02e57134
 */


void FUN_02e57134(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    iVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar3 = 0x58;
    if (*(int *)(puVar2 + 1) != 0) {
      iVar3 = *(int *)(puVar2 + 1) * 0x48 + 0x10;
    }
    *puVar2 = *param_2;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    do {
      puVar5 = puVar4 + 1;
      FUN_02ea8058(*puVar4,*param_3,3,0,0xab,puVar2,iVar3,0);
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)
                       (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 4));
  }
  return;
}


