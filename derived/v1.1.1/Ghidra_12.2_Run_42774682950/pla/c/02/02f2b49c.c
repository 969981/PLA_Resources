/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b49c; name: FUN_02f2b49c
 */


void FUN_02f2b49c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x88) == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x90);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (*DAT_0442d150)(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    plVar1 = *(long **)(param_1 + 0x90);
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x98);
  }
  else {
    (**(code **)(*plVar1 + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x90);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (*DAT_0442d150)(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar1 = *(long **)(param_1 + 0x98);
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0xa0);
  }
  else {
    (**(code **)(*plVar1 + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x98);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (*DAT_0442d150)(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar1 = *(long **)(param_1 + 0xa0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (*DAT_0442d150)(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(PTR_PTR_042a9250 + 0x18))(&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(PTR_PTR_042a9250 + 0x18))(&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


