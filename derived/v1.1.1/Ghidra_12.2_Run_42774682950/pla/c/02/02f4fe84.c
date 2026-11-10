/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4fe84; name: FUN_02f4fe84
 */


void FUN_02f4fe84(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x80);
  FUN_02f3cb94(lVar4);
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x80);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar2;
    }
  }
  if (lVar4 == 0) {
    return;
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
                    /* WARNING: Could not recover jumptable at 0x02f4fee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,lVar4);
  return;
}


