/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016814a4; name: FUN_016814a4
 */


void FUN_016814a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong extraout_x11;
  
  uVar9 = *(ulong *)(param_1 + 0x140);
  if (uVar9 == 0) goto LAB_01681658;
  uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) goto LAB_0168165c;
  uVar12 = 9;
  if (uVar9 < 10) {
    uVar1 = (uint)uVar9 & 0xff;
    uVar2 = 0;
    if ((uVar9 & 0xff) != 0) {
      uVar2 = 9 / uVar1;
    }
    uVar12 = (ulong)(9 - uVar2 * uVar1);
  }
  do {
    plVar13 = *(long **)(*(long *)(param_1 + 0x138) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == 9) {
            if ((int)plVar13[2] == 9) goto LAB_01681538;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == 9) {
            if ((int)plVar13[2] == 9) goto LAB_01681538;
          }
          else {
            if (uVar9 <= uVar11) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar11 / uVar9;
              }
              uVar11 = uVar11 - uVar3 * uVar9;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
LAB_01681658:
    param_1 = FUN_01681c60();
    uVar9 = extraout_x8;
    uVar11 = extraout_x11;
LAB_0168165c:
    uVar12 = (ulong)((int)uVar9 - 1) & 9;
  } while( true );
LAB_01681538:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    FUN_02a439f4(plVar13[0xb]);
  }
  puVar7 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
  if (((*PTR_DAT_04380720 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04380720), puVar5 = PTR_DAT_0437ef00, iVar6 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar4 = PTR_DAT_043794d8, iVar6 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
        uVar8 = FUN_0087f8f0();
        *(undefined8 *)puVar4 = uVar8;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)PTR_DAT_04380728 = puVar5;
    __cxa_guard_release(PTR_DAT_04380720);
  }
  if (puVar7 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    do {
      if (puVar7 == (undefined8 *)PTR_DAT_04380728) {
        plVar10 = plVar13;
        break;
      }
      puVar7 = (undefined8 *)*puVar7;
      plVar10 = (long *)0x0;
    } while (puVar7 != (undefined8 *)0x0);
  }
  FUN_01681c6c(plVar10);
  if ((plVar13 == (long *)0x0) || (uVar9 = FUN_02a43a5c(plVar13[0xb]), (uVar9 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016815cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return;
}


