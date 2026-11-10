/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010b930; name: FUN_0010b930
 */


undefined8 FUN_0010b930(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  uint local_d0 [32];
  
  puVar18 = (undefined2 *)param_1[0x56];
  if (*(int *)(param_1 + 0x51) < 2) {
    *param_1 = 0;
    *puVar18 = (short)*(undefined4 *)(param_1 + 0x52);
    return 1;
  }
  uVar2 = *(uint *)((long)param_1 + 0x29c);
  if ((int)uVar2 < 0x1f) {
    uVar14 = *(uint *)(param_1 + 0x53);
    uVar19 = (ulong)uVar14;
    if (((int)uVar14 < 1) || (uVar2 == 0)) goto LAB_0010bb88;
    iVar3 = *(int *)((long)param_1 + 0x294);
    memset(param_1 + 0x20,0,uVar19 << 3);
    local_d0[(int)uVar14] = 0;
    if ((int)uVar14 <= (int)uVar2) {
      iVar12 = 0;
      iVar13 = 0;
      iVar3 = iVar3 + 1;
      uVar14 = 0x40 - uVar14;
      do {
        uVar16 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
        param_1[(int)uVar19] = (ulong)(uint)(iVar13 - iVar12);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar14 - 1;
        uVar15 = (ulong)(uint)(*(int *)((long)param_1 + uVar16 + 0x200) + iVar13);
        *(int *)((long)local_d0 + uVar16) = iVar12;
        (param_1 + (int)uVar19)[0x20] = uVar15 << (uVar17 & 0x3f);
        iVar4 = *(int *)((long)param_1 + uVar16 + 0x200);
        uVar1 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar1;
        iVar12 = iVar4 + iVar12;
        iVar13 = (iVar4 + iVar13) * 2;
      } while ((int)uVar1 <= (int)uVar2);
      if (1L << ((ulong)uVar2 & 0x3f) == uVar15) {
        if ((int)uVar2 < 0x20) {
          memset(param_1 + (long)(int)uVar2 + 0x20,0xff,(ulong)(0x1f - uVar2) * 8 + 8);
        }
        lVar10 = param_1[0x54];
        local_d0[0] = *(uint *)(param_1 + 0x51);
        uVar19 = (long)iVar3 & 0xfffffffffffffffc;
        iVar12 = (int)uVar19;
        if (0 < iVar12) {
          iVar13 = 0;
          do {
            uVar2 = *(uint *)(lVar10 + iVar13);
            if (uVar2 != 0) {
              uVar14 = local_d0[uVar2 & 0xff];
              local_d0[uVar2 & 0xff] = uVar14 + 1;
              uVar1 = (uVar2 & 0xff00ff00) >> 8 & 0xff;
              uVar6 = (ushort)iVar13;
              puVar18[uVar14] = uVar6;
              uVar14 = local_d0[uVar1];
              local_d0[uVar1] = uVar14 + 1;
              uVar1 = (uVar2 & 0xff00ff) >> 0x10;
              puVar18[uVar14] = uVar6 | 1;
              uVar14 = local_d0[uVar1];
              local_d0[uVar1] = uVar14 + 1;
              puVar18[uVar14] = uVar6 | 2;
              uVar14 = local_d0[uVar2 >> 0x18];
              local_d0[uVar2 >> 0x18] = uVar14 + 1;
              puVar18[uVar14] = uVar6 | 3;
            }
            iVar13 = iVar13 + 4;
          } while (iVar13 < iVar12);
        }
        if (iVar12 < iVar3) {
          uVar15 = (ulong)iVar3;
          uVar16 = ~uVar19;
          if ((uVar15 & 1) != 0) {
            uVar2 = local_d0[*(byte *)(lVar10 + uVar19)];
            local_d0[*(byte *)(lVar10 + uVar19)] = uVar2 + 1;
            puVar18[uVar2] = (short)uVar19;
            uVar19 = uVar19 | 1;
          }
          if (uVar16 + uVar15 != 0) {
            do {
              bVar5 = *(byte *)(lVar10 + uVar19);
              uVar2 = local_d0[bVar5];
              local_d0[bVar5] = uVar2 + 1;
              sVar7 = (short)uVar19;
              puVar18[uVar2] = sVar7;
              bVar5 = ((byte *)(lVar10 + uVar19))[1];
              uVar2 = local_d0[bVar5];
              local_d0[bVar5] = uVar2 + 1;
              uVar19 = uVar19 + 2;
              puVar18[uVar2] = sVar7 + 1;
            } while (uVar15 != uVar19);
          }
        }
        return 1;
      }
    }
    FUN_0010a430();
    pcVar11 = *(code **)PTR_PTR_043722f8;
    if (pcVar11 == (code *)0x0) goto LAB_0010bbe4;
    pcVar9 = "OODLE ERROR : LZ corruption : Code Lens not Kraft!\n";
    uVar8 = 0x174;
  }
  else {
LAB_0010bb88:
    FUN_0010a430();
    pcVar11 = *(code **)PTR_PTR_043722f8;
    if (pcVar11 == (code *)0x0) goto LAB_0010bbe4;
    pcVar9 = "OODLE ERROR : LZ corruption : Invalid Min/Max CodeLen!\n";
    uVar8 = 0x142;
  }
  (*pcVar11)(0,"v:\\devel\\projects\\oodle2\\core\\rrhuffmandecode.cpp",uVar8,pcVar9);
LAB_0010bbe4:
  FUN_0010a450();
  return 0;
}


