/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc7f0; name: FUN_004dc7f0
 */


void FUN_004dc7f0(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x688) != 0) {
    *param_2 = *(long *)(param_1 + 0x688);
    *param_3 = *(undefined8 *)(param_1 + 0x680);
    return;
  }
  *param_2 = (long)&DAT_03a280d6;
  uVar1 = 2;
  if ((*(byte *)(*(long *)(param_1 + 0x488) + 0x1e) & 3) == 0) {
    uVar1 = 3;
  }
  *param_3 = uVar1;
  return;
}


