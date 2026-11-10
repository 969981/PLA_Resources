/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf8ff0; name: FUN_02bf8ff0
 */


void FUN_02bf8ff0(long param_1,undefined1 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *unaff_x26;
  float fVar14;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  if (param_2 == &DAT_cbf29ce484222645) goto LAB_02bf93fc;
  puVar13 = *(undefined1 **)(param_1 + 0x1d8);
  plVar1 = (long *)(param_1 + 0x1d0);
  if (puVar13 != (undefined1 *)0x0) {
    uVar5 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      puVar10 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)param_2);
    }
    else {
      puVar10 = param_2;
      if (puVar13 <= param_2) {
        uVar9 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)puVar13;
        }
        puVar10 = param_2 + -(uVar9 * (long)puVar13);
      }
    }
    lVar8 = *plVar1;
    plVar11 = *(long **)(lVar8 + (long)puVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if ((undefined1 *)plVar11[1] == param_2) {
            if ((undefined1 *)plVar11[2] == param_2) goto LAB_02bf93fc;
          }
          else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar13 + -1)) != puVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined1 *)plVar11[1];
          if (puVar12 == param_2) {
            if ((undefined1 *)plVar11[2] == param_2) goto LAB_02bf93fc;
          }
          else {
            if (puVar13 <= puVar12) {
              uVar9 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar12 / (ulong)puVar13;
              }
              puVar12 = puVar12 + -(uVar9 * (long)puVar13);
            }
            if (puVar12 != puVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (uVar5 < 2) {
      unaff_x26 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)param_2);
      plVar11 = *(long **)(lVar8 + (long)unaff_x26 * 8);
    }
    else {
      unaff_x26 = param_2;
      if (puVar13 <= param_2) {
        uVar9 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)puVar13;
        }
        unaff_x26 = param_2 + -(uVar9 * (long)puVar13);
      }
      plVar11 = *(long **)(lVar8 + (long)unaff_x26 * 8);
    }
    if (plVar11 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) ||
             ((undefined1 *)plVar11[1] != param_2 &&
              (undefined1 *)((ulong)plVar11[1] & (ulong)(puVar13 + -1)) != unaff_x26))
          goto LAB_02bf91d4;
        } while ((undefined1 *)plVar11[2] != param_2);
      }
      else {
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02bf91d4;
          puVar10 = (undefined1 *)plVar11[1];
          if (puVar10 != param_2) {
            if (puVar13 <= puVar10) {
              uVar5 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar5 = (ulong)puVar10 / (ulong)puVar13;
              }
              puVar10 = puVar10 + -(uVar5 * (long)puVar13);
            }
            if (puVar10 != unaff_x26) goto LAB_02bf91d4;
          }
        } while ((undefined1 *)plVar11[2] != param_2);
      }
      goto LAB_02bf93fc;
    }
  }
LAB_02bf91d4:
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x200) + 0x10))
                              (*(long **)(param_1 + 0x200),0x20,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x200) + 0xb8))();
  }
  plVar11[2] = (long)param_2;
  lVar8 = *param_3;
  plVar11[3] = lVar8;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
    plVar7 = (long *)(lVar8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar11 = 0;
  plVar11[1] = (long)param_2;
  fVar14 = (float)(*(long *)(param_1 + 0x218) + 1);
  if ((puVar13 == (undefined1 *)0x0) || (*(float *)(param_1 + 0x220) * (float)puVar13 < fVar14)) {
    uVar5 = (ulong)(puVar13 < (undefined1 *)0x3 || ((ulong)puVar13 & (ulong)(puVar13 + -1)) != 0) |
            (long)puVar13 << 1;
    uVar9 = (ulong)(fVar14 / *(float *)(param_1 + 0x220));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
    }
    uVar5 = *(ulong *)(param_1 + 0x1d8);
    if (uVar5 < uVar9) {
      uVar4 = uVar9;
LAB_02bf9350:
      FUN_02bfc5e4(plVar1,uVar4);
    }
    else if (uVar9 < uVar5) {
      uVar4 = (ulong)((float)*(ulong *)(param_1 + 0x218) / *(float *)(param_1 + 0x220));
      if ((uVar5 < 3) ||
         (uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
      }
      if (uVar4 <= uVar9) {
        uVar4 = uVar9;
      }
      if (uVar4 < uVar5) goto LAB_02bf9350;
    }
    puVar13 = *(undefined1 **)(param_1 + 0x1d8);
    if (((ulong)puVar13 & (ulong)(puVar13 + -1)) == 0) {
      unaff_x26 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)param_2);
    }
    else if (param_2 < puVar13) {
      unaff_x26 = param_2;
    }
    else {
      uVar5 = 0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar5 = (ulong)param_2 / (ulong)puVar13;
      }
      unaff_x26 = param_2 + -(uVar5 * (long)puVar13);
    }
  }
  plVar7 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar11 = *(long *)(param_1 + 0x1f8);
    *(long **)(param_1 + 0x1f8) = plVar11;
    *(long *)(*(long *)(param_1 + 0x1d0) + (long)unaff_x26 * 8) = param_1 + 0x1f8;
    if (*plVar11 != 0) {
      puVar10 = *(undefined1 **)(*plVar11 + 8);
      if (((ulong)puVar13 & (ulong)(puVar13 + -1)) == 0) {
        puVar10 = (undefined1 *)((ulong)puVar10 & (ulong)(puVar13 + -1));
      }
      else if (puVar13 <= puVar10) {
        uVar5 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar10 / (ulong)puVar13;
        }
        puVar10 = puVar10 + -(uVar5 * (long)puVar13);
      }
      plVar7 = (long *)(*plVar1 + (long)puVar10 * 8);
      goto LAB_02bf93ec;
    }
  }
  else {
    *plVar11 = *plVar7;
LAB_02bf93ec:
    *plVar7 = (long)plVar11;
  }
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 1;
LAB_02bf93fc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


