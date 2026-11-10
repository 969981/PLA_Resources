/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f518a0; name: FUN_02f518a0
 */


void FUN_02f518a0(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = *(long *)(param_1 + 0x88);
  while( true ) {
    if (lVar10 == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x10) == param_3) break;
    lVar10 = *(long *)(lVar10 + 0x30);
  }
  plVar9 = (long *)(param_1 + 0x70);
  plVar7 = (long *)*plVar9;
  if (plVar7 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (((iVar3 == 2) && (param_2 <= (int)plVar7[2])) && (plVar7[3] == lVar10)) {
      plVar6 = (long *)plVar7[1];
      plVar8 = plVar9;
      if ((long *)*plVar9 != plVar7) {
        plVar8 = (long *)&DAT_00000008;
      }
      *plVar8 = (long)plVar6;
      if (*(long **)(param_1 + 0x68) == plVar7) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      (**(code **)*plVar7)(plVar7);
      (*DAT_0442d150)(0,plVar7);
      plVar7 = (long *)0x0;
    }
    else {
      plVar6 = (long *)plVar7[1];
    }
    if (plVar6 != (long *)0x0) {
      iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (((iVar3 == 2) && (param_2 <= (int)plVar6[2])) && (plVar6[3] == lVar10)) {
        plVar8 = (long *)plVar6[1];
        plVar11 = plVar9;
        if ((long *)*plVar9 != plVar6) {
          plVar11 = plVar7 + 1;
        }
        *plVar11 = (long)plVar8;
        if (*(long **)(param_1 + 0x68) == plVar6) {
          *(long **)(param_1 + 0x68) = plVar7;
        }
        (**(code **)*plVar6)(plVar6);
        (*DAT_0442d150)(0,plVar6);
        plVar6 = plVar7;
      }
      else {
        plVar8 = (long *)plVar6[1];
      }
      if (plVar8 != (long *)0x0) {
        do {
          while (((iVar3 = (**(code **)(*plVar8 + 0x10))(plVar8), iVar3 != 2 ||
                  ((int)plVar8[2] < param_2)) || (plVar8[3] != lVar10))) {
            plVar7 = plVar8 + 1;
            plVar6 = plVar8;
            plVar8 = (long *)*plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_02f5195c;
          }
          plVar11 = (long *)plVar8[1];
          plVar7 = plVar9;
          if ((long *)*plVar9 != plVar8) {
            plVar7 = plVar6 + 1;
          }
          *plVar7 = (long)plVar11;
          if (*(long **)(param_1 + 0x68) == plVar8) {
            *(long **)(param_1 + 0x68) = plVar6;
          }
          (**(code **)*plVar8)(plVar8);
          (*DAT_0442d150)(0,plVar8);
          plVar8 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_02f5195c:
  FUN_02f4f580(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(lVar10 + 0x28);
    uVar2 = *(undefined4 *)(lVar10 + 0x2c);
    *(int *)(puVar4 + 2) = param_2;
    *puVar4 = &PTR_LAB_042af3c8;
    puVar4[3] = lVar10;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    *(undefined4 *)((long)puVar4 + 0x24) = uVar1;
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 == 0) {
LAB_02f519a4:
      puVar4[1] = 0;
      if (*plVar9 != 0) {
        plVar9 = (long *)(*(long *)(param_1 + 0x68) + 8);
      }
      *plVar9 = (long)puVar4;
      *(undefined8 **)(param_1 + 0x68) = puVar4;
    }
    else if (param_2 < *(int *)(lVar10 + 0x10)) {
      puVar4[1] = lVar10;
      *plVar9 = (long)puVar4;
    }
    else {
      do {
        lVar5 = lVar10;
        lVar10 = *(long *)(lVar5 + 8);
        if (lVar10 == 0) goto LAB_02f519a4;
      } while (*(int *)(lVar10 + 0x10) <= param_2);
      puVar4[1] = lVar10;
      if (lVar5 == 0) {
        *plVar9 = (long)puVar4;
      }
      else {
        *(undefined8 **)(lVar5 + 8) = puVar4;
      }
    }
  }
  return;
}


