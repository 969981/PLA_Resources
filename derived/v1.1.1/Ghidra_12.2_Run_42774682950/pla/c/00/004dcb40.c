/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dcb40; name: FUN_004dcb40
 */


undefined8 FUN_004dcb40(long param_1,int param_2)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined2 **)(*(long *)(param_1 + 0x488) + 0x198);
  if (puVar2 == (undefined2 *)0x0) {
    lVar3 = 0x1a;
    puVar2 = &DAT_03a280de;
    lVar1 = FUN_004dcbd0(DAT_03a280de);
    goto joined_r0x004dcb78;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x488) + 0x1a0);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    lVar1 = FUN_004dcbd0(*puVar2);
joined_r0x004dcb78:
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x14) == 0x198)) &&
       (*(int *)(lVar1 + 0x20) != 0 && *(int *)(lVar1 + 0x20) == param_2)) break;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


