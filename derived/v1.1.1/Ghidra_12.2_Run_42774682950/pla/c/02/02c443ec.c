/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c443ec; name: FUN_02c443ec
 */


undefined4 FUN_02c443ec(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 < *(uint *)(param_1 + 0x278)) &&
     (*(char *)(*(long *)(param_1 + 600) + (ulong)param_2 * 0x48 + 8) != '\0')) {
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)(param_1 + 600) + (ulong)param_2 * 0x48 + 0x10) + 0x20);
  }
  return uVar1;
}


