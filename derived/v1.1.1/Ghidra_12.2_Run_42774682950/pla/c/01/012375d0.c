/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012375d0; name: FUN_012375d0
 */


void FUN_012375d0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_LAB_04379530;
  puVar3 = PTR_DAT_04379528;
  puVar2 = PTR_DAT_04379520;
  lVar8 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar8) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    do {
      lVar10 = param_1[3];
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        FUN_008a62a4(puVar3);
        FUN_00100250(puVar4,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (lVar6 == 0) {
        uVar1 = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
        *(undefined8 *)(lVar7 + -8) = uVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        uVar1 = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar7 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
        *(undefined8 *)(lVar7 + -8) = uVar1;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = param_2[1] + -0x10;
      param_2[1] = lVar7;
    } while (lVar8 != lVar9);
    lVar8 = *param_1;
  }
  *param_1 = lVar7;
  param_2[1] = lVar8;
  lVar8 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar8;
  *param_2 = param_2[1];
  return;
}


