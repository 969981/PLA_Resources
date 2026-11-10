/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e9f7a4; name: FUN_00e9f7a4
 */


void FUN_00e9f7a4(undefined8 param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  double dVar22;
  undefined1 auStack_48 [8];
  
  FUN_001511d0(param_1,0xfff0b9d6);
  pbVar9 = (byte *)FUN_00150da0(param_1,1,auStack_48);
  pbVar10 = (byte *)FUN_00150da0(param_1,2,auStack_48);
  puVar7 = PTR_DAT_0437a0d8;
  puVar6 = PTR_DAT_0437a0d0;
  if (pbVar9 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar21 = *(undefined1 **)puVar7;
    plVar18 = *(long **)(puVar7 + 0x18);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
joined_r0x00e9faa4:
    if (pbVar10 == (byte *)0x0) goto LAB_00e9f820;
LAB_00e9faa8:
    bVar2 = *pbVar10;
    puVar20 = &DAT_cbf29ce484222645;
    if (bVar2 == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = (long *)0x0;
      do {
        pbVar10 = pbVar10 + 1;
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar10;
      } while (bVar2 != 0);
    }
  }
  else {
    bVar2 = *pbVar9;
    puVar21 = &DAT_cbf29ce484222645;
    if (bVar2 != 0) {
      plVar18 = (long *)0x0;
      do {
        pbVar9 = pbVar9 + 1;
        puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
      } while (bVar2 != 0);
      goto joined_r0x00e9faa4;
    }
    plVar18 = (long *)0x0;
    if (pbVar10 != (byte *)0x0) goto LAB_00e9faa8;
LAB_00e9f820:
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar20 = *(undefined1 **)puVar7;
    plVar19 = *(long **)(puVar7 + 0x18);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  dVar22 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)puVar21);
    }
    else {
      puVar13 = puVar21;
      if (puVar11 <= puVar21) {
        uVar5 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar21 / (ulong)puVar11;
        }
        puVar13 = puVar21 + -(uVar5 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == puVar21) {
            if ((undefined1 *)plVar15[2] == puVar21) goto LAB_00e9f8e8;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == puVar21) {
            if ((undefined1 *)plVar15[2] == puVar21) goto LAB_00e9f8e8;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00e9fa3c;
LAB_00e9fa20:
  dVar22 = (double)*(float *)(plVar17 + 6);
LAB_00e9fa28:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 != 0) goto LAB_00e9fa3c;
  (**(code **)(*plVar15 + 0x10))();
  if (plVar19 == (long *)0x0) goto LAB_00e9fa50;
  goto LAB_00e9fa40;
LAB_00e9f8e8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar21 = (undefined1 *)plVar15[0x21];
    dVar22 = 0.0;
    if (puVar21 != (undefined1 *)0x0) {
      uVar12 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        puVar11 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)puVar20);
      }
      else {
        puVar11 = puVar20;
        if (puVar21 <= puVar20) {
          uVar5 = 0;
          if (puVar21 != (undefined1 *)0x0) {
            uVar5 = (ulong)puVar20 / (ulong)puVar21;
          }
          puVar11 = puVar20 + -(uVar5 * (long)puVar21);
        }
      }
      plVar17 = *(long **)(plVar15[0x20] + (long)puVar11 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == puVar20) {
              if ((undefined1 *)plVar17[2] == puVar20) goto LAB_00e9fa20;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar21 + -1)) != puVar11) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar13 = (undefined1 *)plVar17[1];
            if (puVar13 == puVar20) {
              if ((undefined1 *)plVar17[2] == puVar20) goto LAB_00e9fa20;
            }
            else {
              if (puVar21 <= puVar13) {
                uVar12 = 0;
                if (puVar21 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar13 / (ulong)puVar21;
                }
                puVar13 = puVar13 + -(uVar12 * (long)puVar21);
              }
              if (puVar13 != puVar11) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_00e9fa28;
  }
LAB_00e9fa3c:
  if (plVar19 != (long *)0x0) {
LAB_00e9fa40:
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_00e9fa50:
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  FUN_0014ff10(param_1,0);
  FUN_001514b0(dVar22,param_1);
  return;
}


