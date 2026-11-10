/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a06b70; name: FUN_02a06b70
 */


void FUN_02a06b70(long param_1,undefined1 *param_2,long *param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *local_60 [4];
  uint local_34;
  
  *param_2 = 0;
  iVar4 = (int)param_3[1];
  if (((iVar4 - 0x206U < 3) && (lVar18 = *param_3, (*(byte *)(lVar18 + 0x385) >> 2 & 1) == 0)) &&
     (*(char *)(lVar18 + 0x49c) == '\x1f')) {
    uVar5 = *(undefined1 *)(lVar18 + 0x7d);
    local_34 = 0;
    FUN_02a06d4c(param_1,local_60,&local_34,uVar5,iVar4,*(undefined1 *)((long)param_3 + 0xc));
    if (local_34 != 0) {
      plVar9 = local_60[0];
      if (local_34 != 1) {
        lVar14 = *(long *)(param_1 + 0x48);
        bVar6 = *(byte *)(lVar14 + 0xd88);
        uVar11 = (ulong)bVar6;
        if (uVar11 == 0) {
          uVar13 = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          lVar8 = (long)local_60[0] + (0x58 - lVar14);
          do {
            lVar8 = lVar8 + -0x60;
            uVar13 = uVar11;
            if (lVar8 == 0) goto LAB_02a06c3c;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
          uVar12 = uVar11;
        }
LAB_02a06c3c:
        lVar14 = (long)local_60[0] + (0xb8 - lVar14);
        uVar15 = 1;
        plVar16 = local_60[0] + 0xc;
        if (bVar6 != 0) goto LAB_02a06c80;
        do {
          uVar17 = 0;
LAB_02a06c58:
          uVar15 = uVar15 + 1;
          uVar3 = (uint)uVar17;
          if (((uint)uVar12 & 0xff) <= ((uint)uVar17 & 0xff)) {
            uVar3 = (uint)uVar12;
            plVar16 = plVar9;
          }
          plVar9 = plVar16;
          uVar12 = (ulong)uVar3;
          lVar14 = lVar14 + 0x60;
          if (uVar15 == local_34) goto LAB_02a06ca4;
          plVar16 = local_60[0] + uVar15 * 0xc;
        } while (bVar6 == 0);
LAB_02a06c80:
        uVar17 = 0;
        lVar8 = lVar14;
        do {
          lVar8 = lVar8 + -0x60;
          if (lVar8 == 0) goto LAB_02a06c58;
          uVar17 = uVar17 + 1;
        } while (uVar13 != uVar17);
        uVar17 = uVar11;
        goto LAB_02a06c58;
      }
LAB_02a06ca4:
      lVar14 = *plVar9;
      cVar7 = *(char *)(lVar14 + 0x7d);
      *(byte *)(lVar18 + 0x385) = *(byte *)(lVar18 + 0x385) | 4;
      *(undefined1 *)(lVar14 + 0x49c) = uVar5;
      *(int *)(lVar14 + 0x498) = iVar4;
      lVar18 = *(long *)(param_1 + 0x48);
      uVar11 = (ulong)*(byte *)(lVar18 + 0xd88);
      if (uVar11 != 0) {
        puVar10 = (uint *)(lVar18 + 0x60);
        if (*(char *)(lVar18 + 0x65) == '\0') goto LAB_02a06cec;
        do {
          do {
            puVar2 = puVar10 + 0x18;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_02a06d10;
            pcVar1 = (char *)((long)puVar10 + 0x65);
            puVar10 = puVar2;
          } while (*pcVar1 != '\0');
LAB_02a06cec:
        } while ((*(long *)(puVar10 + -0x16) == 0) ||
                (*(char *)(*(long *)(puVar10 + -0x16) + 0x7d) != cVar7));
        *puVar10 = *puVar10 & 0xf1ffffff | 0x6000000;
      }
LAB_02a06d10:
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x16b,uVar5,cVar7,
                   0xffff0000);
      *param_2 = 1;
    }
  }
  return;
}


