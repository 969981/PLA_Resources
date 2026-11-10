/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a61c; name: FUN_02f3a61c
 */


void FUN_02f3a61c(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x10))();
  iVar3 = *param_2;
  if (iVar3 == 0) {
    FUN_02f36e78(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else {
    if (iVar3 == 1) {
      FUN_02f3743c(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
      lVar2 = param_1[0xf];
      goto joined_r0x02f3a6b8;
    }
    if (iVar3 == 2) {
      FUN_02f37640(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                   *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
      lVar2 = param_1[0xf];
      goto joined_r0x02f3a6b8;
    }
  }
  lVar2 = param_1[0xf];
joined_r0x02f3a6b8:
  if ((lVar2 != 0) &&
     (((0 < *(short *)(lVar2 + 0x90) || (0 < *(short *)(lVar2 + 0x94))) &&
      (iVar3 = (int)param_1[0x1b], iVar3 != 0)))) {
    lVar2 = (ulong)(iVar3 - 1) << 3;
    do {
      plVar1 = *(long **)(param_1[0x1a] + lVar2);
      if (((char)param_2[8] == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
      }
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x02f3a694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


