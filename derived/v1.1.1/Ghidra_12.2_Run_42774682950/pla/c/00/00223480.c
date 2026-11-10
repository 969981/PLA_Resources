/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223480; name: FUN_00223480
 */


void FUN_00223480(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = param_3 << 0x30 | CONCAT44(param_4,param_2) & 0xffffffffffff;
    bVar1 = uVar3 <= *(ulong *)(lVar2 + 0x30);
    if (!bVar1 || *(ulong *)(lVar2 + 0x30) == uVar3) goto LAB_002234bc;
    while (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0) {
      while (bVar1 = uVar3 <= *(ulong *)(lVar2 + 0x30), *(ulong *)(lVar2 + 0x30) <= uVar3) {
LAB_002234bc:
        if (bVar1) {
          return;
        }
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) {
          return;
        }
      }
    }
  }
  return;
}


