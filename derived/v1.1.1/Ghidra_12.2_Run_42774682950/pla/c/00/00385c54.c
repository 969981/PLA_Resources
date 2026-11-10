/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00385c54; name: FUN_00385c54
 */


void FUN_00385c54(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_3 == 0) goto LAB_00385d2c;
  uVar4 = *(ulong *)(param_3 + 8);
  plVar3 = (long *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    plVar1 = (long *)(uVar2 & 0xfffffffffffffffe);
    plVar5 = plVar3;
    if ((uVar2 & 1) == 0) goto LAB_00385c90;
LAB_00385cf0:
    if (plVar5 == (long *)*plVar1) goto LAB_00385d2c;
  }
  else {
    plVar5 = (long *)*plVar3;
    uVar2 = *(ulong *)(param_2 + 8);
    plVar1 = (long *)(uVar2 & 0xfffffffffffffffe);
    if ((uVar2 & 1) != 0) goto LAB_00385cf0;
LAB_00385c90:
    if (plVar5 == plVar1) goto LAB_00385d2c;
  }
  if ((uVar4 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = plVar1;
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)*plVar1;
    }
    if (plVar3 != (long *)0x0) {
      if ((uVar2 & 1) != 0) {
        plVar1 = (long *)*plVar1;
      }
      FUN_0038cc98(plVar1,param_3);
LAB_00385d2c:
      FUN_0038c97c(param_1,param_2,param_3,param_4);
      return;
    }
  }
  plVar3 = (long *)FUN_0038c3b8(param_1,param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00385cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  return;
}


