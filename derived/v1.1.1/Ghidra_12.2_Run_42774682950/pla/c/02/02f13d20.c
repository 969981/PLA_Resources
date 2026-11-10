/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f13d20; name: FUN_02f13d20
 */


void FUN_02f13d20(undefined8 param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = (ulong)DAT_0440ae08;
  if (DAT_0440ae08 != 0) {
    plVar2 = DAT_0440ae00;
    plVar5 = DAT_0440ae00;
    do {
      lVar4 = *(long *)(*plVar5 + 0x68);
      iVar3 = 0;
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if ((iVar3 == param_2) && (lVar4 = *(long *)(*plVar5 + 8), lVar4 != 0)) {
        FUN_02e9ca34(param_1,lVar4,param_3);
        uVar1 = (ulong)DAT_0440ae08;
        plVar2 = DAT_0440ae00;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2 + uVar1);
  }
  return;
}


