/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01272c24; name: FUN_01272c24
 */


void FUN_01272c24(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3 < 2) {
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0x9d0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x9d0) + 0x60);
    }
    local_18 = *puVar1;
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0x9f0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x9f0) + 0x60);
    }
    local_20 = *puVar1;
    FUN_01263cf0(&local_18,&DAT_038b4e31,&local_20);
    return;
  }
  if (param_3 == 2) {
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0xa10) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0xa10) + 0x60);
    }
    puVar2 = (undefined1 *)*puVar1;
  }
  else {
    puVar2 = &DAT_03996322;
  }
  FUN_00947cf8(param_1,puVar2);
  return;
}


