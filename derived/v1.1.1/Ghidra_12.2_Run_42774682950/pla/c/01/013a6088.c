/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a6088; name: FUN_013a6088
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_013a6088(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  short local_1648;
  short sStack_1646;
  undefined4 local_1644;
  char local_bb8 [4];
  undefined4 local_bb4;
  long *local_b68;
  char local_b60 [20];
  undefined4 local_b4c;
  undefined1 auStack_b00 [26];
  undefined1 local_ae6;
  undefined1 local_ae5;
  undefined1 auStack_ae0 [2704];
  long *local_48;
  
  switch(*(undefined1 *)(param_1 + 0xb1)) {
  case 0:
    if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
    lVar15 = *(long *)PTR_DAT_0437b4d8;
    *(long *)PTR_DAT_0437b4e0 = lVar15;
    if (((lVar15 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 != (undefined8 *)0x0))
    {
      plVar10 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*PTR_DAT_0437f080 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f080), iVar8 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437f088 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437f080);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)PTR_DAT_0437f088) {
          FUN_013a398c(&local_1648,puVar17 + -10);
          if ((char)local_1648 != '\0') {
            FUN_02788704(local_b60,lVar15,local_1644);
            if (local_b60[0] == '\0') {
              *(undefined1 *)(param_1 + 0xb1) = 5;
              return 0;
            }
            FUN_013a77bc(param_1,auStack_b00,local_ae6,local_ae5);
            *(undefined1 *)(param_1 + 0xb1) = 1;
            return 0;
          }
          goto LAB_013a63d0;
        }
      }
    }
    break;
  case 1:
    uVar12 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar13 = FUN_00d686a0(*(undefined8 *)(param_1 + 0xa8));
    if ((int)uVar13 == 1) {
      uVar14 = 2;
      goto LAB_013a61b8;
    }
    if ((int)uVar13 == 0) {
      *(undefined1 *)(param_1 + 0xb1) = 3;
      return uVar13;
    }
    break;
  case 2:
    uVar14 = 7;
    goto LAB_013a63c4;
  case 3:
    uVar12 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    puVar6 = PTR_DAT_04379558;
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar7 = PTR_DAT_04379568;
    puVar5 = PTR_DAT_04379560;
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(&local_48);
    if (local_48 == (long *)0x0) {
LAB_013a63d0:
      *(undefined1 *)(param_1 + 0xb1) = 5;
      return 0;
    }
    if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
    lVar15 = *(long *)PTR_DAT_0437b4d8;
    *(long *)PTR_DAT_0437b4e0 = lVar15;
    if (lVar15 == 0) {
LAB_013a63e0:
      *(undefined1 *)(param_1 + 0xb1) = 5;
    }
    else {
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)puVar7 = *(undefined8 *)puVar5;
      FUN_01149164(&local_b68);
      if (local_b68 == (long *)0x0) goto LAB_013a63e0;
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 != (undefined8 *)0x0
         )) {
        puVar11 = (undefined8 *)(**(code **)*puVar17)(puVar17);
        if (((*PTR_DAT_0437f080 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f080), puVar6 = PTR_DAT_0437b300, iVar8 != 0)) {
          if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar5 = PTR_DAT_043794d8, iVar8 != 0))
          {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_0437b2f8);
          }
          *(undefined **)PTR_DAT_0437f088 = puVar6;
          __cxa_guard_release(PTR_DAT_0437f080);
        }
        if (puVar11 != (undefined8 *)0x0) {
LAB_013a6298:
          if (puVar11 != (undefined8 *)PTR_DAT_0437f088) goto LAB_013a6548;
          FUN_013a398c(local_bb8,puVar17 + -10);
          if (local_bb8[0] != '\0') {
            FUN_02788704(local_b60,lVar15,local_bb4);
            if (local_b60[0] == '\0') {
              *(undefined1 *)(param_1 + 0xb1) = 5;
            }
            else {
              uVar12 = FUN_02789a9c(lVar15,local_b4c);
              plVar10 = local_b68;
              if ((uVar12 & 1) == 0) {
                uVar14 = 5;
              }
              else {
                iVar8 = FUN_010d9120(local_b68);
                FUN_010d9128(plVar10,iVar8 + 1);
                memcpy(&local_1648,auStack_ae0,0xa8c);
                lVar4 = 0;
                while( true ) {
                  if ((local_1648 != 0) && (*(short *)((long)&sStack_1646 + lVar4) != 0)) {
                    FUN_0111e0d0(local_48);
                  }
                  if (lVar4 + 4 == 0xa8c) break;
                  local_1648 = *(short *)((long)&local_1644 + lVar4);
                  lVar4 = lVar4 + 4;
                }
                if (*(long *)(param_1 + 0xe0) != 0) {
                  iVar8 = FUN_02788e04(lVar15);
                  iVar9 = FUN_0278aff0(lVar15);
                  puVar17 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + 0x68);
                  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + 0x70);
                  if (puVar17 != puVar11) {
                    do {
                      puVar16 = puVar17 + 1;
                      (**(code **)(*(long *)*puVar17 + 8))((long *)*puVar17,iVar8 != -iVar9);
                      puVar17 = puVar16;
                    } while (puVar11 != puVar16);
                  }
                }
                FUN_013a7a98(param_1,auStack_b00,local_ae6,local_ae5);
                uVar14 = 4;
              }
              *(undefined1 *)(param_1 + 0xb1) = uVar14;
            }
            local_b60[0] = '\0';
            if (local_bb8[0] == '\0') {
              local_bb8[0] = '\0';
            }
            else {
              local_bb8[0] = '\0';
            }
            goto joined_r0x013a64dc;
          }
        }
      }
LAB_013a6550:
      *(undefined1 *)(param_1 + 0xb1) = 5;
joined_r0x013a64dc:
      if (local_b68 != (long *)0x0) {
        lVar15 = *(long *)((long)local_b68 + 0x58);
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_b68 + 0x20))();
        }
      }
    }
    if (local_48 != (long *)0x0) {
      lVar15 = local_48[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
switchD_013a60cc_default:
    return 0;
  case 4:
    uVar12 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    break;
  case 5:
    FUN_013c8038(*(undefined8 *)(param_1 + 0x90));
    FUN_013cb8d4(*(undefined8 *)(param_1 + 0x90));
    uVar12 = FUN_013c8028(*(undefined8 *)(param_1 + 0x90));
    if ((uVar12 & 0xff) != 0) {
      FUN_013c8030(*(undefined8 *)(param_1 + 0x90));
      iVar8 = FUN_00d686a0(*(undefined8 *)(param_1 + 0xa8));
      if (iVar8 == 0) {
        iVar9 = (int)(uVar12 >> 0x20);
        iVar8 = 0;
        if (iVar9 != 0) {
          iVar8 = iVar9 + -1;
        }
        FUN_013cb89c(*(undefined8 *)(param_1 + 0x90),iVar8);
      }
    }
    uVar14 = 3;
LAB_013a63c4:
    *(undefined1 *)(param_1 + 0xb0) = uVar14;
    return 1;
  default:
    goto switchD_013a60cc_default;
  }
  uVar14 = 5;
LAB_013a61b8:
  *(undefined1 *)(param_1 + 0xb1) = uVar14;
  return 0;
LAB_013a6548:
  puVar11 = (undefined8 *)*puVar11;
  if (puVar11 == (undefined8 *)0x0) goto LAB_013a6550;
  goto LAB_013a6298;
}


