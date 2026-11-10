/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b93df4; name: FUN_02b93df4
 */


void FUN_02b93df4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  plVar2 = param_2;
  if (param_3 == param_1) {
LAB_02b940c0:
    param_2 = plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != (long *)0x0) goto LAB_02b93e2c;
    do {
      do {
        plVar2 = param_3;
        plVar3 = (long *)plVar2[1];
        if (plVar3 != param_2) {
          if ((int)plVar3[3] == 0) {
            *(undefined4 *)(plVar3 + 3) = 1;
            plVar4 = (long *)*plVar2;
            *(undefined4 *)(plVar2 + 3) = 0;
            plVar7 = (long *)plVar4[1];
            puVar8 = (undefined8 *)plVar3[2];
            plVar2[1] = (long)puVar8;
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = plVar2;
            }
            plVar3[2] = (long)plVar2;
            plVar1 = plVar4 + 1;
            if (plVar7 != plVar2) {
              plVar1 = plVar4 + 2;
            }
            *plVar2 = (long)plVar3;
            *plVar3 = (long)plVar4;
            plVar7 = param_1;
            if (plVar4 != param_1) {
              plVar7 = plVar1;
            }
            *plVar7 = (long)plVar3;
            plVar3 = (long *)plVar2[1];
            lVar5 = plVar3[1];
            puVar8 = (undefined8 *)plVar3[2];
            if (puVar8 == (undefined8 *)0x0) goto LAB_02b93ed0;
LAB_02b93ec4:
            if (*(int *)(puVar8 + 3) == 1) goto LAB_02b93ed0;
            if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) {
              *(undefined4 *)(puVar8 + 3) = 1;
              plVar4 = (long *)*plVar3;
              *(undefined4 *)(plVar3 + 3) = 0;
              plVar7 = (long *)plVar4[1];
              puVar6 = (undefined8 *)puVar8[1];
              plVar3[2] = (long)puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = plVar3;
              }
              puVar8[1] = plVar3;
              *plVar3 = (long)puVar8;
              plVar1 = plVar4 + 1;
              if (plVar7 != plVar3) {
                plVar1 = plVar4 + 2;
              }
              plVar3 = param_1;
              if (plVar4 != param_1) {
                plVar3 = plVar1;
              }
              *puVar8 = plVar4;
              *plVar3 = (long)puVar8;
              plVar3 = (long *)plVar2[1];
            }
          }
          else {
            lVar5 = plVar3[1];
            puVar8 = (undefined8 *)plVar3[2];
            if (puVar8 != (undefined8 *)0x0) goto LAB_02b93ec4;
LAB_02b93ed0:
            if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) goto LAB_02b93e10;
          }
          *(int *)(plVar3 + 3) = (int)plVar2[3];
          *(undefined4 *)(plVar2 + 3) = 1;
          if (plVar3[1] != 0) {
            *(undefined4 *)(plVar3[1] + 0x18) = 1;
          }
          plVar3 = (long *)*plVar2;
          puVar8 = (undefined8 *)plVar2[1];
          plVar4 = (long *)plVar3[1];
          puVar6 = (undefined8 *)puVar8[2];
          plVar2[1] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = plVar2;
          }
          puVar8[2] = plVar2;
LAB_02b94090:
          *plVar2 = (long)puVar8;
          *puVar8 = plVar3;
          if (plVar3 == param_1) {
            *param_1 = (long)puVar8;
          }
          else if (plVar4 == plVar2) {
            plVar3[1] = (long)puVar8;
          }
          else {
            plVar3[2] = (long)puVar8;
          }
          plVar2 = param_2;
          goto LAB_02b940c0;
        }
        plVar3 = (long *)plVar2[2];
        if ((int)plVar3[3] == 0) {
          *(undefined4 *)(plVar3 + 3) = 1;
          plVar4 = (long *)*plVar2;
          *(undefined4 *)(plVar2 + 3) = 0;
          plVar7 = (long *)plVar4[1];
          puVar8 = (undefined8 *)plVar3[1];
          plVar2[2] = (long)puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar2;
          }
          plVar3[1] = (long)plVar2;
          plVar1 = plVar4 + 1;
          if (plVar7 != plVar2) {
            plVar1 = plVar4 + 2;
          }
          *plVar2 = (long)plVar3;
          *plVar3 = (long)plVar4;
          plVar7 = param_1;
          if (plVar4 != param_1) {
            plVar7 = plVar1;
          }
          *plVar7 = (long)plVar3;
          plVar3 = (long *)plVar2[2];
          puVar8 = (undefined8 *)plVar3[1];
          lVar5 = plVar3[2];
          if (puVar8 == (undefined8 *)0x0) goto LAB_02b93f44;
LAB_02b93f38:
          if (*(int *)(puVar8 + 3) == 1) goto LAB_02b93f44;
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) {
            *(undefined4 *)(puVar8 + 3) = 1;
            plVar4 = (long *)*plVar3;
            *(undefined4 *)(plVar3 + 3) = 0;
            plVar7 = (long *)plVar4[1];
            puVar6 = (undefined8 *)puVar8[2];
            plVar3[1] = (long)puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = plVar3;
            }
            puVar8[2] = plVar3;
            *plVar3 = (long)puVar8;
            plVar1 = plVar4 + 1;
            if (plVar7 != plVar3) {
              plVar1 = plVar4 + 2;
            }
            plVar3 = param_1;
            if (plVar4 != param_1) {
              plVar3 = plVar1;
            }
            *puVar8 = plVar4;
            *plVar3 = (long)puVar8;
            plVar3 = (long *)plVar2[2];
          }
LAB_02b94054:
          *(int *)(plVar3 + 3) = (int)plVar2[3];
          *(undefined4 *)(plVar2 + 3) = 1;
          if (plVar3[2] != 0) {
            *(undefined4 *)(plVar3[2] + 0x18) = 1;
          }
          puVar8 = (undefined8 *)plVar2[2];
          plVar3 = (long *)*plVar2;
          plVar4 = (long *)plVar3[1];
          puVar6 = (undefined8 *)puVar8[1];
          plVar2[2] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = plVar2;
          }
          puVar8[1] = plVar2;
          goto LAB_02b94090;
        }
        puVar8 = (undefined8 *)plVar3[1];
        lVar5 = plVar3[2];
        if (puVar8 != (undefined8 *)0x0) goto LAB_02b93f38;
LAB_02b93f44:
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 1)) goto LAB_02b94054;
LAB_02b93e10:
        *(undefined4 *)(plVar3 + 3) = 0;
        param_3 = (long *)*plVar2;
        if (param_3 == param_1) goto LAB_02b940c0;
        param_2 = plVar2;
      } while (plVar2 == (long *)0x0);
LAB_02b93e2c:
    } while ((int)param_2[3] == 1);
  }
  *(undefined4 *)(param_2 + 3) = 1;
  return;
}


