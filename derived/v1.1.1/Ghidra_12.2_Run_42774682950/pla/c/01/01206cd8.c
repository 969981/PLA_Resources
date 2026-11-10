/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01206cd8; name: FUN_01206cd8
 */


void FUN_01206cd8(long param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_70 [24];
  long *local_58;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar18 != (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)(**(code **)*puVar18)(puVar18);
    if (((*PTR_DAT_0437e7c0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437e7c0), puVar9 = PTR_DAT_0437b300, iVar11 != 0)) {
      if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar8 = PTR_DAT_043794d8, iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar15;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(PTR_DAT_0437b2f8);
      }
      *(undefined **)PTR_DAT_0437e7c8 = puVar9;
      __cxa_guard_release(PTR_DAT_0437e7c0);
    }
    if (puVar13 != (undefined8 *)0x0) {
      do {
        if (puVar13 == (undefined8 *)PTR_DAT_0437e7c8) {
          puVar17 = puVar18 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar17 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
      goto LAB_01206d44;
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_01206d44:
  puVar18 = (undefined8 *)(param_1 + 0x90);
  uVar14 = FUN_012206ac(*puVar18,1,0,0);
  bVar2 = (uVar14 & 1) != 0;
  if (bVar2) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,0);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,0);
  }
  uVar14 = FUN_012206ac(*puVar18,1,0,1);
  bVar3 = (uVar14 & 1) != 0;
  if (bVar3) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,1);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,1);
  }
  uVar14 = FUN_012206ac(*puVar18,1,0,2);
  bVar4 = (uVar14 & 1) != 0;
  if (bVar4) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,2);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,2);
  }
  uVar14 = FUN_012206ac(*puVar18,1,0,3);
  bVar5 = (uVar14 & 1) != 0;
  if (bVar5) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,3);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,3);
  }
  uVar14 = FUN_012206ac(*puVar18,1,0,4);
  bVar6 = (uVar14 & 1) != 0;
  if (bVar6) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,4);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,4);
  }
  uVar14 = FUN_012206ac(*puVar18,1,0,5);
  bVar20 = (uVar14 & 1) != 0;
  if (bVar20) {
    uVar15 = thunk_FUN_0121fbdc(*puVar18,1,0,5);
    FUN_011faee0(puVar17,uVar15);
    FUN_00d5e310(*puVar18,1,5);
  }
  bVar20 = bVar20 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))));
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148bf4(&local_48);
  uVar10 = FUN_010e67cc(local_48);
  iVar11 = FUN_010e62c4(local_48);
  if (iVar11 == 0) {
LAB_01207040:
    if (bVar20) {
      FUN_02a4754c(auStack_70,&DAT_041fbd80);
      FUN_028354b0(auStack_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (local_48 != (long *)0x0) {
      lVar16 = local_48[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar7 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = 8;
    return;
  }
  uVar19 = 0;
  if (uVar10 == 0) goto LAB_01206f8c;
  do {
    iVar11 = 0;
    do {
      uVar14 = FUN_012206ac(*puVar18,0,uVar19,iVar11);
      if ((uVar14 & 1) != 0) {
        uVar15 = thunk_FUN_0121fbdc(*puVar18,0,uVar19,iVar11);
        FUN_011faee0(puVar17,uVar15);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x1e);
    while( true ) {
      uVar19 = uVar19 + 1;
      uVar12 = FUN_010e62c4(local_48);
      if (uVar12 <= uVar19) goto LAB_01207040;
      if (uVar19 != uVar10) break;
LAB_01206f8c:
      iVar11 = 0;
      do {
        uVar14 = FUN_012206ac(*puVar18,0,uVar10,iVar11);
        if ((uVar14 & 1) != 0) {
          uVar15 = thunk_FUN_0121fbdc(*puVar18,0,uVar10,iVar11);
          FUN_011faee0(puVar17,uVar15);
          FUN_00d5e310(*puVar18,0,iVar11);
          bVar20 = true;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x1e);
    }
  } while( true );
}


