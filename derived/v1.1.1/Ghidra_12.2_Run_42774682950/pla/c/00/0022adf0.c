/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022adf0; name: FUN_0022adf0
 */


undefined8
FUN_0022adf0(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  char local_130 [4];
  int iStack_12c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  
  local_28 = (undefined1)((ulong)param_3 >> 0x18);
  local_27 = (undefined1)((ulong)param_3 >> 0x10);
  local_26 = (undefined1)((ulong)param_3 >> 8);
  local_25 = (undefined1)param_3;
  local_24 = 0;
  if ((*param_2 == '.') && (param_2[1] == '\0')) {
    nn::util::SNPrintf(local_130,0xff,"%s/%s",&local_28,param_4);
  }
  else {
    nn::util::SNPrintf(local_130,0xff,"%s/%s/%s",param_2,&local_28);
  }
  iVar1 = FUN_0022c96c(param_1 + 8,local_130);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    _local_130 = 0;
    uVar2 = FUN_0022c904(param_1 + 8,local_130,iVar1);
    if (param_5 != (long *)0x0) {
      *param_5 = (long)iStack_12c;
    }
  }
  return uVar2;
}


