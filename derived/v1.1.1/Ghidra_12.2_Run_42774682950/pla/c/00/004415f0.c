/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004415f0; name: FUN_004415f0
 */


long FUN_004415f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  lVar3 = FUN_00441660(param_1,auStack_28);
  if (lVar3 != 0) {
    puVar1 = &DAT_03a0bc28;
    if (param_2 != (undefined8 *)0x0) {
      puVar1 = param_2;
    }
    iVar2 = FUN_00404df0(auStack_28,puVar1,8);
    if (iVar2 != 0) {
      FUN_004006a0(param_3,lVar3);
      lVar3 = 0;
    }
  }
  return lVar3;
}


