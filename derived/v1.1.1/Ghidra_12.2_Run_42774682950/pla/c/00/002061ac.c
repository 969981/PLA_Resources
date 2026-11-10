/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002061ac; name: FUN_002061ac
 */


void FUN_002061ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + 0x890;
  puVar3 = *(undefined8 **)(param_1 + 0x8e0);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_0020c748(lVar1,puVar3[1]);
    FUN_0020c748(lVar1,puVar3);
    puVar3 = puVar2;
  }
  FUN_00211818(param_1 + 0x20);
  FUN_00211034(param_1,&LAB_002062bc,param_1);
  FUN_0021102c(param_1);
  FUN_00206330(param_1 + 0x108,lVar1);
  FUN_00206330(param_1 + 0x120,lVar1);
  FUN_00206330(param_1 + 0x138,lVar1);
  FUN_00206380(param_1 + 0x150,lVar1);
  FUN_002063c4(param_1);
  thunk_FUN_0020d964(param_1 + 0x290);
  FUN_0020d9e4(param_1 + 0x6e8);
  FUN_0020c420(param_1 + 0x158);
  FUN_0020c748(lVar1,param_1);
  return;
}


