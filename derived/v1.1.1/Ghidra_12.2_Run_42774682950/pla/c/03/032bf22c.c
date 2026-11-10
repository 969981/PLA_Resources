/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf22c; name: FUN_032bf22c
 */


void FUN_032bf22c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (iVar5 < 1) {
    uVar3 = 0;
  }
  else {
    puVar10 = (uint *)*puVar9;
    if (puVar10 == (uint *)0x0) {
      uVar3 = 0;
      puVar6 = puVar9;
    }
    else {
      puVar6 = puVar9 + 1;
      *puVar9 = puVar10;
      puVar10[1] = 0;
      uVar3 = *puVar10 & 0xffff;
    }
    uVar8 = (uint)(puVar10 != (uint *)0x0);
    if (iVar5 != 1) {
      puVar11 = (uint *)puVar9[1];
      if (puVar11 != (uint *)0x0) {
        if (puVar10 != (uint *)0x0) {
          *(uint **)(puVar10 + 2) = puVar11;
        }
        *puVar6 = puVar11;
        puVar11[1] = uVar8;
        uVar8 = uVar8 + 1;
        uVar3 = uVar3 + (*puVar11 & 0xffff);
        puVar10 = puVar11;
        puVar6 = puVar6 + 1;
      }
      if (iVar5 != 2) {
        puVar11 = (uint *)puVar9[2];
        if (puVar11 != (uint *)0x0) {
          if (puVar10 != (uint *)0x0) {
            *(uint **)(puVar10 + 2) = puVar11;
          }
          *puVar6 = puVar11;
          puVar11[1] = uVar8;
          uVar8 = uVar8 + 1;
          uVar3 = uVar3 + (*puVar11 & 0xffff);
          puVar6 = puVar6 + 1;
          puVar10 = puVar11;
        }
        if (iVar5 != 3) {
          puVar11 = (uint *)puVar9[3];
          if (puVar11 != (uint *)0x0) {
            if (puVar10 != (uint *)0x0) {
              *(uint **)(puVar10 + 2) = puVar11;
            }
            *puVar6 = puVar11;
            puVar11[1] = uVar8;
            uVar8 = uVar8 + 1;
            uVar3 = uVar3 + (*puVar11 & 0xffff);
            puVar6 = puVar6 + 1;
            puVar10 = puVar11;
          }
          if (iVar5 != 4) {
            iVar5 = iVar5 + -4;
            puVar9 = puVar9 + 4;
            puVar11 = (uint *)*puVar9;
            puVar7 = puVar6;
            if (puVar11 != (uint *)0x0) goto LAB_032bf43c;
            do {
              while( true ) {
                puVar9 = puVar9 + 1;
                iVar5 = iVar5 + -1;
                if (iVar5 == 0) goto LAB_032bf324;
                puVar11 = (uint *)*puVar9;
                puVar7 = puVar6;
                if (puVar11 == (uint *)0x0) break;
LAB_032bf43c:
                if (puVar10 != (uint *)0x0) {
                  *(uint **)(puVar10 + 2) = puVar11;
                }
                puVar6 = puVar7 + 1;
                *puVar7 = puVar11;
                puVar11[1] = uVar8;
                uVar8 = uVar8 + 1;
                uVar3 = uVar3 + (*puVar11 & 0xffff);
                puVar10 = puVar11;
              }
            } while( true );
          }
        }
      }
    }
LAB_032bf324:
    if (puVar10 != (uint *)0x0) {
      puVar10[2] = 0;
      puVar10[3] = 0;
    }
    puVar9 = puVar6;
  }
  *(uint *)(param_1 + 8) = uVar3;
  iVar5 = (int)((ulong)((long)puVar9 - *(long *)(param_1 + 0x10)) >> 3);
  if (*(int *)(param_1 + 0x18) != iVar5) {
    *(int *)(param_1 + 0x18) = iVar5;
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_2 + 0xb) + -1;
    if (*(int *)(param_2 + 0xb) < 1) {
      lVar4 = param_2[1];
      (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,lVar4,6);
      *(undefined4 *)(param_2 + 0xb) = 5;
      puVar9 = (undefined8 *)(lVar4 + 0x28);
    }
    else {
      *(int *)(param_2 + 0xb) = iVar5;
      puVar9 = (undefined8 *)(param_2[1] + (long)iVar5 * 8);
    }
    puVar9 = (undefined8 *)*puVar9;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(param_1 + 0x18);
    puVar2 = PTR_PTR_0434a080;
    iVar5 = *(int *)(param_1 + 0x18);
    puVar10 = (uint *)(param_1 + 0x1c);
    uVar8 = *puVar10;
    uVar3 = iVar5 + 1;
    if (iVar5 < (int)(uVar8 & 0x3fffffff)) {
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      if (0x3ffffffe < iVar5) {
        FUN_032bd0a8(uVar3);
        uVar8 = *puVar10;
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar1 = uVar3;
      if ((int)uVar3 <= (int)uVar8) {
        uVar1 = uVar8;
      }
      lVar4 = FUN_032bd1d4(puVar2,uVar1,8,uVar12,iVar5,puVar10);
      iVar5 = *(int *)(param_1 + 0x18);
      *(long *)(param_1 + 0x10) = lVar4;
    }
    *(undefined8 **)(lVar4 + (long)iVar5 * 8) = puVar9;
    *(uint *)(param_1 + 0x18) = uVar3;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


