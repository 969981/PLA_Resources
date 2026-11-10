/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f445d0; name: FUN_02f445d0
 */


void FUN_02f445d0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = param_1[0x16];
  *param_1 = &PTR_LAB_042ae838;
  param_1[3] = &PTR_LAB_042ae950;
  param_1[5] = &PTR_FUN_042ae978;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x17);
    if (uVar1 != 0) {
      piVar4 = *(int **)(lVar5 + 0x10);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, *piVar4 = iVar2 + -1, iVar2 + -1 == 0)) {
        (*DAT_0442d150)(*(undefined4 *)(lVar5 + 0x1c),*(undefined8 *)(lVar5 + 0x10));
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (uVar1 != 1) {
        piVar4 = *(int **)(lVar5 + 0x30);
        if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, *piVar4 = iVar2 + -1, iVar2 + -1 == 0)) {
          (*DAT_0442d150)(*(undefined4 *)(lVar5 + 0x3c),*(undefined8 *)(lVar5 + 0x30));
        }
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x38) = 0;
        if (uVar1 != 2) {
          puVar6 = (undefined8 *)(lVar5 + 0x50);
          lVar5 = (ulong)uVar1 * 0x20 + -0x40;
          do {
            piVar4 = (int *)*puVar6;
            if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, *piVar4 = iVar2 + -1, iVar2 + -1 == 0))
            {
              (*DAT_0442d150)(*(undefined4 *)((long)puVar6 + 0xc),*puVar6);
            }
            *puVar6 = 0;
            lVar5 = lVar5 + -0x20;
            *(undefined4 *)(puVar6 + 1) = 0;
            puVar6 = puVar6 + 4;
          } while (lVar5 != 0);
        }
      }
      lVar5 = param_1[0x16];
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    (*DAT_0442d150)(0,lVar5);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  puVar6 = (undefined8 *)param_1[0x10];
  if (puVar6 == (undefined8 *)0x0) {
    plVar3 = (long *)param_1[0xf];
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x11);
    if (uVar1 != 0) {
      (**(code **)*puVar6)(puVar6);
      if ((((uVar1 != 1) && ((**(code **)puVar6[3])(puVar6 + 3), uVar1 != 2)) &&
          ((**(code **)puVar6[6])(puVar6 + 6), uVar1 != 3)) &&
         ((**(code **)puVar6[9])(puVar6 + 9), uVar1 != 4)) {
        lVar5 = (ulong)uVar1 * 0x18 + -0x60;
        puVar6 = puVar6 + 0xc;
        do {
          (**(code **)*puVar6)(puVar6);
          lVar5 = lVar5 + -0x18;
          puVar6 = puVar6 + 3;
        } while (lVar5 != 0);
      }
      puVar6 = (undefined8 *)param_1[0x10];
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    (*DAT_0442d150)(0,puVar6);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    plVar3 = (long *)param_1[0xf];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *param_1 = &PTR_LAB_042ada68;
  param_1[3] = &PTR_LAB_042adaf8;
  puVar6 = param_1 + 5;
  *puVar6 = &PTR_FUN_042adb20;
  if (param_1[7] == 0) {
    lVar5 = param_1[8];
  }
  else {
    FUN_02f0efb8(DAT_0440a150,param_1[7],puVar6);
    lVar5 = param_1[8];
  }
  if (lVar5 != 0) {
    FUN_02f0efb8(DAT_0440a150,lVar5,puVar6);
  }
  param_1[6] = 0;
  return;
}


