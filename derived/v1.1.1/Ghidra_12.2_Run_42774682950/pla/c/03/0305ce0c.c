/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305ce0c; name: FUN_0305ce0c
 */


void FUN_0305ce0c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[0x156] != 0) {
    iVar2 = (int)param_1[0x159];
    if (*(char *)((long)param_1 + 0xabc) != '\0') {
      plVar5 = (long *)param_1[0x158];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x158];
      }
      *(undefined1 *)((long)param_1 + 0xabc) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x156] + 0x28))((long *)param_1[0x156],param_1[0x158]);
    }
    *(undefined4 *)(param_1 + 0x159) = 0;
    *(undefined4 *)(param_1 + 0x157) = 0;
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x159) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xacc)) && (param_1[0x158] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x158],((ulong)*(uint *)((long)param_1 + 0xacc) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xacc) = 0x80000000;
  param_1[0x158] = 0;
  if (param_1[0x134] != 0) {
    iVar2 = (int)param_1[0x137];
    if (*(char *)((long)param_1 + 0x9ac) != '\0') {
      plVar5 = (long *)param_1[0x136];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x136];
      }
      *(undefined1 *)((long)param_1 + 0x9ac) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x134] + 0x28))((long *)param_1[0x134],param_1[0x136]);
    }
    *(undefined4 *)(param_1 + 0x137) = 0;
    *(undefined4 *)(param_1 + 0x135) = 0;
  }
  *(undefined4 *)(param_1 + 0x137) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9bc)) && (param_1[0x136] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x136],((ulong)*(uint *)((long)param_1 + 0x9bc) & 0x3fffffff) << 3);
  }
  param_1[0x136] = 0;
  *(undefined4 *)((long)param_1 + 0x9bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x133) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x99c)) && (param_1[0x132] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x132],((ulong)*(uint *)((long)param_1 + 0x99c) & 0x3fffffff) << 3);
  }
  param_1[0x132] = 0;
  *(undefined4 *)((long)param_1 + 0x99c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x131) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x98c)) && (param_1[0x130] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x130],((ulong)*(uint *)((long)param_1 + 0x98c) & 0x3fffffff) << 5);
  }
  param_1[0x130] = 0;
  *(undefined4 *)((long)param_1 + 0x98c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x97c)) && (param_1[0x12e] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x12e],((ulong)*(uint *)((long)param_1 + 0x97c) & 0x3fffffff) << 3);
  }
  param_1[0x12e] = 0;
  *(undefined4 *)((long)param_1 + 0x97c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x96c)) && (param_1[300] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[300],((ulong)*(uint *)((long)param_1 + 0x96c) & 0x3fffffff) << 5);
  }
  param_1[300] = 0;
  *(undefined4 *)((long)param_1 + 0x96c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x129) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94c)) && (param_1[0x128] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x128],((ulong)*(uint *)((long)param_1 + 0x94c) & 0x3fffffff) << 3);
  }
  param_1[0x128] = 0;
  *(undefined4 *)((long)param_1 + 0x94c) = 0x80000000;
  if (param_1[0x108] != 0) {
    iVar2 = (int)param_1[0x10b];
    if (*(char *)((long)param_1 + 0x84c) != '\0') {
      plVar5 = (long *)param_1[0x10a];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x10a];
      }
      *(undefined1 *)((long)param_1 + 0x84c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x108] + 0x28))((long *)param_1[0x108],param_1[0x10a]);
    }
    *(undefined4 *)(param_1 + 0x10b) = 0;
    *(undefined4 *)(param_1 + 0x109) = 0;
  }
  *(undefined4 *)(param_1 + 0x10b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x85c)) && (param_1[0x10a] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x10a],((ulong)*(uint *)((long)param_1 + 0x85c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x85c) = 0x80000000;
  param_1[0x10a] = 0;
  if (param_1[0xe8] != 0) {
    iVar2 = (int)param_1[0xeb];
    if (*(char *)((long)param_1 + 0x74c) != '\0') {
      plVar5 = (long *)param_1[0xea];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0xea];
      }
      *(undefined1 *)((long)param_1 + 0x74c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0xe8] + 0x28))((long *)param_1[0xe8],param_1[0xea]);
    }
    *(undefined4 *)(param_1 + 0xeb) = 0;
    *(undefined4 *)(param_1 + 0xe9) = 0;
  }
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x75c)) && (param_1[0xea] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xea],((ulong)*(uint *)((long)param_1 + 0x75c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x75c) = 0x80000000;
  param_1[0xea] = 0;
  if (param_1[200] != 0) {
    iVar2 = (int)param_1[0xcb];
    if (*(char *)((long)param_1 + 0x64c) != '\0') {
      plVar5 = (long *)param_1[0xca];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0xca];
      }
      *(undefined1 *)((long)param_1 + 0x64c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[200] + 0x28))((long *)param_1[200],param_1[0xca]);
    }
    *(undefined4 *)(param_1 + 0xcb) = 0;
    *(undefined4 *)(param_1 + 0xc9) = 0;
  }
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x65c)) && (param_1[0xca] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xca],((ulong)*(uint *)((long)param_1 + 0x65c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x65c) = 0x80000000;
  param_1[0xca] = 0;
  if (param_1[0xa8] != 0) {
    iVar2 = (int)param_1[0xab];
    if (*(char *)((long)param_1 + 0x54c) != '\0') {
      plVar5 = (long *)param_1[0xaa];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0xaa];
      }
      *(undefined1 *)((long)param_1 + 0x54c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0xa8] + 0x28))((long *)param_1[0xa8],param_1[0xaa]);
    }
    *(undefined4 *)(param_1 + 0xab) = 0;
    *(undefined4 *)(param_1 + 0xa9) = 0;
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x55c)) && (param_1[0xaa] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xaa],((ulong)*(uint *)((long)param_1 + 0x55c) & 0x3fffffff) << 3);
  }
  param_1[0xaa] = 0;
  *(undefined4 *)((long)param_1 + 0x55c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x53c)) && (param_1[0xa6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xa6],((ulong)*(uint *)((long)param_1 + 0x53c) & 0x3fffffff) << 3);
  }
  param_1[0xa6] = 0;
  *(undefined4 *)((long)param_1 + 0x53c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x52c)) && (param_1[0xa4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xa4],((ulong)*(uint *)((long)param_1 + 0x52c) & 0x3fffffff) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x52c) = 0x80000000;
  param_1[0xa4] = 0;
  if (param_1[0x84] != 0) {
    iVar2 = (int)param_1[0x87];
    if (*(char *)((long)param_1 + 0x42c) != '\0') {
      plVar5 = (long *)param_1[0x86];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x86];
      }
      *(undefined1 *)((long)param_1 + 0x42c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x84] + 0x28))((long *)param_1[0x84],param_1[0x86]);
    }
    *(undefined4 *)(param_1 + 0x87) = 0;
    *(undefined4 *)(param_1 + 0x85) = 0;
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x43c)) && (param_1[0x86] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x86],((ulong)*(uint *)((long)param_1 + 0x43c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x43c) = 0x80000000;
  param_1[0x86] = 0;
  if (param_1[100] != 0) {
    iVar2 = (int)param_1[0x67];
    if (*(char *)((long)param_1 + 0x32c) != '\0') {
      plVar5 = (long *)param_1[0x66];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x66];
      }
      *(undefined1 *)((long)param_1 + 0x32c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[100] + 0x28))((long *)param_1[100],param_1[0x66]);
    }
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x33c)) && (param_1[0x66] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x66],((ulong)*(uint *)((long)param_1 + 0x33c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x33c) = 0x80000000;
  param_1[0x66] = 0;
  if (param_1[0x44] != 0) {
    iVar2 = (int)param_1[0x47];
    if (*(char *)((long)param_1 + 0x22c) != '\0') {
      plVar5 = (long *)param_1[0x46];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x46];
      }
      *(undefined1 *)((long)param_1 + 0x22c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x44] + 0x28))((long *)param_1[0x44],param_1[0x46]);
    }
    *(undefined4 *)(param_1 + 0x47) = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x23c)) && (param_1[0x46] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x46],((ulong)*(uint *)((long)param_1 + 0x23c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x23c) = 0x80000000;
  param_1[0x46] = 0;
  if (param_1[0x24] != 0) {
    iVar2 = (int)param_1[0x27];
    if (*(char *)((long)param_1 + 300) != '\0') {
      plVar5 = (long *)param_1[0x26];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[0x26];
      }
      *(undefined1 *)((long)param_1 + 300) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0x24] + 0x28))((long *)param_1[0x24],param_1[0x26]);
    }
    *(undefined4 *)(param_1 + 0x27) = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x26],((ulong)*(uint *)((long)param_1 + 0x13c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  param_1[0x26] = 0;
  if (param_1[4] != 0) {
    iVar2 = (int)param_1[7];
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      plVar5 = (long *)param_1[6];
      if (iVar2 < 1) {
        plVar4 = plVar5;
      }
      else {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          *plVar5 = *plVar5;
          plVar4 = plVar5 + 1;
        }
        if (iVar2 != 1) {
          if (plVar5[1] != 0) {
            *plVar4 = plVar5[1];
            plVar4 = plVar4 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar5 = plVar5 + 2;
            plVar3 = plVar4;
            do {
              plVar4 = plVar3;
              if (*plVar5 != 0) {
                plVar4 = plVar3 + 1;
                *plVar3 = *plVar5;
              }
              plVar5 = plVar5 + 1;
              iVar2 = iVar2 + -1;
              plVar3 = plVar4;
            } while (iVar2 != 0);
          }
        }
        plVar5 = plVar4;
        plVar4 = (long *)param_1[6];
      }
      *(undefined1 *)((long)param_1 + 0x2c) = 0;
      iVar2 = (int)((ulong)((long)plVar5 - (long)plVar4) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[4] + 0x28))((long *)param_1[4],param_1[6]);
    }
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[2],((ulong)*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


