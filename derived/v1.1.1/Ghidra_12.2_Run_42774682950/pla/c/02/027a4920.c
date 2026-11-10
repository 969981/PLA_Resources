/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a4920; name: FUN_027a4920
 */


void FUN_027a4920(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_80 [2];
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  undefined4 local_44;
  long local_38;
  
  FUN_013ba5d8(&local_70,param_2 + 1,"+inner");
  FUN_02a47560(auStack_68,&local_70);
  local_80[0] = 0;
  local_78 = 0x2000;
  lVar4 = *param_2;
  plVar3 = *(long **)*param_3;
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    lVar2 = plVar3[1];
    if (lVar1 != lVar2) {
      local_38 = *(long *)(lVar1 + 0x40);
      while( true ) {
        if ((local_38 != 0) && (*(code **)(lVar4 + 0x60) != (code *)0x0)) {
          local_44 = (undefined4)*(undefined8 *)(lVar1 + 0x60);
          (**(code **)(lVar4 + 0x60))(lVar4 + 0x80,&local_38,&local_44);
        }
        if (lVar2 == lVar1 + 0x68) break;
        local_38 = *(long *)(lVar1 + 0xa8);
        lVar1 = lVar1 + 0x68;
      }
    }
  }
  if (*(char *)(lVar4 + 0xe0) == '\0') {
    *(undefined8 *)(lVar4 + 0xe4) = 0;
    *(undefined1 *)(lVar4 + 0xe0) = 1;
  }
  else {
    *(undefined8 *)(lVar4 + 0xe4) = 0;
  }
  local_38 = 0;
  FUN_013ba578(param_1,auStack_68,local_80,&local_38);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


