/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6888; name: FUN_010c6888
 */


void FUN_010c6888(long param_1,ulong param_2,long param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  long lVar16;
  ushort *puVar17;
  
  if (0x1f < param_4) {
    param_4 = 0;
  }
  lVar8 = *(long *)(param_1 + 0x170);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar11 = (uint)*(ushort *)(lVar8 + 0x78);
    if (*(ushort *)(lVar8 + 0x78) == 0) {
      iVar6 = 0;
    }
    else {
      puVar13 = (ushort *)(param_3 + (ulong)param_4 * 0x22 + 0x68);
      puVar12 = *(ushort **)(lVar8 + 0x58);
      iVar6 = 0;
      do {
        while( true ) {
          uVar2 = *puVar13;
          *puVar12 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_010c69d4;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
          iVar6 = iVar6 + 1;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_010c6a44;
        }
        uVar2 = puVar13[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar11 < uVar1;
        uVar11 = uVar11 - uVar1;
        if (bVar5 || uVar11 == 0) {
          *puVar12 = 0;
          goto LAB_010c69d4;
        }
        uVar15 = uVar2 + 1;
        uVar9 = uVar15 & 7;
        puVar17 = puVar12 + 1;
        *puVar17 = uVar2;
        puVar4 = puVar13 + 1;
        puVar14 = puVar13;
        if (uVar9 != 0) {
          lVar3 = 0;
          do {
            lVar16 = lVar3;
            uVar15 = uVar15 - 1;
            uVar9 = uVar9 - 1;
            *(undefined2 *)((long)puVar12 + lVar16 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar16 + 4);
            lVar3 = lVar16 + 2;
          } while (uVar9 != 0);
          puVar17 = (ushort *)((long)puVar12 + lVar16 + 4);
          puVar14 = (ushort *)((long)puVar13 + lVar16 + 2);
          puVar4 = puVar14 + 1;
          puVar12 = puVar17;
        }
        puVar13 = puVar4;
        if (6 < uVar2) {
          puVar12 = puVar17;
          do {
            puVar12[1] = puVar14[2];
            puVar12[2] = puVar13[2];
            puVar12[3] = puVar13[3];
            puVar12[4] = puVar13[4];
            puVar12[5] = puVar13[5];
            puVar12[6] = puVar13[6];
            puVar14 = puVar13 + 7;
            puVar12[7] = *puVar14;
            puVar13 = puVar13 + 8;
            uVar15 = uVar15 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar13;
          } while (uVar15 != 0);
        }
        iVar6 = uVar1 + iVar6;
      } while (uVar11 != 0);
LAB_010c6a44:
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        puVar12[-1] = 0;
      }
    }
LAB_010c69d4:
    *(short *)(lVar8 + 0x7a) = (short)iVar6;
    lVar8 = *(long *)(param_1 + 0x170);
  }
  uVar7 = param_2;
  if ((*PTR_DAT_0437b180 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_0437b180);
    uVar7 = param_2 & 0xffffffff;
    if (iVar6 != 0) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
      uVar7 = param_2 & 0xffffffff;
    }
  }
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  uVar11 = *(byte *)(param_3 + (ulong)param_4 + 0x4d0) - 2;
  if (uVar11 < 9) {
    uVar10 = *(undefined4 *)(&DAT_03a78cf0 + (long)(char)uVar11 * 4);
  }
  else {
    uVar10 = 1;
  }
  FUN_02c362d0(param_1,uVar7,lVar8,uVar10,0,0);
  return;
}


