/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e8445c; name: FUN_01e8445c
 */


void FUN_01e8445c(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_LAB_04379530;
  puVar2 = PTR_DAT_04379528;
  puVar1 = PTR_DAT_04379520;
  lVar6 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar6) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    do {
      lVar9 = param_1[3];
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        FUN_008a62a4(puVar2);
        FUN_00100250(puVar3,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar1);
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (lVar5 == 0) {
        *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(lVar7 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(lVar7 + -8);
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar7 = lVar7 + -8;
      lVar8 = param_2[1] + -8;
      param_2[1] = lVar8;
    } while (lVar6 != lVar7);
    lVar6 = *param_1;
  }
  *param_1 = lVar8;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}


