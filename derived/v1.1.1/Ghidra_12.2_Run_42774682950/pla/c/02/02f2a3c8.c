/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2a3c8; name: FUN_02f2a3c8
 */


undefined8 FUN_02f2a3c8(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((param_3 & 1) != 0) {
    pvVar3 = (void *)(*DAT_0442d140)(5,(uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x10) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
      memset(pvVar3,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    pvVar3 = (void *)(*DAT_0442d140)(5,(uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x18) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
      memset(pvVar3,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
  }
  if ((param_3 >> 4 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 8) & 0xff;
    if ((*(uint *)(param_1 + 8) & 0xf00) == 0x200) {
      uVar2 = 1;
    }
    uVar4 = (*DAT_0442d138)(5,uVar2 * 0x24);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    lVar5 = (*DAT_0442d138)(5,uVar2 * 0x24);
    *(long *)(param_1 + 0x40) = lVar5;
    if (lVar5 == 0) {
      return 2;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      return 2;
    }
    fVar10 = 9443.0 / (float)param_2;
    fVar7 = sinf(fVar10);
    fVar10 = cosf(fVar10);
    if (uVar2 != 0) {
      fVar7 = fVar7 * 1.5803077;
      fVar11 = 2.2589254 - fVar10 * 0.25892544;
      fVar12 = fVar11 + fVar7;
      fVar9 = 1.0 / fVar12;
      fVar8 = fVar10 * 0.25892544 + 2.2589254;
      lVar6 = 0;
      if (lVar5 != 0) goto LAB_02f2a650;
      lVar5 = 0;
      while( true ) {
        lVar5 = lVar5 + lVar6;
        *(float *)(lVar5 + 0x10) = (fVar8 + fVar7) * 1.2589254 * fVar9;
        *(float *)(lVar5 + 0x14) = (fVar10 * -5.6876373 + -0.65193564) * fVar9;
        *(float *)(lVar5 + 0x18) = (fVar8 - fVar7) * 1.2589254 * fVar9;
        *(float *)(lVar5 + 0x1c) = (fVar10 * 4.517851 + -0.5178509) / fVar12;
        *(float *)(lVar5 + 0x20) = (fVar7 - fVar11) / fVar12;
        if ((ulong)uVar2 * 0x24 + -0x24 == lVar6) break;
        lVar5 = *(long *)(param_1 + 0x40);
        lVar6 = lVar6 + 0x24;
        if (lVar5 + lVar6 != 0) {
LAB_02f2a650:
          puVar1 = (undefined8 *)(lVar5 + lVar6);
          *(undefined4 *)(puVar1 + 4) = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar5 = *(long *)(param_1 + 0x40);
        }
      }
    }
    fVar10 = 238.76105 / (float)param_2;
    fVar7 = sinf(fVar10);
    fVar10 = cosf(fVar10);
    if (uVar2 != 0) {
      fVar9 = fVar7 + 1.0;
      lVar5 = 0;
      fVar8 = ((fVar10 + 1.0) * 0.5) / fVar9;
      do {
        lVar6 = *(long *)(param_1 + 0x38);
        if (lVar6 + lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar6 + lVar5);
          *(undefined4 *)(puVar1 + 4) = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar6 = *(long *)(param_1 + 0x38);
        }
        lVar6 = lVar6 + lVar5;
        lVar5 = lVar5 + 0x24;
        *(float *)(lVar6 + 0x10) = fVar8;
        *(float *)(lVar6 + 0x14) = -(fVar10 + 1.0) / fVar9;
        *(float *)(lVar6 + 0x18) = fVar8;
        *(float *)(lVar6 + 0x1c) = (fVar10 + fVar10) / fVar9;
        *(float *)(lVar6 + 0x20) = (fVar7 + -1.0) / fVar9;
      } while ((ulong)uVar2 * 0x24 != lVar5);
    }
  }
  if ((param_3 >> 1 & 1) != 0) {
    pvVar3 = (void *)(*DAT_0442d140)(5,(uint)*(byte *)(param_1 + 8) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x20) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) == 0) {
      __n = 0;
    }
    else {
      memset(pvVar3,0,(ulong)*(byte *)(param_1 + 8) << 2);
      __n = (ulong)*(byte *)(param_1 + 8) * 0x30;
    }
    pvVar3 = (void *)(*DAT_0442d140)(5,__n,0x10);
    *(void **)(param_1 + 0x28) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 2;
    }
    memset(pvVar3,0,__n);
  }
  if (((param_3 >> 5 & 1) != 0) && ((*(uint *)(param_1 + 8) & 0xf00) == 0x200)) {
    pvVar3 = (void *)(*DAT_0442d140)(5,(*(uint *)(param_1 + 8) & 0xff) * 4 + 0xc & 0x7f0,0x10);
    *(void **)(param_1 + 0x30) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 8) != 0) {
      memset(pvVar3,0,(ulong)*(byte *)(param_1 + 8) << 2);
    }
  }
  *(uint *)(param_1 + 0x4c) = param_3;
  return 1;
}


