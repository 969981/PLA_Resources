/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a470; name: FUN_0010a470
 */


void FUN_0010a470(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((long)param_3 < 0x10) {
    if (param_3 != 0) {
      uVar3 = param_3 - 1;
      if ((param_3 & 3) != 0) {
        lVar5 = -(param_3 & 3);
        puVar8 = param_1;
        do {
          param_3 = param_3 - 1;
          param_1 = (undefined8 *)((long)puVar8 + 1);
          *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 + -param_2);
          lVar5 = lVar5 + 1;
          puVar8 = param_1;
        } while (lVar5 != 0);
      }
      if (2 < uVar3) {
        puVar4 = (undefined1 *)((long)param_1 + 3);
        do {
          puVar1 = puVar4 + -param_2;
          puVar4[-3] = puVar1[-3];
          puVar4[-2] = puVar1[-2];
          puVar4[-1] = puVar1[-1];
          param_3 = param_3 - 4;
          *puVar4 = *puVar1;
          puVar4 = puVar4 + 4;
        } while (param_3 != 0);
      }
    }
  }
  else {
    puVar8 = (undefined8 *)((long)param_1 - param_2);
    if (param_2 < 8) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar8;
      *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)puVar8 + 1);
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)puVar8 + 2);
      iVar2 = *(int *)(&DAT_039c32c4 + param_2 * 4);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar8 + 3);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)puVar8 + (long)iVar2);
      puVar8 = (undefined8 *)
               (((long)puVar8 + (long)iVar2) - (long)*(int *)(&DAT_039c32e4 + param_2 * 4));
    }
    else {
      *param_1 = *puVar8;
    }
    lVar5 = param_3 - 8;
    puVar6 = param_1 + 1;
    do {
      puVar8 = puVar8 + 1;
      lVar5 = lVar5 + -8;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar8;
      puVar6 = puVar7;
    } while (puVar7 < (undefined8 *)((long)((long)param_1 + param_3) - 7U));
    if (puVar7 < (undefined8 *)((long)param_1 + param_3)) {
      do {
        lVar5 = lVar5 + -1;
        *(undefined1 *)puVar7 = *(undefined1 *)((long)puVar7 - param_2);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (lVar5 != 0);
    }
  }
  return;
}


