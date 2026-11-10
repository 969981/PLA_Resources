/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f2ac; name: FUN_02f4f2ac
 */


void FUN_02f4f2ac(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)param_1[0x10];
  *param_1 = &PTR_LAB_042af0f8;
  param_1[3] = &PTR_LAB_042af248;
  param_1[5] = &PTR_FUN_042af270;
  while (plVar2 != (long *)0x0) {
    if (*plVar2 == 0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
    }
    else {
      param_1[0x10] = *plVar2;
    }
    plVar4 = (long *)plVar2[3];
    plVar2[2] = 0;
    if (plVar4 != (long *)0x0) {
      iVar1 = (int)plVar4[9] + -1;
      *(int *)(plVar4 + 9) = iVar1;
      if (iVar1 == 0) {
        if (plVar4[2] == 0) {
          FUN_02f37eb4(plVar4);
        }
        else {
          FUN_02f3b8c0(plVar4[2],plVar4);
          plVar4[2] = 0;
        }
        (**(code **)(*plVar4 + 0x50))(plVar4);
        (*DAT_0442d150)(0,plVar4);
      }
      plVar2[3] = 0;
    }
    (*DAT_0442d150)(0,plVar2);
    plVar2 = (long *)param_1[0x10];
  }
  *param_1 = &PTR_LAB_042ada68;
  param_1[3] = &PTR_LAB_042adaf8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar5 = param_1 + 5;
  *puVar5 = &PTR_FUN_042adb20;
  if (param_1[7] == 0) {
    lVar3 = param_1[8];
  }
  else {
    FUN_02f0efb8(DAT_0440a150,param_1[7],puVar5);
    lVar3 = param_1[8];
  }
  if (lVar3 != 0) {
    FUN_02f0efb8(DAT_0440a150,lVar3,puVar5);
  }
  param_1[6] = 0;
  return;
}


