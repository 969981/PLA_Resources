/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004df780; name: FUN_004df780
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_004df780(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined2 *puVar20;
  ulong local_68;
  
  puVar16 = *(undefined8 **)(param_1 + 0x488);
  uVar18 = *(uint *)((long)puVar16 + 0x1c);
  if (param_5 == 0xffffffff) {
    if (((param_2 == 0) || (param_3 == 0)) ||
       (lVar11 = FUN_004e30e0(param_3,&local_68), lVar11 == 0)) {
      return 0;
    }
    puVar17 = (uint *)(*(long *)(param_1 + 0xa8) + ((long)(local_68 << 0x20) >> 0x1e) + 0x310);
    uVar9 = 0x50;
    if ((*(uint *)((long)puVar16 + 0x1c) & 0x30001) != 0) {
      uVar9 = 0x6f0;
    }
    uVar19 = 1;
    uVar13 = local_68;
    if ((uVar18 & 0x30000) == 0) goto LAB_004df840;
LAB_004df8a0:
    iVar3 = FUN_0044e740(0,param_2,param_4);
    uVar2 = 0;
    if (iVar3 != 0 || uVar9 != 0) {
      uVar2 = uVar9 | 0x800;
    }
    uVar18 = (uint)(iVar3 == 0) << 0xb;
    bVar1 = uVar9 == 0;
    uVar9 = uVar2;
    if ((bVar1) && (iVar3 != 0)) {
      uVar9 = 0;
      uVar18 = 0;
      goto LAB_004dfa74;
    }
  }
  else {
    local_68 = (ulong)param_5;
    if (param_5 == 0xfffffffe) {
      plVar10 = (long *)*puVar16;
      local_68 = ((long)plVar10 + (-0x20 - (long)puVar16) >> 3) * -0x3333333333333333;
      param_5 = (uint)local_68;
    }
    else {
      plVar10 = puVar16 + (long)(int)param_5 * 5 + 4;
    }
    uVar9 = 0;
    param_2 = *plVar10;
    param_3 = plVar10[1];
    puVar17 = (uint *)(*(long *)(param_1 + 0xa8) + (long)(int)param_5 * 4 + 0x310);
    if (param_2 == 0 || param_3 == 0) {
      uVar9 = 0;
      uVar18 = 0;
      goto LAB_004dfa74;
    }
    param_4 = plVar10[2];
    uVar19 = uVar18 & 0x30001;
    uVar13 = local_68;
    if ((uVar18 & 0x30000) != 0) goto LAB_004df8a0;
LAB_004df840:
    uVar18 = 0;
    uVar13 = local_68;
  }
  uVar2 = FUN_004c4ae0(param_1);
  if ((((uVar2 & 0xffffff00) == 0x300) && (iVar3 = FUN_004c4ae0(param_1), uVar19 != 0)) &&
     (0x302 < iVar3)) {
    if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x2f0) == 0) &&
       (*(long *)(*(long *)(param_1 + 0xa8) + 0x2e8) == 0)) {
      if (((uint)uVar13 < 7) && ((0x7dU >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0)) {
        puVar20 = (undefined2 *)puVar16[0x33];
        uVar13 = -(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar13 & 0xffffffff) << 2;
        if (puVar20 != (undefined2 *)0x0) {
          uVar14 = puVar16[0x34];
          if (uVar14 != 0) {
            iVar3 = *(int *)(&DAT_03a28140 + uVar13);
            uVar15 = 0;
            lVar11 = FUN_004dcbd0(*puVar20);
            if (lVar11 != 0) goto LAB_004dfdf4;
            do {
              do {
                uVar15 = uVar15 + 1;
                if (uVar14 <= uVar15) goto LAB_004dfe10;
                lVar11 = FUN_004dcbd0(puVar20[uVar15]);
              } while (lVar11 == 0);
LAB_004dfdf4:
            } while ((*(int *)(lVar11 + 0xc) != 0x40) || (*(int *)(lVar11 + 0x14) != iVar3));
LAB_004dfe10:
            if (uVar15 != uVar14) goto LAB_004dfe24;
          }
          if (uVar9 == 0) goto LAB_004dfa74;
          goto LAB_004dfd9c;
        }
LAB_004dfe24:
        iVar3 = *(int *)(&DAT_03a28124 + uVar13);
        iVar4 = FUN_00460b80(param_2);
        if (iVar4 != iVar3) goto LAB_004df958;
LAB_004dfb00:
        bVar1 = false;
      }
      else {
        bVar1 = true;
        iVar3 = -1;
      }
      uVar19 = uVar18 | 0x10;
    }
    else {
      iVar3 = FUN_00460b80(param_2);
      lVar11 = puVar16[0x38];
      if (lVar11 != 0) {
        plVar10 = (long *)puVar16[0x37];
        do {
          if (iVar3 == *(int *)(*plVar10 + 0x1c)) {
            iVar3 = 0;
            goto LAB_004dfb00;
          }
          lVar11 = lVar11 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar11 != 0);
      }
      iVar3 = 0;
LAB_004df958:
      if (uVar9 == 0) goto LAB_004dfa74;
      bVar1 = false;
      uVar19 = uVar18;
    }
    uVar18 = uVar19 | 0x20;
    iVar4 = FUN_00407950(param_4);
    if (0 < iVar4) {
      if (!bVar1) {
        iVar4 = 0;
        bVar1 = true;
        if (iVar3 == 0) {
          do {
            FUN_00407970(param_4,iVar4);
            iVar3 = FUN_00460b80();
            lVar11 = puVar16[0x38];
            if (lVar11 == 0) goto LAB_004dfd90;
            plVar10 = (long *)puVar16[0x37];
            while (iVar3 != *(int *)(*plVar10 + 0x1c)) {
              lVar11 = lVar11 + -1;
              plVar10 = plVar10 + 1;
              if (lVar11 == 0) goto LAB_004dfd90;
            }
            iVar4 = iVar4 + 1;
            iVar3 = FUN_00407950(param_4);
          } while (iVar4 < iVar3);
        }
        else {
          do {
            FUN_00407970(param_4,iVar4);
            iVar5 = FUN_00460b80();
            if (iVar5 != iVar3) goto LAB_004dfd90;
            iVar4 = iVar4 + 1;
            iVar5 = FUN_00407950(param_4);
          } while (iVar4 < iVar5);
        }
        goto LAB_004df980;
      }
      iVar3 = 0;
      do {
        FUN_00407970(param_4,iVar3);
        iVar3 = iVar3 + 1;
        iVar4 = FUN_00407950(param_4);
      } while (iVar3 < iVar4);
    }
    goto LAB_004dfd9c;
  }
  bVar1 = uVar19 != 0;
  if (uVar9 != 0) {
    uVar18 = uVar18 | 0x30;
  }
  goto LAB_004df980;
