/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c44a0; name: FUN_004c44a0
 */


void FUN_004c44a0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_2 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x3e0);
    *param_2 = lVar2;
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 1000);
    }
  }
  *param_3 = uVar1;
  return;
}


