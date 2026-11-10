/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278b7ec; name: FUN_0278b7ec
 */


undefined8 FUN_0278b7ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 8) == 0) && (uVar1 = FUN_0278b3b0(param_2,1), (uVar1 & 1) != 0)) {
    if (*(char *)(param_2 + 4) == '\0') {
      FUN_0278b868();
      FUN_0278c520(param_2 + 0x10);
      FUN_0276bb54();
    }
    uVar2 = 1;
    FUN_00db0d34("get_lostbag",1);
    FUN_02787bdc(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