LAB_004dfd90:
  if (uVar9 == 0) goto LAB_004dfa74;
  uVar18 = uVar19;
LAB_004dfd9c:
  bVar1 = true;
LAB_004df980:
  iVar3 = FUN_004dfe50(param_1,param_2,1);
  if (iVar3 == 0) {
    if (uVar9 == 0) goto LAB_004dfa74;
    iVar3 = *(int *)(param_1 + 0x38);
    uVar19 = uVar18;
  }
  else {
    uVar19 = uVar18 | 0x40;
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (iVar3 == 0) {
    uVar18 = uVar19 | 0x80;
LAB_004dfa08:
    if ((bool)(bVar1 ^ 1U | *(int *)(param_1 + 0x38) != 0)) goto LAB_004dfa58;
    iVar3 = FUN_00423a50(param_3);
    if (iVar3 == 6) {
      cVar12 = '\x01';
      lVar11 = *(long *)(param_1 + 0xa8);
      uVar13 = *(ulong *)(lVar11 + 600);
joined_r0x004dfb28:
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          if (cVar12 == *(char *)(*(long *)(lVar11 + 0x250) + uVar14)) {
            uVar18 = uVar18 | 0x400;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar13);
      }
      uVar19 = uVar18;
      if ((uVar18 & 0x400) == 0 && uVar9 == 0) goto LAB_004dfa74;
    }
    else {
      if (iVar3 == 0x198) {
        cVar12 = '@';
        lVar11 = *(long *)(param_1 + 0xa8);
        uVar13 = *(ulong *)(lVar11 + 600);
        goto joined_r0x004dfb28;
      }
      if (iVar3 == 0x74) {
        cVar12 = '\x02';
        lVar11 = *(long *)(param_1 + 0xa8);
        uVar13 = *(ulong *)(lVar11 + 600);
        goto joined_r0x004dfb28;
      }
      lVar11 = *(long *)(param_1 + 0xa8);
      uVar19 = uVar18 | 0x400;
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x260);
    iVar3 = FUN_00407950(uVar6);
    uVar2 = uVar19 | 0x200;
    uVar18 = uVar2;
    if (iVar3 != 0) {
      uVar18 = uVar19;
    }
    if ((uVar18 >> 9 & 1) == 0) {
      uVar7 = FUN_0044e490(param_2);
      iVar3 = FUN_00407950(uVar6);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar8 = FUN_00407970(uVar6,iVar3);
          iVar4 = FUN_0044e250(uVar7,uVar8);
          if (iVar4 == 0) {
            uVar18 = uVar2;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00407950(uVar6);
        } while (iVar3 < iVar4);
      }
    }
    if ((uVar18 >> 9 & 1) == 0) {
      iVar3 = FUN_00407950(param_4);
      uVar19 = uVar9;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          FUN_00407970(param_4,iVar3);
          uVar7 = FUN_0044e490();
          iVar4 = FUN_00407950(uVar6);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              uVar8 = FUN_00407970(uVar6,iVar4);
              iVar5 = FUN_0044e250(uVar7,uVar8);
              if (iVar5 == 0) {
                uVar18 = uVar2;
                uVar19 = uVar9 | 0x200;
                goto joined_r0x004dfd28;
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_00407950(uVar6);
            } while (iVar4 < iVar5);
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00407950(param_4);
        } while (iVar3 < iVar4);
      }
