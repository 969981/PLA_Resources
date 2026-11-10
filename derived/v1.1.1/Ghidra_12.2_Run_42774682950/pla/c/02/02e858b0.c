/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e858b0; name: FUN_02e858b0
 */


void FUN_02e858b0(long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)(param_1 + 0x50);
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      puVar8 = (undefined8 *)0x0;
      lVar5 = puVar7[2];
      if (param_5 != 0) goto LAB_02e8592c;
      do {
        uVar1 = FUN_02e84f60(*(undefined8 *)(lVar5 + 8),param_3);
        if ((uVar1 & 1) != 0) goto LAB_02e85914;
        if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
          *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
          goto LAB_02e85914;
        }
        FUN_02e84578(param_1,lVar5);
        puVar2 = (undefined8 *)*puVar7;
        puVar3 = puVar6;
        if (*(undefined8 **)(param_1 + 0x50) != puVar7) {
          puVar3 = puVar8;
        }
        *puVar3 = puVar2;
        if (*(undefined8 **)(param_1 + 0x58) == puVar7) {
          *(undefined8 **)(param_1 + 0x58) = puVar8;
        }
        *puVar7 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar7;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        puVar7 = puVar8;
        while( true ) {
          if (puVar2 == (undefined8 *)0x0) goto LAB_02e85af0;
          lVar5 = puVar2[2];
          puVar8 = puVar7;
          puVar7 = puVar2;
          if (param_5 == 0) break;
LAB_02e8592c:
          if (*(int *)(lVar5 + 0x30) == param_5) break;
LAB_02e85914:
          puVar2 = (undefined8 *)*puVar7;
        }
      } while( true );
    }
    if (param_5 == 0) {
      puVar8 = (undefined8 *)0x0;
      do {
        lVar5 = puVar7[2];
        if ((*(long *)(lVar5 + 0x40) == param_2) &&
           (uVar1 = FUN_02e84f60(*(undefined8 *)(lVar5 + 8),param_3), (uVar1 & 1) == 0)) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            goto LAB_02e85a6c;
          }
          FUN_02e84578(param_1,lVar5);
          puVar3 = (undefined8 *)*puVar7;
          puVar2 = puVar6;
          if (*(undefined8 **)(param_1 + 0x50) != puVar7) {
            puVar2 = puVar8;
          }
          *puVar2 = puVar3;
          if (*(undefined8 **)(param_1 + 0x58) == puVar7) {
            *(undefined8 **)(param_1 + 0x58) = puVar8;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar7;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          puVar7 = puVar8;
        }
        else {
LAB_02e85a6c:
          puVar3 = (undefined8 *)*puVar7;
        }
        puVar8 = puVar7;
        puVar7 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    else {
      puVar8 = (undefined8 *)0x0;
      do {
        puVar3 = puVar7;
        lVar5 = puVar3[2];
        if (((*(long *)(lVar5 + 0x40) == param_2) && (*(int *)(lVar5 + 0x30) == param_5)) &&
           (uVar1 = FUN_02e84f60(*(undefined8 *)(lVar5 + 8),param_3), (uVar1 & 1) == 0)) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            goto LAB_02e859bc;
          }
          FUN_02e84578(param_1,lVar5);
          puVar7 = (undefined8 *)*puVar3;
          puVar2 = puVar6;
          if (*(undefined8 **)(param_1 + 0x50) != puVar3) {
            puVar2 = puVar8;
          }
          *puVar2 = puVar7;
          if (*(undefined8 **)(param_1 + 0x58) == puVar3) {
            *(undefined8 **)(param_1 + 0x58) = puVar8;
          }
          *puVar3 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar3;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          puVar3 = puVar8;
        }
        else {
LAB_02e859bc:
          puVar7 = (undefined8 *)*puVar3;
        }
        puVar8 = puVar3;
      } while (puVar7 != (undefined8 *)0x0);
    }
  }
LAB_02e85af0:
  plVar4 = *(long **)(DAT_0440a128 + 0x28);
  if (plVar4 != (long *)0x0) {
    if (param_2 == 0) {
      if (param_5 == 0) {
        do {
          lVar5 = *(long *)(plVar4[2] + 8);
          uVar1 = FUN_02e84f60(lVar5,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar5 + 0x34) == 0x503)) {
            FUN_02e8dfec(lVar5);
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          if (*(int *)(plVar4[2] + 0x30) == param_5) {
            lVar5 = *(long *)(plVar4[2] + 8);
            uVar1 = FUN_02e84f60(lVar5,param_3);
            if (((uVar1 & 1) == 0) && (*(short *)(lVar5 + 0x34) == 0x503)) {
              FUN_02e8dfec(lVar5);
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        if (*(long *)(plVar4[2] + 0x40) == param_2) {
          lVar5 = *(long *)(plVar4[2] + 8);
          uVar1 = FUN_02e84f60(lVar5,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar5 + 0x34) == 0x503)) {
            FUN_02e8dfec(lVar5);
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        lVar5 = plVar4[2];
        if ((*(long *)(lVar5 + 0x40) == param_2) && (*(int *)(lVar5 + 0x30) == param_5)) {
          lVar5 = *(long *)(lVar5 + 8);
          uVar1 = FUN_02e84f60(lVar5,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar5 + 0x34) == 0x503)) {
            FUN_02e8dfec(lVar5);
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}


