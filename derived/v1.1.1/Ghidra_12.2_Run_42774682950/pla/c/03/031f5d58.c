/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5d58; name: FUN_031f5d58
 */


void FUN_031f5d58(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = (long)((int)((uint)*(byte *)(param_1 + 0x18) << 0x18) >> 0x19);
  uVar3 = (&DAT_03aae438)[lVar1 * 2];
  uVar2 = (&DAT_03aae430)[lVar1 * 2];
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    uVar2 = CONCAT44(-(float)((ulong)uVar2 >> 0x20),-(float)uVar2);
    uVar3 = CONCAT44((int)((ulong)uVar3 >> 0x20),-(float)uVar3);
  }
  param_2[1] = uVar3;
  *param_2 = uVar2;
  return;
}


