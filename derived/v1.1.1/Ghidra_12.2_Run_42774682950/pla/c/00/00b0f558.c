/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0f558; name: FUN_00b0f558
 */


void FUN_00b0f558(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)*param_1;
  uVar6 = (param_3 - param_2 >> 4) * 0x6db6db6db6db6db7;
  lVar3 = param_1[2];
  if (uVar6 <= (ulong)((lVar3 - (long)plVar8 >> 4) * 0x6db6db6db6db6db7)) {
    uVar7 = (param_1[1] - (long)plVar8 >> 4) * 0x6db6db6db6db6db7;
    lVar3 = param_2 + (param_1[1] - (long)plVar8);
    lVar5 = lVar3;
    if (uVar6 <= uVar7) {
      lVar5 = param_3;
    }
    while (lVar5 != param_2) {
      FUN_00b0fbcc(plVar8,param_2);
      plVar8 = plVar8 + 0xe;
      param_2 = param_2 + 0x70;
    }
    if (uVar6 <= uVar7) {
      plVar9 = (long *)param_1[1];
      if (plVar9 != plVar8) {
        if ((long *)plVar9[-1] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-1] + 0x20))();
        }
        if ((long *)plVar9[-5] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-5] + 0x20))();
        }
        if ((long *)plVar9[-10] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-10] + 0x20))();
        }
        plVar2 = (long *)plVar9[-0xe];
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        if (plVar9 + -0xe != plVar8) {
          if ((long *)plVar9[-0xf] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[-0xf] + 0x20))();
          }
          if ((long *)plVar9[-0x13] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[-0x13] + 0x20))();
          }
          if ((long *)plVar9[-0x18] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[-0x18] + 0x20))();
          }
          plVar2 = (long *)plVar9[-0x1c];
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          if (plVar9 + -0x1c != plVar8) {
            do {
              if ((long *)plVar9[-0x1d] != (long *)0x0) {
                (**(code **)(*(long *)plVar9[-0x1d] + 0x20))();
              }
              if ((long *)plVar9[-0x21] != (long *)0x0) {
                (**(code **)(*(long *)plVar9[-0x21] + 0x20))();
              }
              if ((long *)plVar9[-0x26] != (long *)0x0) {
                (**(code **)(*(long *)plVar9[-0x26] + 0x20))();
              }
              if ((long *)plVar9[-0x2a] != (long *)0x0) {
                (**(code **)(*(long *)plVar9[-0x2a] + 0x20))();
              }
              plVar9 = plVar9 + -0xe;
            } while (plVar8 + 0x1c != plVar9);
          }
        }
      }
      param_1[1] = (long)plVar8;
      return;
    }
    if (lVar5 == param_3) {
      return;
    }
    plVar8 = param_1 + 3;
    FUN_00b0dcc8(plVar8,param_1[1],lVar3);
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 0x70;
    if (lVar3 + 0x70 == param_3) {
      return;
    }
    FUN_00b0dcc8(plVar8,lVar5 + 0x70,lVar3 + 0x70);
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 0x70;
    if (lVar3 + 0xe0 == param_3) {
      return;
    }
    FUN_00b0dcc8(plVar8,lVar5 + 0x70,lVar3 + 0xe0);
    lVar5 = param_1[1] + 0x70;
    param_1[1] = lVar5;
    for (lVar3 = lVar3 + 0x150; lVar3 != param_3; lVar3 = lVar3 + 0x70) {
      FUN_00b0dcc8(plVar8,lVar5,lVar3);
      lVar5 = param_1[1] + 0x70;
      param_1[1] = lVar5;
    }
    return;
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = (long *)param_1[1];
    if (plVar9 == plVar8) {
      plVar9 = plVar8;
    }
    else {
      if ((long *)plVar9[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[-1] + 0x20))();
      }
      if ((long *)plVar9[-5] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[-5] + 0x20))();
      }
      if ((long *)plVar9[-10] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[-10] + 0x20))();
      }
      plVar2 = (long *)plVar9[-0xe];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      if (plVar9 + -0xe != plVar8) {
        if ((long *)plVar9[-0xf] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-0xf] + 0x20))();
        }
        if ((long *)plVar9[-0x13] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-0x13] + 0x20))();
        }
        if ((long *)plVar9[-0x18] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[-0x18] + 0x20))();
        }
        plVar2 = (long *)plVar9[-0x1c];
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        if (plVar9 + -0x1c != plVar8) {
          do {
            if ((long *)plVar9[-0x1d] != (long *)0x0) {
              (**(code **)(*(long *)plVar9[-0x1d] + 0x20))();
            }
            if ((long *)plVar9[-0x21] != (long *)0x0) {
              (**(code **)(*(long *)plVar9[-0x21] + 0x20))();
            }
            if ((long *)plVar9[-0x26] != (long *)0x0) {
              (**(code **)(*(long *)plVar9[-0x26] + 0x20))();
            }
            if ((long *)plVar9[-0x2a] != (long *)0x0) {
              (**(code **)(*(long *)plVar9[-0x2a] + 0x20))();
            }
            plVar9 = plVar9 + -0xe;
          } while (plVar8 + 0x1c != plVar9);
        }
      }
      lVar3 = param_1[2];
      plVar9 = (long *)*param_1;
    }
    plVar2 = (long *)param_1[3];
    param_1[1] = (long)plVar8;
    uVar7 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar7 & 1) == 0) {
LAB_00b0f904:
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar9,lVar3 - (long)plVar9,8);
    }
    else {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00b0f904;
      FUN_02bcc824(plVar2,plVar9,lVar3 - (long)plVar9,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar3 = 0;
    *param_1 = 0;
  }
  uVar7 = param_1[4];
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar6) {
LAB_00b0fa64:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((lVar3 >> 4) * 0x6db6db6db6db6db7) < uVar7 >> 1) {
    uVar4 = (lVar3 >> 4) * -0x2492492492492492;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    bVar1 = uVar7 < uVar6;
    uVar7 = uVar6;
    if (bVar1) goto LAB_00b0fa64;
  }
  plVar8 = param_1 + 3;
  lVar3 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar7 * 0x70,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*plVar8 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar3 + uVar7 * 0x70;
  if (param_2 != param_3) {
    FUN_00b0dcc8(plVar8,lVar3,param_2);
    param_1[1] = param_1[1] + 0x70;
    if (param_2 + 0x70 != param_3) {
      FUN_00b0dcc8(plVar8);
      param_1[1] = param_1[1] + 0x70;
      if (param_2 + 0xe0 != param_3) {
        FUN_00b0dcc8(plVar8);
        lVar3 = param_1[1] + 0x70;
        param_1[1] = lVar3;
        for (param_2 = param_2 + 0x150; param_2 != param_3; param_2 = param_2 + 0x70) {
          FUN_00b0dcc8(plVar8,lVar3,param_2);
          lVar3 = param_1[1] + 0x70;
          param_1[1] = lVar3;
        }
      }
    }
  }
  return;
}


