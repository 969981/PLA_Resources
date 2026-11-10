/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ccba0; name: FUN_004ccba0
 */


undefined8 FUN_004ccba0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_24;
  undefined8 local_18;
  
  local_24 = 0;
  local_18 = FUN_004f5d90(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
  lVar2 = FUN_004f5da0(&local_18);
  while( true ) {
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_004ccc20(param_1,(uint)*(ushort *)(*(long *)(lVar2 + 8) + 0x10) * 2 -
                                 *(int *)(*(long *)(lVar2 + 8) + 0x28),&local_24);
    if (iVar1 < 1) break;
    lVar2 = FUN_004f5da0(&local_18);
  }
  return 0xffffffff;
}


