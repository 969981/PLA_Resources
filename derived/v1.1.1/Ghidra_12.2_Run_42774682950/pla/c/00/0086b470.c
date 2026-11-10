/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086b470; name: FUN_0086b470
 */


void FUN_0086b470(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ushort *puVar14;
  uint uVar15;
  undefined8 uVar16;
  int local_70 [4];
  
  puVar1 = PTR_DAT_043780f8;
  if (*(long *)PTR_DAT_043780f8 == 0) {
    return;
  }
  lVar2 = FUN_00865cec();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_00865cec(*(undefined8 *)puVar1);
  nn::os::LockMutex((MutexType *)(lVar3 + 0x18));
  plVar4 = (long *)thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  if (plVar4 == (long *)0x0) goto LAB_0086b628;
  lVar5 = thunk_FUN_007f3f6c(*(undefined8 *)puVar1);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1378));
  puVar14 = (ushort *)plVar4[0x261];
  if (plVar4[0x275] == 0) {
    puVar6 = (undefined8 *)FUN_0085e894(puVar14);
    if (puVar6 == (undefined8 *)0x0) {
      uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
      puVar8 = &DAT_03996322;
    }
    else {
      lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
      puVar8 = (undefined1 *)FUN_007ec6e4(lVar7 + 0x10);
      uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
    }
    uVar12 = 0xd;
LAB_0086b61c:
    FUN_00867f98(lVar2,puVar8,uVar12,uVar13);
  }
  else {
    if (*(char *)(plVar4[0x275] + 0x1828) != '\0') {
      puVar6 = (undefined8 *)FUN_0085e894(puVar14);
      if (puVar6 == (undefined8 *)0x0) {
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
        puVar8 = &DAT_03996322;
        uVar12 = 0xb;
      }
      else {
        lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
        puVar8 = (undefined1 *)FUN_007ec6e4(lVar7 + 0x10);
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
        uVar12 = 0xb;
      }
      goto LAB_0086b61c;
    }
    FUN_007ee578(local_70,*(long *)puVar1 + 0x1f5c);
    puVar1 = PTR_DAT_04377550;
    if (local_70[0] != 0) {
      puVar6 = (undefined8 *)FUN_0085e894(puVar14);
      if (puVar6 == (undefined8 *)0x0) {
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
        puVar8 = &DAT_03996322;
      }
      else {
        lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*puVar6);
        puVar8 = (undefined1 *)FUN_007ec6e4(lVar7 + 0x10);
        uVar13 = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x472);
      }
      uVar12 = 0xc;
      goto LAB_0086b61c;
    }
    if (*puVar14 != 0) {
      uVar15 = 0;
      plVar9 = (long *)FUN_0085e904(puVar14,0);
      while( true ) {
        if (((plVar9 != (long *)0x0) && (*plVar9 != -1)) && ((int)plVar9[2] - 0xdU < 2)) {
          lVar7 = (**(code **)(*plVar4 + 0x3c8))(plVar4);
          if ((int)plVar9[2] == 0xd) {
            uVar12 = 0;
            uVar16 = 1;
          }
          else if ((int)plVar9[2] == 0xe) {
            if (*(char *)(*(long *)puVar1 + 0x472) == '\0') {
              uVar12 = 0;
              uVar16 = 10;
            }
            else {
              uVar11 = (**(code **)(*(long *)plVar4[0x275] + 0x68))();
              if (((uVar11 & 1) == 0) ||
                 ((**(code **)(*(long *)plVar4[0x275] + 0x70))(local_70), local_70[0] != 0)) {
                uVar12 = 1;
                uVar16 = 10;
              }
              else {
                uVar12 = 1;
                uVar16 = 2;
              }
            }
          }
          else {
            uVar16 = 0;
            uVar12 = 0;
          }
          uVar10 = FUN_007ec6e4(lVar7 + 0x10);
          FUN_00867f98(lVar2,uVar10,uVar16,uVar12);
        }
        uVar15 = uVar15 + 1;
        if (*puVar14 <= uVar15) break;
        plVar9 = (long *)FUN_0085e904(puVar14,uVar15);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1378));
LAB_0086b628:
  FUN_00868398(lVar2);
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x18));
  return;
}


