/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342fe4; name: FUN_00342fe4
 */


/* WARNING: Removing unreachable block (ram,0x00343018) */

long FUN_00342fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long extraout_x1;
  
  iVar2 = FUN_00364cf4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),param_1,param_2);
  if (iVar2 != 2) {
    return 0;
  }
  lVar1 = extraout_x1;
  if (*(char *)(extraout_x1 + 0x43) != '\0') {
    lVar1 = 0;
  }
  return lVar1;
}


