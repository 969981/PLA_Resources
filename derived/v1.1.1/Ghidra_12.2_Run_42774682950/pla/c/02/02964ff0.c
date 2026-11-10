/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02964ff0; name: FUN_02964ff0
 */


void FUN_02964ff0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 0x14c8);
  lVar5 = -0x14c0;
  *(undefined8 *)(param_1 + 0x14d0) = 0;
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  do {
    lVar6 = *(long *)(param_1 + lVar5 + 0x14c8);
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)(lVar6 + 0x18);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x18) = lVar9;
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x10) = lVar8;
    }
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(long *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    lVar8 = *(long *)(param_1 + 0x14d0);
    *(long *)(lVar6 + 0x18) = lVar8;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar6;
    }
    lVar5 = lVar5 + 0x20;
    *(long *)(param_1 + 0x14d0) = lVar6;
  } while (lVar5 != 0);
  lVar5 = -0x14c0;
  do {
    lVar6 = *(long *)(param_2 + lVar5 + 0x14c8);
    lVar8 = *(long *)(param_1 + lVar5 + 0x14c8);
    lVar5 = lVar5 + 0x20;
    *(undefined2 *)(lVar8 + 8) = *(undefined2 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar8 + 0x38) = uVar4;
    *(undefined8 *)(lVar8 + 0x20) = uVar2;
    *(undefined8 *)(lVar8 + 0x28) = uVar3;
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
    uVar3 = *(undefined8 *)(lVar6 + 0x48);
    uVar4 = *(undefined8 *)(lVar6 + 0x58);
    *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
    *(undefined8 *)(lVar8 + 0x58) = uVar4;
    *(undefined8 *)(lVar8 + 0x40) = uVar2;
    *(undefined8 *)(lVar8 + 0x48) = uVar3;
  } while (lVar5 != 0);
  lVar5 = *(long *)(param_2 + 0x14c8);
joined_r0x029650b4:
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x14d0);
  if (lVar6 != 0) {
    lVar8 = lVar6;
    do {
      if (*(short *)(lVar8 + 8) == *(short *)(lVar5 + 8)) {
        lVar9 = lVar8;
        if (lVar6 == lVar8) {
          *(undefined8 *)(param_1 + 0x14d0) = *(undefined8 *)(lVar6 + 0x18);
          lVar9 = lVar6;
        }
        plVar7 = (long *)(lVar9 + 0x10);
        lVar6 = *plVar7;
        lVar10 = *(long *)(lVar8 + 0x18);
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x18) = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar6;
        }
        *plVar7 = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        lVar6 = *plVar1;
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x34) < *(uint *)(lVar9 + 0x34)) {
            *(long *)(lVar8 + 0x18) = lVar6;
            *(long *)(lVar6 + 0x10) = lVar9;
            *plVar1 = lVar9;
            lVar5 = *(long *)(lVar5 + 0x18);
            goto joined_r0x029650b4;
          }
          lVar10 = *(long *)(lVar6 + 0x18);
          if (*(long *)(lVar6 + 0x18) != 0) goto LAB_02965160;
          *(long *)(lVar6 + 0x18) = lVar9;
          goto LAB_02965188;
        }
        *plVar1 = lVar9;
        break;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
    } while (lVar8 != 0);
  }
  goto LAB_029650c0;
  while (lVar10 = *(long *)(lVar6 + 0x18), *(long *)(lVar6 + 0x18) != 0) {
LAB_02965160:
    lVar6 = lVar10;
    if (*(uint *)(lVar6 + 0x34) < *(uint *)(lVar9 + 0x34)) {
      lVar10 = *(long *)(lVar6 + 0x10);
      *(long *)(lVar10 + 0x18) = lVar9;
      if (lVar9 != 0) {
        *plVar7 = lVar10;
      }
      *(long *)(lVar8 + 0x18) = lVar6;
      *(long *)(lVar6 + 0x10) = lVar9;
      lVar5 = *(long *)(lVar5 + 0x18);
      goto joined_r0x029650b4;
    }
  }
  *(long *)(lVar6 + 0x18) = lVar9;
  if (lVar9 == 0) {
LAB_029650c0:
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  else {
LAB_02965188:
    *plVar7 = lVar6;
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  goto joined_r0x029650b4;
}


