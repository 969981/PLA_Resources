/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d5fc; name: FUN_02f2d5fc
 */


void FUN_02f2d5fc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_30;
  undefined2 local_28;
  
  if (*(long *)(param_1 + 0x128) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  lVar3 = *(long *)(param_1 + 0xf0);
  plVar1 = *(long **)(lVar2 + 0x180);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xf8);
  }
  else {
    local_30 = (long *)0x0;
    (**(code **)(*plVar1 + 0x1d0))(plVar1,0,&local_30,*(undefined8 *)(lVar2 + 0x28));
    *(undefined2 *)(lVar3 + 0x8a) = local_28;
    if (local_30 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x128);
    }
    else {
      (**(code **)(*local_30 + 0x18))();
      lVar2 = *(long *)(param_1 + 0x128);
    }
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    plVar1 = *(long **)(lVar2 + 0x180);
    lVar3 = *(long *)(param_1 + 0xf8);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x100);
  }
  else {
    local_30 = (long *)0x0;
    (**(code **)(*plVar1 + 0x1d0))(plVar1,1,&local_30,*(undefined8 *)(lVar2 + 0x28));
    *(undefined2 *)(lVar3 + 0x8a) = local_28;
    if (local_30 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x128);
    }
    else {
      (**(code **)(*local_30 + 0x18))();
      lVar2 = *(long *)(param_1 + 0x128);
    }
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    plVar1 = *(long **)(lVar2 + 0x180);
    lVar3 = *(long *)(param_1 + 0x100);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x108);
  }
  else {
    local_30 = (long *)0x0;
    (**(code **)(*plVar1 + 0x1d0))(plVar1,2,&local_30,*(undefined8 *)(lVar2 + 0x28));
    *(undefined2 *)(lVar3 + 0x8a) = local_28;
    if (local_30 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x128);
    }
    else {
      (**(code **)(*local_30 + 0x18))();
      lVar2 = *(long *)(param_1 + 0x128);
    }
    if (lVar2 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    plVar1 = *(long **)(lVar2 + 0x180);
    lVar3 = *(long *)(param_1 + 0x108);
  }
  if (lVar3 != 0) {
    local_30 = (long *)0x0;
    (**(code **)(*plVar1 + 0x1d0))(plVar1,3,&local_30,*(undefined8 *)(lVar2 + 0x28));
    *(undefined2 *)(lVar3 + 0x8a) = local_28;
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x18))();
    }
  }
  return;
}


