/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029282e0; name: FUN_029282e0
 */


void FUN_029282e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  
  FUN_00938764(param_1 + 0x350,0,param_2,0,*(undefined8 *)(param_1 + 0x3d0),0);
  FUN_00938764(param_1 + 0x380,0,param_3,0,*(undefined8 *)(param_1 + 0x3d0),0);
  if (*(long *)(param_1 + 0x358) == 0) {
    lVar1 = 0;
    lVar3 = *(long *)(param_1 + 0x388);
  }
  else {
    puVar2 = *(uint **)(*(long *)(param_1 + 0x358) + 0x250);
    lVar1 = (long)puVar2 + (ulong)*puVar2;
    lVar3 = *(long *)(param_1 + 0x388);
  }
  if (((lVar3 == 0) || (lVar1 == 0)) ||
     ((long)*(uint **)(lVar3 + 0x250) + (ulong)**(uint **)(lVar3 + 0x250) == 0)) {
    return;
  }
  FUN_0292de4c(param_1 + 0x108);
  return;
}


