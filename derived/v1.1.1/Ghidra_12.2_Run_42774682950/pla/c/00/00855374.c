/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855374; name: FUN_00855374
 */


void FUN_00855374(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_043780a0 + 0x10);
  if (param_1[4] != 0) {
    FUN_00855688();
    puVar3 = (undefined8 *)param_1[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0081a800(puVar3);
    }
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_008567fc();
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0081a800(puVar3);
    }
    param_1[3] = 0;
  }
  puVar1 = PTR_DAT_043773c0;
  if (param_1[2] != 0) {
    plVar2 = (long *)FUN_00855064(*(undefined8 *)PTR_DAT_043773c0);
    (**(code **)(*plVar2 + 0x90))(plVar2,param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    plVar2 = (long *)FUN_00855064(*(undefined8 *)puVar1);
    (**(code **)(*plVar2 + 0x88))(plVar2,param_1[1]);
    param_1[1] = 0;
  }
  return;
}


