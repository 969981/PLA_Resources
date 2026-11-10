/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2dd78; name: FUN_02f2dd78
 */


void FUN_02f2dd78(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(param_1 + 0x128);
  if ((plVar2 == (long *)0x0) || (plVar2[3] != param_2)) {
    plVar2 = *(long **)(param_1 + 0x130);
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (plVar2[3] != param_2) {
      return;
    }
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
    puVar3 = *(undefined8 **)(param_1 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (*DAT_0442d150)(5,puVar3);
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
    return;
  }
  if ((*(byte *)(plVar2 + 4) & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x98))();
    if (iVar1 == 1) {
      return;
    }
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_02f2ddd0;
    param_2 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  }
  *(byte *)(param_2 + 0x2a2) = *(byte *)(param_2 + 0x2a2) & 0x87;
LAB_02f2ddd0:
  *(undefined4 *)(param_1 + 0x140) = 2;
  return;
}


