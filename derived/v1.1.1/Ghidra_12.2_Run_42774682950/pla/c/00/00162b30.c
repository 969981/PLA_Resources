/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162b30; name: FUN_00162b30
 */


long FUN_00162b30(long param_1,char *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  byte *__s;
  uint *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  byte local_88 [7];
  byte local_81 [33];
  
  pcVar4 = strchr(param_2,0x25);
  if (pcVar4 == (char *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      plVar16 = *(long **)(param_1 + 0x10);
      lVar5 = FUN_0016d720(param_1,param_2,(long)pcVar4 - (long)param_2);
      *plVar16 = lVar5;
      *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
      FUN_0015a750(param_1);
      switch(pcVar4[1]) {
      case '%':
        plVar16 = *(long **)(param_1 + 0x10);
        __s = &DAT_039b957d;
LAB_00162ba8:
        sVar6 = 1;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"invalid option \'%%%c\' to \'lua_pushfstring\'");
      case 'I':
        plVar16 = *(long **)(param_1 + 0x10);
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          plVar12 = (long *)(param_3[1] + (long)iVar3);
        }
        else {
          plVar12 = (long *)*param_3;
          *param_3 = (long)(plVar12 + 1);
        }
        lVar5 = *plVar12;
        uVar14 = 0x13;
        goto LAB_00162db0;
      case 'U':
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          uVar9 = *(ulong *)(param_3[1] + (long)iVar3);
          if (uVar9 < 0x80) goto LAB_00162cec;
LAB_00162e60:
          lVar13 = 0;
          lVar5 = 0x700000000;
          uVar1 = 0x3f;
          do {
            uVar15 = uVar1;
            bVar2 = (byte)uVar9;
            uVar9 = uVar9 >> 6;
            uVar1 = uVar15 >> 1;
            lVar5 = lVar5 + -0x100000000;
            local_81[lVar13] = bVar2 & 0x3f | 0x80;
            lVar13 = lVar13 + -1;
          } while (uVar1 < uVar9);
          local_88[lVar5 >> 0x20] = (byte)uVar9 | ~(byte)uVar15 & 0xfe;
          iVar3 = 1 - (int)lVar13;
        }
        else {
          puVar8 = (ulong *)*param_3;
          *param_3 = (long)(puVar8 + 1);
          uVar9 = *puVar8;
          if (0x7f < uVar9) goto LAB_00162e60;
LAB_00162cec:
          local_81[0] = (byte)uVar9;
          iVar3 = 1;
        }
        sVar6 = (size_t)iVar3;
        __s = local_81 + (1 - sVar6);
        plVar16 = *(long **)(param_1 + 0x10);
        break;
      case 'c':
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          puVar7 = (uint *)(param_3[1] + (long)iVar3);
        }
        else {
          puVar7 = (uint *)*param_3;
          *param_3 = (long)(puVar7 + 2);
        }
        local_88[0] = (byte)*puVar7;
        if (((byte)(&DAT_039c5d39)[(ulong)*puVar7 & 0xff] >> 2 & 1) != 0) {
          plVar16 = *(long **)(param_1 + 0x10);
          __s = local_88;
          goto LAB_00162ba8;
        }
        FUN_00162fa0(param_1,"<\\%d>");
        goto LAB_00162bc8;
      case 'd':
        plVar16 = *(long **)(param_1 + 0x10);
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          piVar11 = (int *)(param_3[1] + (long)iVar3);
        }
        else {
          piVar11 = (int *)*param_3;
          *param_3 = (long)(piVar11 + 2);
        }
        lVar5 = (long)*piVar11;
        uVar14 = 0x13;
        goto LAB_00162db0;
      case 'f':
        plVar16 = *(long **)(param_1 + 0x10);
        iVar3 = *(int *)((long)param_3 + 0x1c);
        if ((iVar3 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar3 + 0x10, iVar3 + 0x10 < 1)) {
          plVar12 = (long *)(param_3[2] + (long)iVar3);
        }
        else {
          plVar12 = (long *)*param_3;
          *param_3 = (long)(plVar12 + 1);
        }
        lVar5 = *plVar12;
        uVar14 = 3;
LAB_00162db0:
        *plVar16 = lVar5;
        *(undefined4 *)(plVar16 + 1) = uVar14;
        FUN_0015a750(param_1);
        FUN_00162a50(param_1,*(long *)(param_1 + 0x10) + -0x10);
        goto LAB_00162bc8;
      case 'p':
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          puVar10 = (undefined8 *)(param_3[1] + (long)iVar3);
        }
        else {
          puVar10 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar10 + 1);
        }
        iVar3 = snprintf((char *)local_88,0x28,"%p",*puVar10);
        plVar16 = *(long **)(param_1 + 0x10);
        sVar6 = (size_t)iVar3;
        __s = local_88;
        break;
      case 's':
        iVar3 = (int)param_3[3];
        if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          puVar10 = (undefined8 *)(param_3[1] + (long)iVar3);
        }
        else {
          puVar10 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar10 + 1);
        }
        __s = (byte *)"(null)";
        if ((byte *)*puVar10 != (byte *)0x0) {
          __s = (byte *)*puVar10;
        }
        sVar6 = strlen((char *)__s);
        plVar16 = *(long **)(param_1 + 0x10);
      }
      lVar5 = FUN_0016d720(param_1,__s,sVar6);
      *plVar16 = lVar5;
      *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
      FUN_0015a750(param_1);
LAB_00162bc8:
      param_2 = pcVar4 + 2;
      uVar17 = uVar17 + 2;
      pcVar4 = strchr(param_2,0x25);
    } while (pcVar4 != (char *)0x0);
  }
  plVar16 = *(long **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x30) - (long)plVar16 < 0x20) {
    FUN_0015a5f0(param_1,1);
    plVar16 = *(long **)(param_1 + 0x10);
  }
  sVar6 = strlen(param_2);
  lVar5 = FUN_0016d720(param_1,param_2,sVar6);
  *plVar16 = lVar5;
  *(uint *)(plVar16 + 1) = *(byte *)(lVar5 + 8) | 0x40;
  FUN_0015a750(param_1);
  if (uVar17 != 0) {
    FUN_00176070(param_1,uVar17 | 1);
  }
  return *(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18;
}


