/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8f1dc; name: FUN_02e8f1dc
 */


void FUN_02e8f1dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
LAB_02e8f26c:
    FUN_02e96ec8();
    if (*(long *)(param_1 + 200) != 0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      (*DAT_0442d150)(0);
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    return;
  }
  plVar3 = (long *)**(long **)(param_1 + 200);
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
    do {
      if (*(int *)(param_1 + 0xd0) - 1 == uVar2) goto LAB_02e8f26c;
      uVar2 = uVar2 + 1;
      plVar3 = (long *)(*(long **)(param_1 + 200))[uVar2 & 0xffffffff];
    } while (plVar3 == (long *)0x0);
  }
  else {
    uVar2 = 0;
  }
  do {
    do {
      (*DAT_0442d150)(0,plVar3[2]);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      if (*(uint *)(param_1 + 0xd0) <= uVar1) goto LAB_02e8f26c;
      plVar3 = *(long **)(*(long *)(param_1 + 200) + (ulong)uVar1 * 8);
    } while (plVar3 == (long *)0x0);
  } while( true );
}


