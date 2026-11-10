/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f54260; name: FUN_02f54260
 */


long FUN_02f54260(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_24 [4];
  
  if (param_2 == 0) {
    lVar2 = param_1[0x10];
  }
  else {
    FUN_02f4f868(param_1);
    iVar1 = FUN_02f4d3fc(param_1 + 0x13,param_2,param_3);
    if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x02f542e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*param_1 + 0x120))(param_1);
      return lVar2;
    }
    lVar2 = FUN_02f53dd4(param_1,auStack_24);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) == 0)) {
      FUN_02f4f868(param_1);
      lVar2 = 0;
    }
  }
  return lVar2;
}


