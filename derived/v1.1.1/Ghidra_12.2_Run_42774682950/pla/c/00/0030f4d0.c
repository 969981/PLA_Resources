/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f4d0; name: FUN_0030f4d0
 */


ulong FUN_0030f4d0(ulong param_1,char *param_2,int param_3,byte *param_4)

{
  uint uVar1;
  byte *param5;
  FILE *param0;
  
  if ((int)param_1 < 0) {
    return param_1;
  }
  param0 = *(FILE **)PTR_stderr_04372330;
  param5 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    param5 = param_4 + 1;
  }
  fprintf(param0,"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_04153858)[param_1 & 0xffffffff],param_2,
          param_3,(char *)param5);
  uVar1 = fflush(param0);
  return (ulong)uVar1;
}


