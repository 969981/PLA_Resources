/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126f294; name: FUN_0126f294
 */


void FUN_0126f294(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long *local_80;
  long *local_78;
  long *local_68;
  
  FUN_01264354(param_1 + 0x628);
  FUN_012620d0(param_1 + 0x718);
  FUN_01261518(param_1 + 0x808);
  FUN_0127293c();
  FUN_0127293c();
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_68);
  lVar11 = param_1 + 0x5b8;
  FUN_01263a30(auStack_88,lVar11,0);
  uVar6 = FUN_0126491c(param_1 + 0x628);
  puVar5 = PTR_PTR_04379d00;
  if (uVar6 != 0) {
    uVar13 = 0;
    do {
      if (uVar13 < ((ulong)(*(long *)(param_1 + 0x6c8) - *(long *)(param_1 + 0x6c0)) >> 5 &
                   0xffffffff)) {
        puVar9 = (undefined1 *)(*(long *)(param_1 + 0x6c0) + uVar13 * 0x20);
      }
      else {
        puVar9 = (undefined1 *)(param_1 + 0x6f8);
      }
      uVar2 = *puVar9;
      plVar14 = *(long **)(puVar9 + 8);
      if (plVar14 == (long *)0x0) {
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      else {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      uVar12 = *(undefined8 *)(puVar9 + 0x18);
      if (local_80 == (long *)0x0) {
        pcVar8 = *(char **)puVar5;
        if (plVar14 == (long *)0x0) goto LAB_0126f8a0;
LAB_0126f400:
        plVar10 = plVar14 + 0xc;
      }
      else {
        pcVar8 = (char *)local_80[0xc];
        if (plVar14 != (long *)0x0) goto LAB_0126f400;
LAB_0126f8a0:
        plVar10 = (long *)puVar5;
      }
      pcVar8 = strstr(pcVar8,(char *)*plVar10);
      if (pcVar8 != (char *)0x0) {
        *(undefined1 *)(param_1 + 0xa38) = uVar2;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        plVar10 = *(long **)(param_1 + 0xa40);
        *(long **)(param_1 + 0xa40) = plVar14;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        plVar10 = *(long **)(param_1 + 0xa48);
        *(long **)(param_1 + 0xa48) = plVar15;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        *(undefined8 *)(param_1 + 0xa50) = uVar12;
        *(int *)(param_1 + 0xa98) = (int)uVar13;
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  FUN_01263a30(auStack_88,lVar11,0);
  iVar7 = FUN_012626bc(param_1 + 0x718);
  puVar5 = PTR_PTR_04379d00;
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      puVar9 = (undefined1 *)FUN_01262698(param_1 + 0x718,iVar16);
      uVar2 = *puVar9;
      plVar14 = *(long **)(puVar9 + 8);
      if (plVar14 == (long *)0x0) {
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      else {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      uVar12 = *(undefined8 *)(puVar9 + 0x18);
      local_98 = 0;
      uStack_90 = 0;
      plVar10 = (long *)puVar5;
      if (plVar14 != (long *)0x0) {
        plVar10 = plVar14 + 0xc;
      }
      local_a8 = 0;
      uStack_a0 = 0;
      snprintf((char *)&local_a8,0x20,"_%s",*plVar10);
      plVar10 = (long *)puVar5;
      if (local_80 != (long *)0x0) {
        plVar10 = local_80 + 0xc;
      }
      pcVar8 = strstr((char *)*plVar10,(char *)&local_a8);
      if (pcVar8 != (char *)0x0) {
        *(undefined1 *)(param_1 + 0xa58) = uVar2;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        plVar10 = *(long **)(param_1 + 0xa60);
        *(long **)(param_1 + 0xa60) = plVar14;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        plVar10 = *(long **)(param_1 + 0xa68);
        *(long **)(param_1 + 0xa68) = plVar15;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        *(undefined8 *)(param_1 + 0xa70) = uVar12;
        *(int *)(param_1 + 0xa9c) = iVar16;
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      iVar16 = iVar16 + 1;
    } while (iVar7 != iVar16);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  FUN_01263a30(auStack_88,lVar11,2);
  iVar7 = FUN_01261b04(param_1 + 0x808);
  puVar5 = PTR_PTR_04379d00;
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      puVar9 = (undefined1 *)FUN_01261ae0(param_1 + 0x808,iVar16);
      uVar2 = *puVar9;
      plVar14 = *(long **)(puVar9 + 8);
      if (plVar14 == (long *)0x0) {
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      else {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plVar15 = *(long **)(puVar9 + 0x10);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      uVar12 = *(undefined8 *)(puVar9 + 0x18);
      if (local_80 == (long *)0x0) {
        pcVar8 = *(char **)puVar5;
        if (plVar14 == (long *)0x0) goto LAB_0126f8b4;
LAB_0126f6cc:
        plVar10 = plVar14 + 0xc;
      }
      else {
        pcVar8 = (char *)local_80[0xc];
        if (plVar14 != (long *)0x0) goto LAB_0126f6cc;
LAB_0126f8b4:
        plVar10 = (long *)puVar5;
      }
      pcVar8 = strstr(pcVar8,(char *)*plVar10);
      if (pcVar8 != (char *)0x0) {
        *(undefined1 *)(param_1 + 0xa78) = uVar2;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        plVar10 = *(long **)(param_1 + 0xa80);
        *(long **)(param_1 + 0xa80) = plVar14;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        plVar10 = *(long **)(param_1 + 0xa88);
        *(long **)(param_1 + 0xa88) = plVar15;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        *(undefined8 *)(param_1 + 0xa90) = uVar12;
        *(int *)(param_1 + 0xaa0) = iVar16;
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      iVar16 = iVar16 + 1;
    } while (iVar7 != iVar16);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  FUN_0126bcac(param_1 + 0x9c8,(undefined1 *)(param_1 + 0xa38));
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


