/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4cad0; name: FUN_02f4cad0
 */


uint FUN_02f4cad0(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int local_48;
  uint local_44;
  
  lVar17 = *param_2;
  if (*(uint *)(lVar17 + 0x30) < 2) {
    *param_3 = '\0';
    lVar8 = param_2[2];
    if (lVar8 != 0) {
      if ((short)*(ushort *)(lVar8 + 10) + 1 != *(int *)(*param_2 + 0x28)) {
        uVar16 = *(ushort *)(lVar8 + 10) + 1;
        *(short *)(lVar8 + 10) = (short)uVar16;
        goto joined_r0x02f4cdd8;
      }
      *(undefined2 *)(lVar8 + 10) = 0;
      if ((*(byte *)((long)param_2 + 10) & 1) != 0) {
        if ((*(byte *)((long)param_2 + 10) >> 1 & 1) != 0) goto LAB_02f4cbb4;
        sVar4 = (short)param_2[1] + -1;
        *(short *)(param_2 + 1) = sVar4;
        if (sVar4 != 0) {
          uVar16 = (uint)*(ushort *)(lVar8 + 10);
          goto joined_r0x02f4cdd8;
        }
      }
    }
  }
  else {
    if (1 < *(uint *)(lVar17 + 0x30) - 2) {
LAB_02f4cbb4:
      uVar16 = 0;
      goto joined_r0x02f4cdd8;
    }
    *param_3 = '\0';
    lVar8 = param_2[2];
    if (lVar8 != 0) {
      lVar15 = *param_2;
      plVar1 = (long *)(lVar15 + 0x20);
      if (*(short *)(lVar8 + 0x12) == 0) {
        if (((*(byte *)((long)param_2 + 10) & 1) == 0) ||
           (((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0 &&
            (sVar4 = (short)param_2[1] + -1, *(short *)(param_2 + 1) = sVar4, sVar4 == 0))))
        goto LAB_02f4cd2c;
        *(short *)(lVar8 + 0x12) = (short)*(undefined4 *)(lVar15 + 0x28);
        uVar16 = *(uint *)(lVar15 + 0x28);
        memset(*(void **)(lVar8 + 0x28),0,(ulong)uVar16 + 7 >> 3);
        sVar4 = (short)uVar16;
        *(short *)(lVar8 + 0x10) = sVar4;
        uVar16 = *(uint *)(lVar8 + 0x20);
        *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 8);
        uVar10 = 0;
        if (uVar16 != 0) {
          puVar11 = *(ushort **)(lVar8 + 0x18);
          iVar6 = *(int *)(lVar8 + 8) - *(int *)(*(long *)(*plVar1 + (ulong)*puVar11 * 8) + 0x1c);
          *(int *)(lVar8 + 0xc) = iVar6;
          uVar10 = uVar16;
          if (uVar16 != 1) {
            lVar13 = (ulong)uVar16 * 2 + -2;
            do {
              puVar11 = puVar11 + 1;
              lVar13 = lVar13 + -2;
              iVar6 = iVar6 - *(int *)(*(long *)(*plVar1 + (ulong)*puVar11 * 8) + 0x1c);
              *(int *)(lVar8 + 0xc) = iVar6;
            } while (lVar13 != 0);
          }
        }
        *(short *)(lVar8 + 0x10) = sVar4 - (short)uVar10;
        cVar2 = *(char *)(lVar15 + 0x34);
      }
      else {
        cVar2 = *(char *)(lVar15 + 0x34);
      }
      if (cVar2 == '\0') {
        uVar3 = *(ushort *)(lVar8 + 0x10);
        if (uVar3 == 0) {
LAB_02f4cdd0:
          uVar16 = 0;
          *(undefined2 *)(lVar8 + 0x12) = 0;
          goto joined_r0x02f4cdd8;
        }
        DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
        uVar16 = 0;
        uVar10 = (uint)((ulong)DAT_0440a190 >> 0x21);
        if (uVar3 != 0) {
          uVar16 = uVar10 / uVar3;
        }
        if (*(char *)(lVar15 + 0x35) == '\0') {
          if (*(short *)(lVar15 + 0x38) != 0) {
LAB_02f4cc34:
            if ((**(byte **)(lVar8 + 0x30) & 1) != 0) goto LAB_02f4cdf4;
          }
          iVar6 = 0;
        }
        else {
          if ((**(byte **)(lVar8 + 0x28) & 1) == 0) goto LAB_02f4cc34;
LAB_02f4cdf4:
          iVar6 = -1;
        }
        uVar9 = 1;
        while (iVar6 < (int)(uVar10 - uVar16 * uVar3)) {
          uVar7 = (uint)uVar9;
          if (*(char *)(lVar15 + 0x35) == '\0') {
            if (*(short *)(lVar15 + 0x38) != 0) {
              uVar5 = 1 << (ulong)(uVar7 & 7) &
                      (uint)*(byte *)(*(long *)(lVar8 + 0x30) + (uVar9 >> 3 & 0x1fff));
joined_r0x02f4ce88:
              if (uVar5 != 0) goto LAB_02f4ce34;
            }
            iVar6 = iVar6 + 1;
          }
          else {
            uVar9 = uVar9 >> 3 & 0x1fff;
            uVar5 = 1 << (ulong)(uVar7 & 7);
            if ((uVar5 & *(byte *)(*(long *)(lVar8 + 0x28) + uVar9)) == 0) {
              uVar5 = uVar5 & *(byte *)(*(long *)(lVar8 + 0x30) + uVar9);
              goto joined_r0x02f4ce88;
            }
          }
LAB_02f4ce34:
          uVar9 = (ulong)(uVar7 + 1);
        }
      }
      else {
        if (*(int *)(lVar8 + 0xc) == 0) goto LAB_02f4cdd0;
        iVar6 = FUN_02eeec30(lVar8);
        if (-1 < iVar6) {
          uVar9 = 0;
          iVar12 = -1;
          if (*(char *)(lVar15 + 0x35) == '\0') goto LAB_02f4cd78;
LAB_02f4cda0:
          uVar14 = uVar9 >> 3 & 0x1fff;
          uVar16 = 1 << (ulong)((uint)uVar9 & 7);
          if ((uVar16 & *(byte *)(*(long *)(lVar8 + 0x28) + uVar14)) != 0) goto LAB_02f4cd68;
          uVar16 = uVar16 & *(byte *)(*(long *)(lVar8 + 0x30) + uVar14);
          do {
            if (uVar16 != 0) goto LAB_02f4cd68;
            do {
              iVar12 = *(int *)(*(long *)(*plVar1 + uVar9 * 8) + 0x1c) + iVar12;
LAB_02f4cd68:
              uVar9 = uVar9 + 1;
              if (iVar6 <= iVar12) goto LAB_02f4ce40;
              if (*(char *)(lVar15 + 0x35) != '\0') goto LAB_02f4cda0;
LAB_02f4cd78:
            } while (*(short *)(lVar15 + 0x38) == 0);
            uVar16 = 1 << (ulong)((uint)uVar9 & 7) &
                     (uint)*(byte *)(*(long *)(lVar8 + 0x30) + (uVar9 >> 3 & 0x1fff));
          } while( true );
        }
        uVar9 = 0;
      }
LAB_02f4ce40:
      uVar16 = (int)uVar9 - 1;
      FUN_02f4d9dc(lVar15,uVar16,plVar1,lVar8);
      goto joined_r0x02f4cdd8;
    }
  }
LAB_02f4cd2c:
  uVar16 = 0;
  *param_3 = '\x01';
joined_r0x02f4cdd8:
  if ((lVar17 != 0) && (*param_3 == '\0')) {
    local_44 = uVar16 & 0xffff;
    uVar10 = *(uint *)(lVar17 + 0x28);
    local_48 = 0;
    FUN_02edd294(DAT_0440a170,*(undefined4 *)(param_1 + 8),*(undefined4 *)(lVar17 + 0x10),uVar10,
                 &local_44,&local_48);
    if (uVar10 <= local_44) {
      local_44 = uVar16;
    }
    uVar16 = local_44;
    *param_3 = local_48 != 0;
  }
  return uVar16;
}


