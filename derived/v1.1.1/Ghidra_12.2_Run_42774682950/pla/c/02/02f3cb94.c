/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3cb94; name: FUN_02f3cb94
 */


void FUN_02f3cb94(long param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x10);
  lVar4 = *plVar5;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 8) == 1) {
      FUN_02f38238(*(undefined8 *)(lVar4 + 0x10));
    }
    bVar3 = *plVar5 != lVar4;
    lVar4 = *(long *)(lVar4 + 0x18);
    plVar1 = plVar5;
    if (bVar3) {
      plVar1 = (long *)&DAT_00000018;
    }
    *plVar1 = lVar4;
    (*DAT_0442d150)(0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80) = 0;
    plVar5 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[9] + -1, *(int *)(plVar5 + 9) = iVar2, iVar2 == 0)) {
      if (plVar5[2] == 0) {
        FUN_02f37eb4(plVar5);
      }
      else {
        FUN_02f3b8c0(plVar5[2],plVar5);
        plVar5[2] = 0;
      }
      (**(code **)(*plVar5 + 0x50))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x02f3cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,plVar5);
      return;
    }
  }
  return;
}


