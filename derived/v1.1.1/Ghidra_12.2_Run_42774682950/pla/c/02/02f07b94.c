/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07b94; name: FUN_02f07b94
 */


void FUN_02f07b94(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char local_40 [4];
  char local_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  lVar1 = FUN_02e57a50(param_1,*(undefined4 *)((long)param_2 + 4),local_40);
  if (lVar1 != 0 && local_40[0] != '\0') {
    return;
  }
  lVar1 = FUN_02f082e8(*(undefined4 *)((long)param_2 + 4),local_3c);
  if ((lVar1 == 0) || (local_3c[0] == '\0')) {
    lVar1 = FUN_02f08350(*(undefined4 *)((long)param_2 + 4),auStack_38);
    if (lVar1 == 0) {
      return;
    }
    lVar2 = FUN_02f59e30(7,0x18);
    if (lVar2 == 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
      FUN_02f07cbc(*(undefined4 *)((long)param_2 + 4));
      return;
    }
    FUN_02f07c68(lVar2,*param_2);
    *(long *)(lVar1 + 8) = lVar2;
  }
  else {
    plVar3 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
  FUN_02e578bc(param_1,*(undefined4 *)((long)param_2 + 4),auStack_34);
  return;
}


