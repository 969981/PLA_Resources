/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02918738; name: FUN_02918738
 */


void FUN_02918738(long *param_1,ulong param_2,byte param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  code *local_d0;
  code *local_c8;
  undefined1 auStack_b0 [104];
  long local_48;
  byte local_34 [4];
  
  pMVar1 = (MutexType *)(param_1 + 0xe);
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  nn::os::LockMutex(pMVar1);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar3 <= param_2) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_2 / uVar3;
        }
        uVar6 = param_2 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      lVar13 = 0;
      if (plVar7 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            if (plVar7[1] == param_2) {
              if (plVar7[2] == param_2) goto LAB_029189a4;
            }
            else if ((plVar7[1] & uVar3 - 1) != uVar6) goto LAB_0291885c;
            plVar7 = (long *)*plVar7;
            lVar13 = 0;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar7[1];
            if (uVar5 == param_2) {
              if (plVar7[2] == param_2) goto LAB_029189a4;
            }
            else {
              if (uVar3 <= uVar5) {
                uVar9 = 0;
                if (uVar3 != 0) {
                  uVar9 = uVar5 / uVar3;
                }
                uVar5 = uVar5 - uVar9 * uVar3;
              }
              if (uVar5 != uVar6) goto LAB_0291885c;
            }
            plVar7 = (long *)*plVar7;
            lVar13 = 0;
          } while (plVar7 != (long *)0x0);
        }
      }
      goto LAB_02918860;
    }
  }
LAB_0291885c:
  lVar13 = 0;
  goto LAB_02918860;
LAB_02918988:
  if (uVar5 < 2) {
    param_2 = uVar9 & param_2;
  }
  else if (uVar3 <= param_2) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    param_2 = param_2 - uVar6 * uVar3;
  }
  plVar12 = *(long **)(lVar13 + param_2 * 8);
  do {
    plVar11 = plVar12;
    plVar12 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar7);
  if (plVar11 == param_1 + 6) {
LAB_02918a2c:
    if (*plVar7 != 0) {
      uVar6 = *(ulong *)(*plVar7 + 8);
      if (uVar5 < 2) {
        uVar6 = uVar6 & uVar9;
      }
      else if (uVar3 <= uVar6) {
        uVar10 = 0;
        if (uVar3 != 0) {
          uVar10 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar10 * uVar3;
      }
      if (uVar6 == param_2) goto LAB_02918a6c;
    }
    *(undefined8 *)(lVar13 + param_2 * 8) = 0;
  }
  else {
    uVar6 = plVar11[1];
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar9;
    }
    else if (uVar3 <= uVar6) {
      uVar10 = 0;
      if (uVar3 != 0) {
        uVar10 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar10 * uVar3;
    }
    if (uVar6 != param_2) goto LAB_02918a2c;
  }
LAB_02918a6c:
  lVar13 = *plVar7;
  if (lVar13 != 0) {
    uVar6 = *(ulong *)(lVar13 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar9;
    }
    else if (uVar3 <= uVar6) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar5 * uVar3;
    }
    if (uVar6 != param_2) {
      *(long **)(*param_1 + uVar6 * 8) = plVar11;
      lVar13 = *plVar7;
    }
  }
  *plVar11 = lVar13;
  *plVar7 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  pcVar4 = (code *)plVar7[5];
  if (pcVar4 != (code *)0x0) {
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    (*pcVar4)(plVar7 + 8);
  }
  plVar12 = (long *)param_1[7];
  uVar3 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar3 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar12,plVar7,0xb0,0x10);
      goto LAB_02918b58;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,plVar7,0xb0,0x10);
  goto LAB_02918b58;
LAB_029189a4:
  if ((code *)plVar7[6] != (code *)0x0) {
    (*(code *)plVar7[6])(plVar7 + 8,auStack_b0);
    local_d0 = (code *)plVar7[4];
    local_c8 = (code *)plVar7[5];
  }
  lVar13 = plVar7[0x14];
LAB_02918860:
  nn::os::UnlockMutex(pMVar1);
  if (local_d0 != (code *)0x0) {
    local_34[0] = param_3 & 1;
    local_48 = lVar13;
    (*local_d0)(auStack_b0,local_34,&local_48);
  }
  nn::os::LockMutex(pMVar1);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar3 <= param_2) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_2 / uVar3;
        }
        uVar6 = param_2 - uVar6 * uVar3;
      }
    }
    lVar13 = *param_1;
    puVar8 = *(undefined8 **)(lVar13 + uVar6 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar8, plVar7 != (long *)0x0)) {
      uVar9 = uVar3 - 1;
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == param_2) {
            if (plVar7[2] == param_2) goto LAB_02918988;
          }
          else if ((plVar7[1] & uVar9) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar7[1];
          if (uVar10 == param_2) {
            if (plVar7[2] == param_2) goto LAB_02918988;
          }
          else {
            if (uVar3 <= uVar10) {
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar10 / uVar3;
              }
              uVar10 = uVar10 - uVar2 * uVar3;
            }
            if (uVar10 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_02918b58:
  nn::os::UnlockMutex(pMVar1);
  if (local_c8 != (code *)0x0) {
    (*local_c8)(auStack_b0);
  }
  return;
}


