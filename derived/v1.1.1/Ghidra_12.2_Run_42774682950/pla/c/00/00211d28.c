/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211d28; name: FUN_00211d28
 */


undefined8 FUN_00211d28(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar8 = -iVar3;
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 != 0) {
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0xd8) != 0) {
        iVar1 = (iVar3 * *(int *)(lVar6 + 0xd0)) / *(int *)(param_1 + 0xd8);
      }
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      *(int *)(lVar6 + 0xd0) = iVar1;
      if ((*(char *)(lVar6 + 0xe6) != '\0') &&
         (uVar2 = FUN_00211c18(*(undefined8 *)(param_1 + 0x70),param_1,lVar6), (int)uVar2 != 0)) {
        return uVar2;
      }
      lVar6 = *(long *)(lVar6 + 0x88);
      iVar8 = iVar1 + iVar8;
      if (lVar6 == 0) break;
      iVar3 = *(int *)(param_1 + 0xd0);
    }
  }
  plVar7 = (long *)(param_1 + 0x70);
  *(int *)(*plVar7 + 0xd8) = *(int *)(*plVar7 + 0xd8) + iVar8;
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN_00211e94(param_1);
  }
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x70);
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar4 == 0) {
        *(undefined8 *)(lVar6 + 0x78) = 0;
      }
      else {
        *(undefined8 *)(lVar4 + 0x80) = 0;
        *(long *)(lVar6 + 0x78) = lVar4;
        *(long *)(lVar4 + 0x70) = lVar6;
      }
      goto LAB_00211e74;
    }
    *(long *)(lVar6 + 0x78) = lVar4;
    *(long *)(lVar4 + 0x70) = lVar6;
    lVar5 = *plVar7;
    lVar6 = lVar4;
    do {
      *(long *)(lVar6 + 0x70) = lVar5;
      lVar6 = *(long *)(lVar6 + 0x88);
    } while (lVar6 != 0);
    lVar6 = *(long *)(param_1 + 0x88);
    if (lVar6 == 0) goto LAB_00211e74;
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x88);
    } while (*(long *)(lVar5 + 0x88) != 0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      *(long *)(lVar6 + 0x88) = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = lVar6;
      }
      goto LAB_00211e74;
    }
    *(long *)(lVar6 + 0x88) = lVar4;
    *(long *)(lVar4 + 0x80) = lVar6;
    lVar5 = *plVar7;
    lVar6 = lVar4;
    do {
      *(long *)(lVar6 + 0x70) = lVar5;
      lVar6 = *(long *)(lVar6 + 0x88);
    } while (lVar6 != 0);
    lVar6 = *(long *)(param_1 + 0x88);
    if (lVar6 == 0) goto LAB_00211e74;
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x88);
    } while (*(long *)(lVar5 + 0x88) != 0);
  }
  *(long *)(lVar5 + 0x88) = lVar6;
  *(long *)(lVar6 + 0x80) = lVar5;
LAB_00211e74:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}


