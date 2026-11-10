/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c6360c; name: FUN_02c6360c
 */


void FUN_02c6360c(long param_1,int param_2,int param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  uVar7 = 0;
  if (iVar2 != param_2) {
    uVar7 = 1;
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
    if (iVar2 != param_2) {
      uVar7 = 2;
      iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
      if (iVar2 != param_2) {
        uVar7 = 3;
        iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
        if (iVar2 != param_2) {
          return;
        }
      }
    }
  }
  bVar1 = FUN_02c6b51c(*(undefined8 *)(param_1 + 0x98),uVar7);
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),uVar7,param_3);
  uVar3 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),uVar7);
  lVar6 = (&DAT_0428af30)[(uVar3 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar5 = &DAT_0428af30 + (uVar3 & 0xffffffff) * 6;
    }
  }
  piVar4 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) ||
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9], uVar3 == 0)) {
    if (bVar1 == 0) goto LAB_02c6372c;
  }
  else if (bVar1 <= *(byte *)((long)piVar4 + uVar3)) goto LAB_02c6372c;
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),uVar7);
LAB_02c6372c:
  if (param_4 != 0) {
    piVar4 = (int *)(param_4 + 0x18);
    if ((((*piVar4 == 0) || (piVar4 = (int *)(param_4 + 0x1c), *piVar4 == 0)) ||
        (piVar4 = (int *)(param_4 + 0x20), *piVar4 == 0)) ||
       (piVar4 = (int *)(param_4 + 0x24), *piVar4 == 0)) {
      *piVar4 = param_2;
    }
    piVar4 = (int *)(param_4 + 8);
    if (((*piVar4 != 0) && (piVar4 = (int *)(param_4 + 0xc), *piVar4 != 0)) &&
       ((piVar4 = (int *)(param_4 + 0x10), *piVar4 != 0 &&
        (piVar4 = (int *)(param_4 + 0x14), *piVar4 != 0)))) {
      return;
    }
    *piVar4 = param_3;
  }
  return;
}


