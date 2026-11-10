/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc020; name: FUN_004dc020
 */


void FUN_004dc020(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_2 = (long)&DAT_03a280c8;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x20000) {
    *param_2 = (long)&DAT_03a280ca;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x30000) {
    *param_2 = (long)&DAT_03a280c8;
    *param_3 = 2;
    return;
  }
  if (*(long *)(param_1 + 0x698) == 0) {
    *param_2 = (long)&DAT_03a280cc;
    *param_3 = 5;
    return;
  }
  *param_2 = *(long *)(param_1 + 0x698);
  *param_3 = *(undefined8 *)(param_1 + 0x690);
  return;
}


