/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060e244; name: FUN_0060e244
 */


undefined8 FUN_0060e244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_002e2ec0(PTR_FUN_04373078,*(undefined2 *)(param_1 + 10));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = FUN_0060b654(param_2,uVar1,*(undefined2 *)(param_1 + 10));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar2 != 0) {
    FUN_0060b804(param_2,4 - uVar2);
  }
  return 1;
}


