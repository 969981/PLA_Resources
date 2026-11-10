/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00495790; name: FUN_00495790
 */


long * FUN_00495790(long param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00452d10();
  if (plVar2 != (long *)0x0) {
    if (param_3 != 0x14) {
      lVar3 = FUN_0041cf20();
      plVar2[2] = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_00420ad0(lVar3,(long)param_3), iVar1 == 0))
      goto LAB_00495840;
    }
    if ((param_1 != 0) && (iVar1 = FUN_0041ccb0(param_1), iVar1 != 0x40)) {
      lVar3 = FUN_00446a40();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_00495840;
      FUN_00446b30(lVar3,param_1);
    }
    if (param_2 != 0) {
      param_1 = param_2;
    }
    iVar1 = FUN_00495860(plVar2 + 1,param_1);
    if (iVar1 != 0) {
      if (param_1 == 0) {
        return plVar2;
      }
      iVar1 = FUN_0041ccb0(param_1);
      if (iVar1 == 0x40) {
        return plVar2;
      }
      lVar3 = FUN_00446a40();
      plVar2[4] = lVar3;
      if (lVar3 != 0) {
        FUN_00446b30(lVar3,param_1);
        return plVar2;
      }
    }
  }
LAB_00495840:
  FUN_00452d20(plVar2);
  return (long *)0x0;
}


