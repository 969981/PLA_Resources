/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eae59c; name: FUN_02eae59c
 */


int FUN_02eae59c(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  if ((DAT_0440a430 == 0) || (*DAT_0440a428 == param_2)) {
    piVar6 = DAT_0440a428;
  }
  else {
    lVar5 = (ulong)DAT_0440a430 * 0x20;
    piVar7 = DAT_0440a428;
    do {
      lVar5 = lVar5 + -0x20;
      if (lVar5 == 0) goto LAB_02eae688;
      piVar1 = piVar7 + 8;
      piVar6 = piVar7 + 8;
      piVar7 = piVar7 + 8;
    } while (*piVar1 != param_2);
  }
  if (((piVar6 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) || (*(code **)(piVar6 + 4) == (code *)0x0)
      ) || (plVar3 = (long *)(**(code **)(piVar6 + 4))(&PTR_PTR_042a9240), plVar3 == (long *)0x0)) {
LAB_02eae688:
    *(int *)(param_1 + 0x30) = param_2;
    iVar2 = 1;
  }
  else {
    iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,&PTR_PTR_042a9240,param_3,param_4);
    if (iVar2 == 1) {
      plVar4 = *(long **)(param_1 + 0x38);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,&PTR_PTR_042a9240);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      iVar2 = 1;
      *(int *)(param_1 + 0x30) = param_2;
      *(long **)(param_1 + 0x38) = plVar3;
    }
    else {
      (**(code **)(*plVar3 + 0x28))(plVar3,&PTR_PTR_042a9240);
    }
  }
  return iVar2;
}


