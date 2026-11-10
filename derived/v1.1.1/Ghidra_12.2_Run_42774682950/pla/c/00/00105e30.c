/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00105e30; name: FUN_00105e30
 */


ulong FUN_00105e30(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined1 *local_1060;
  undefined1 **ppuStack_1058;
  undefined8 *local_1050;
  undefined8 uStack_1048;
  char acStack_1040 [4096];
  
  if ((int)param_1 < 2) {
    local_1050 = &local_1080;
    ppuStack_1058 = &local_1060;
    uStack_1048 = 0xffffff80ffffffe0;
    local_1080 = param_5;
    uStack_1078 = param_6;
    local_1070 = param_7;
    uStack_1068 = param_8;
    local_1060 = (undefined1 *)register0x00000008;
    FUN_001093a0(acStack_1040,0x1000,param_4,&local_1060);
    uVar1 = fputs(acStack_1040,*(FILE **)PTR_stdout_04372328);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}


