/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055ca0c; name: FUN_0055ca0c
 */


undefined8
FUN_0055ca0c(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
            long *param_6,int param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_120 [2];
  undefined1 auStack_110 [208];
  
  FUN_0055b338(auStack_110,param_1);
  local_120[0] = 0;
  local_120[1] = 0;
  if (param_5 == 2) {
    if (param_7 == 0) {
      param_7 = 1;
      param_6 = local_120;
    }
    else {
    }
    param_4 = 1;
  }
                    /* try { // try from 0055ca74 to 0055ca8b has its CatchHandler @ 0055cae0 */
  uVar1 = FUN_0055c424(auStack_110,param_2,param_3,param_4 == 1,param_5 != 0,param_6,param_7);
  if (((uVar1 & 1) == 0) || ((param_5 == 2 && (*param_6 + param_6[1] != *param_2 + param_2[1])))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_0055b834(auStack_110);
  return uVar2;
}


