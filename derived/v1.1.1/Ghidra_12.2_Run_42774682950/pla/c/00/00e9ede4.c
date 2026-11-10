/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e9ede4; name: FUN_00e9ede4
 */


void FUN_00e9ede4(undefined8 param_1)

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
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
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
    puVar20 = *(undefined1 **)puVar7;
    plVar18 = *(long **)(puVar7 + 0x18);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
joined_r0x00e9f0e8:
    if (pbVar10 == (byte *)0x0) goto LAB_00e9ee60;
LAB_00e9f0ec:
    bVar2 = *pbVar10;
    puVar21 = &DAT_cbf29ce484222645;
    if (bVar2 == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = (long *)0x0;
      do {
        pbVar10 = pbVar10 + 1;
        puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar10;
      } while (bVar2 != 0);
    }
  }
  else {
    bVar2 = *pbVar9;
    puVar20 = &DAT_cbf29ce484222645;
    if (bVar2 != 0) {
      plVar18 = (long *)0x0;
      do {
        pbVar9 = pbVar9 + 1;
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar9;
      } while (bVar2 != 0);
      goto joined_r0x00e9f0e8;
    }
    plVar18 = (long *)0x0;
    if (pbVar10 != (byte *)0x0) goto LAB_00e9f0ec;
LAB_00e9ee60:
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar21 = *(undefined1 **)puVar7;
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
  puVar13 = *(undefined1 **)(lVar14 + 0x60);
  if (puVar13 != (undefined1 *)0x0) {
    uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar20);
    }
    else {
      puVar12 = puVar20;
      if (puVar13 <= puVar20) {
        uVar5 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar20 / (ulong)puVar13;
        }
        puVar12 = puVar20 + -(uVar5 * (long)puVar13);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar12 * 8);
    if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
    goto LAB_00e9f014;
    if (1 < uVar11) {
      do {
        puVar16 = (undefined1 *)plVar15[1];
        if (puVar16 == puVar20) {
          if ((undefined1 *)plVar15[2] == puVar20) goto LAB_00e9ef24;
        }
        else {
          if (puVar13 <= puVar16) {
            uVar11 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar11 = (ulong)puVar16 / (ulong)puVar13;
            }
            puVar16 = puVar16 + -(uVar11 * (long)puVar13);
          }
          if (puVar16 != puVar12) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      goto LAB_00e9f014;
    }
    do {
      if ((undefined1 *)plVar15[1] == puVar20) {
        if ((undefined1 *)plVar15[2] == puVar20) goto LAB_00e9ef24;
      }
      else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar13 + -1)) != puVar12)
      goto LAB_00e9f014;
      plVar15 = (long *)*plVar15;
      lVar14 = 0;
    } while (plVar15 != (long *)0x0);
    goto joined_r0x00e9f14c;
  }
LAB_00e9f014:
  lVar14 = 0;
  if (plVar19 == (long *)0x0) goto LAB_00e9f094;
  goto LAB_00e9f084;
LAB_00e9ef24:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_00e9f014;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar20 = (undefined1 *)plVar15[0x14];
  if (puVar20 == (undefined1 *)0x0) {
    lVar14 = 0;
  }
  else {
    uVar11 = (long)puVar20 - ((ulong)puVar20 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar21);
    }
    else {
      puVar13 = puVar21;
      if (puVar20 <= puVar21) {
        uVar5 = 0;
        if (puVar20 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar21 / (ulong)puVar20;
        }
        puVar13 = puVar21 + -(uVar5 * (long)puVar20);
      }
    }
    plVar17 = *(long **)(plVar15[0x13] + (long)puVar13 * 8);
    if (plVar17 == (long *)0x0) {
      lVar14 = 0;
    }
    else {
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        lVar14 = 0;
      }
      else if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == puVar21) {
            if ((undefined1 *)plVar17[2] == puVar21) goto LAB_00e9f068;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar20 + -1)) != puVar13) {
            lVar14 = 0;
            break;
          }
          plVar17 = (long *)*plVar17;
          lVar14 = 0;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined1 *)plVar17[1];
          if (puVar12 == puVar21) {
            if ((undefined1 *)plVar17[2] == puVar21) goto LAB_00e9f068;
          }
          else {
            if (puVar20 <= puVar12) {
              uVar11 = 0;
              if (puVar20 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar12 / (ulong)puVar20;
              }
              puVar12 = puVar12 + -(uVar11 * (long)puVar20);
            }
            if (puVar12 != puVar13) {
              lVar14 = 0;
              goto LAB_00e9f06c;
            }
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
        lVar14 = 0;
      }
    }
  }
  goto LAB_00e9f06c;
LAB_00e9f068:
  lVar14 = (long)(int)plVar17[6];
LAB_00e9f06c:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
joined_r0x00e9f14c:
  if (plVar19 != (long *)0x0) {
LAB_00e9f084:
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_00e9f094:
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,lVar14);
  return;
}


