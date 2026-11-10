/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e6fc; name: FUN_02f3e6fc
 */


void FUN_02f3e6fc(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    iVar1 = (int)plVar2[9] + -1;
    *(int *)(plVar2 + 9) = iVar1;
    if (iVar1 == 0) {
      if (plVar2[2] == 0) {
        FUN_02f37eb4(plVar2);
      }
      else {
        FUN_02f3b8c0(plVar2[2],plVar2);
        plVar2[2] = 0;
      }
      (**(code **)(*plVar2 + 0x50))(plVar2);
      (*DAT_0442d150)(0,plVar2);
      plVar2 = *(long **)(param_1 + 8);
    }
    else {
      plVar2 = *(long **)(param_1 + 8);
    }
    if (plVar2 != (long *)0x0) {
      iVar1 = (int)plVar2[9] + -1;
      *(int *)(plVar2 + 9) = iVar1;
      if (iVar1 == 0) {
        if (plVar2[2] == 0) {
          FUN_02f37eb4(plVar2);
        }
        else {
          FUN_02f3b8c0(plVar2[2],plVar2);
          plVar2[2] = 0;
        }
        (**(code **)(*plVar2 + 0x50))(plVar2);
        (*DAT_0442d150)(0,plVar2);
      }
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}


