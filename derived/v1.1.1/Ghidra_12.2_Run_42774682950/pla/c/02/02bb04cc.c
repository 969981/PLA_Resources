/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb04cc; name: FUN_02bb04cc
 */


void FUN_02bb04cc(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  char *unaff_x21;
  char cVar15;
  
  puVar1 = (uint *)*param_1;
  puVar2 = (uint *)param_1[1];
  do {
    if (puVar1 == puVar2) {
      lVar12 = param_1[7];
      if (lVar12 == 0) {
        cVar15 = '\0';
        cVar8 = *(char *)(param_1 + 8);
      }
      else {
        uVar6 = *(uint *)(lVar12 + 0xa0);
        uVar14 = *(ulong *)(*(long *)(lVar12 + 0x98) + 0x138);
        uVar13 = (uint)uVar14;
        if (uVar6 < 3) {
          uVar13 = uVar13 & uVar6 - 1;
        }
        else {
          iVar9 = 0;
          if ((ulong)uVar6 != 0) {
            iVar9 = (int)(uVar14 / uVar6);
          }
          uVar13 = uVar13 - iVar9 * uVar6;
        }
        pcVar11 = (char *)FUN_02bc0470((long)(int)uVar13,lVar12 + 0x58);
        cVar15 = *pcVar11;
        unaff_x21 = *(char **)(pcVar11 + 8);
        cVar8 = *(char *)(param_1 + 8);
      }
      if (cVar8 == '\0') {
        param_2[0x14] = 0;
      }
      else {
        uVar10 = FUN_02b7f96c(*param_2,param_1 + 8);
        param_2[0x14] = uVar10;
      }
      if (cVar15 == '\0') {
        uVar10 = 0;
        param_2[0x13] = 0;
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x21 + 0x48);
        param_2[0x13] = uVar10;
        if (param_2[3] == 0) {
          uVar14 = *(ulong *)(unaff_x21 + 0x70);
          uVar3 = *(ulong *)(unaff_x21 + 0x78);
          *(undefined8 *)((long)param_2 + 0xac) = 0;
          *(float *)((long)param_2 + 0xb4) = (float)uVar14;
          *(float *)(param_2 + 0x17) = (float)uVar3;
          uVar4 = *(undefined8 *)(unaff_x21 + 0x70);
          uVar5 = *(undefined8 *)(unaff_x21 + 0x78);
          *(undefined8 *)((long)param_2 + 300) = 0;
          *(int *)((long)param_2 + 0x134) = (int)uVar4;
          *(int *)(param_2 + 0x27) = (int)uVar5;
        }
      }
      *(undefined1 *)(param_2 + 0x15) = 1;
      (*DAT_043f0e78)(param_2[2],8,param_2 + 3,param_2 + 0xb,uVar10);
      *(undefined1 *)(param_2 + 0x15) = 0;
      return;
    }
    lVar12 = *(long *)(puVar1 + 2);
    uVar6 = *puVar1;
    if (lVar12 == 0) {
      if ((char)puVar1[6] == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_02b7f96c(*param_2);
      }
      (param_2 + uVar6)[0xb] = uVar10;
LAB_02bb051c:
      (param_2 + uVar6)[3] = 0;
    }
    else {
      uVar13 = puVar1[4];
      if ((int)uVar13 < 0) {
        uVar7 = *(uint *)(lVar12 + 0xa0);
        uVar14 = *(ulong *)(*(long *)(lVar12 + 0x98) + 0x138);
        uVar13 = (uint)uVar14;
        if (uVar7 < 3) {
          uVar13 = uVar13 & uVar7 - 1;
        }
        else {
          iVar9 = 0;
          if ((ulong)uVar7 != 0) {
            iVar9 = (int)(uVar14 / uVar7);
          }
          uVar13 = uVar13 - iVar9 * uVar7;
        }
      }
      unaff_x21 = (char *)FUN_02bc0470((long)(int)uVar13,lVar12 + 0x58);
      if ((char)puVar1[6] == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_02b7f96c(*param_2);
      }
      (param_2 + uVar6)[0xb] = uVar10;
      if (*unaff_x21 == '\0') goto LAB_02bb051c;
      lVar12 = *(long *)(unaff_x21 + 8);
      (param_2 + uVar6)[3] = *(undefined8 *)(lVar12 + 0x48);
      uVar14 = *(ulong *)(lVar12 + 0x70);
      uVar3 = *(ulong *)(lVar12 + 0x78);
      uVar6 = uVar6 << 2;
      *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0xac) = 0;
      *(float *)((long)param_2 + (ulong)uVar6 * 4 + 0xb4) = (float)uVar14;
      *(float *)((long)param_2 + (ulong)uVar6 * 4 + 0xb8) = (float)uVar3;
      uVar10 = *(undefined8 *)(lVar12 + 0x70);
      uVar4 = *(undefined8 *)(lVar12 + 0x78);
      *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 300) = 0;
      *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x134) = (int)uVar10;
      *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x138) = (int)uVar4;
    }
    puVar1 = puVar1 + 10;
    *(undefined1 *)(param_2 + 0x15) = 1;
  } while( true );
}


