/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec8c74; name: FUN_01ec8c74
 */


void FUN_01ec8c74(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar13 = *(long **)(param_1 + 0x250);
  if (plVar13 == *(long **)(param_1 + 600)) {
LAB_01ec8eec:
    plVar13 = *(long **)(param_1 + 0x288);
    plVar12 = *(long **)(param_1 + 0x290);
    if (plVar13 != plVar12) {
      uVar10 = (long)plVar12 + (-8 - (long)plVar13);
      if (((uint)uVar10 >> 3 & 1) == 0) {
        if (*(long *)(*plVar13 + 0xa0) == param_2) {
          *(undefined1 *)(*plVar13 + 0xac) = 1;
        }
        plVar13 = plVar13 + 1;
      }
      if (7 < uVar10) {
        do {
          if (*(long *)(*plVar13 + 0xa0) == param_2) {
            *(undefined1 *)(*plVar13 + 0xac) = 1;
          }
          if (*(long *)(plVar13[1] + 0xa0) == param_2) {
            *(undefined1 *)(plVar13[1] + 0xac) = 1;
          }
          plVar13 = plVar13 + 2;
        } while (plVar13 != plVar12);
      }
    }
    if (*(long *)(param_1 + 0x378) == param_2) {
      FUN_01ec89f0(param_1);
      *(undefined1 *)(param_1 + 0x3f0) = 1;
    }
    return;
  }
  do {
    plVar12 = plVar13 + 6;
    lVar14 = *plVar13;
    while ((lVar14 == 0 || (*(int *)(lVar14 + 0xc) == 0))) {
LAB_01ec8d10:
      plVar16 = *(long **)(param_1 + 600);
      plVar11 = plVar13;
      plVar15 = plVar12;
      if (plVar12 == plVar16) {
LAB_01ec8d6c:
        do {
          plVar15 = plVar15 + -6;
          puVar17 = (undefined8 *)*plVar15;
          if (puVar17 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar17 + 1);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              puVar17[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar14 = *(long *)puVar7;
              *(long *)puVar8 = lVar14;
              local_68 = *puVar17;
              FUN_02a44274(lVar14 + 0xd8,&local_68);
            }
          }
        } while (plVar15 != plVar11);
      }
      else {
        plVar15 = plVar13;
        do {
          plVar11 = plVar15 + 6;
          FUN_01eacf70(plVar15,plVar11);
          plVar15[2] = plVar15[8];
          plVar15[3] = plVar15[9];
          *(int *)(plVar15 + 5) = (int)plVar15[0xb];
          plVar1 = plVar15 + 0xc;
          plVar15[4] = plVar15[10];
          plVar15 = plVar11;
        } while (plVar1 != plVar16);
        plVar15 = *(long **)(param_1 + 600);
        if (plVar15 != plVar11) goto LAB_01ec8d6c;
      }
      *(long **)(param_1 + 600) = plVar11;
      if (plVar13 == plVar11) goto LAB_01ec8eec;
      lVar14 = *plVar13;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    iVar9 = *(int *)(lVar14 + 0xc);
    while( true ) {
      uVar10 = FUN_01ecab44(*(undefined8 *)(lVar14 + 0x10));
      if ((uVar10 & 1) == 0) goto LAB_01ec8d10;
      iVar3 = *piVar2;
      if (iVar3 == iVar9) break;
      ClearExclusiveLocal();
LAB_01ec8ddc:
      iVar9 = iVar3;
      if (iVar3 == 0) goto LAB_01ec8d10;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01ec8ddc;
    lVar14 = *(long *)(lVar14 + 0x18);
    plVar11 = (long *)(lVar14 + -0x50);
    if (lVar14 == 0) goto LAB_01ec8d10;
    lVar18 = *(long *)(lVar14 + 0x5c0);
    plVar15 = *(long **)(lVar14 + 0x5d8);
    if (plVar15 == (long *)0x0) {
      if (lVar18 != param_2) goto LAB_01ec8ea8;
LAB_01ec8e30:
      if (*(char *)(lVar14 + 0x5e0) == '\0') {
        *(undefined1 *)(lVar14 + 0x48a) = 1;
      }
      else {
        FUN_01e9ba4c(plVar11);
      }
      lVar14 = *(long *)(lVar14 + 8);
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      goto LAB_01ec8d10;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    if (lVar18 == param_2) goto LAB_01ec8e30;
LAB_01ec8ea8:
    lVar14 = *(long *)(lVar14 + 8);
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    plVar13 = plVar12;
    if (plVar12 == *(long **)(param_1 + 600)) goto LAB_01ec8eec;
  } while( true );
}


