/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7484; name: FUN_02ec7484
 */


void FUN_02ec7484(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_043887a0 + 0x288;
  puVar2 = PTR_DAT_043887a0 + 800;
  *param_1 = (long)(PTR_DAT_043887a0 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if ((long *)param_1[0x1a] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if (param_1 + 0x19 != (long *)param_1[0x1a]) {
      (*DAT_0442d158)(0);
    }
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  }
  FUN_02ecfe78(param_1);
  return;
}


