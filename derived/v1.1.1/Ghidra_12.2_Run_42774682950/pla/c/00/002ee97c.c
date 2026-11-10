/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee97c; name: FUN_002ee97c
 */


ulong FUN_002ee97c(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *__nptr;
  ulong uVar4;
  uint __c;
  char *local_60;
  byte local_58 [16];
  ulong local_48;
  char *local_40;
  undefined *puStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  pbVar3 = (byte *)*param_1;
  bVar1 = *pbVar3;
  if (bVar1 != 0) {
    do {
      iVar2 = toupper((uint)bVar1);
      *pbVar3 = (byte)iVar2;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    pbVar3 = (byte *)*param_1;
  }
  __nptr = (char *)FUN_002eeb60(pbVar3);
  if (__nptr == (char *)0x0) {
    uVar4 = (ulong)*(uint *)(param_1 + 1);
  }
  else {
    local_60 = __nptr;
    uVar4 = strtol(__nptr,&local_60,10);
    if (*local_60 != '\0') {
      pbVar3 = (byte *)*param_1;
      __c = (uint)*pbVar3;
      if (*pbVar3 != 0) {
        do {
          iVar2 = toupper(__c);
          *pbVar3 = (byte)iVar2;
          __c = (uint)pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (__c != 0);
        pbVar3 = (byte *)*param_1;
      }
      puStack_38 = PTR_LAB_043737d8;
      puStack_28 = PTR_LAB_043737d8;
                    /* try { // try from 002eea14 to 002eea33 has its CatchHandler @ 002eeabc */
      local_40 = __nptr;
      local_30 = pbVar3;
      FUN_002e6390(local_58,"Illegal value \'%s\' specified for environment variable \'%s\'",0x3a,
                   &local_40,2);
      uVar4 = (ulong)local_58 | 1;
      if ((local_58[0] & 1) != 0) {
        uVar4 = local_48;
      }
                    /* try { // try from 002eea50 to 002eea53 has its CatchHandler @ 002eea9c */
      (*(code *)PTR_FUN_04153020)(uVar4);
      if ((local_58[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_48);
      }
      uVar4 = (ulong)*(uint *)(param_1 + 1);
    }
                    /* try { // try from 002eea80 to 002eea87 has its CatchHandler @ 002eead4 */
    free(__nptr);
  }
  return uVar4 & 0xffffffff;
}


