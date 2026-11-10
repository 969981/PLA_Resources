/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdb47c; name: FUN_02fdb47c
 */


int FUN_02fdb47c(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)param_2[0x14];
  if (fVar2 == -1.0) {
    fVar2 = *(float *)(param_1 + 0x20);
  }
  iVar1 = FUN_02ffd380(fVar2,param_1 + 0x40,*param_2,param_2 + 8,param_2 + 0x10,param_3,0xffff);
  if ((-1 < iVar1) && (*(char *)(param_2 + 1) != '\0')) {
    FUN_02ffdd9c(param_1,param_2 + 8,param_2 + 0x10,param_4);
  }
  return iVar1;
}


