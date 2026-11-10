/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033396bc; name: FUN_033396bc
 */


int FUN_033396bc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1[2];
  if (iVar1 == -1) {
    FUN_033397ec(param_1);
    iVar1 = (int)param_1[2];
  }
  lVar2 = *param_1 + (long)iVar1 * 0x18;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(undefined8 *)(*param_1 + (long)iVar1 * 0x18 + 8) = 0xffffffffffffffff;
  return iVar1;
}


