/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ecce54; name: FUN_01ecce54
 */


void FUN_01ecce54(undefined8 *param_1,long param_2)

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
  long lVar11;
  undefined8 *puVar12;
  
  if (*(char *)(param_2 + 0x162) == '\0') {
    uVar7 = *(ulong *)(param_2 + 0x70);
    if (uVar7 != 0) {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = (ulong)((uint)uVar7 - 1) & 0x15;
      }
      else {
        uVar9 = 0x15;
        if (uVar7 < 0x16) {
          uVar1 = (uint)uVar7 & 0xff;
          uVar2 = 0;
          if ((uVar7 & 0xff) != 0) {
            uVar2 = 0x15 / uVar1;
          }
          uVar9 = (ulong)(0x15 - uVar2 * uVar1);
        }
      }
      plVar10 = *(long **)(*(long *)(param_2 + 0x68) + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if (plVar10[1] == 0x15) {
              if ((int)plVar10[2] == 0x15) goto LAB_01eccf14;
            }
            else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar10[1];
            if (uVar8 == 0x15) {
              if ((int)plVar10[2] == 0x15) goto LAB_01eccf14;
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
    FUN_01ecd4e0();
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_01ecd2ac:
  *param_1 = 0;
  return;
LAB_01eccf14:
  lVar11 = plVar10[7];
  puVar12 = (undefined8 *)(lVar11 + 0x50);
  plVar10 = (long *)(**(code **)*puVar12)(puVar12);
  if (((*PTR_DAT_04382cc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04382cc8), iVar5 != 0))
  {
    uVar6 = FUN_01e38da0();
    *(undefined8 *)PTR_DAT_04382cd0 = uVar6;
    __cxa_guard_release(PTR_DAT_04382cc8);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (plVar10 == (long *)PTR_DAT_04382cd0) {
      plVar10 = *(long **)(lVar11 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar10;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,0x138,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00bd32e0();
    }
  }
  goto LAB_01ecd2ac;
}


