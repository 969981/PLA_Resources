/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01099730; name: FUN_01099730
 */


void FUN_01099730(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_LAB_04379530;
  puVar2 = PTR_DAT_04379528;
  puVar1 = PTR_DAT_04379520;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    do {
      uVar7 = *param_1;
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        FUN_008a62a4(puVar2);
        FUN_00100250(puVar3,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar1);
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (lVar5 == 0) {
        *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(param_3 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(param_3 + -8);
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      param_3 = param_3 + -8;
      lVar6 = *param_4 + -8;
      *param_4 = lVar6;
    } while (param_2 != param_3);
  }
  return;
}


