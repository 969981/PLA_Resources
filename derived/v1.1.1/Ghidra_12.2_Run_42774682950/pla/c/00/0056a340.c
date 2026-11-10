/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a340; name: FUN_0056a340
 */


void FUN_0056a340(undefined8 param_1,int param_2,ulong param_3)

{
  void *pvVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (((param_2 == 0) || (0x7f < param_2)) ||
     (pvVar1 = memchr("(){}[]*+?|.^$\\",param_2,0xf), pvVar1 == (void *)0x0)) {
    if ((0x19 < param_2 - 0x61U) || ((param_3 & 1) == 0)) {
      FUN_0056a490(param_1,param_2);
      return;
    }
    FUN_002e6bd4(param_1,1,0x5b);
    FUN_002e6bd4(param_1,1,param_2 + -0x20);
    uStack_30 = 0;
    local_28 = 0;
    local_38 = (ulong)CONCAT11((char)param_2,2);
                    /* try { // try from 0056a3ec to 0056a3f7 has its CatchHandler @ 0056a448 */
    FUN_002e4094(param_1,(ulong)&local_38 | 1,1);
    if ((local_38 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
    param_2 = 0x5d;
  }
  else {
    FUN_002e6bd4(param_1,1,0x5c);
  }
  FUN_002e6bd4(param_1,1,param_2);
  return;
}


