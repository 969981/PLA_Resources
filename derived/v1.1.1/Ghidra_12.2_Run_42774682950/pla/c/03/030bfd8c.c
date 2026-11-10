/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bfd8c; name: FUN_030bfd8c
 */


void FUN_030bfd8c(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  if (param_1[0xc0] != 0) {
    uVar2 = *(uint *)(param_1 + 0xc3);
    if (*(char *)((long)param_1 + 0x60c) != '\0') {
      plVar3 = (long *)param_1[0xc2];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0xc2];
      }
      *(undefined1 *)((long)param_1 + 0x60c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0xc0] + 0x28))((long *)param_1[0xc0],param_1[0xc2]);
    }
    *(undefined4 *)(param_1 + 0xc3) = 0;
    *(undefined4 *)(param_1 + 0xc1) = 0;
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x61c)) && (param_1[0xc2] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xc2],((ulong)*(uint *)((long)param_1 + 0x61c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x61c) = 0x80000000;
  param_1[0xc2] = 0;
  if (param_1[0xa0] != 0) {
    uVar2 = *(uint *)(param_1 + 0xa3);
    if (*(char *)((long)param_1 + 0x50c) != '\0') {
      plVar3 = (long *)param_1[0xa2];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0xa2];
      }
      *(undefined1 *)((long)param_1 + 0x50c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0xa0] + 0x28))((long *)param_1[0xa0],param_1[0xa2]);
    }
    *(undefined4 *)(param_1 + 0xa3) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0;
  }
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x51c)) && (param_1[0xa2] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xa2],((ulong)*(uint *)((long)param_1 + 0x51c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x51c) = 0x80000000;
  param_1[0xa2] = 0;
  if (param_1[0x80] != 0) {
    uVar2 = *(uint *)(param_1 + 0x83);
    if (*(char *)((long)param_1 + 0x40c) != '\0') {
      plVar3 = (long *)param_1[0x82];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0x82];
      }
      *(undefined1 *)((long)param_1 + 0x40c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0x80] + 0x28))((long *)param_1[0x80],param_1[0x82]);
    }
    *(undefined4 *)(param_1 + 0x83) = 0;
    *(undefined4 *)(param_1 + 0x81) = 0;
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x41c)) && (param_1[0x82] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x82],((ulong)*(uint *)((long)param_1 + 0x41c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x41c) = 0x80000000;
  param_1[0x82] = 0;
  if (param_1[0x60] != 0) {
    uVar2 = *(uint *)(param_1 + 99);
    if (*(char *)((long)param_1 + 0x30c) != '\0') {
      plVar3 = (long *)param_1[0x62];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0x62];
      }
      *(undefined1 *)((long)param_1 + 0x30c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0x60] + 0x28))((long *)param_1[0x60],param_1[0x62]);
    }
    *(undefined4 *)(param_1 + 99) = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  *(undefined4 *)(param_1 + 99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x31c)) && (param_1[0x62] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x62],((ulong)*(uint *)((long)param_1 + 0x31c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x31c) = 0x80000000;
  param_1[0x62] = 0;
  if (param_1[0x40] != 0) {
    uVar2 = *(uint *)(param_1 + 0x43);
    if (*(char *)((long)param_1 + 0x20c) != '\0') {
      plVar3 = (long *)param_1[0x42];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0x42];
      }
      *(undefined1 *)((long)param_1 + 0x20c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0x40] + 0x28))((long *)param_1[0x40],param_1[0x42]);
    }
    *(undefined4 *)(param_1 + 0x43) = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x42],((ulong)*(uint *)((long)param_1 + 0x21c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  param_1[0x42] = 0;
  if (param_1[0x20] != 0) {
    uVar2 = *(uint *)(param_1 + 0x23);
    if (*(char *)((long)param_1 + 0x10c) != '\0') {
      plVar3 = (long *)param_1[0x22];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0x22];
      }
      *(undefined1 *)((long)param_1 + 0x10c) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0x20] + 0x28))((long *)param_1[0x20],param_1[0x22]);
    }
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x22],((ulong)*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  param_1[0x22] = 0;
  if (*param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 3);
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      plVar3 = (long *)param_1[2];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = (uVar2 & 1) - uVar2;
          do {
            if (*plVar5 == 0) {
              lVar7 = plVar5[1];
              plVar4 = plVar3;
            }
            else {
              *plVar3 = *plVar5;
              lVar7 = plVar5[1];
              plVar4 = plVar3 + 1;
            }
            plVar3 = plVar4;
            if (lVar7 != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = lVar7;
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[2];
      }
      *(undefined1 *)((long)param_1 + 0xc) = 0;
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_1[2]);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


