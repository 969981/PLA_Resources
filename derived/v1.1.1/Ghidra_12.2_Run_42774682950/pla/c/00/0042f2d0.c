/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042f2d0; name: FUN_0042f2d0
 */


ulong FUN_0042f2d0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(code **)(*param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x188))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_1[0x12] == 0) {
LAB_0042f3a4:
    uVar2 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = FUN_0040de90();
      lVar4 = param_4;
      if (param_4 == 0) goto LAB_0042f3a4;
    }
    else {
      lVar4 = 0;
    }
    FUN_0040e090(param_4);
    lVar3 = FUN_0040e240(param_4);
    if (((lVar3 == 0) || (iVar1 = FUN_0040c6b0(lVar3,2), iVar1 == 0)) ||
       (iVar1 = FUN_00411b00(lVar3,param_1[2],lVar3), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_004250f0(param_2,param_3,lVar3,param_1[2],param_4,param_1[0x12]);
      uVar2 = (ulong)(iVar1 != 0);
    }
    FUN_0040e1b0(param_4);
    FUN_0040def0(lVar4);
  }
  return uVar2;
}


