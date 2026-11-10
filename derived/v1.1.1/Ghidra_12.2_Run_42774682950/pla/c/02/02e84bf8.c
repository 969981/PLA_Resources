/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e84bf8; name: FUN_02e84bf8
 */


void FUN_02e84bf8(long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 != (long *)0x0) {
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
        do {
          lVar3 = plVar4[2];
          lVar7 = *(long *)(lVar3 + 8);
          if ((*(char *)(lVar7 + 0x35) != '\x03') &&
             ((((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)) &&
               (uVar1 = FUN_02e84f60(lVar7,param_3), (uVar1 & 1) == 0)) &&
              (*(short *)(lVar7 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          lVar3 = plVar4[2];
          lVar7 = *(long *)(lVar3 + 8);
          if ((((*(char *)(lVar7 + 0x35) != '\x03') && (*(long *)(lVar3 + 0x40) == param_2)) &&
              ((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)))) &&
             ((uVar1 = FUN_02e84f60(lVar7,param_3), (uVar1 & 1) == 0 &&
              (*(short *)(lVar7 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else if (param_2 == 0) {
      do {
        lVar3 = plVar4[2];
        lVar7 = *(long *)(lVar3 + 8);
        if ((((param_5 == 0) || (*(int *)(lVar3 + 0x30) == param_5)) &&
            (uVar1 = FUN_02e84f60(lVar7,param_3), (uVar1 & 1) == 0)) &&
           (*(short *)(lVar7 + 0x34) != 0x1820)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        lVar7 = plVar4[2];
        if (((*(long *)(lVar7 + 0x40) == param_2) &&
            ((lVar3 = *(long *)(lVar7 + 8), param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5))))
           && ((uVar1 = FUN_02e84f60(lVar3,param_3), (uVar1 & 1) == 0 &&
               (*(short *)(lVar3 + 0x34) != 0x1820)))) {
          *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0x28);
  puVar6 = (undefined8 *)*puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    if ((param_4 & 1) == 0) {
      do {
        while( true ) {
          lVar7 = puVar6[2];
          lVar3 = *(long *)(lVar7 + 8);
          if (((*(char *)(lVar3 + 0x35) != '\x03') &&
              ((param_2 == 0 || (*(long *)(lVar7 + 0x40) == param_2)))) &&
             (((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)) &&
              ((uVar1 = FUN_02e84f60(lVar3,param_3), (uVar1 & 1) == 0 &&
               (*(short *)(lVar3 + 0x34) != 0x1820)))))) break;
          puVar9 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
          puVar6 = puVar9;
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
        }
        FUN_02e8425c(param_1,*(undefined4 *)(lVar3 + 0x30),lVar7,0);
        puVar2 = (undefined8 *)*puVar6;
        puVar9 = puVar5;
        if (*(undefined8 **)(param_1 + 0x28) != puVar6) {
          puVar9 = puVar8;
        }
        *puVar9 = puVar2;
        if (*(undefined8 **)(param_1 + 0x30) == puVar6) {
          *(undefined8 **)(param_1 + 0x30) = puVar8;
        }
        *puVar6 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar6;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        puVar6 = puVar2;
      } while (puVar2 != (undefined8 *)0x0);
    }
    else {
      do {
        lVar7 = puVar6[2];
        lVar3 = *(long *)(lVar7 + 8);
        if ((((param_2 == 0) || (*(long *)(lVar7 + 0x40) == param_2)) &&
            ((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)))) &&
           ((uVar1 = FUN_02e84f60(lVar3,param_3), (uVar1 & 1) == 0 &&
            (*(short *)(lVar3 + 0x34) != 0x1820)))) {
          FUN_02e8425c(param_1,*(undefined4 *)(lVar3 + 0x30),lVar7,0);
          puVar9 = (undefined8 *)*puVar6;
          puVar2 = puVar5;
          if (*(undefined8 **)(param_1 + 0x28) != puVar6) {
            puVar2 = puVar8;
          }
          *puVar2 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar6) {
            *(undefined8 **)(param_1 + 0x30) = puVar8;
          }
          *puVar6 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar6;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        else {
          puVar9 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
        }
        puVar6 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return;
}


