/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163640; name: FUN_00163640
 */


ulong FUN_00163640(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  int local_44;
  
  iVar1 = FUN_00151a70(param_1,0xffffffff,param_2);
  lVar2 = FUN_00150ba0(param_1,0xffffffff,&local_44);
  if (local_44 == 0) {
    if (iVar1 == 0) {
      if (-1 < param_3) {
        uVar4 = (ulong)param_3;
        goto LAB_001636e4;
      }
      pcVar3 = "field \'%s\' missing in date table";
    }
    else {
      pcVar3 = "field \'%s\' is not an integer";
    }
  }
  else {
    if (lVar2 + 0x3fffffffU < 0x7fffffff) {
      uVar4 = lVar2 - param_4;
LAB_001636e4:
      FUN_0014ff10(param_1,0xfffffffe);
      goto LAB_001636f0;
    }
    pcVar3 = "field \'%s\' is out-of-bound";
  }
  uVar4 = FUN_00154110(param_1,pcVar3,param_2);
  uVar4 = uVar4 & 0xffffffff;
LAB_001636f0:
  return uVar4 & 0xffffffff;
}


