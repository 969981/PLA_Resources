/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013514ec; name: FUN_013514ec
 */


void FUN_013514ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  
  puVar10 = (undefined8 *)(param_1 + 0xe0);
  plVar11 = (long *)*puVar10;
  plVar15 = (long *)(param_1 + 0xe8);
  plVar9 = (long *)*plVar15;
  if (plVar9 != plVar11) {
    plVar5 = (long *)plVar9[-1];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    if (plVar9 + -1 != plVar11) {
      plVar5 = (long *)plVar9[-2];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      if (plVar9 + -2 != plVar11) {
        plVar5 = (long *)plVar9[-3];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        if (plVar9 + -3 != plVar11) {
          plVar5 = (long *)plVar9[-4];
          while( true ) {
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            if (plVar11 + 3 == plVar9 + -1) break;
            plVar5 = (long *)plVar9[-5];
            plVar9 = plVar9 + -1;
          }
        }
      }
    }
  }
  *(long **)(param_1 + 0xe8) = plVar11;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
  plVar9 = (long *)(param_1 + 0xf8);
  plVar5 = (long *)*plVar9;
  if (plVar5 == *(long **)(param_1 + 0xc0)) {
    lVar8 = *(long *)(param_1 + 0xf0);
    plVar5 = *(long **)(param_1 + 0xe0);
  }
  else {
    plVar7 = (long *)*puVar10;
    if (plVar11 != plVar7) {
      plVar5 = (long *)plVar11[-1];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      if (plVar11 + -1 != plVar7) {
        plVar5 = (long *)plVar11[-2];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        if (plVar11 + -2 != plVar7) {
          plVar5 = (long *)plVar11[-3];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          if (plVar11 + -3 != plVar7) {
            plVar5 = (long *)plVar11[-4];
            while( true ) {
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x20))();
              }
              if (plVar7 + 3 == plVar11 + -1) break;
              plVar5 = (long *)plVar11[-5];
              plVar11 = plVar11 + -1;
            }
          }
        }
      }
      plVar11 = (long *)*puVar10;
      plVar5 = (long *)*plVar9;
    }
    *(long **)(param_1 + 0xe8) = plVar7;
    lVar8 = *(long *)(param_1 + 0xf0) - (long)plVar11;
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar14 & 1) == 0) {
LAB_013519b8:
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar11,lVar8,8);
    }
    else {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_013519b8;
      FUN_02bcc824(plVar5,plVar11,lVar8,8);
    }
    plVar11 = (long *)0x0;
    plVar5 = (long *)0x0;
    *puVar10 = 0;
    lVar8 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xd0);
  *plVar9 = *(long *)(param_1 + 0xc0);
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  uVar14 = (long)puVar2 - (long)puVar1 >> 3;
  if ((ulong)(lVar8 - (long)plVar5 >> 3) < uVar14) {
    FUN_01354890(puVar10);
    uVar6 = FUN_01354afc(puVar10,uVar14);
    FUN_01354a6c(puVar10,uVar6);
    if (puVar1 != puVar2) {
      FUN_01354b4c(plVar9,*plVar15,puVar1);
      *plVar15 = *plVar15 + 8;
      if (puVar1 + 1 != puVar2) {
        FUN_01354b4c(plVar9);
        *plVar15 = *plVar15 + 8;
        if (puVar1 + 2 != puVar2) {
          FUN_01354b4c(plVar9);
          *plVar15 = *plVar15 + 8;
          if (puVar1 + 3 != puVar2) {
            FUN_01354b4c(plVar9);
            lVar8 = *plVar15 + 8;
            *plVar15 = lVar8;
            for (puVar1 = puVar1 + 4; puVar1 != puVar2; puVar1 = puVar1 + 1) {
              FUN_01354b4c(plVar9,lVar8,puVar1);
              lVar8 = *plVar15 + 8;
              *plVar15 = lVar8;
            }
          }
        }
      }
    }
  }
  else {
    uVar12 = (long)plVar11 - (long)plVar5 >> 3;
    puVar10 = (undefined8 *)((long)puVar1 + ((long)plVar11 - (long)plVar5));
    puVar4 = puVar2;
    if (uVar12 < uVar14) {
      puVar4 = puVar10;
    }
    for (; puVar4 != puVar1; puVar1 = puVar1 + 1) {
      plVar11 = (long *)*puVar1;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar7 = (long *)*plVar5;
      *plVar5 = (long)plVar11;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar5 = plVar5 + 1;
    }
    if (uVar12 < uVar14) {
      if (puVar4 != puVar2) {
        FUN_01354b4c(plVar9,*plVar15,puVar10);
        lVar8 = *plVar15;
        *plVar15 = lVar8 + 8;
        if (puVar10 + 1 != puVar2) {
          FUN_01354b4c(plVar9,lVar8 + 8,puVar10 + 1);
          lVar8 = *plVar15;
          *plVar15 = lVar8 + 8;
          if (puVar10 + 2 != puVar2) {
            FUN_01354b4c(plVar9,lVar8 + 8,puVar10 + 2);
            lVar8 = *plVar15;
            *plVar15 = lVar8 + 8;
            if (puVar10 + 3 != puVar2) {
              FUN_01354b4c(plVar9,lVar8 + 8,puVar10 + 3);
              lVar8 = *plVar15 + 8;
              *plVar15 = lVar8;
              for (puVar10 = puVar10 + 4; puVar10 != puVar2; puVar10 = puVar10 + 1) {
                FUN_01354b4c(plVar9,lVar8,puVar10);
                lVar8 = *plVar15 + 8;
                *plVar15 = lVar8;
              }
            }
          }
        }
      }
    }
    else {
      plVar9 = (long *)*plVar15;
      if (plVar9 != plVar5) {
        plVar11 = (long *)plVar9[-1];
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        if (plVar9 + -1 != plVar5) {
          plVar11 = (long *)plVar9[-2];
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))();
          }
          if (plVar9 + -2 != plVar5) {
            plVar11 = (long *)plVar9[-3];
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x20))();
            }
            if (plVar9 + -3 != plVar5) {
              plVar11 = (long *)plVar9[-4];
              while( true ) {
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x20))();
                }
                if (plVar5 + 3 == plVar9 + -1) break;
                plVar11 = (long *)plVar9[-5];
                plVar9 = plVar9 + -1;
              }
            }
          }
        }
      }
      *plVar15 = (long)plVar5;
    }
  }
  plVar9 = *(long **)(param_1 + 0x168);
  if (plVar9 == *(long **)(param_1 + 0x130)) goto LAB_013516c4;
  lVar8 = *(long *)(param_1 + 0x150);
  *(long *)(param_1 + 0x158) = lVar8;
  lVar13 = *(long *)(param_1 + 0x160) - lVar8;
  uVar14 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar14 & 1) == 0) {
LAB_01351a54:
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar13,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01351a54;
    FUN_02bcc824(plVar9,lVar8,lVar13,8);
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
LAB_013516c4:
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x130);
  FUN_01354c38((undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x118),
               *(undefined8 *)(param_1 + 0x120));
  plVar9 = *(long **)(param_1 + 0xa8);
  plVar11 = *(long **)(param_1 + 0xb0);
  if (plVar11 != plVar9) {
    plVar15 = (long *)plVar11[-1];
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    if (plVar11 + -1 != plVar9) {
      plVar15 = (long *)plVar11[-2];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      if (plVar11 + -2 != plVar9) {
        plVar15 = (long *)plVar11[-3];
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x20))();
        }
        if (plVar11 + -3 != plVar9) {
          plVar15 = (long *)plVar11[-4];
          while( true ) {
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            if (plVar9 + 3 == plVar11 + -1) break;
            plVar15 = (long *)plVar11[-5];
            plVar11 = plVar11 + -1;
          }
        }
      }
    }
  }
  *(long **)(param_1 + 0xb0) = plVar9;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  return;
}


