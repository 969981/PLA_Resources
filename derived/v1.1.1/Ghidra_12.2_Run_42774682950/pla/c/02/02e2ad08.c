/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2ad08; name: FUN_02e2ad08
 */


undefined8 FUN_02e2ad08(long *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  size_t __nmemb;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  
  FUN_02e2b1b4();
  lVar6 = param_1[3];
  if ((*(int *)(lVar6 + 0x24) == 0) && (*(int *)(lVar6 + 0x18) != 0)) {
    uVar9 = 0;
    do {
      uVar1 = uVar9 + 1;
      *(undefined4 *)(lVar6 + uVar9 * 4 + 0x28) = (&DAT_03a9ec80)[uVar9];
      lVar6 = param_1[3];
      uVar9 = uVar1;
    } while (uVar1 < *(uint *)(lVar6 + 0x18));
  }
  uVar4 = (uint)(param_2 >> 0xc);
  uVar7 = uVar4 & 0xffff7;
  uVar2 = (uint)param_2;
  if (*(int *)(lVar6 + 0x20) == 0) {
    uVar2 = (uint)param_2 - ((uVar4 & 0xfffff) - uVar7 >> 3) & 0xff | uVar7 << 0xc;
  }
  uVar7 = uVar2 >> 0xc;
  *(uint *)((long)param_1 + 0x264) = uVar2 & 0xff;
  if (uVar7 < 0x607) {
    if (uVar7 == 3) {
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar8 = &LAB_02e2c680;
        break;
      case 1:
        puVar8 = &LAB_02e2ca44;
        break;
      case 2:
        puVar8 = &LAB_02e2cd70;
        break;
      case 3:
        puVar8 = &LAB_02e2d1a0;
        break;
      default:
        goto switchD_02e2ada8_default;
      }
    }
    else if (uVar7 == 4) {
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar8 = &LAB_02e2b744;
        break;
      case 1:
        puVar8 = &LAB_02e2ba4c;
        break;
      case 2:
        puVar8 = &LAB_02e2bd00;
        break;
      case 3:
        puVar8 = &LAB_02e2c0c0;
        break;
      default:
        goto switchD_02e2ada8_default;
      }
    }
    else {
LAB_02e2ae3c:
      switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
      case 0:
        puVar8 = &LAB_02e30360;
        break;
      case 1:
        puVar8 = &LAB_02e307ec;
        break;
      case 2:
        puVar8 = &LAB_02e30db0;
        break;
      case 3:
        puVar8 = &LAB_02e315b8;
        break;
      default:
        goto switchD_02e2ada8_default;
      }
    }
  }
  else if (uVar7 == 0x607) {
    switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
    case 0:
      puVar8 = &LAB_02e2d7e4;
      break;
    case 1:
      puVar8 = &LAB_02e2db58;
      break;
    case 2:
      puVar8 = &LAB_02e2dfbc;
      break;
    case 3:
      puVar8 = &LAB_02e2e548;
      break;
    default:
      goto switchD_02e2ada8_default;
    }
  }
  else {
    if (uVar7 != 0x60f) goto LAB_02e2ae3c;
    switch(*(int *)(lVar6 + 0x18) - 4U >> 2 | *(int *)(lVar6 + 0x18) << 0x1e) {
    case 0:
      puVar8 = &LAB_02e2ec90;
      break;
    case 1:
      puVar8 = &LAB_02e2f038;
      break;
    case 2:
      puVar8 = &LAB_02e2f548;
      break;
    case 3:
      puVar8 = &LAB_02e2fb68;
      break;
    default:
      goto switchD_02e2ada8_default;
    }
  }
  param_1[1] = (long)puVar8;
  param_1[2] = 0;
switchD_02e2ada8_default:
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
  uVar7 = (uint)(*(float *)(lVar6 + 0x1c) * fVar13);
  *(uint *)(param_1 + 9) = uVar7;
  if (uVar7 != 0) {
    lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],(ulong)uVar7 << 2);
    param_1[6] = lVar6;
    if (lVar6 == 0) {
      return 0x34;
    }
    param_1[7] = lVar6;
    param_1[8] = lVar6 + (ulong)*(uint *)(param_1 + 9) * 4;
    lVar6 = param_1[3];
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    __nmemb = 0;
  }
  else {
    uVar9 = 0;
    plVar11 = param_1 + 0xb;
    do {
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
      *(int *)plVar11 = (int)(*(float *)(lVar6 + uVar9 * 4 + 0x28) * 0.001 * fVar13);
      FUN_02e31ffc(plVar11);
      lVar6 = param_1[3];
      uVar9 = uVar9 + 1;
      __nmemb = (size_t)*(uint *)(lVar6 + 0x18);
      plVar11 = (long *)((long)plVar11 + 4);
    } while (uVar9 < __nmemb);
  }
  qsort(param_1 + 0xb,__nmemb,4,(__compar_fn_t)&LAB_02e32060);
  if (3 < *(uint *)(param_1[3] + 0x18)) {
    piVar10 = (int *)((long)param_1 + 100);
    lVar6 = 0x2b;
    plVar11 = param_1 + 0x23;
    plVar12 = param_1 + 0x16;
    do {
      iVar3 = *piVar10;
      lVar5 = (**(code **)(*(long *)param_1[4] + 0x10))
                        ((long *)param_1[4],(ulong)(uint)(iVar3 << 2) << 2);
      *plVar11 = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      plVar11[4] = lVar5;
      plVar11[8] = lVar5 + (ulong)(uint)(iVar3 << 2) * 4;
      plVar12[-3] = lVar5 + (ulong)(uint)((iVar3 - piVar10[-3]) * 4) * 4;
      plVar12[-2] = *plVar11 + (ulong)((iVar3 - piVar10[-2]) * 4 | 1) * 4;
      uVar9 = lVar6 - 0x2a;
      lVar6 = lVar6 + 1;
      plVar12[-1] = *plVar11 + (ulong)((iVar3 - piVar10[-1]) * 4 | 2) * 4;
      *plVar12 = *plVar11 + 0xc;
      piVar10 = piVar10 + 4;
      plVar11 = plVar11 + 1;
      plVar12 = plVar12 + 4;
    } while (uVar9 < *(uint *)(param_1[3] + 0x18) >> 2);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1[3] + 0x68) = 0;
  return 1;
}


