/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f3e80; name: FUN_010f3e80
 */


void FUN_010f3e80(long param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong extraout_x12;
  undefined8 uVar13;
  undefined1 local_64 [4];
  undefined4 local_60 [2];
  long *local_58;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  puVar3 = PTR_DAT_04379c88;
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x278) - *(long *)(lVar8 + 0x270), lVar8 == 0)) {
    return;
  }
  uVar13 = *(undefined8 *)(lVar6 + 0x100);
  lVar6 = 0;
LAB_010f3f48:
  FUN_010f5a90(&local_58,param_1,lVar6);
  plVar4 = local_58;
  puVar1 = (ulong *)puVar3;
  if (local_58 != (long *)0x0) {
    puVar1 = (ulong *)(local_58 + 0xb);
  }
  uVar7 = *puVar1;
  local_60[0] = (undefined4)uVar7;
  uVar9 = param_2[1];
  if (uVar9 == 0) goto LAB_010f40a4;
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar11 = uVar9 - 1 & uVar7;
  }
  else {
    if (uVar7 < uVar9) goto LAB_010f40a8;
    uVar11 = 0;
    if (uVar9 != 0) {
      uVar11 = uVar7 / uVar9;
    }
    uVar11 = uVar7 - uVar11 * uVar9;
  }
  do {
    plVar12 = *(long **)(*param_2 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_010f4018;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_010f4018;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar2 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
LAB_010f40a4:
    FUN_010f8fc0();
    uVar7 = extraout_x8;
    uVar9 = extraout_x9;
    uVar10 = extraout_x12;
LAB_010f40a8:
    uVar11 = uVar7;
  } while( true );
LAB_010f4018:
  local_64[0] = (undefined1)plVar12[3];
  FUN_010ddf30(uVar13,local_60,local_64);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  lVar6 = lVar6 + 1;
  if (lVar6 == lVar8 >> 3) {
    return;
  }
  goto LAB_010f3f48;
}


