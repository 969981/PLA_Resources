/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce4a4; name: FUN_032ce4a4
 */


void FUN_032ce4a4(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_2 + 0x1fU & 0xffffffffffffffe0;
  if (uVar3 <= *(ulong *)(param_1 + 0x10)) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = uVar3 + lVar2;
    if (uVar1 <= *(ulong *)(param_1 + 0x20)) {
      *(ulong *)(param_1 + 0x18) = uVar1;
      if (param_3 == (ulong *)0x0) {
        return;
      }
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      *param_3 = uVar3;
      return;
    }
  }
  lVar2 = FUN_032ce670(param_1,uVar3);
  if (param_3 != (ulong *)0x0) {
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = uVar3;
    }
    *param_3 = uVar1;
  }
  return;
}


