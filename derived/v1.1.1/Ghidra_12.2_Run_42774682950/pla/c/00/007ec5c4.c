/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec5c4; name: FUN_007ec5c4
 */


void FUN_007ec5c4(long *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(PTR_DAT_043774e8 + 0x10);
  param_1[1] = (long)param_2;
  *(undefined4 *)(param_1 + 3) = 1;
  uVar2 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 + 1;
      uVar2 = uVar2 + 1;
    } while (param_2[lVar1] != 0);
  }
  *(int *)((long)param_1 + 0x14) = (int)uVar2;
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  FUN_007ee578(local_30,local_20);
  return;
}


