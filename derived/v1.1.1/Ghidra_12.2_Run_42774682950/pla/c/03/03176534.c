/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03176534; name: FUN_03176534
 */


void FUN_03176534(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *__s;
  long lVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_b0 [2];
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar11 = *(long *)(param_1 + 0x38);
    lVar7 = 0;
    lVar9 = 0x1c;
    do {
      if (*(int *)(lVar11 + lVar9) == *(int *)(*(long *)(param_2 + 0x20) + 0x178)) {
        if ((int)lVar7 != 1) {
          iVar10 = -(int)lVar7;
          goto LAB_031765d4;
        }
        break;
      }
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + 0xf0;
    } while (-lVar7 != (long)*(int *)(param_1 + 0x40));
  }
  FUN_031763f8(local_68,param_1);
  lVar11 = *(long *)(param_1 + 0x38);
  iVar10 = local_68[0];
LAB_031765d4:
  plVar13 = (long *)(lVar11 + (long)iVar10 * 0xf0);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar9 = FUN_02898b44();
  }
  *(int *)(lVar9 + 0x17c) = iVar10;
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*plVar13;
  lVar9 = (long)iVar10;
  *plVar13 = param_2;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar13 = plVar5 + 2;
    do {
      lVar7 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  pbVar14 = (byte *)(lVar11 + lVar9 * 0xf0 + 0xe0);
  *pbVar14 = *pbVar14 | 1;
  if ((param_8 >> 1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    lVar7 = lVar11 + lVar9 * 0xf0;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(lVar7 + 0x30) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(lVar7 + 0x40) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(lVar7 + 0x50) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(lVar7 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(lVar7 + 0x70) = uVar6;
    if (param_5 == 0) goto LAB_03176758;
  }
  else {
    lVar7 = lVar11 + lVar9 * 0xf0;
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(param_2 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar7 + 0x38);
    *(undefined8 *)(param_2 + 0x70) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 *)(param_2 + 0x80) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(param_2 + 0x90) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x60);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar7 + 0x68);
    *(undefined8 *)(param_2 + 0xa0) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x70);
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(lVar7 + 0x78);
    *(undefined8 *)(param_2 + 0xb0) = uVar6;
    if (param_5 == 0) goto LAB_03176758;
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(param_5 + 0x48) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(param_5 + 0x40) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(param_5 + 0x58) = *(undefined8 *)(lVar7 + 0x38);
    *(undefined8 *)(param_5 + 0x50) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(param_5 + 0x68) = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 *)(param_5 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(param_5 + 0x70) = uVar6;
  }
  if (*(long *)(*(long *)(param_1 + 0x38) + lVar9 * 0xf0 + 0x10) == 0) {
    if (*(char *)(param_5 + 0x30) == '\x01') {
      lVar7 = *(long *)(param_5 + 0x20);
    }
    else {
      lVar7 = FUN_02898d80();
    }
    *(int *)(lVar7 + 0x60) = iVar10;
    plVar13 = (long *)(lVar11 + lVar9 * 0xf0 + 0x10);
    if (*(long *)(param_5 + 8) != 0) {
      plVar5 = (long *)(param_5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)*plVar13;
    *plVar13 = param_5;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar13 = plVar5 + 2;
      do {
        lVar7 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    *pbVar14 = *pbVar14 | 4;
    for (; param_6 != param_7; param_6 = param_6 + 1) {
      local_70[0] = iVar10;
      FUN_03176b40(param_1,local_70,*param_6);
    }
    lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0x68);
    iVar1 = *(int *)(lVar7 + 0x78);
    if (iVar1 != 0) {
      lVar11 = (long)iVar1 << 4;
      puVar12 = (undefined8 *)(*(long *)(lVar7 + 0x70) + 8);
      do {
        local_78[0] = iVar10;
        FUN_03176b40(param_1,local_78,*puVar12);
        lVar11 = lVar11 + -0x10;
        puVar12 = puVar12 + 2;
      } while (lVar11 != 0);
    }
    FUN_0318469c(param_5,param_1);
  }
LAB_03176758:
  lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  uStack_98 = *(undefined8 *)(lVar7 + 0x98);
  local_a0 = *(undefined8 *)(lVar7 + 0x90);
  uStack_88 = *(undefined8 *)(lVar7 + 0xa8);
  uStack_90 = *(undefined8 *)(lVar7 + 0xa0);
  fVar15 = (float)local_a0;
  fVar17 = (float)uStack_90;
  fVar16 = (float)((ulong)local_a0 >> 0x20);
  fVar19 = (float)((ulong)uStack_90 >> 0x20);
  fVar18 = (float)uStack_98;
  fVar20 = (float)uStack_88;
  if (fVar18 <= fVar20 && (fVar16 <= fVar19 && fVar15 <= fVar17)) {
    fVar23 = (fVar15 + fVar17) * 0.5;
    fVar24 = (fVar16 + fVar19) * 0.5;
    fVar25 = (fVar18 + fVar20) * 0.5;
    fVar15 = (fVar17 - fVar15) * 0.5;
    fVar17 = (fVar19 - fVar16) * 0.5;
    fVar19 = (fVar20 - fVar18) * 0.5;
    fVar28 = (float)*(undefined8 *)(param_2 + 0x70);
    fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_2 + 0x78);
    fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
    fVar26 = (float)*(undefined8 *)(param_2 + 0x60);
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    fVar21 = (float)*(undefined8 *)(param_2 + 0x68);
    fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_2 + 0x80);
    fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    fVar34 = (float)*(undefined8 *)(param_2 + 0x88);
    fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
    fVar16 = ABS(fVar26 * fVar15) + ABS(fVar28 * fVar17) + ABS(fVar32 * fVar19);
    fVar18 = ABS(fVar27 * fVar15) + ABS(fVar29 * fVar17) + ABS(fVar33 * fVar19);
    fVar20 = ABS(fVar21 * fVar15) + ABS(fVar30 * fVar17) + ABS(fVar34 * fVar19);
    fVar15 = ABS(fVar22 * fVar15) + ABS(fVar31 * fVar17) + ABS(fVar35 * fVar19);
    fVar17 = (float)*(undefined8 *)(param_2 + 0x90) +
             fVar32 * fVar25 + fVar26 * fVar23 + fVar28 * fVar24;
    fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
             fVar33 * fVar25 + fVar27 * fVar23 + fVar29 * fVar24;
    fVar26 = (float)*(undefined8 *)(param_2 + 0x98) +
             fVar34 * fVar25 + fVar21 * fVar23 + fVar30 * fVar24;
    fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20) +
             fVar35 * fVar25 + fVar22 * fVar23 + fVar31 * fVar24;
    uStack_90 = CONCAT44(fVar19 + fVar18,fVar17 + fVar16);
    uStack_88 = CONCAT44(fVar27 + fVar15,fVar26 + fVar20);
    local_a0 = CONCAT44(fVar19 - fVar18,fVar17 - fVar16);
    uStack_98 = CONCAT44(fVar27 - fVar15,fVar26 - fVar20);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar6 = FUN_0317c11c();
  }
  uVar4 = FUN_001d4c1c(uVar6,&local_a0,iVar10);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar9 * 0xf0 + 0x18) = uVar4;
  fVar15 = *(float *)(*(long *)(*(long *)(param_2 + 0x20) + 0x68) + 0xb0);
  pfVar8 = (float *)(param_1 + (long)*(int *)(*(long *)(param_2 + 0x20) + 0x180) * 4 + 0x60);
  if (*pfVar8 != fVar15) {
    *pfVar8 = fVar15;
  }
  lVar9 = tpidr_el0;
  if ((param_8 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      lVar7 = *(long *)(lVar9 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar7;
      }
      plVar13 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      __s = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x330,0);
      memset(__s,0,0x330);
      FUN_0317be5c(__s);
      plVar13 = *(long **)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __s;
      if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
        plVar5 = plVar13 + 2;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
    }
    iVar1 = *(int *)(*(long *)(param_2 + 0x20) + 0x17c);
    if (iVar1 != -1) {
      local_a0 = CONCAT44(local_a0._4_4_,iVar1);
      FUN_03179e28(param_1,&local_a0);
    }
  }
  lVar11 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar9 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_a8[0] = iVar10;
    FUN_03176d34(param_1,local_a8,*param_3);
  }
  lVar11 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar9 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  iVar1 = *(int *)(lVar9 + 0x50);
  if (iVar1 != 0) {
    lVar7 = (long)iVar1 << 4;
    puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x48) + 8);
    do {
      local_b0[0] = iVar10;
      FUN_03176d34(param_1,local_b0,*puVar12);
      lVar7 = lVar7 + -0x10;
      puVar12 = puVar12 + 2;
    } while (lVar7 != 0);
  }
  return;
}


