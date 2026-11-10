/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d9a3c; name: FUN_006d9a3c
 */


void FUN_006d9a3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *param_1 = 0;
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (lVar1 != 0) {
                    /* try { // try from 006d9a68 to 006d9a73 has its CatchHandler @ 006d9ae4 */
    FUN_002e0ddc(lVar1,0);
  }
  *param_1 = lVar1;
  plVar2 = (long *)(*(ulong *)(lVar1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  else {
    plVar2 = (long *)*plVar2;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  puVar3 = (ulong *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((ulong *)plVar2 != puVar3) {
                    /* try { // try from 006d9a98 to 006d9ad7 has its CatchHandler @ 006d9ae8 */
    FUN_002e1668(lVar1,param_2);
    return;
  }
  if (lVar1 == param_2) {
    return;
  }
  FUN_002e16d0(lVar1,param_2);
  return;
}


