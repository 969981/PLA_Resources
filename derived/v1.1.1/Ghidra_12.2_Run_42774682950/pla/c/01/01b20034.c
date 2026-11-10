/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b20034; name: FUN_01b20034
 */


void FUN_01b20034(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined4 uVar15;
  
  *(undefined1 *)(param_1 + 0xc68) = 1;
  *(undefined4 *)(param_1 + 0xc6c) = 0;
  *(byte *)(param_1 + 0xc69) = param_2 & 1;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  puVar6 = *(undefined1 **)(lVar9 + 0x60);
  if (puVar6 != (undefined1 *)0x0) {
    uVar7 = (long)puVar6 - ((ulong)puVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      puVar8 = (undefined1 *)((ulong)(puVar6 + -1) & 0x817adb705f596ed9);
    }
    else if (&DAT_817adb705f596ed9 < puVar6) {
      puVar8 = &DAT_817adb705f596ed9;
    }
    else {
      uVar11 = 0;
      if (puVar6 != (undefined1 *)0x0) {
        uVar11 = 0x817adb705f596ed9 / (ulong)puVar6;
      }
      puVar8 = &DAT_817adb705f596ed9 + -(uVar11 * (long)puVar6);
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + (long)puVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if ((undefined1 *)plVar10[1] == &DAT_817adb705f596ed9) {
            if ((undefined1 *)plVar10[2] == &DAT_817adb705f596ed9) goto LAB_01b20114;
          }
          else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar6 + -1)) != puVar8)
          goto LAB_01b20210;
          plVar10 = (long *)*plVar10;
          uVar15 = 0;
        } while (plVar10 != (long *)0x0);
        goto LAB_01b20278;
      }
      do {
        puVar13 = (undefined1 *)plVar10[1];
        if (puVar13 == &DAT_817adb705f596ed9) {
          if ((undefined1 *)plVar10[2] == &DAT_817adb705f596ed9) goto LAB_01b20114;
        }
        else {
          if (puVar6 <= puVar13) {
            uVar7 = 0;
            if (puVar6 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar13 / (ulong)puVar6;
            }
            puVar13 = puVar13 + -(uVar7 * (long)puVar6);
          }
          if (puVar13 != puVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
LAB_01b20210:
  uVar15 = 0;
LAB_01b20278:
  *(undefined4 *)(param_1 + 0xc70) = uVar15;
  return;
LAB_01b20114:
  plVar10 = (long *)plVar10[3];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = plVar10[0x14];
    if (uVar7 == 0) {
      uVar15 = 0;
    }
    else {
      uVar11 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar7 - 1 & 0xd7aefc3c90ab7d04;
      }
      else if (uVar7 < 0xd7aefc3c90ab7d05) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = 0xd7aefc3c90ab7d04 / uVar7;
        }
        uVar12 = 0xd7aefc3c90ab7d04 - uVar12 * uVar7;
      }
      else {
        uVar12 = 0xd7aefc3c90ab7d04;
      }
      plVar14 = *(long **)(plVar10[0x13] + uVar12 * 8);
      if (plVar14 == (long *)0x0) {
        uVar15 = 0;
      }
      else {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          uVar15 = 0;
        }
        else if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xd7aefc3c90ab7d04) {
              if (plVar14[2] == -0x285103c36f5482fc) goto LAB_01b20260;
            }
            else if ((plVar14[1] & uVar7 - 1) != uVar12) {
              uVar15 = 0;
              break;
            }
            plVar14 = (long *)*plVar14;
            uVar15 = 0;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xd7aefc3c90ab7d04) {
              if (plVar14[2] == -0x285103c36f5482fc) goto LAB_01b20260;
            }
            else {
              if (uVar7 <= uVar11) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar4 * uVar7;
              }
              if (uVar11 != uVar12) {
                uVar15 = 0;
                goto LAB_01b20264;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          uVar15 = 0;
        }
      }
    }
    goto LAB_01b20264;
  }
  goto LAB_01b20210;
LAB_01b20260:
  uVar15 = (undefined4)plVar14[6];
LAB_01b20264:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  goto LAB_01b20278;
}


