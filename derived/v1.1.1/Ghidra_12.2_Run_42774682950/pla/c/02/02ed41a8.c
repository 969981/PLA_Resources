/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed41a8; name: FUN_02ed41a8
 */


void FUN_02ed41a8(undefined8 *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_58;
  
  *param_1 = &PTR_FUN_042aa708;
  param_1[3] = &PTR_LAB_042aa958;
  puVar10 = param_1 + 6;
  *puVar10 = &PTR_FUN_042aa9f0;
  plVar11 = (long *)param_1[0xc];
  if (plVar11 == (long *)0x0) {
    if (param_1[0x12] != 0) goto LAB_02ed458c;
LAB_02ed41fc:
    if (param_1[0xe] != 0) goto LAB_02ed45a4;
LAB_02ed4204:
    if (param_1[0xd] != 0) goto LAB_02ed45d8;
LAB_02ed420c:
    lVar12 = param_1[0xb];
    if (lVar12 != 0) goto LAB_02ed45f0;
LAB_02ed4214:
    lVar12 = param_1[0xf];
  }
  else {
    lVar14 = *plVar11;
    plVar4 = plVar11 + 1;
    lVar12 = lVar14;
    if ((int)*plVar4 != 0) {
      do {
        lVar14 = *(long *)(lVar12 + 8);
        if (lVar14 != 0) {
          FUN_02ef41c0(lVar14);
          (*DAT_0442d150)(4,lVar14);
          plVar11 = (long *)param_1[0xc];
        }
        lVar14 = *plVar11;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != lVar14 + (ulong)*(uint *)(plVar11 + 1) * 0x10);
      plVar4 = plVar11 + 1;
    }
    if (lVar14 != 0) {
      *(int *)plVar4 = 0;
      (*DAT_0442d150)(0,lVar14);
      *plVar11 = 0;
      *(undefined4 *)((long)plVar11 + 0xc) = 0;
      plVar11 = (long *)param_1[0xc];
    }
    if (plVar11 != (long *)0x0) {
      (*DAT_0442d150)(4,plVar11);
    }
    param_1[0xc] = 0;
    if (param_1[0x12] == 0) goto LAB_02ed41fc;
LAB_02ed458c:
    (*DAT_0442d150)(2);
    if (param_1[0xe] == 0) goto LAB_02ed4204;
LAB_02ed45a4:
    FUN_02eb25e0();
    lVar12 = param_1[0xe];
    if (lVar12 != 0) {
      FUN_02eb254c(lVar12);
      (*DAT_0442d150)(2,lVar12);
    }
    param_1[0xe] = 0;
    if (param_1[0xd] == 0) goto LAB_02ed420c;
LAB_02ed45d8:
    (*DAT_0442d150)(2);
    lVar12 = param_1[0xb];
    if (lVar12 == 0) goto LAB_02ed4214;
LAB_02ed45f0:
    FUN_02ef41c0(lVar12);
    (*DAT_0442d150)(4,lVar12);
    lVar12 = param_1[0xf];
  }
  if (lVar12 == 0) goto LAB_02ed421c;
  if ((*(byte *)(lVar12 + 0x98) >> 1 & 1) == 0) {
LAB_02ed461c:
    if (param_1[0x10] != 0) {
      FUN_02ed5a4c();
    }
    if (param_1[0x11] != 0) {
      FUN_02ed5a4c();
    }
  }
  else {
    puVar7 = &DAT_0440ad60;
    puVar8 = &DAT_0440ad60;
    puVar6 = (undefined8 *)0x0;
    do {
      puVar5 = puVar6;
      puVar6 = (undefined8 *)*puVar8;
      puVar8 = puVar6 + 8;
    } while (puVar6 != (undefined8 *)0x0 && puVar6 != param_1);
    if (puVar6 != (undefined8 *)0x0) {
      if (DAT_0440ad60 != puVar6) {
        puVar7 = puVar5 + 8;
      }
      *puVar7 = puVar6[8];
      if (DAT_0440ad58 == puVar6) {
        DAT_0440ad58 = puVar5;
      }
      DAT_0440ad50 = DAT_0440ad50 + -1;
      lVar12 = param_1[0xf];
    }
    if (lVar12 != 0) goto LAB_02ed461c;
  }
  FUN_02ed5b5c(&DAT_0440a928,param_1[0xf]);
  param_1[0xf] = 0;
LAB_02ed421c:
  if (DAT_0440a940 != 0) {
    uVar1 = 0;
    uVar9 = (uint)puVar10;
    if (DAT_0440a940 != 0) {
      uVar1 = uVar9 / DAT_0440a940;
    }
    for (plVar11 = *(long **)(DAT_0440a938 + (ulong)(uVar9 - uVar1 * DAT_0440a940) * 8);
        plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (*(uint *)(plVar11 + 1) == uVar9) {
        for (lVar12 = plVar11[2]; lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
          local_58 = 0xffffffffffffffff;
          FUN_02ee8f80(lVar12,&local_58,1);
        }
        break;
      }
    }
  }
  if (param_1[0x13] != 0) {
    (*DAT_0442d150)(0);
  }
  puVar8 = param_1 + 9;
  *puVar8 = &PTR_FUN_042aac58;
  puVar2 = (ulong *)param_1[10];
  param_1[0x13] = 0;
  if (puVar2 != (ulong *)0x0) {
    if (*puVar2 != 0) {
      if ((*puVar2 & 1) != 0) {
        FUN_02ee0bfc(DAT_0440a160,puVar8,0);
        *(ulong *)param_1[10] = *(ulong *)param_1[10] & 0xfffffffffffffffe;
        puVar2 = (ulong *)param_1[10];
      }
      if (*puVar2 != 0) {
        if (((uint)*puVar2 >> 1 & 1) != 0) {
          FUN_02ee0bfc(DAT_0440a160,puVar8,1);
          *(ulong *)param_1[10] = *(ulong *)param_1[10] & 0xfffffffffffffffd;
          puVar2 = (ulong *)param_1[10];
        }
        if (*puVar2 != 0) {
          if (((uint)*puVar2 >> 2 & 1) != 0) {
            FUN_02ee0bfc(DAT_0440a160,puVar8,2);
            *(ulong *)param_1[10] = *(ulong *)param_1[10] & 0xfffffffffffffffb;
            puVar2 = (ulong *)param_1[10];
          }
          uVar3 = *puVar2;
          if (uVar3 != 0) {
            uVar13 = 3;
            do {
              uVar15 = 1L << (uVar13 & 0x3f);
              if ((uVar15 & uVar3) != 0) {
                FUN_02ee0bfc(DAT_0440a160,puVar8,uVar13);
                *(ulong *)param_1[10] = *(ulong *)param_1[10] & (uVar15 ^ 0xffffffffffffffff);
                puVar2 = (ulong *)param_1[10];
              }
              uVar3 = *puVar2;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar3 != 0);
          }
        }
      }
    }
    FUN_02eea7e0(2);
    param_1[10] = 0;
  }
  puVar2 = (ulong *)param_1[7];
  param_1[6] = &PTR_FUN_042aac58;
  if (puVar2 != (ulong *)0x0) {
    if (*puVar2 != 0) {
      if ((*puVar2 & 1) != 0) {
        FUN_02ee0bfc(DAT_0440a160,puVar10,0);
        *(ulong *)param_1[7] = *(ulong *)param_1[7] & 0xfffffffffffffffe;
        puVar2 = (ulong *)param_1[7];
      }
      if (*puVar2 != 0) {
        if (((uint)*puVar2 >> 1 & 1) != 0) {
          FUN_02ee0bfc(DAT_0440a160,puVar10,1);
          *(ulong *)param_1[7] = *(ulong *)param_1[7] & 0xfffffffffffffffd;
          puVar2 = (ulong *)param_1[7];
        }
        if (*puVar2 != 0) {
          if (((uint)*puVar2 >> 2 & 1) != 0) {
            FUN_02ee0bfc(DAT_0440a160,puVar10,2);
            *(ulong *)param_1[7] = *(ulong *)param_1[7] & 0xfffffffffffffffb;
            puVar2 = (ulong *)param_1[7];
          }
          uVar3 = *puVar2;
          if (uVar3 != 0) {
            uVar13 = 3;
            do {
              uVar15 = 1L << (uVar13 & 0x3f);
              if ((uVar15 & uVar3) != 0) {
                FUN_02ee0bfc(DAT_0440a160,puVar10,uVar13);
                *(ulong *)param_1[7] = *(ulong *)param_1[7] & (uVar15 ^ 0xffffffffffffffff);
                puVar2 = (ulong *)param_1[7];
              }
              uVar3 = *puVar2;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar3 != 0);
          }
        }
      }
    }
    FUN_02eea7e0(2);
    param_1[7] = 0;
  }
  FUN_02ecf5c0(param_1 + 3);
  *param_1 = &PTR_FUN_042a9740;
  return;
}


