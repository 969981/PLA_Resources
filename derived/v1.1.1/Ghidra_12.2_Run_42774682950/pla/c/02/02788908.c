/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02788908; name: FUN_02788908
 */


void FUN_02788908(undefined1 *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *__src;
  long lVar6;
  long *plVar7;
  undefined1 auStack_dcf8 [8];
  undefined1 auStack_dcf0 [8];
  int local_dce8;
  char acStack_dce0 [2808];
  undefined1 auStack_d1e8 [8];
  int local_d1e0;
  char acStack_d1d8 [2808];
  undefined1 auStack_c6e0 [8];
  int local_c6d8;
  char acStack_c6d0 [2808];
  undefined1 auStack_bbd8 [8];
  int local_bbd0;
  char acStack_bbc8 [2808];
  undefined1 auStack_b0d0 [8];
  int local_b0c8;
  char acStack_b0c0 [2808];
  undefined1 auStack_a5c8 [8];
  int local_a5c0;
  char acStack_a5b8 [2808];
  undefined1 auStack_9ac0 [8];
  int local_9ab8;
  char acStack_9ab0 [2808];
  undefined1 auStack_8fb8 [8];
  int local_8fb0;
  char acStack_8fa8 [2808];
  undefined1 auStack_84b0 [8];
  int local_84a8;
  char acStack_84a0 [2808];
  undefined1 auStack_79a8 [8];
  int local_79a0;
  char acStack_7998 [2808];
  undefined1 auStack_6ea0 [8];
  int local_6e98;
  char acStack_6e90 [2808];
  undefined1 auStack_6398 [8];
  int local_6390;
  char acStack_6388 [2808];
  undefined1 auStack_5890 [8];
  int local_5888;
  char acStack_5880 [2808];
  undefined1 auStack_4d88 [8];
  int local_4d80;
  char acStack_4d78 [2808];
  undefined1 auStack_4280 [8];
  int local_4278;
  char acStack_4270 [2808];
  undefined1 auStack_3778 [8];
  int local_3770;
  char acStack_3768 [2808];
  undefined1 auStack_2c70 [8];
  int local_2c68;
  char acStack_2c60 [2808];
  undefined1 auStack_2168 [8];
  int local_2160;
  char acStack_2158 [2808];
  undefined1 auStack_1660 [8];
  int local_1658;
  char acStack_1650 [2808];
  undefined1 auStack_b58 [8];
  int local_b50;
  char acStack_b48 [2808];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x2a8);
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  lVar6 = plVar7[0xb];
  if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    *(undefined8 *)(lVar6 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  memcpy(auStack_dcf8,plVar7 + 0xe,0xdca8);
  if ((local_dce8 == 0) || (iVar4 = strcmp(acStack_dce0,param_2), iVar4 != 0)) {
    if ((local_d1e0 == 0) || (iVar4 = strcmp(acStack_d1d8,param_2), iVar4 != 0)) {
      if ((local_c6d8 == 0) || (iVar4 = strcmp(acStack_c6d0,param_2), iVar4 != 0)) {
        if ((local_bbd0 == 0) || (iVar4 = strcmp(acStack_bbc8,param_2), iVar4 != 0)) {
          if ((local_b0c8 == 0) || (iVar4 = strcmp(acStack_b0c0,param_2), iVar4 != 0)) {
            if ((local_a5c0 == 0) || (iVar4 = strcmp(acStack_a5b8,param_2), iVar4 != 0)) {
              if ((local_9ab8 == 0) || (iVar4 = strcmp(acStack_9ab0,param_2), iVar4 != 0)) {
                if ((local_8fb0 == 0) || (iVar4 = strcmp(acStack_8fa8,param_2), iVar4 != 0)) {
                  if ((local_84a8 == 0) || (iVar4 = strcmp(acStack_84a0,param_2), iVar4 != 0)) {
                    if ((local_79a0 == 0) || (iVar4 = strcmp(acStack_7998,param_2), iVar4 != 0)) {
                      if ((local_6e98 == 0) || (iVar4 = strcmp(acStack_6e90,param_2), iVar4 != 0)) {
                        if ((local_6390 == 0) || (iVar4 = strcmp(acStack_6388,param_2), iVar4 != 0))
                        {
                          if ((local_5888 == 0) ||
                             (iVar4 = strcmp(acStack_5880,param_2), iVar4 != 0)) {
                            if ((local_4d80 == 0) ||
                               (iVar4 = strcmp(acStack_4d78,param_2), iVar4 != 0)) {
                              if ((local_4278 == 0) ||
                                 (iVar4 = strcmp(acStack_4270,param_2), iVar4 != 0)) {
                                if ((local_3770 == 0) ||
                                   (iVar4 = strcmp(acStack_3768,param_2), iVar4 != 0)) {
                                  if ((local_2c68 == 0) ||
                                     (iVar4 = strcmp(acStack_2c60,param_2), iVar4 != 0)) {
                                    if ((local_2160 == 0) ||
                                       (iVar4 = strcmp(acStack_2158,param_2), iVar4 != 0)) {
                                      if ((local_1658 == 0) ||
                                         (iVar4 = strcmp(acStack_1650,param_2), iVar4 != 0)) {
                                        if ((local_b50 == 0) ||
                                           (iVar4 = strcmp(acStack_b48,param_2), iVar4 != 0)) {
                                          *param_1 = 0;
                                          goto LAB_02788c5c;
                                        }
                                        __src = auStack_b58;
                                      }
                                      else {
                                        __src = auStack_1660;
                                      }
                                    }
                                    else {
                                      __src = auStack_2168;
                                    }
                                  }
                                  else {
                                    __src = auStack_2c70;
                                  }
                                }
                                else {
                                  __src = auStack_3778;
                                }
                              }
                              else {
                                __src = auStack_4280;
                              }
                            }
                            else {
                              __src = auStack_4d88;
                            }
                          }
                          else {
                            __src = auStack_5890;
                          }
                        }
                        else {
                          __src = auStack_6398;
                        }
                      }
                      else {
                        __src = auStack_6ea0;
                      }
                    }
                    else {
                      __src = auStack_79a8;
                    }
                  }
                  else {
                    __src = auStack_84b0;
                  }
                }
                else {
                  __src = auStack_8fb8;
                }
              }
              else {
                __src = auStack_9ac0;
              }
            }
            else {
              __src = auStack_a5c8;
            }
          }
          else {
            __src = auStack_b0d0;
          }
        }
        else {
          __src = auStack_bbd8;
        }
      }
      else {
        __src = auStack_c6e0;
      }
    }
    else {
      __src = auStack_d1e8;
    }
  }
  else {
    __src = auStack_dcf0;
  }
  memcpy(param_1 + 8,__src,0xb08);
  *param_1 = 1;
LAB_02788c5c:
  lVar6 = plVar7[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02788da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x20))(plVar7);
    return;
  }
  return;
}


