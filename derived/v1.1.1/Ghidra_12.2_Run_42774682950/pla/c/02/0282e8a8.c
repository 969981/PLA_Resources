/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282e8a8; name: FUN_0282e8a8
 */


long FUN_0282e8a8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 local_70;
  undefined4 local_6c;
  int iStack_68;
  
  plVar7 = (long *)*param_1;
  lVar4 = plVar7[1];
  iVar1 = (int)((ulong)(lVar4 - *plVar7) >> 4) * -0x55555555;
  local_90 = *param_2;
  local_88 = param_2[1];
  local_80 = param_2[2];
  local_78 = (long *)param_2[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
    plVar7 = (long *)*param_1;
    lVar4 = plVar7[1];
  }
  local_70 = 1;
  local_6c = 0xffffffff;
  plVar6 = plVar7 + 3;
  iStack_68 = iVar1;
  if (lVar4 == plVar7[2]) {
    lVar4 = plVar7[2] - *plVar7 >> 4;
    uVar5 = plVar7[4];
    uVar3 = lVar4 * -0x5555555555555555 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)(lVar4 * 0x5555555555555556)) {
      uVar3 = lVar4 * 0x5555555555555556;
    }
    if ((ulong)(lVar4 * -0x5555555555555555) < uVar5 >> 1) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 * 0x30,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar9 = lVar2 + lVar4 * 0x10;
    FUN_0282ee10(plVar6,lVar9,&local_90);
    lVar8 = *plVar7;
    lVar12 = plVar7[1];
    lVar11 = lVar9 + 0x30;
    if (lVar12 == lVar8) {
      lVar4 = lVar8;
    }
    else {
      lVar10 = lVar9 + -0x30;
      FUN_0282ee10(plVar6,lVar10,lVar12 + -0x30);
      if (lVar12 + -0x30 != lVar8) {
        lVar10 = lVar9 + -0x60;
        FUN_0282ee10(plVar6,lVar10,lVar12 + -0x60);
        if (lVar12 + -0x60 != lVar8) {
          lVar10 = lVar9 + -0x90;
          FUN_0282ee10(plVar6,lVar10,lVar12 + -0x90);
          if (lVar12 + -0x90 != lVar8) {
            lVar10 = lVar9 + -0xc0;
            FUN_0282ee10(plVar6,lVar10,lVar12 + -0xc0);
            if (lVar12 + -0xc0 != lVar8) {
              lVar10 = lVar9 + -0xf0;
              FUN_0282ee10(plVar6,lVar10,lVar12 + -0xf0);
              if (lVar12 + -0xf0 != lVar8) {
                lVar4 = lVar2 + lVar4 * 0x10 + -0x120;
                do {
                  lVar10 = lVar4;
                  FUN_0282ee10(plVar6,lVar10,lVar12 + -0x120);
                  lVar12 = lVar12 + -0x30;
                  lVar4 = lVar10 + -0x30;
                } while (lVar8 + 0xf0 != lVar12);
              }
            }
          }
        }
      }
      lVar8 = *plVar7;
      lVar9 = lVar10;
      lVar4 = plVar7[1];
    }
    *plVar7 = lVar9;
    plVar7[1] = lVar11;
    lVar11 = plVar7[2];
    plVar7[2] = lVar2 + uVar5 * 0x30;
    if (lVar4 != lVar8) {
      if (*(long **)(lVar4 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x18) + 0x20))();
      }
      if (lVar4 + -0x30 != lVar8) {
        if (*(long **)(lVar4 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x48) + 0x20))();
        }
        if (lVar4 + -0x60 != lVar8) {
          if (*(long **)(lVar4 + -0x78) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x78) + 0x20))();
          }
          if (lVar4 + -0x90 != lVar8) {
            if (*(long **)(lVar4 + -0xa8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + -0xa8) + 0x20))();
            }
            if (lVar4 + -0xc0 != lVar8) {
              if (*(long **)(lVar4 + -0xd8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar4 + -0xd8) + 0x20))();
              }
              if (lVar4 + -0xf0 != lVar8) {
                do {
                  if (*(long **)(lVar4 + -0x108) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar4 + -0x108) + 0x20))();
                  }
                  lVar4 = lVar4 + -0x30;
                } while (lVar8 + 0xf0 != lVar4);
              }
            }
          }
        }
      }
    }
    if (lVar8 != 0) {
      plVar6 = (long *)*plVar6;
      uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar3 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar8,lVar11 - lVar8,8);
          goto LAB_0282e940;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar11 - lVar8,8);
    }
  }
  else {
    FUN_0282ee10(plVar6,lVar4,&local_90);
    plVar7[1] = plVar7[1] + 0x30;
  }
LAB_0282e940:
  lVar4 = *(long *)(*param_1 + 8);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return lVar4 + -0x30;
}


