/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3743c; name: FUN_02f3743c
 */


void FUN_02f3743c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = DAT_0442c008;
  if (DAT_0442c008 != (long *)0x0) {
    lVar2 = (**(code **)(*DAT_0442c008 + 0xd0))(DAT_0442c008);
    bVar1 = lVar2 == param_1;
    if (param_2 == 0) {
      if (param_4 == 0) {
        if (bVar1) {
          FUN_02f3c1fc(plVar3,param_3);
          plVar3 = (long *)plVar3[0xe];
        }
        else {
          plVar3 = (long *)plVar3[0xe];
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0xe]) {
          while (lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3), lVar2 != param_1) {
            plVar3 = (long *)plVar3[0xe];
            if (plVar3 == (long *)0x0) {
              return;
            }
          }
          FUN_02f3c1fc(plVar3,param_3);
        }
      }
      else {
        if ((bVar1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
          FUN_02f3c1fc(plVar3,param_3);
          plVar3 = (long *)plVar3[0xe];
        }
        else {
          plVar3 = (long *)plVar3[0xe];
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0xe]) {
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar2 == param_1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN_02f3c1fc(plVar3,param_3);
          }
        }
      }
    }
    else {
      if (param_4 != 0) {
        if (!bVar1) goto LAB_02f3761c;
        do {
          if ((*(long *)(plVar3[0xc] + 0x30) == param_2) &&
             (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN_02f3c1fc(plVar3,param_3);
          }
LAB_02f3761c:
          do {
            plVar3 = (long *)plVar3[0xe];
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          } while (lVar2 != param_1);
        } while( true );
      }
      if ((bVar1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
        FUN_02f3c1fc(plVar3,param_3);
        plVar3 = (long *)plVar3[0xe];
      }
      else {
        plVar3 = (long *)plVar3[0xe];
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0xe]) {
        lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        if ((lVar2 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
          FUN_02f3c1fc(plVar3,param_3);
        }
      }
    }
  }
  return;
}


