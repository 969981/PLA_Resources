/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dd1ac; name: FUN_013dd1ac
 */


/* WARNING: Removing unreachable block (ram,0x013dd31c) */
/* WARNING: Removing unreachable block (ram,0x013dd3b8) */
/* WARNING: Removing unreachable block (ram,0x013dd598) */
/* WARNING: Removing unreachable block (ram,0x013dd458) */

void FUN_013dd1ac(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
                 long *param_6)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  long *local_68;
  long *local_60;
  long **local_58;
  
  local_60 = param_6;
  memset(param_1,0,0x9abc);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  local_68 = *(long **)(lVar10 + 0x298);
  if (local_68 != (long *)0x0) {
    lVar10 = local_68[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = 0;
  iVar7 = 1;
  puVar16 = param_1 + 0x19c9;
  do {
    local_58 = (long **)((ulong)local_58 & 0xffffffff00000000);
    iVar5 = FUN_0112e8d0(param_2,iVar7,&local_58);
    if (iVar5 != 0) {
      if (1099 < uVar6) goto LAB_013dd37c;
      param_1[(ulong)uVar6 * 3 + 0xce5] = iVar7;
      param_1[(ulong)uVar6 * 3 + 0xce6] = iVar5;
      param_1[(ulong)uVar6 * 3 + 0xce7] = local_58._0_4_;
      uVar6 = uVar6 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x38a);
  puVar15 = param_1 + 0xce5;
  puVar13 = puVar15 + (ulong)uVar6 * 3;
  *puVar16 = uVar6;
  if (param_3 == 1) {
    local_58 = &local_60;
    FUN_013dd730(puVar15,puVar13,&local_58);
    uVar6 = *puVar16;
    if (uVar6 != 0) {
      uVar14 = 0;
      puVar15 = param_1 + 0xce7;
      uVar12 = 0;
      do {
        uVar9 = puVar15[-2];
        uVar11 = uVar12;
        if (((int)uVar9 < 0x3d5) &&
           ((*(byte *)((long)local_68 + (ulong)uVar9 * 0x58 + 0xdc) & 1) != 0)) {
          if (1099 < (uint)uVar12) break;
          uVar11 = (ulong)((uint)uVar12 + 1);
          param_1[uVar12 * 3 + 0x19ca] = uVar9;
          param_1[uVar12 * 3 + 0x19cb] = puVar15[-1];
          param_1[uVar12 * 3 + 0x19cc] = *puVar15;
        }
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 3;
        if (uVar6 == uVar14) goto LAB_013dd558;
        uVar12 = uVar11;
      } while (uVar14 != 0x44c);
      goto LAB_013dd37c;
    }
LAB_013dd554:
    uVar11 = 0;
  }
  else {
    if (param_3 != 2) {
      local_58 = &local_68;
      if (param_3 == 3) {
        FUN_013df1e0(puVar15,puVar13,&local_58);
        uVar6 = *puVar16;
        if (uVar6 != 0) {
          uVar14 = 0;
          puVar15 = param_1 + 0xce7;
          uVar12 = 0;
          do {
            uVar9 = puVar15[-2];
            uVar11 = uVar12;
            if (((int)uVar9 < 0x3d5) &&
               ((*(byte *)((long)local_68 + (ulong)uVar9 * 0x58 + 0xdc) & 1) != 0)) {
              if (1099 < (uint)uVar12) break;
              uVar11 = (ulong)((uint)uVar12 + 1);
              param_1[uVar12 * 3 + 0x19ca] = uVar9;
              param_1[uVar12 * 3 + 0x19cb] = puVar15[-1];
              param_1[uVar12 * 3 + 0x19cc] = *puVar15;
            }
            uVar14 = uVar14 + 1;
            puVar15 = puVar15 + 3;
            if (uVar6 == uVar14) goto LAB_013dd558;
            uVar12 = uVar11;
          } while (uVar14 != 0x44c);
          goto LAB_013dd37c;
        }
      }
      else {
        FUN_013e01e0(puVar15,puVar13,&local_58);
        uVar6 = *puVar16;
        if (uVar6 != 0) {
          uVar14 = 0;
          puVar15 = param_1 + 0xce7;
          uVar12 = 0;
          do {
            uVar9 = puVar15[-2];
            uVar11 = uVar12;
            if (((int)uVar9 < 0x3d5) &&
               ((*(byte *)((long)local_68 + (ulong)uVar9 * 0x58 + 0xdc) & 1) != 0)) {
              if (1099 < (uint)uVar12) break;
              uVar11 = (ulong)((uint)uVar12 + 1);
              param_1[uVar12 * 3 + 0x19ca] = uVar9;
              param_1[uVar12 * 3 + 0x19cb] = puVar15[-1];
              param_1[uVar12 * 3 + 0x19cc] = *puVar15;
            }
            uVar14 = uVar14 + 1;
            puVar15 = puVar15 + 3;
            if (uVar6 == uVar14) goto LAB_013dd558;
            uVar12 = uVar11;
          } while (uVar14 != 0x44c);
          goto LAB_013dd37c;
        }
      }
      goto LAB_013dd554;
    }
    FUN_013de700();
    uVar6 = *puVar16;
    if (uVar6 == 0) goto LAB_013dd554;
    uVar14 = 0;
    uVar11 = 0;
    do {
      while( true ) {
        if (uVar14 == 0x44c) goto LAB_013dd37c;
        lVar10 = uVar14 * 3;
        if (0x3d4 < (int)param_1[lVar10 + 0xce5]) break;
        uVar14 = uVar14 + 1;
        uVar9 = (uint)uVar11;
        if ((*(byte *)((long)local_68 + (ulong)(uint)param_1[lVar10 + 0xce5] * 0x58 + 0xdc) & 1) !=
            0) {
          uVar9 = (uint)uVar14;
        }
        uVar11 = (ulong)uVar9;
        if (uVar6 <= uVar14) goto LAB_013dd514;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6);
LAB_013dd514:
    if ((int)uVar11 != 0) {
      uVar14 = 0;
      puVar15 = param_1 + 0xce6;
      do {
        if (uVar14 == 0x44c) goto LAB_013dd37c;
        uVar14 = uVar14 + 1;
        *(undefined8 *)(puVar15 + 0xce4) = *(undefined8 *)(puVar15 + -1);
        puVar15[0xce6] = puVar15[1];
        puVar15 = puVar15 + 3;
      } while (uVar11 != uVar14);
    }
  }
LAB_013dd558:
  param_1[0x26ae] = (int)uVar11;
  if (param_4 == 1) {
    uVar6 = FUN_01132194(local_68);
    if (uVar6 == 0) goto LAB_013dd664;
    uVar9 = param_1[0x26ae];
    if (uVar9 != 0) {
      uVar14 = 0;
      uVar11 = 0;
      puVar16 = param_1 + 0x19cc;
      do {
        uVar2 = puVar16[-2];
        if ((int)uVar2 < 0x3d5) {
          if (*(ushort *)((long)local_68 + (ulong)uVar2 * 0x58 + 0xea) == uVar6) {
LAB_013dd634:
            if (1099 < (uint)uVar11) break;
            puVar17 = param_1 + uVar11 * 3;
            uVar11 = (ulong)((uint)uVar11 + 1);
            *puVar17 = uVar2;
            puVar17[1] = puVar16[-1];
            puVar17[2] = *puVar16;
            uVar9 = param_1[0x26ae];
          }
        }
        else if (uVar6 == 0) goto LAB_013dd634;
        uVar14 = uVar14 + 1;
        puVar16 = puVar16 + 3;
        if (uVar9 <= uVar14) goto LAB_013dd660;
      } while (uVar14 != 0x44c);
LAB_013dd37c:
                    /* WARNING: Subroutine does not return */
      FUN_013dd720();
    }
    uVar11 = 0;
  }
  else if ((int)uVar11 != 0) {
    uVar11 = 0;
    puVar13 = param_1 + 0x19cc;
    puVar15 = param_1;
    do {
      if (uVar11 == 0x44c) goto LAB_013dd37c;
      *puVar15 = puVar13[-2];
      puVar15[1] = puVar13[-1];
      puVar15[2] = *puVar13;
      uVar11 = uVar11 + 1;
      puVar15 = puVar15 + 3;
      puVar13 = puVar13 + 3;
    } while (uVar11 < (uint)param_1[0x26ae]);
  }
LAB_013dd660:
  param_1[0xce4] = (int)uVar11;
LAB_013dd664:
  if (local_68 != (long *)0x0) {
    lVar10 = local_68[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


