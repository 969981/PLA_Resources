/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ee824; name: FUN_002ee824
 */


bool FUN_002ee824(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  void *__ptr;
  ulong uVar5;
  uint __c;
  char *pcVar6;
  char local_5c [4];
  byte local_58 [16];
  ulong local_48;
  void *local_40;
  undefined *puStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  if (bVar1 != 0) {
    do {
      iVar3 = toupper((uint)bVar1);
      *pbVar4 = (byte)iVar3;
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    pbVar4 = (byte *)*param_1;
  }
  __ptr = (void *)FUN_002eeb60(pbVar4);
  if (__ptr == (void *)0x0) {
    cVar2 = *(char *)(param_1 + 1);
  }
  else {
    local_5c[0] = '\0';
                    /* try { // try from 002ee86c to 002ee8df has its CatchHandler @ 002ee964 */
    uVar5 = FUN_002ecbc0(__ptr,local_5c);
    if ((uVar5 & 1) == 0) {
      pbVar4 = (byte *)*param_1;
      __c = (uint)*pbVar4;
      if (*pbVar4 != 0) {
        do {
          iVar3 = toupper(__c);
          *pbVar4 = (byte)iVar3;
          __c = (uint)pbVar4[1];
          pbVar4 = pbVar4 + 1;
        } while (__c != 0);
        pbVar4 = (byte *)*param_1;
      }
      puStack_38 = PTR_LAB_043737d8;
      puStack_28 = PTR_LAB_043737d8;
      local_40 = __ptr;
      local_30 = pbVar4;
      FUN_002e6390(local_58,"Illegal value \'%s\' specified for environment variable \'%s\'",0x3a,
                   &local_40,2);
      uVar5 = (ulong)local_58 | 1;
      if ((local_58[0] & 1) != 0) {
        uVar5 = local_48;
      }
                    /* try { // try from 002ee8fc to 002ee8ff has its CatchHandler @ 002ee940 */
      (*(code *)PTR_FUN_04153020)(uVar5);
      if ((local_58[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_48);
      }
      pcVar6 = (char *)(param_1 + 1);
    }
    else {
      pcVar6 = local_5c;
    }
    cVar2 = *pcVar6;
                    /* try { // try from 002ee920 to 002ee927 has its CatchHandler @ 002ee960 */
    free(__ptr);
  }
  return cVar2 != '\0';
}


