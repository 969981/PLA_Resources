/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0869c; name: FUN_02f0869c
 */


undefined8 FUN_02f0869c(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  FUN_02f0caf0(DAT_0440a130,param_1);
  lVar1 = DAT_0440a138;
  plVar10 = (long *)(DAT_0440a138 + 0x10);
  plVar4 = (long *)*plVar10;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      while (plVar5 = plVar4, plVar5[1] == param_1) {
        if (*(char *)(lVar1 + 0x38) == '\0') {
          plVar4 = (long *)*plVar5;
          if (*(long **)(lVar1 + 0x10) == plVar5) {
            plVar6 = plVar10;
          }
          else {
            plVar6 = plVar11;
          }
          *plVar6 = (long)plVar4;
          if (*(long **)(lVar1 + 0x18) == plVar5) {
            *(long **)(lVar1 + 0x18) = plVar11;
          }
          if ((plVar5 < *(long **)(lVar1 + 0x28)) ||
             (*(long **)(lVar1 + 0x28) + (ulong)*(uint *)(lVar1 + 0x30) * 3 <= plVar5)) {
            (*DAT_0442d150)(0);
          }
          else {
            *plVar5 = *(long *)(lVar1 + 0x20);
            *(long **)(lVar1 + 0x20) = plVar5;
          }
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
        }
        else {
          plVar4 = (long *)*plVar5;
          plVar5[1] = 0;
          *(undefined1 *)(lVar1 + 0x39) = 1;
          plVar11 = plVar5;
        }
        if (plVar4 == (long *)0x0) goto LAB_02f087bc;
      }
      plVar4 = (long *)*plVar5;
      plVar11 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
LAB_02f087bc:
  lVar1 = DAT_0440a138;
  if (param_2 == 0) {
LAB_02f08814:
    uVar3 = 1;
  }
  else {
    if (param_3 == 1) {
      if (param_1 != 0) {
        puVar9 = (undefined8 *)(DAT_0440a138 + 0x20);
        puVar2 = (undefined8 *)*puVar9;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x18);
          if (puVar2 == (undefined8 *)0x0) {
            return 2;
          }
          *puVar2 = *puVar9;
          *puVar9 = puVar2;
          puVar7 = *(undefined8 **)(lVar1 + 0x18);
          if (puVar7 != (undefined8 *)0x0) goto LAB_02f087e4;
LAB_02f0885c:
          *(undefined8 **)(lVar1 + 0x10) = puVar2;
        }
        else {
          puVar7 = *(undefined8 **)(DAT_0440a138 + 0x18);
          if (puVar7 == (undefined8 *)0x0) goto LAB_02f0885c;
LAB_02f087e4:
          *puVar7 = puVar2;
          puVar2 = (undefined8 *)*puVar9;
        }
        *(undefined8 **)(lVar1 + 0x18) = puVar2;
        *(undefined8 *)(lVar1 + 0x20) = *puVar2;
        *puVar2 = 0;
        lVar8 = *(long *)(lVar1 + 0x18);
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
        *(long *)(lVar8 + 8) = param_1;
        *(int *)(lVar8 + 0x10) = param_2;
        goto LAB_02f08814;
      }
    }
    else if (param_3 == 0) {
      uVar3 = FUN_02f0c76c(DAT_0440a130,param_1,param_2);
      return uVar3;
    }
    uVar3 = 0x1f;
  }
  return uVar3;
}


