/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168268c; name: FUN_0168268c
 */


void FUN_0168268c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *local_38;
  
  uVar7 = *(ulong *)(param_1 + 0x140);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = (ulong)((uint)uVar7 - 1) & 9;
    }
    else {
      uVar9 = 9;
      if (uVar7 < 10) {
        uVar1 = (uint)uVar7 & 0xff;
        uVar2 = 0;
        if ((uVar7 & 0xff) != 0) {
          uVar2 = 9 / uVar1;
        }
        uVar9 = (ulong)(9 - uVar2 * uVar1);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x138) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == 9) {
            if ((int)plVar10[2] == 9) goto LAB_0168275c;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == 9) {
            if ((int)plVar10[2] == 9) goto LAB_0168275c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar3 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  FUN_01682910();
LAB_016828a0:
  iVar5 = __cxa_guard_acquire(PTR_DAT_0437eef8);
  puVar4 = PTR_DAT_043794d8;
  if (iVar5 != 0) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
      uVar6 = FUN_0087f8f0();
      *(undefined8 *)puVar4 = uVar6;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *unaff_x21 = puVar4;
    __cxa_guard_release(PTR_DAT_0437eef8);
  }
LAB_0168283c:
  *(undefined8 **)PTR_DAT_04380728 = unaff_x21;
  __cxa_guard_release(PTR_DAT_04380720);
joined_r0x01682790:
  if (local_38 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    do {
      if (local_38 == (undefined8 *)PTR_DAT_04380728) {
        plVar10 = unaff_x20 + -10;
        break;
      }
      local_38 = (undefined8 *)*local_38;
      plVar10 = (long *)0x0;
    } while (local_38 != (undefined8 *)0x0);
  }
  FUN_0168291c(plVar10);
  if ((unaff_x19 == (long *)0x0) || (uVar7 = FUN_02a43a5c(unaff_x19[0xb]), (uVar7 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016827f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
  return;
LAB_0168275c:
  unaff_x19 = (long *)plVar10[3];
  if (unaff_x19 != (long *)0x0) {
    FUN_02a439f4(unaff_x19[0xb]);
  }
  unaff_x20 = unaff_x19 + 10;
  local_38 = (undefined8 *)(**(code **)*unaff_x20)(unaff_x20);
  if (((*PTR_DAT_04380720 & 1) != 0) || (iVar5 = __cxa_guard_acquire(PTR_DAT_04380720), iVar5 == 0))
  goto joined_r0x01682790;
  unaff_x21 = (undefined8 *)PTR_DAT_0437ef00;
  if ((*PTR_DAT_0437eef8 & 1) == 0) goto LAB_016828a0;
  goto LAB_0168283c;
}


