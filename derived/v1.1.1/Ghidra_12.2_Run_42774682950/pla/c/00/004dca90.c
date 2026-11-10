/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dca90; name: FUN_004dca90
 */


undefined8 FUN_004dca90(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x488);
  uVar1 = *(uint *)(lVar2 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_3 = (long)&DAT_03a280da;
    return 1;
  }
  if (uVar1 == 0x20000) {
    *param_3 = (long)&DAT_03a280dc;
    return 1;
  }
  if (uVar1 == 0x30000) {
    *param_3 = (long)&DAT_03a280da;
    return 2;
  }
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(long *)(lVar2 + 0x1a8) != 0)) {
    *param_3 = *(long *)(lVar2 + 0x1a8);
    return *(undefined8 *)(*(long *)(param_1 + 0x488) + 0x1b0);
  }
  if (*(long *)(lVar2 + 0x198) == 0) {
    *param_3 = (long)&DAT_03a280de;
    return 0x1a;
  }
  *param_3 = *(long *)(lVar2 + 0x198);
  return *(undefined8 *)(*(long *)(param_1 + 0x488) + 0x1a0);
}


