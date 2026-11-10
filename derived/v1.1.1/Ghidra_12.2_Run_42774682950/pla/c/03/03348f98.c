/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348f98; name: FUN_03348f98
 */


void FUN_03348f98(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_043893e8 + 0x10);
  if ((int)param_1[4] != 0) {
    lVar2 = param_1[3];
    lVar3 = (long)(int)param_1[4] << 4;
    do {
      FUN_032c7b9c(lVar2 + -0x10 + lVar3);
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


