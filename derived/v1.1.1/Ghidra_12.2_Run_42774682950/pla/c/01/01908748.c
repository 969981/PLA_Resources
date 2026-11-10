/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01908748; name: FUN_01908748
 */


void FUN_01908748(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *local_28;
  
  plVar11 = (long *)*param_2;
  if (plVar11 == (long *)0x0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148a98(&local_28);
    if (local_28 == (long *)0x0) {
      return;
    }
  }
  else {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      local_28 = plVar11;
    } while (cVar2 != '\0');
  }
  uVar7 = ((long *)local_28[0x37])[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x4fb8dbcd01a0e227;
    }
    else if (uVar7 < 0x4fb8dbcd01a0e228) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x4fb8dbcd01a0e227 / uVar7;
      }
      uVar9 = 0x4fb8dbcd01a0e227 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x4fb8dbcd01a0e227;
    }
    plVar11 = *(long **)(*(long *)local_28[0x37] + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x4fb8dbcd01a0e227) {
            if (plVar11[2] == 0x4fb8dbcd01a0e227) goto LAB_019088a8;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x4fb8dbcd01a0e227) {
            if (plVar11[2] == 0x4fb8dbcd01a0e227) goto LAB_019088a8;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar10 = 0;
              if (uVar7 != 0) {
                uVar10 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar10 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff7;
LAB_019088c0:
  *(ulong *)(param_1 + 0x10) = uVar7;
  uVar8 = ((long *)local_28[0x37])[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0x79db1422ed5983e0;
    }
    else if (uVar8 < 0x79db1422ed5983e1) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x79db1422ed5983e0 / uVar8;
      }
      uVar10 = 0x79db1422ed5983e0 - uVar10 * uVar8;
    }
    else {
      uVar10 = 0x79db1422ed5983e0;
    }
    plVar11 = *(long **)(*(long *)local_28[0x37] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0x79db1422ed5983e0) {
            if (plVar11[2] == 0x79db1422ed5983e0) goto LAB_019089cc;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == 0x79db1422ed5983e0) {
            if (plVar11[2] == 0x79db1422ed5983e0) goto LAB_019089cc;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  uVar8 = uVar7 & 0xffffffffffffffef;
LAB_019089e0:
  *(ulong *)(param_1 + 0x10) = uVar8;
  uVar7 = ((long *)local_28[0x37])[1];
  if (uVar7 != 0) {
    uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar7 - 1 & 0xbce5cef5ca9c9ddb;
    }
    else if (uVar7 < 0xbce5cef5ca9c9ddc) {
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = 0xbce5cef5ca9c9ddb / uVar7;
      }
      uVar10 = 0xbce5cef5ca9c9ddb - uVar10 * uVar7;
    }
    else {
      uVar10 = 0xbce5cef5ca9c9ddb;
    }
    plVar11 = *(long **)(*(long *)local_28[0x37] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0xbce5cef5ca9c9ddb) {
            if (plVar11[2] == -0x431a310a35636225) goto LAB_01908aec;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == 0xbce5cef5ca9c9ddb) {
            if (plVar11[2] == -0x431a310a35636225) goto LAB_01908aec;
          }
          else {
            if (uVar7 <= uVar9) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar4 * uVar7;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  uVar7 = uVar8 & 0xffffffffffffffdf;
LAB_01908b00:
  *(ulong *)(param_1 + 0x10) = uVar7;
  lVar12 = local_28[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return;
LAB_019088a8:
  uVar7 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff7;
  if ((char)plVar11[3] != '\0') {
    uVar7 = *(ulong *)(param_1 + 0x10) | 8;
  }
  goto LAB_019088c0;
LAB_019089cc:
  uVar8 = uVar7 & 0xffffffffffffffef;
  if ((char)plVar11[3] != '\0') {
    uVar8 = uVar7 | 0x10;
  }
  goto LAB_019089e0;
LAB_01908aec:
  uVar7 = uVar8 & 0xffffffffffffffdf;
  if ((char)plVar11[3] != '\0') {
    uVar7 = uVar8 | 0x20;
  }
  goto LAB_01908b00;
}


