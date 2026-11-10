/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b5250; name: FUN_010b5250
 */


void FUN_010b5250(undefined8 *param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
  if (puVar7 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    iVar6 = *param_3;
    uVar1 = *param_4;
    uVar3 = param_4[1];
    uVar2 = param_4[2];
    uVar4 = param_4[3];
    puVar7[6] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = uVar4;
    *puVar7 = uVar1;
    puVar7[1] = uVar3;
    puVar7[4] = 0;
    puVar7[5] = 0;
    if (iVar6 != 0) {
      FUN_010b9010(puVar7);
    }
    *param_1 = puVar7;
    param_1[1] = param_2;
    param_1[2] = 0x38;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


