/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04e18; name: FUN_02f04e18
 */


int FUN_02f04e18(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ushort uVar19;
  uint uVar20;
  
  pbVar12 = (byte *)*param_2 + 1;
  bVar5 = *(byte *)*param_2;
  uVar17 = bVar5 & 0x7f;
  *param_2 = (long)pbVar12;
  pbVar14 = pbVar12;
  if ((char)bVar5 < '\0') {
    do {
      pbVar12 = pbVar14 + 1;
      bVar5 = *pbVar14;
      uVar17 = bVar5 & 0x7f | uVar17 << 7;
      *param_2 = (long)pbVar12;
      pbVar14 = pbVar12;
    } while ((char)bVar5 < '\0');
  }
  if (uVar17 == 0) {
LAB_02f04e58:
    bVar5 = *pbVar12;
    *param_2 = (long)(pbVar12 + 1);
    uVar17 = bVar5 & 0x7f;
    if ((char)bVar5 < '\0') {
      pbVar12 = pbVar12 + 2;
      do {
        bVar5 = pbVar12[-1];
        *param_2 = (long)pbVar12;
        pbVar12 = pbVar12 + 1;
        uVar17 = bVar5 & 0x7f | uVar17 << 7;
      } while ((char)bVar5 < '\0');
    }
    if (uVar17 != 0) {
      uVar10 = (**(code **)(*param_1 + 0x78))(param_1);
      if ((uVar10 & 1) == 0) goto LAB_02f051ac;
      uVar20 = 0;
      do {
        uVar3 = *(undefined4 *)*param_2;
        *param_2 = (long)((undefined4 *)*param_2 + 1);
        lVar11 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,1);
        if (lVar11 == 0) {
          return 2;
        }
        uVar7 = *(undefined1 *)*param_2;
        *param_2 = (long)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(lVar11 + 0x40) = uVar7;
        pbVar14 = (byte *)*param_2 + 1;
        bVar5 = *(byte *)*param_2;
        uVar16 = bVar5 & 0x7f;
        *param_2 = (long)pbVar14;
        pbVar12 = pbVar14;
        if ((char)bVar5 < '\0') {
          do {
            pbVar14 = pbVar12 + 1;
            bVar5 = *pbVar12;
            uVar16 = bVar5 & 0x7f | uVar16 << 7;
            *param_2 = (long)pbVar14;
            pbVar12 = pbVar14;
          } while ((char)bVar5 < '\0');
        }
        uVar16 = uVar16 & 0xffff;
        if (uVar16 != 0) {
          uVar4 = *(undefined4 *)pbVar14;
          *param_2 = (long)(pbVar14 + 4);
          uVar3 = *(undefined4 *)(pbVar14 + 4);
          *param_2 = (long)(pbVar14 + 8);
          iVar8 = FUN_02f048a4(lVar11,uVar3,uVar4,1);
          if (iVar8 != 1) {
            return iVar8;
          }
          while (uVar16 = uVar16 - 1, uVar16 != 0) {
            puVar15 = (undefined4 *)*param_2;
            uVar4 = *puVar15;
            *param_2 = (long)(puVar15 + 1);
            uVar3 = puVar15[1];
            *param_2 = (long)(puVar15 + 2);
            iVar8 = FUN_02f048a4(lVar11,uVar3,uVar4,1);
            if (iVar8 != 1) {
              return iVar8;
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar17);
    }
    iVar8 = 1;
    *(undefined1 *)(param_1 + 1) = 1;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((uVar10 & 1) != 0) {
      plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
      uVar20 = *(uint *)(plVar9 + 1);
      uVar10 = (ulong)uVar20;
      if (uVar20 <= uVar17) {
        if (*(uint *)((long)plVar9 + 0xc) < uVar17) {
          uVar16 = *(uint *)((long)plVar9 + 0xc) + (uVar17 - uVar20);
          lVar11 = (*DAT_0442d148)(0,*plVar9,(ulong)uVar16 << 2);
          if (lVar11 == 0) goto LAB_02f051ac;
          *plVar9 = lVar11;
          *(uint *)((long)plVar9 + 0xc) = uVar16;
        }
        uVar13 = (ulong)uVar17;
        if (uVar20 < uVar17) {
          puVar1 = (undefined2 *)(*plVar9 + uVar10 * 4);
          if (puVar1 != (undefined2 *)0x0) {
            lVar11 = *plVar9 + uVar10 * 4;
            *puVar1 = 0xffff;
            *(undefined1 *)(lVar11 + 2) = 2;
            *(byte *)(lVar11 + 3) = *(byte *)(lVar11 + 3) & 0xfe;
          }
          if (uVar10 + 1 != uVar13) {
            puVar1 = (undefined2 *)(*plVar9 + (uVar10 + 1) * 4);
            *puVar1 = 0xffff;
            *(undefined1 *)(puVar1 + 1) = 2;
            *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfe;
            if (uVar10 + 2 != uVar13) {
              puVar1 = (undefined2 *)(*plVar9 + (uVar10 + 2) * 4);
              *puVar1 = 0xffff;
              *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfe;
              *(undefined1 *)(puVar1 + 1) = 2;
              if (uVar10 + 3 != uVar13) {
                puVar1 = (undefined2 *)(*plVar9 + (uVar10 + 3) * 4);
                *puVar1 = 0xffff;
                *(undefined1 *)(puVar1 + 1) = 2;
                *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfe;
                if (uVar10 + 4 != uVar13) {
                  lVar18 = (uVar13 - uVar10) + -4;
                  lVar11 = uVar10 << 2;
                  do {
                    lVar2 = *plVar9 + lVar11;
                    if (lVar2 != -0x10) {
                      *(undefined2 *)(lVar2 + 0x10) = 0xffff;
                      *(undefined1 *)(lVar2 + 0x12) = 2;
                      *(byte *)(lVar2 + 0x13) = *(byte *)(lVar2 + 0x13) & 0xfe;
                    }
                    lVar18 = lVar18 + -1;
                    lVar11 = lVar11 + 4;
                  } while (lVar18 != 0);
                }
              }
            }
          }
        }
      }
      uVar10 = 0;
      *(uint *)(plVar9 + 1) = uVar17;
      do {
        pbVar12 = (byte *)*param_2;
        bVar5 = *pbVar12;
        *param_2 = (long)(pbVar12 + 1);
        uVar19 = bVar5 & 0x7f;
        if ((char)bVar5 < '\0') {
          pbVar12 = pbVar12 + 2;
          do {
            bVar5 = pbVar12[-1];
            *param_2 = (long)pbVar12;
            pbVar12 = pbVar12 + 1;
            uVar19 = bVar5 & 0x7f | uVar19 << 7;
          } while ((char)bVar5 < '\0');
        }
        lVar11 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(ushort *)(*plVar9 + lVar11) = uVar19;
        uVar7 = *(undefined1 *)*param_2;
        *param_2 = (long)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(*plVar9 + lVar11 + 2) = uVar7;
        cVar6 = *(char *)*param_2;
        *param_2 = (long)((char *)*param_2 + 1);
        *(byte *)(*plVar9 + lVar11 + 3) = *(byte *)(*plVar9 + lVar11 + 3) & 0xfe | cVar6 != '\0';
      } while (uVar10 != uVar17);
      pbVar12 = (byte *)*param_2;
      goto LAB_02f04e58;
    }
LAB_02f051ac:
    iVar8 = 0x34;
  }
  return iVar8;
}