joined_r0x004dfd28:
      if (uVar19 == 0) goto LAB_004dfd3c;
    }
    else if ((uVar18 & 0x200) == 0 && uVar9 == 0) {
LAB_004dfd3c:
      uVar9 = 0;
      goto LAB_004dfa74;
    }
  }
  else {
    uVar18 = uVar19;
    if (bVar1) {
      uVar18 = uVar19 | 0x80;
      iVar3 = FUN_00407950(param_4);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar6 = FUN_00407970(param_4,iVar3);
          iVar4 = FUN_004dfe50(param_1,uVar6,0);
          if (iVar4 == 0) {
            if (uVar9 == 0) goto LAB_004dfa74;
            uVar18 = uVar19;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00407950(param_4);
        } while (iVar3 < iVar4);
      }
      goto LAB_004dfa08;
    }
LAB_004dfa58:
    uVar18 = uVar18 | 0x600;
  }
  uVar18 = uVar18 | (uVar9 == 0 || (uVar9 & (uVar18 ^ 0xffffffff)) == 0);
LAB_004dfa74:
  uVar2 = FUN_004c4ae0(param_1);
  uVar19 = 0x102;
  if ((uVar2 & 0xffffff00) == 0x300) {
    iVar3 = FUN_004c4ae0(param_1);
    uVar19 = 0x102;
    if (0x302 < iVar3) {
      uVar19 = *puVar17 & 0x102;
    }
  }
  uVar19 = uVar19 | uVar18;
  if (uVar9 == 0) {
    if ((uVar18 & 1) == 0) {
      uVar19 = 0;
      *puVar17 = *puVar17 & 0x102;
    }
    else {
      *puVar17 = uVar19;
    }
  }
  return uVar19;
}


