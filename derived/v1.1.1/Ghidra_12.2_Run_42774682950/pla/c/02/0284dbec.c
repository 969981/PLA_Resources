/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284dbec; name: FUN_0284dbec
 */


bool FUN_0284dbec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_02c4d8d4(*(undefined8 *)(param_1 + 8),param_2,param_3,param_5);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = param_4;
  }
  return bVar1;
}


