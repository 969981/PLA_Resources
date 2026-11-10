/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f13c2c; name: FUN_02f13c2c
 */


void FUN_02f13c2c(int param_1,int *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (DAT_0440ae08 != 0) {
    plVar3 = DAT_0440ae00;
    plVar6 = DAT_0440ae00;
    uVar2 = DAT_0440ae08;
    if (*param_2 - 0x2bU < 3) {
      do {
        lVar5 = *(long *)(*plVar6 + 0x68);
        iVar4 = 0;
        if (lVar5 != 0) {
          iVar4 = *(int *)(lVar5 + 0x10);
        }
        if ((iVar4 == param_1) && (plVar1 = *(long **)(*plVar6 + 8), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x10))(param_2[0x12],param_2[0x13],plVar1,*param_2);
          plVar3 = DAT_0440ae00;
          uVar2 = DAT_0440ae08;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar2);
    }
    else {
      do {
        lVar5 = *(long *)(*plVar6 + 0x68);
        iVar4 = 0;
        if (lVar5 != 0) {
          iVar4 = *(int *)(lVar5 + 0x10);
        }
        if ((iVar4 == param_1) && (plVar1 = *(long **)(*plVar6 + 8), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,1,*param_2);
          plVar3 = DAT_0440ae00;
          uVar2 = DAT_0440ae08;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar2);
    }
  }
  return;
}


