/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053fa50; name: FUN_0053fa50
 */


bool FUN_0053fa50(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_1;
  bVar2 = true;
  if (lVar3 != 0) {
    uVar1 = 0;
    if (*(byte *)(lVar3 + 0x10) != 0) {
      uVar1 = (long)(1 << (ulong)(*(byte *)(lVar3 + 0x10) & 0x1f));
    }
    if ((ulong)param_1[1] < uVar1) {
      bVar2 = *(long *)(*(long *)(lVar3 + 0x18) + param_1[1] * 0x18) == 0;
    }
  }
  return bVar2;
}


