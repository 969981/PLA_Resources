/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155dd78; name: FUN_0155dd78
 */


long FUN_0155dd78(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long lVar10;
  
  iVar3 = *param_2;
  uVar9 = (ulong)iVar3;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar9 && (plVar7[1] & uVar8 - 1) != unaff_x24)) goto LAB_0155de7c;
        } while ((int)plVar7[2] != iVar3);
      }
      else {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0155de7c;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) {
            if (uVar8 <= uVar5) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar1 * uVar8;
            }
            if (uVar5 != unaff_x24) goto LAB_0155de7c;
          }
        } while ((int)plVar7[2] != iVar3);
      }
      goto LAB_0155dff8;
    }
  }
LAB_0155de7c:
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x18,4);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar10 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    *(int *)(plVar7 + 2) = *param_2;
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(int *)(plVar7 + 2) = *param_2;
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    FUN_0156b184(param_1,uVar5);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x24 = uVar9;
    }
    else {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      unaff_x24 = uVar9 - uVar5 * uVar8;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar6;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar5 * uVar8;
      }
      plVar6 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_0155dfe8;
    }
  }
  else {
    *plVar7 = *plVar6;
LAB_0155dfe8:
    *plVar6 = (long)plVar7;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_0155dff8:
  return (long)plVar7 + 0x14;
}


