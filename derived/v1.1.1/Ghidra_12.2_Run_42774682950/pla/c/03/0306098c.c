/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306098c; name: FUN_0306098c
 */


void FUN_0306098c(long *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar5 = *(uint *)((long)param_1 + 0x1c);
  lVar7 = *param_1;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_030609bc;
    puVar9 = (undefined8 *)param_1[1];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_030609bc:
    puVar4 = (uint *)param_1[2];
    lVar6 = param_1[3];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  uVar5 = *(uint *)((long)param_1 + 0x44);
  lVar7 = param_1[5];
  *param_1 = 0;
  param_1[2] = 0;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_03060a14;
    puVar9 = (undefined8 *)param_1[6];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_03060a14:
    puVar4 = (uint *)param_1[7];
    lVar6 = param_1[8];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  uVar5 = *(uint *)((long)param_1 + 0x6c);
  lVar7 = param_1[10];
  param_1[5] = 0;
  param_1[7] = 0;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_03060a6c;
    puVar9 = (undefined8 *)param_1[0xb];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_03060a6c:
    puVar4 = (uint *)param_1[0xc];
    lVar6 = param_1[0xd];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  uVar5 = *(uint *)((long)param_1 + 0x94);
  lVar7 = param_1[0xf];
  param_1[10] = 0;
  param_1[0xc] = 0;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_03060ac4;
    puVar9 = (undefined8 *)param_1[0x10];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_03060ac4:
    puVar4 = (uint *)param_1[0x11];
    lVar6 = param_1[0x12];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  uVar5 = *(uint *)((long)param_1 + 0xbc);
  lVar7 = param_1[0x14];
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_03060b1c;
    puVar9 = (undefined8 *)param_1[0x15];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_03060b1c:
    puVar4 = (uint *)param_1[0x16];
    lVar6 = param_1[0x17];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  uVar5 = *(uint *)((long)param_1 + 0xec);
  lVar7 = param_1[0x1a];
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (iVar1 < 2) goto LAB_03060b74;
    puVar9 = (undefined8 *)param_1[0x1b];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = puVar9[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_03060b74:
    puVar4 = (uint *)param_1[0x1c];
    lVar6 = param_1[0x1d];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
    piVar3 = (int *)(lVar7 + 8);
  }
  *piVar3 = *piVar3 + uVar5;
  lVar7 = param_1[0x14];
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  if (lVar7 == 0) {
    lVar7 = param_1[0xf];
    if (lVar7 == 0) goto LAB_03060bc0;
LAB_03060f24:
    uVar5 = *(uint *)((long)param_1 + 0x94);
    if (uVar5 == 0) {
      piVar3 = (int *)(lVar7 + 0x18);
      iVar1 = *piVar3;
      if (iVar1 < 2) goto LAB_03060f40;
      lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar9 = (undefined8 *)param_1[0x10];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar6 = puVar9[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar5 = 0xffffffff;
    }
    else {
LAB_03060f40:
      piVar3 = (int *)(lVar7 + 8);
      puVar4 = (uint *)param_1[0x11];
      lVar7 = param_1[0x12];
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
      *puVar4 = *puVar4 & 0xffff | (int)lVar7 << 0x10;
    }
    *piVar3 = *piVar3 + uVar5;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    lVar7 = param_1[10];
    if (lVar7 != 0) goto LAB_03060f8c;
LAB_03060bc8:
    lVar7 = param_1[5];
    if (lVar7 == 0) goto LAB_03060bd0;
LAB_03060ff4:
    uVar5 = *(uint *)((long)param_1 + 0x44);
    if (uVar5 == 0) {
      piVar3 = (int *)(lVar7 + 0x18);
      iVar1 = *piVar3;
      if (iVar1 < 2) goto LAB_03061010;
      lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar9 = (undefined8 *)param_1[6];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar6 = puVar9[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar5 = 0xffffffff;
    }
    else {
LAB_03061010:
      piVar3 = (int *)(lVar7 + 8);
      puVar4 = (uint *)param_1[7];
      lVar7 = param_1[8];
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
      *puVar4 = *puVar4 & 0xffff | (int)lVar7 << 0x10;
    }
    *piVar3 = *piVar3 + uVar5;
    param_1[5] = 0;
    param_1[7] = 0;
    lVar7 = *param_1;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xbc);
    if (uVar5 == 0) {
      piVar3 = (int *)(lVar7 + 0x18);
      iVar1 = *piVar3;
      if (iVar1 < 2) goto LAB_03060ed8;
      lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar9 = (undefined8 *)param_1[0x15];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar6 = puVar9[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar5 = 0xffffffff;
    }
    else {
LAB_03060ed8:
      piVar3 = (int *)(lVar7 + 8);
      puVar4 = (uint *)param_1[0x16];
      lVar7 = param_1[0x17];
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
      *puVar4 = *puVar4 & 0xffff | (int)lVar7 << 0x10;
    }
    *piVar3 = *piVar3 + uVar5;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    lVar7 = param_1[0xf];
    if (lVar7 != 0) goto LAB_03060f24;
LAB_03060bc0:
    lVar7 = param_1[10];
    if (lVar7 == 0) goto LAB_03060bc8;
LAB_03060f8c:
    uVar5 = *(uint *)((long)param_1 + 0x6c);
    if (uVar5 == 0) {
      piVar3 = (int *)(lVar7 + 0x18);
      iVar1 = *piVar3;
      if (iVar1 < 2) goto LAB_03060fa8;
      lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar9 = (undefined8 *)param_1[0xb];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar6 = puVar9[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar5 = 0xffffffff;
    }
    else {
LAB_03060fa8:
      piVar3 = (int *)(lVar7 + 8);
      puVar4 = (uint *)param_1[0xc];
      lVar7 = param_1[0xd];
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
      *puVar4 = *puVar4 & 0xffff | (int)lVar7 << 0x10;
    }
    *piVar3 = *piVar3 + uVar5;
    param_1[10] = 0;
    param_1[0xc] = 0;
    lVar7 = param_1[5];
    if (lVar7 != 0) goto LAB_03060ff4;
LAB_03060bd0:
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    return;
  }
  uVar5 = *(uint *)((long)param_1 + 0x1c);
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (1 < iVar1) {
      lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar9 = (undefined8 *)param_1[1];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar6 = puVar9[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar5 = 0xffffffff;
      goto LAB_030610a4;
    }
  }
  piVar3 = (int *)(lVar7 + 8);
  puVar4 = (uint *)param_1[2];
  lVar7 = param_1[3];
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
  *puVar4 = *puVar4 & 0xffff | (int)lVar7 << 0x10;
LAB_030610a4:
  *piVar3 = *piVar3 + uVar5;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}


