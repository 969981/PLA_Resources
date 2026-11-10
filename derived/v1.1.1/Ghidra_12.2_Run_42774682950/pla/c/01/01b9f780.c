/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9f780; name: FUN_01b9f780
 */


undefined4 FUN_01b9f780(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x7c8) - *(long *)(param_1 + 0x7c0);
  if ((lVar1 == 0) || ((ulong)(lVar1 >> 7) <= (ulong)*(uint *)(param_1 + 0x7f8))) {
    return *(undefined4 *)(param_1 + 0x790);
  }
  return *(undefined4 *)
          (*(long *)(param_1 + 0x7c0) + (ulong)*(uint *)(param_1 + 0x7f8) * 0x80 + 0x40);
}


