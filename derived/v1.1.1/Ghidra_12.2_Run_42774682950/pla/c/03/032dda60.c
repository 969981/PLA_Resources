/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dda60; name: FUN_032dda60
 */


bool FUN_032dda60(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if ((*param_1 & 1) != 0) {
      return false;
    }
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return false;
    }
  }
  if (param_1 == (ulong *)0x0) {
    return false;
  }
  uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar2 = (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (param_1[uVar2 + 2] == 0) {
    return false;
  }
  while( true ) {
    uVar1 = (uint)*param_2;
    if ((uVar1 >> 0xd & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_032ddad8;
  }
  if (param_2 != (ulong *)0x0) {
    uVar1 = (uVar1 & 0x1fff) - (uVar1 >> 1 & 0x555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    param_2 = param_2 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    goto LAB_032ddb1c;
  }
LAB_032ddad8:
  param_2 = (ulong *)0x0;
LAB_032ddb1c:
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar1 = (uint)*param_2;
    if (((DAT_0444a260 & 1) == 0) || ((((uint)param_1[uVar2 + 2] ^ uVar1) & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  iVar3 = (int)(param_1[uVar2 + 2] >> 0x11);
  return iVar3 <= (int)(uVar1 >> 2 & 0x7fff) && (int)(*param_2 >> 0x11) <= iVar3;
}


