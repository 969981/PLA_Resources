/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6160; name: FUN_010c6160
 */


void FUN_010c6160(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ushort *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  long *plVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint uVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  undefined4 uVar22;
  
  lVar11 = *(long *)(param_1 + 0x170);
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    uVar13 = (uint)*(ushort *)(lVar11 + 0x78);
    if (*(ushort *)(lVar11 + 0x78) == 0) {
      iVar12 = 0;
    }
    else {
      puVar14 = *(ushort **)(lVar11 + 0x58);
      iVar12 = 0;
      puVar16 = (ushort *)(param_3 + 0x88);
      do {
        while( true ) {
          uVar3 = *puVar16;
          *puVar14 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010c62a4;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
          iVar12 = iVar12 + 1;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_010c63a8;
        }
        uVar3 = puVar16[1];
        uVar1 = uVar3 + 2;
        bVar7 = uVar13 < uVar1;
        uVar13 = uVar13 - uVar1;
        if (bVar7 || uVar13 == 0) {
          *puVar14 = 0;
          goto LAB_010c62a4;
        }
        uVar18 = uVar3 + 1;
        uVar21 = uVar18 & 7;
        puVar20 = puVar14 + 1;
        *puVar20 = uVar3;
        puVar6 = puVar16 + 1;
        puVar17 = puVar16;
        if (uVar21 != 0) {
          lVar5 = 0;
          do {
            lVar19 = lVar5;
            uVar18 = uVar18 - 1;
            uVar21 = uVar21 - 1;
            *(undefined2 *)((long)puVar14 + lVar19 + 4) =
                 *(undefined2 *)((long)puVar16 + lVar19 + 4);
            lVar5 = lVar19 + 2;
          } while (uVar21 != 0);
          puVar20 = (ushort *)((long)puVar14 + lVar19 + 4);
          puVar17 = (ushort *)((long)puVar16 + lVar19 + 2);
          puVar6 = puVar17 + 1;
          puVar14 = puVar20;
        }
        puVar16 = puVar6;
        if (6 < uVar3) {
          puVar14 = puVar20;
          do {
            puVar14[1] = puVar17[2];
            puVar14[2] = puVar16[2];
            puVar14[3] = puVar16[3];
            puVar14[4] = puVar16[4];
            puVar14[5] = puVar16[5];
            puVar14[6] = puVar16[6];
            puVar17 = puVar16 + 7;
            puVar14[7] = *puVar17;
            puVar16 = puVar16 + 8;
            uVar18 = uVar18 - 8;
            puVar14 = puVar14 + 8;
            *puVar14 = *puVar16;
          } while (uVar18 != 0);
        }
        iVar12 = uVar1 + iVar12;
      } while (uVar13 != 0);
LAB_010c63a8:
      if (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        puVar14[-1] = 0;
      }
    }
LAB_010c62a4:
    *(short *)(lVar11 + 0x7a) = (short)iVar12;
  }
  if (*(char *)(param_3 + 0x7d) == '\0') {
    iVar12 = 0;
  }
  else if (*(char *)(param_3 + 0x7d) == '\x01') {
    iVar12 = 1;
  }
  else {
    plVar9 = (long *)FUN_00d1603c();
    lVar11 = *plVar9;
    *(long *)PTR_DAT_0437b198 = lVar11;
    iVar12 = (uint)(*(int *)(lVar11 + 0x238) == 5) << 1;
  }
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  plVar15 = (long *)PTR_DAT_0437b190;
  plVar9 = (long *)PTR_DAT_0437b188;
  puVar4 = PTR_DAT_0437b180;
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  uVar13 = *(byte *)(param_3 + 0x7f) - 1;
  if (uVar13 < 10) {
    uVar22 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)uVar13 * 4);
    bVar2 = *puVar4;
  }
  else {
    uVar22 = 2;
    bVar2 = *puVar4;
  }
  if (((bVar2 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b180), plVar9 = (long *)PTR_DAT_0437b188,
     plVar15 = (long *)PTR_DAT_0437b190, iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
    plVar9 = (long *)PTR_DAT_0437b188;
    plVar15 = (long *)PTR_DAT_0437b190;
  }
  lVar11 = *plVar9;
  *plVar15 = lVar11;
  uVar13 = *(byte *)(lVar11 + 0x50) - 1;
  if (uVar13 < 10) {
    uVar10 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)uVar13 * 4);
  }
  else {
    uVar10 = 2;
  }
  FUN_010b40e8(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),uVar22,uVar10);
  FUN_02c36128(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x58),iVar12,0);
  return;
}


