/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78760; name: FUN_02e78760
 */


int FUN_02e78760(int param_1,int param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 == 0) && (param_2 - 0xaeU < 7)) {
    iVar3 = FUN_02f3344c(param_2,param_3,param_4);
LAB_02e78794:
    if (iVar3 == 1) {
      return 1;
    }
  }
  else {
    if ((param_1 == 0) && (param_2 == 0xb5)) {
      iVar3 = 0;
      goto LAB_02e787a0;
    }
    iVar2 = (param_1 << 4 | 7U) + param_2 * 0x10000;
    if ((DAT_0440a430 == 0) || (*DAT_0440a428 == iVar2)) {
      piVar5 = DAT_0440a428;
    }
    else {
      lVar4 = (ulong)DAT_0440a430 * 0x20;
      piVar6 = DAT_0440a428;
      do {
        lVar4 = lVar4 + -0x20;
        if (lVar4 == 0) goto LAB_02e78850;
        piVar1 = piVar6 + 8;
        piVar5 = piVar6 + 8;
        piVar6 = piVar6 + 8;
      } while (*piVar1 != iVar2);
    }
    if (piVar5 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) {
LAB_02e78850:
      if ((DAT_0440a440 == 0) || (*DAT_0440a438 == iVar2)) {
        piVar5 = DAT_0440a438;
      }
      else {
        lVar4 = (ulong)DAT_0440a440 * 0x28;
        iVar3 = 0x58;
        piVar6 = DAT_0440a438;
        do {
          lVar4 = lVar4 + -0x28;
          if (lVar4 == 0) goto LAB_02e787a0;
          piVar1 = piVar6 + 10;
          piVar5 = piVar6 + 10;
          piVar6 = piVar6 + 10;
        } while (*piVar1 != iVar2);
      }
      if (piVar5 != DAT_0440a438 + (ulong)DAT_0440a440 * 10) goto LAB_02e78828;
    }
    else {
LAB_02e78828:
      lVar4 = FUN_02eacd1c();
      if (lVar4 != 0) {
        iVar3 = 0;
        if (*(code **)(lVar4 + 0x10) == (code *)0x0) goto LAB_02e787a0;
        iVar3 = (**(code **)(lVar4 + 0x10))(param_3,param_4);
        goto LAB_02e78794;
      }
    }
    iVar3 = 0x58;
  }
LAB_02e787a0:
  *param_3 = 0;
  return iVar3;
}


