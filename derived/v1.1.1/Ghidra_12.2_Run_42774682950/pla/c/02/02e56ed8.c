/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56ed8; name: FUN_02e56ed8
 */


void FUN_02e56ed8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x58;
    if (*(int *)(puVar2 + 1) != 0) {
      iVar1 = *(int *)(puVar2 + 1) * 0x48 + 0x10;
    }
    *puVar2 = *param_2;
  }
  FUN_02ea8058(*(undefined4 *)(param_1 + 0x10),*param_3,3,0,0xab,puVar2,iVar1,0);
  return;
}


