/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cb71c; name: FUN_013cb71c
 */


undefined4 FUN_013cb71c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  
  lVar12 = *param_1;
  if (*(int *)(lVar12 + 0x700) == 0) {
    lVar15 = *(long *)(lVar12 + 0x5c8);
  }
  else {
    if (*(int *)(lVar12 + 0x700) != 1) goto LAB_013cb884;
    lVar15 = *(long *)(lVar12 + 0x5e8);
  }
  if (lVar15 != 0) {
    if ((ulong)((*(long *)(lVar15 + 0x10) - *(long *)(lVar15 + 8) >> 2) * -0x79435e50d79435e5) <
        (ulong)*(uint *)(param_1 + 1)) {
      uVar14 = 0;
    }
    else {
      puVar13 = (undefined8 *)(*(long *)(lVar15 + 8) + (ulong)*(uint *)(param_1 + 1) * 0x4c);
      uVar1 = puVar13[1];
      uVar5 = puVar13[2];
      uVar2 = puVar13[3];
      uVar6 = puVar13[4];
      uVar3 = puVar13[7];
      uVar7 = puVar13[8];
      uVar4 = puVar13[5];
      uVar8 = puVar13[6];
      cVar9 = *(char *)(puVar13 + 9);
      uVar10 = *(undefined1 *)((long)puVar13 + 0x49);
      uVar11 = *(undefined2 *)((long)puVar13 + 0x4a);
      *(undefined8 *)(lVar12 + 0x61c) = *puVar13;
      *(undefined8 *)(lVar12 + 0x63c) = uVar6;
      *(undefined8 *)(lVar12 + 0x634) = uVar2;
      *(undefined8 *)(lVar12 + 0x62c) = uVar5;
      *(undefined8 *)(lVar12 + 0x624) = uVar1;
      *(undefined8 *)(lVar12 + 0x65c) = uVar7;
      *(undefined8 *)(lVar12 + 0x654) = uVar3;
      *(undefined8 *)(lVar12 + 0x64c) = uVar8;
      *(undefined8 *)(lVar12 + 0x644) = uVar4;
      *(char *)(lVar12 + 0x664) = cVar9;
      *(undefined1 *)(lVar12 + 0x665) = uVar10;
      if (*(char *)(lVar12 + 0x618) == '\0') {
        *(undefined2 *)(lVar12 + 0x666) = uVar11;
        *(undefined1 *)(lVar12 + 0x618) = 1;
      }
      uVar14 = 1;
      if (cVar9 != '\0') {
        uVar14 = 2;
      }
      *(int *)(lVar12 + 0x66c) = (int)param_1[1];
      *(undefined1 *)(lVar12 + 0x668) = 1;
    }
    return uVar14;
  }
LAB_013cb884:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


