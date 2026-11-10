/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006085a0; name: FUN_006085a0
 */


void FUN_006085a0(ulong *param_1)

{
  char *__s;
  byte bVar1;
  undefined *puVar2;
  FILE *__stream;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  ulong local_40;
  ulong uStack_38;
  char *local_30;
  
                    /* try { // try from 006085b0 to 006085b3 has its CatchHandler @ 00608710 */
  FUN_00608754();
  uStack_38 = param_1[1];
  local_40 = *param_1;
  local_30 = (char *)param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((DAT_0418ffec <= (int)param_1[3]) && (*PTR_DAT_043752b8 != '\0')) {
    __stream = *(FILE **)PTR_stderr_04372330;
    __s = (char *)((ulong)&local_40 | 1);
    if ((local_40 & 1) != 0) {
      __s = local_30;
    }
    fputs(__s,__stream);
    fflush(__stream);
  }
                    /* try { // try from 006085f0 to 006085ff has its CatchHandler @ 00608700 */
  FUN_00607e90(auStack_48,&DAT_0439f2d8);
  puVar2 = PTR_DAT_043752c0;
  for (puVar3 = *(undefined **)(PTR_DAT_043752c0 + 8); puVar3 != puVar2;
      puVar3 = *(undefined **)(puVar3 + 8)) {
    if (*(int *)(puVar3 + 0x18) <= (int)param_1[3]) {
                    /* try { // try from 0060866c to 00608673 has its CatchHandler @ 00608718 */
      (**(code **)(**(long **)(puVar3 + 0x10) + 0x18))(*(long **)(puVar3 + 0x10),&local_40);
    }
  }
  FUN_00607e9c(auStack_48);
  if ((local_40 & 1) == 0) {
    bVar1 = (byte)param_1[4];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_30);
    bVar1 = (byte)param_1[4];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_1;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[6]);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[2]);
  return;
}


