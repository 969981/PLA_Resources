/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e791c4; name: FUN_01e791c4
 */


void FUN_01e791c4(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_LAB_04379530;
  puVar3 = PTR_DAT_04379528;
  puVar2 = PTR_DAT_04379520;
  lVar10 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar10) {
    lVar11 = param_2[1];
  }
  else {
    lVar11 = param_2[1];
    do {
      lVar9 = param_1[3];
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        FUN_008a62a4(puVar3);
        FUN_00100250(puVar4,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      *(undefined8 *)(lVar11 + -0x40) = *(undefined8 *)(lVar8 + -0x40);
      plVar7 = *(long **)(lVar8 + -0x38);
      *(long **)(lVar11 + -0x38) = plVar7;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(lVar8 + -0x30);
      *(undefined8 *)(lVar11 + -0x28) = *(undefined8 *)(lVar8 + -0x28);
      *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar8 + -0x20);
      plVar7 = *(long **)(lVar8 + -0x18);
      *(long **)(lVar11 + -0x18) = plVar7;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      *(undefined4 *)(lVar11 + -0x10) = *(undefined4 *)(lVar8 + -0x10);
      puVar1 = (undefined1 *)(lVar8 + -8);
      lVar8 = lVar8 + -0x40;
      *(undefined1 *)(lVar11 + -8) = *puVar1;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar11 = param_2[1] + -0x40;
      param_2[1] = lVar11;
    } while (lVar10 != lVar8);
    lVar10 = *param_1;
  }
  *param_1 = lVar11;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return;
}


