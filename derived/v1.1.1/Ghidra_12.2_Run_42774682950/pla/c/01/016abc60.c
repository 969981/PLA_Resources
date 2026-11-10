/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016abc60; name: FUN_016abc60
 */


void FUN_016abc60(long param_1,ulong *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *local_108;
  long local_100;
  long local_f8;
  char local_f0 [16];
  undefined1 auStack_e0 [160];
  
  uVar10 = *(ulong *)(param_1 + 0xa0);
  if (uVar10 == 0) {
    return;
  }
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar8 = *param_2;
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar13 = uVar10 - 1 & uVar8;
  }
  else if (uVar8 < uVar10) {
    uVar13 = uVar8;
  }
  else {
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar8 / uVar10;
    }
    uVar13 = uVar8 - uVar13 * uVar10;
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x98) + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (uVar12 < 2) {
    do {
      if (plVar14[1] == uVar8) {
        if (plVar14[2] == uVar8) goto LAB_016abd94;
      }
      else if ((plVar14[1] & uVar10 - 1) != uVar13) {
        return;
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar12 = plVar14[1];
    if (uVar12 == uVar8) {
      if (plVar14[2] == uVar8) goto LAB_016abd94;
    }
    else {
      if (uVar10 <= uVar12) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar4 * uVar10;
      }
      if (uVar12 != uVar13) {
        return;
      }
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_016abf34:
  if (((char)plVar16[3] == -1) && (param_3 != -1)) goto LAB_016ac064;
LAB_016abf48:
  if (uVar10 < 2) {
    puVar15 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)local_108);
    plVar16 = *(long **)(lVar9 + (long)puVar15 * 8);
  }
  else {
    puVar15 = local_108;
    if (puVar11 <= local_108) {
      puVar15 = local_108 + -(uVar12 * (long)puVar11);
    }
    plVar16 = *(long **)(lVar9 + (long)puVar15 * 8);
  }
  if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
    if (uVar10 < 2) {
      do {
        if ((undefined1 *)plVar16[1] == local_108) {
          if ((undefined1 *)plVar16[2] == local_108) goto LAB_016ac004;
        }
        else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar11 + -1)) != puVar15) break;
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    else {
      do {
        puVar17 = (undefined1 *)plVar16[1];
        if (puVar17 == local_108) {
          if ((undefined1 *)plVar16[2] == local_108) goto LAB_016ac004;
        }
        else {
          if (puVar11 <= puVar17) {
            uVar10 = 0;
            if (puVar11 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar17 / (ulong)puVar11;
            }
            puVar17 = puVar17 + -(uVar10 * (long)puVar11);
          }
          if (puVar17 != puVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  goto LAB_016ac008;
LAB_016ac004:
  *(char *)(plVar16 + 3) = param_3;
  goto LAB_016ac008;
LAB_016abd94:
  local_108 = (undefined1 *)plVar14[3];
  local_100 = plVar14[4];
  local_f8 = plVar14[5];
  if (local_108 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return;
  }
  if (local_108 == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar14 = *(long **)(lVar9 + 0x290);
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar11 = (undefined1 *)plVar14[0xe];
  if (puVar11 != (undefined1 *)0x0) {
    uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar12 = 0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar12 = (ulong)local_108 / (ulong)puVar11;
    }
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)local_108);
    }
    else {
      puVar15 = local_108;
      if (puVar11 <= local_108) {
        puVar15 = local_108 + -(uVar12 * (long)puVar11);
      }
    }
    lVar9 = plVar14[0xd];
    plVar16 = *(long **)(lVar9 + (long)puVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar16[1] == local_108) {
            if ((undefined1 *)plVar16[2] == local_108) goto LAB_016abf34;
          }
          else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar11 + -1)) != puVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar16[1];
          if (puVar17 == local_108) {
            if ((undefined1 *)plVar16[2] == local_108) goto LAB_016abf34;
          }
          else {
            if (puVar11 <= puVar17) {
              uVar8 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar17 / (ulong)puVar11;
              }
              puVar17 = puVar17 + -(uVar8 * (long)puVar11);
            }
            if (puVar17 != puVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
    goto LAB_016abf48;
  }
LAB_016ac008:
  uVar10 = FUN_016a83a0(&local_108);
  if ((uVar10 & 0xff) != 0) {
    puVar7 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_108);
    *puVar7 = (int)(uVar10 >> 0x20);
  }
  FUN_016aa5a8(param_1,param_2);
  FUN_016aa648(local_f0,param_1);
  if (local_f0[0] != '\0') {
    memcpy((void *)(param_1 + 0x200),auStack_e0,0x98);
    local_f0[0] = '\0';
  }
LAB_016ac064:
  if (plVar14 != (long *)0x0) {
    lVar9 = plVar14[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


