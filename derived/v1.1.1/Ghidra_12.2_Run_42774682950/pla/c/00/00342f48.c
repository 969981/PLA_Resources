/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342f48; name: FUN_00342f48
 */


long FUN_00342f48(undefined **param_1,byte *param_2)

{
  long lVar1;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  byte *pbStack_28;
  
  lVar1 = *(long *)(param_1[2] + 0x90);
  puStack_40 = PTR_LAB_04373b90;
  local_48 = lVar1;
  if (*(ulong *)(lVar1 + 0x58) != 0xffffffffffffffff) {
    local_30 = &puStack_40;
    pbStack_28 = (byte *)&local_48;
    local_38 = &local_30;
    std::__call_once((ulong *)(lVar1 + 0x58),&local_38,(_func_void_void_ptr *)PTR_LAB_04373b98);
  }
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  lVar1 = FUN_00340580(lVar1 + 0x28,&local_30);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x43) != '\0')) {
    lVar1 = 0;
  }
  return lVar1;
}


