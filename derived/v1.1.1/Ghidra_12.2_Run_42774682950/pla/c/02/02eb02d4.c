/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb02d4; name: FUN_02eb02d4
 */


void FUN_02eb02d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x58) != 0)) {
    lVar3 = *(long *)(lVar5 + 0x50);
    do {
      FUN_02ee0bfc(DAT_0440a160,param_1,*(undefined2 *)(lVar3 + 6));
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != *(long *)(lVar5 + 0x50) + (ulong)*(uint *)(lVar5 + 0x58) * 0x28);
  }
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x10);
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar2 = *(long **)(param_1 + 0x10);
  }
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x48);
  }
  else {
    lVar3 = plVar2[0xe];
    lVar4 = 0;
    lVar5 = lVar3;
    if ((lVar3 != 0) && (lVar3 != param_1)) {
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 0x58);
      } while (lVar5 != 0 && lVar5 != param_1);
    }
    if (lVar5 != 0) {
      plVar1 = plVar2 + 0xe;
      if (lVar5 != lVar3) {
        plVar1 = (long *)(lVar4 + 0x58);
      }
      *plVar1 = *(long *)(lVar5 + 0x58);
      (**(code **)(*plVar2 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x48);
  }
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


