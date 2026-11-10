/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010fa758; name: FUN_010fa758
 */


void FUN_010fa758(long param_1,long param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long local_58;
  long local_50;
  undefined4 local_48 [2];
  
  local_50 = param_2;
  local_48[0] = param_5;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar3 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar3;
  local_58 = (long)(int)param_4;
  FUN_010fbae4(*(undefined8 *)(lVar3 + 0x100),local_48,&local_50,&local_58);
  lVar3 = local_50;
  uVar10 = 0;
LAB_010fa81c:
  lVar4 = *(long *)(lVar3 + uVar10 * 8);
  if (lVar4 == 0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x5660);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & param_3;
    }
    else {
      uVar7 = param_3;
      if (uVar5 <= param_3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_3 / uVar5;
        }
        uVar7 = param_3 - uVar7 * uVar5;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x5658) + uVar7 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar8, plVar9 != (long *)0x0)) {
      if (1 < uVar6) {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == param_3) {
            if (plVar9[2] == param_3) goto LAB_010fa8c8;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) goto LAB_010fa94c;
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_010fa94c;
        } while( true );
      }
      do {
        if (plVar9[1] == param_3) {
          if (plVar9[2] == param_3) goto LAB_010fa8c8;
        }
        else if ((plVar9[1] & uVar5 - 1) != uVar7) break;
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) break;
      } while( true );
    }
  }
LAB_010fa94c:
                    /* WARNING: Subroutine does not return */
  FUN_010ff3c0();
LAB_010fa8c8:
  local_58 = lVar4;
  FUN_010fc044(plVar9[3],&local_58,&local_58);
  uVar10 = uVar10 + 1;
  if (uVar10 == param_4) {
    return;
  }
  goto LAB_010fa81c;
}


