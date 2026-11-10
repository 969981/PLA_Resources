/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e83a14; name: FUN_02e83a14
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02e83a14(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar6 = (long *)(param_1 + 0x50);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)0x0;
      do {
        lVar5 = plVar8[2];
        plVar1 = (long *)FUN_02e8766c(*(undefined8 *)(lVar5 + 8));
        if (((param_3 == 0) || (*(long *)(lVar5 + 0x40) == param_3)) &&
           ((param_5 == 0 || (*(int *)(lVar5 + 0x30) == param_5)))) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            goto LAB_02e83cb0;
          }
          FUN_02e84578(param_1,lVar5);
          plVar4 = (long *)*plVar8;
          plVar2 = plVar6;
          if (*(long **)(param_1 + 0x50) != plVar8) {
            plVar2 = plVar3;
          }
          *plVar2 = (long)plVar4;
          if (*(long **)(param_1 + 0x58) == plVar8) {
            *(long **)(param_1 + 0x58) = plVar3;
          }
          *plVar8 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar8;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_02e83cb0:
          plVar4 = (long *)*plVar8;
          plVar3 = plVar8;
        }
        plVar8 = plVar4;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      } while (plVar8 != (long *)0x0);
    }
    else {
      plVar3 = (long *)0x0;
      do {
        lVar5 = plVar8[2];
        plVar1 = (long *)FUN_02e8766c(*(undefined8 *)(lVar5 + 8));
        if (plVar1 == (long *)0x0) {
LAB_02e83b8c:
          plVar4 = (long *)*plVar8;
          plVar3 = plVar8;
        }
        else {
          if (plVar1 != param_2) {
            plVar2 = (long *)plVar1[0x11];
            for (plVar4 = (long *)plVar1[0x10]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0x10]
                ) {
              if (plVar4 == param_2) goto LAB_02e83d68;
              if (plVar2 == (long *)0x0) {
                plVar2 = (long *)plVar4[0x11];
              }
            }
            for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0x11]) {
              if (plVar2 == param_2) goto LAB_02e83d68;
            }
            goto LAB_02e83b8c;
          }
LAB_02e83d68:
          if (((param_3 != 0) && (*(long *)(lVar5 + 0x40) != param_3)) ||
             ((param_5 != 0 && (*(int *)(lVar5 + 0x30) != param_5)))) goto LAB_02e83b8c;
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            plVar4 = (long *)*plVar8;
            plVar3 = plVar8;
          }
          else {
            FUN_02e84578(param_1,lVar5);
            plVar4 = (long *)*plVar8;
            plVar2 = plVar6;
            if (*(long **)(param_1 + 0x50) != plVar8) {
              plVar2 = plVar3;
            }
            *plVar2 = (long)plVar4;
            if (*(long **)(param_1 + 0x58) == plVar8) {
              *(long **)(param_1 + 0x58) = plVar3;
            }
            *plVar8 = *(long *)(param_1 + 0x60);
            *(long **)(param_1 + 0x60) = plVar8;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          }
        }
        plVar8 = plVar4;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
        }
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      lVar7 = plVar8[2];
      lVar5 = *(long *)(lVar7 + 8);
      plVar6 = (long *)FUN_02e8766c(lVar5);
      if ((((param_3 == 0) || (*(long *)(lVar7 + 0x40) == param_3)) &&
          ((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)))) &&
         (*(short *)(lVar5 + 0x34) == 0x503)) {
        FUN_02e8dfec(lVar5);
        plVar8 = (long *)*plVar8;
      }
      else {
        plVar8 = (long *)*plVar8;
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      while (plVar8 != (long *)0x0) {
        lVar7 = plVar8[2];
        lVar5 = *(long *)(lVar7 + 8);
        plVar6 = (long *)FUN_02e8766c(lVar5);
        if ((((param_3 == 0) || (*(long *)(lVar7 + 0x40) == param_3)) &&
            ((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)))) &&
           (*(short *)(lVar5 + 0x34) == 0x503)) {
          FUN_02e8dfec(lVar5);
          plVar8 = (long *)*plVar8;
        }
        else {
          plVar8 = (long *)*plVar8;
        }
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
    else {
      do {
        while( true ) {
          lVar7 = plVar8[2];
          lVar5 = *(long *)(lVar7 + 8);
          plVar6 = (long *)FUN_02e8766c(lVar5);
          if (plVar6 == (long *)0x0) break;
          if (plVar6 == param_2) {
LAB_02e83af4:
            if ((((param_3 == 0) || (*(long *)(lVar7 + 0x40) == param_3)) &&
                ((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)))) &&
               (*(short *)(lVar5 + 0x34) == 0x503)) {
              FUN_02e8dfec(lVar5);
            }
          }
          else {
            plVar1 = (long *)plVar6[0x11];
            for (plVar3 = (long *)plVar6[0x10]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0x10]
                ) {
              if (plVar3 == param_2) goto LAB_02e83af4;
              if (plVar1 == (long *)0x0) {
                plVar1 = (long *)plVar3[0x11];
              }
            }
            for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x11]) {
              if (plVar1 == param_2) goto LAB_02e83af4;
            }
          }
          plVar8 = (long *)*plVar8;
          (**(code **)(*plVar6 + 0x18))(plVar6);
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


