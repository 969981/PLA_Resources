/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033781a0; name: FUN_033781a0
 */


int FUN_033781a0(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined1 local_68 [16];
  byte *local_58;
  
  if (param_2 == (byte *)0x0) {
    iVar15 = 0;
  }
  else {
    local_58 = param_2;
    uVar10 = FUN_032f04e0(param_2);
    pbVar4 = &DAT_0435a690;
    if ((uVar10 & 1) == 0) {
      pbVar4 = param_2;
    }
    plVar16 = (long *)*param_1;
    local_58 = pbVar4;
    lVar11 = FUN_0337ac54(plVar16,&local_58);
    if (lVar11 != 0) {
      if (*plVar16 + (long)*(int *)(lVar11 + 4) * 0x10 != 0) {
        return *(int *)(*plVar16 + (long)*(int *)(lVar11 + 4) * 0x10 + 8);
      }
    }
    iVar15 = (int)plVar16[9];
    if ((*pbVar4 >> 3 & 1) != 0) {
      local_68 = FUN_032e2464(pbVar4);
      iVar8 = FUN_0337a3dc(plVar16 + 4,local_68);
      lVar11 = plVar16[5];
      if ((int)lVar11 == iVar8) {
        lVar12 = plVar16[4];
        iVar14 = iVar8;
        if ((int)(*(uint *)((long)plVar16 + 0x2c) & 0x3fffffff) <= iVar8) {
          lVar12 = FUN_0337a23c(PTR_PTR_0434a080,iVar8 + 1,lVar12,iVar8);
          plVar16[4] = lVar12;
          iVar14 = (int)plVar16[5];
        }
        pauVar2 = (undefined1 (*) [16])(lVar12 + (long)iVar14 * 0x20);
        *(undefined4 *)(pauVar2[1] + 4) = 0;
        pauVar2[1][8] = 0;
        *pauVar2 = local_68;
        *(int *)(plVar16 + 5) = iVar8 + 1;
      }
      lVar12 = plVar16[4];
      uVar10 = FUN_032e35d8(pbVar4);
      bVar6 = (uVar10 & 0x1f) != 1;
      if (bVar6) {
        uVar9 = FUN_032e8598(*param_1 + 0x68,pbVar4);
      }
      else {
        uVar9 = 0;
      }
      lVar12 = lVar12 + (long)iVar8 * 0x20;
      if ((int)lVar11 == iVar8) {
        *(int *)(lVar12 + 0x10) = iVar15;
        if (bVar6) {
          if (*(char *)(lVar12 + 0x18) == '\0') {
            *(undefined4 *)(lVar12 + 0x14) = uVar9;
            *(char *)(lVar12 + 0x18) = '\x01';
          }
          else {
            *(undefined4 *)(lVar12 + 0x14) = uVar9;
          }
        }
        else if (*(char *)(lVar12 + 0x18) != '\0') {
          *(char *)(lVar12 + 0x18) = '\0';
        }
      }
      else {
        iVar15 = *(int *)(lVar12 + 0x10);
        if ((bVar6) && (*(char *)(lVar12 + 0x18) == '\0')) {
          *(undefined4 *)(lVar12 + 0x14) = uVar9;
          *(char *)(lVar12 + 0x18) = '\x01';
          *(byte **)(*(long *)(*param_1 + 0x40) + (long)iVar15 * 8) = pbVar4;
        }
      }
    }
    plVar16 = (long *)*param_1;
    uVar7 = FUN_0337acf4(plVar16,&local_58);
    if (*(uint *)(plVar16 + 1) == uVar7) {
      lVar11 = *plVar16;
      iVar8 = uVar7 + 1;
      if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x3fffffff) <= (int)uVar7) {
        lVar11 = FUN_0337a1b4(PTR_PTR_0434a080,iVar8);
        uVar7 = *(uint *)(plVar16 + 1);
        *plVar16 = lVar11;
      }
      puVar1 = (undefined8 *)(lVar11 + (long)(int)uVar7 * 0x10);
      *puVar1 = pbVar4;
      *(int *)(puVar1 + 1) = iVar15;
      *(int *)(plVar16 + 1) = iVar8;
    }
    else {
      *(int *)(*plVar16 + ((long)((ulong)uVar7 << 0x20) >> 0x1c) + 8) = iVar15;
    }
    puVar5 = PTR_PTR_0434a080;
    lVar11 = *param_1;
    if (iVar15 == *(int *)(lVar11 + 0x48)) {
      puVar17 = (uint *)(lVar11 + 0x4c);
      uVar13 = *puVar17;
      uVar7 = iVar15 + 1;
      if (iVar15 < (int)(uVar13 & 0x3fffffff)) {
        lVar12 = *(long *)(lVar11 + 0x40);
        iVar8 = iVar15;
      }
      else {
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar7);
          uVar13 = *puVar17;
        }
        uVar13 = (uVar13 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar13) {
          uVar13 = 0x3fffffff;
        }
        uVar3 = uVar7;
        if ((int)uVar7 <= (int)uVar13) {
          uVar3 = uVar13;
        }
        lVar12 = FUN_032bd1d4(puVar5,uVar3,8,uVar18,iVar15,puVar17);
        iVar8 = *(int *)(lVar11 + 0x48);
        *(long *)(lVar11 + 0x40) = lVar12;
      }
      *(byte **)(lVar12 + (long)iVar8 * 8) = pbVar4;
      *(uint *)(lVar11 + 0x48) = uVar7;
    }
  }
  return iVar15;
}


