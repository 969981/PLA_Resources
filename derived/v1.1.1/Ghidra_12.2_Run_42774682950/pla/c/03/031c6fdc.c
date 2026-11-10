/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c6fdc; name: FUN_031c6fdc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_031c6fdc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&PTR_LAB_04305fd0;
  if (param_1[0x9b] != 0) {
    FUN_03216800(param_1);
  }
  FUN_031c7770(param_1 + 3,param_1);
  lVar6 = param_1[0x9a];
  if (lVar6 != 0) {
    FUN_032be4d0(lVar6);
    FUN_032cf640(lVar6,0x60);
    param_1[0x9a] = 0;
  }
  lVar6 = param_1[0x99];
  param_1[0x99] = 0;
  if (lVar6 != 0) {
    FUN_032d647c();
  }
  FUN_032c7b9c(param_1 + 0xa1);
  if (param_1[0xa0] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x9e] == 0) {
    if (param_1[0x9d] == 0) goto LAB_031c7074;
LAB_031c7268:
    FUN_032d647c();
    lVar6 = param_1[0x99];
  }
  else {
    FUN_032d647c();
    if (param_1[0x9d] != 0) goto LAB_031c7268;
LAB_031c7074:
    lVar6 = param_1[0x99];
  }
  if (lVar6 != 0) {
    FUN_032d647c();
  }
  cVar4 = DAT_0444b3c8;
  if (DAT_0444b3c8 == '\0') {
LAB_031c70e0:
    lVar6 = param_1[0x8f];
  }
  else {
    plVar7 = (long *)(param_1[0x96] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x96] & 3U) == 0) {
        param_1[0x96] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x96] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x95] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x95] & 3U) == 0) {
        param_1[0x95] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x95] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x94] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x94] & 3U) == 0) {
        param_1[0x94] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x94] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x93] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x93] & 3U) == 0) {
        param_1[0x93] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x93] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x92] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x92] & 3U) == 0) {
        param_1[0x92] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x92] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x91] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x91] & 3U) == 0) {
        param_1[0x91] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x91] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c70e0;
    }
    plVar7 = (long *)(param_1[0x90] & 0xfffffffffffffffc);
    if (plVar7 == (long *)0x0) goto LAB_031c70e0;
    if ((param_1[0x90] & 3U) != 0) {
      do {
        plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
        plVar7[1] = (ulong)plVar1 | 1;
        plVar7 = plVar1;
      } while (plVar1 != (long *)0x0);
      goto LAB_031c70e0;
    }
    param_1[0x90] = (ulong)plVar7 | 1;
    do {
      lVar6 = *plVar7;
      plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
      (**(code **)(lVar6 + 8))();
    } while (plVar7 != (long *)0x0);
    param_1[0x90] = 0;
    lVar6 = param_1[0x8f];
  }
  cVar4 = DAT_0444b3c8;
  if (lVar6 != 0) {
    FUN_032d647c();
    cVar4 = DAT_0444b3c8;
  }
  DAT_0444b3c8 = cVar4;
  if (cVar4 != '\0') {
    plVar7 = (long *)(param_1[0x8e] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x8e] & 3U) == 0) {
        param_1[0x8e] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x8e] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x8d] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x8d] & 3U) == 0) {
        param_1[0x8d] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x8d] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x8c] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x8c] & 3U) == 0) {
        param_1[0x8c] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x8c] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x8b] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x8b] & 3U) == 0) {
        param_1[0x8b] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x8b] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x8a] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x8a] & 3U) == 0) {
        param_1[0x8a] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x8a] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x89] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x89] & 3U) == 0) {
        param_1[0x89] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x89] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar1 | 1;
          plVar7 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_031c7144;
    }
    plVar7 = (long *)(param_1[0x88] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0x88] & 3U) == 0) {
        param_1[0x88] = (ulong)plVar7 | 1;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar6 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0x88] = 0;
        lVar6 = param_1[0x87];
        goto joined_r0x031c75b8;
      }
      do {
        plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
        plVar7[1] = (ulong)plVar1 | 1;
        plVar7 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
LAB_031c7144:
  lVar6 = param_1[0x87];
joined_r0x031c75b8:
  if (lVar6 != 0) {
    FUN_032d647c();
  }
  FUN_031bda88(param_1 + 0x6e);
  FUN_031b0988(param_1 + 0x4e);
  if (param_1[0x4a] == 0) {
    lVar6 = param_1[0x49];
  }
  else {
    FUN_032d647c();
    lVar6 = param_1[0x49];
  }
  if (lVar6 != 0) {
    FUN_032d647c();
  }
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_1[0x48] != 0) {
    lVar5 = param_1[0x47];
    lVar6 = (long)(int)param_1[0x48] * 8;
    lVar3 = *(long *)(lVar5 + -8 + lVar6);
    while( true ) {
      if (lVar3 != 0) {
        FUN_032d647c();
      }
      if (lVar6 == 8) break;
      lVar6 = lVar6 + -8;
      lVar3 = *(long *)(lVar5 + -8 + lVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x244)) && (param_1[0x47] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x47],((ulong)*(uint *)((long)param_1 + 0x244) & 0x3fffffff) << 3);
  }
  param_1[0x47] = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0x80000000;
  if (param_1[0x2e] != 0) {
    FUN_032d647c();
  }
  FUN_032c20d0(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x29],((ulong)*(uint *)((long)param_1 + 0x154) & 0x3fffffff) << 4);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  if (param_1[0x28] == 0) {
    lVar6 = param_1[0x27];
  }
  else {
    FUN_032d647c();
    lVar6 = param_1[0x27];
  }
  if (lVar6 == 0) {
    lVar6 = param_1[0x26];
  }
  else {
    FUN_032d647c();
    lVar6 = param_1[0x26];
  }
  if (lVar6 != 0) {
    FUN_032d647c();
  }
  FUN_031c7824(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


