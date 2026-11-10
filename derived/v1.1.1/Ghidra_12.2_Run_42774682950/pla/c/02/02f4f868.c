/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f868; name: FUN_02f4f868
 */


void FUN_02f4f868(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    do {
      (**(code **)(*param_1 + 0x138))(param_1,lVar4);
      FUN_02f3cb94(lVar4);
      if ((long *)param_1[0x10] != (long *)0x0) {
        lVar2 = *(long *)param_1[0x10];
        if (lVar2 == 0) {
          param_1[0xf] = 0;
          param_1[0x10] = 0;
        }
        else {
          param_1[0x10] = lVar2;
        }
      }
      plVar3 = *(long **)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if (plVar3 != (long *)0x0) {
        iVar1 = (int)plVar3[9] + -1;
        *(int *)(plVar3 + 9) = iVar1;
        if (iVar1 == 0) {
          if (plVar3[2] == 0) {
            FUN_02f37eb4(plVar3);
          }
          else {
            FUN_02f3b8c0(plVar3[2],plVar3);
            plVar3[2] = 0;
          }
          (**(code **)(*plVar3 + 0x50))(plVar3);
          (*DAT_0442d150)(0,plVar3);
        }
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      (*DAT_0442d150)(0,lVar4);
      lVar4 = param_1[0x10];
    } while (lVar4 != 0);
  }
  return;
}


