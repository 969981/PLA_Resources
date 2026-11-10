/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecb9b8; name: FUN_02ecb9b8
 */


void FUN_02ecb9b8(long param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  
  puVar2 = (uint *)(param_1 + 0x2a3);
  uVar6 = *puVar2;
  if ((uVar6 >> 0x1a & 1) != 0) {
    FUN_02ecdc84(param_1,0);
    uVar6 = *puVar2;
  }
  if ((uVar6 >> 0x14 & 1) == 0) {
    *puVar2 = uVar6 | 0x100000;
    if (*(int *)(param_1 + 0x2f0) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x2e8);
      do {
        puVar15 = puVar12 + 1;
        FUN_02ed3888(*puVar12,param_1);
        puVar12 = puVar15;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8));
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    local_38 = 1;
    local_50[0] = 0;
    local_34 = 0x100;
    local_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = 0;
    (**(code **)(**(long **)(param_1 + 0x180) + 0x128))(*(long **)(param_1 + 0x180),local_50);
  }
  lVar7 = *(long *)(param_1 + 0x218);
  if (lVar7 == 0) {
LAB_02ecba60:
    lVar7 = *(long *)(param_1 + 0x220);
    if (lVar7 == 0) goto LAB_02ecba68;
LAB_02ecbcec:
    plVar13 = *(long **)(lVar7 + 0x28);
    uVar6 = *(uint *)(lVar7 + 0x30);
    plVar8 = plVar13 + uVar6;
    if ((uVar6 != 0) && (*plVar13 != param_1 + 0x10)) {
      lVar16 = (ulong)uVar6 * 8;
      plVar14 = plVar13;
      do {
        lVar16 = lVar16 + -8;
        if (lVar16 == 0) goto LAB_02ecba68;
        plVar13 = plVar14 + 1;
        plVar1 = plVar14 + 1;
        plVar14 = plVar13;
      } while (*plVar1 != param_1 + 0x10);
      if (plVar8 != plVar13) goto LAB_02ecbd04;
      goto LAB_02ecba68;
    }
    if (plVar8 == plVar13) goto LAB_02ecba68;
LAB_02ecbd04:
    if (1 < uVar6) {
      *plVar13 = plVar8[-1];
      uVar6 = *(uint *)(lVar7 + 0x30);
    }
    *(uint *)(lVar7 + 0x30) = uVar6 - 1;
    if (uVar6 - 1 != 0) goto LAB_02ecba68;
    *(undefined4 *)(lVar7 + 0x3c) = 6;
    uVar6 = *puVar2;
    if ((uVar6 >> 8 & 1) == 0) goto LAB_02ecba70;
LAB_02ecbd28:
    *puVar2 = uVar6 & 0xfffffeff;
    uVar6 = *(uint *)(param_1 + 0x210);
    plVar8 = DAT_0440a170;
  }
  else {
    plVar13 = *(long **)(lVar7 + 0x28);
    uVar6 = *(uint *)(lVar7 + 0x30);
    plVar8 = plVar13 + uVar6;
    if ((uVar6 != 0) && (*plVar13 != param_1 + 0x10)) {
      lVar16 = (ulong)uVar6 * 8;
      plVar14 = plVar13;
      do {
        lVar16 = lVar16 + -8;
        if (lVar16 == 0) goto LAB_02ecba60;
        plVar13 = plVar14 + 1;
        plVar1 = plVar14 + 1;
        plVar14 = plVar13;
      } while (*plVar1 != param_1 + 0x10);
      if (plVar8 != plVar13) goto LAB_02ecbcc8;
      goto LAB_02ecba60;
    }
    if (plVar8 == plVar13) goto LAB_02ecba60;
LAB_02ecbcc8:
    if (1 < uVar6) {
      *plVar13 = plVar8[-1];
      uVar6 = *(uint *)(lVar7 + 0x30);
    }
    *(uint *)(lVar7 + 0x30) = uVar6 - 1;
    if (uVar6 - 1 != 0) goto LAB_02ecba60;
    *(undefined4 *)(lVar7 + 0x3c) = 6;
    lVar7 = *(long *)(param_1 + 0x220);
    if (lVar7 != 0) goto LAB_02ecbcec;
LAB_02ecba68:
    uVar6 = *puVar2;
    if ((uVar6 >> 8 & 1) != 0) goto LAB_02ecbd28;
LAB_02ecba70:
    uVar6 = *(uint *)(param_1 + 0x210);
    plVar8 = DAT_0440a170;
  }
  DAT_0440a170 = plVar8;
  if (uVar6 != 0) {
    nn::os::LockMutex((MutexType *)(plVar8 + 3));
    uVar3 = *(uint *)(plVar8 + 1);
    if (uVar3 != 0) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar6 / uVar3;
      }
      for (lVar7 = *(long *)(*plVar8 + (ulong)(uVar6 - uVar5 * uVar3) * 8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x68)) {
        if (*(uint *)(lVar7 + 0x4c) == uVar6) {
          *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
          FUN_02edcd9c(plVar8,uVar6);
          goto LAB_02ecbacc;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
  }
LAB_02ecbacc:
  lVar7 = param_1 + 0x18;
  FUN_02ef4594(param_1 + 0x1a8,param_1 + 0x28);
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  lVar16 = *(long *)(param_1 + 0x180);
  if (*(long *)(lVar16 + 0x78) != 0) {
    plVar8 = (long *)(*(long *)(lVar16 + 0x78) + 0x10);
    lVar9 = *plVar8;
    lVar10 = 0;
    lVar11 = lVar9;
    if ((lVar9 != 0) && (lVar9 != lVar7)) {
      do {
        lVar10 = lVar11;
        lVar11 = *(long *)(lVar10 + 0x48);
      } while (lVar11 != 0 && lVar11 != lVar7);
    }
    if (lVar11 != 0) {
      if (lVar11 != lVar9) {
        plVar8 = (long *)(lVar10 + 0x48);
      }
      *plVar8 = *(long *)(lVar11 + 0x48);
    }
    lVar11 = *(long *)(lVar16 + 0x78);
    if (((((*(short *)(lVar11 + 0x90) < 1) && (*(short *)(lVar11 + 0x94) < 1)) &&
         (*(short *)(lVar11 + 0x88) == 0)) &&
        ((*(short *)(lVar11 + 0x8a) == 0 && (*(long *)(lVar11 + 0x10) == 0)))) &&
       (*(int *)(lVar11 + 8) == 0)) {
      if ((*(byte *)(lVar11 + 0x98) >> 1 & 1) == 0) {
LAB_02ecbbf0:
        if (*(long *)(lVar16 + 0x80) != 0) {
          FUN_02ed5a4c();
        }
        if (*(long *)(lVar16 + 0x88) != 0) {
          FUN_02ed5a4c();
        }
      }
      else {
        puVar12 = &DAT_0440ad60;
        plVar8 = &DAT_0440ad60;
        lVar9 = 0;
        do {
          lVar10 = lVar9;
          lVar9 = *plVar8;
          plVar8 = (long *)(lVar9 + 0x40);
        } while (lVar9 != 0 && lVar16 != lVar9);
        if (lVar9 != 0) {
          if (DAT_0440ad60 != lVar9) {
            puVar12 = (undefined8 *)(lVar10 + 0x40);
          }
          *puVar12 = *(undefined8 *)(lVar9 + 0x40);
          if (DAT_0440ad58 == lVar9) {
            DAT_0440ad58 = lVar10;
          }
          DAT_0440ad50 = DAT_0440ad50 + -1;
          lVar11 = *(long *)(lVar16 + 0x78);
        }
        if (lVar11 != 0) goto LAB_02ecbbf0;
      }
      FUN_02ed5b5c(&DAT_0440a928,*(undefined8 *)(lVar16 + 0x78));
      *(undefined8 *)(lVar16 + 0x78) = 0;
      lVar16 = *(long *)(param_1 + 0x2c8);
      goto joined_r0x02ecbb50;
    }
  }
  lVar16 = *(long *)(param_1 + 0x2c8);
joined_r0x02ecbb50:
  if (lVar16 != 0) {
    if (*(long *)(*(undefined4 **)(param_1 + 0x230) + 4) == 0) {
      FUN_02e968c8(DAT_0440a148,**(undefined4 **)(param_1 + 0x230));
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_02e8e5e0(*(long *)(param_1 + 0x1d0),0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  uVar4 = *(ushort *)(*(long *)(param_1 + 0x230) + 0xc);
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_02ecbe70(*(long *)(param_1 + 0x2d8),param_1);
    FUN_02e7b4e0(*(undefined8 *)(param_1 + 0x2d8));
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  if (((uVar4 >> 8 & 1) != 0) && (lVar16 = *(long *)(param_1 + 0x230), lVar16 != 0)) {
    FUN_02ef63b4(lVar16);
    (*DAT_0442d150)(0,lVar16);
  }
  FUN_02e9be6c(lVar7,0);
  return;
}


