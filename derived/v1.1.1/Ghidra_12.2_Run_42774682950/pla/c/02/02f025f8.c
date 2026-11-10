/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f025f8; name: FUN_02f025f8
 */


void FUN_02f025f8(undefined4 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if ((*(byte *)(lVar1 + 10) >> 4 & 1) != 0) {
    local_14 = *(undefined4 *)(lVar1 + 0x240);
    local_18 = *(undefined4 *)(param_2 + 0x28);
    local_20 = param_3;
    local_1c = param_1;
    FUN_02ede458(DAT_0440a178,*(undefined4 *)(lVar1 + 0x210),&local_20,param_2);
  }
  return;
}


