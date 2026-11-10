/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d3ea0; name: FUN_028d3ea0
 */


void FUN_028d3ea0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar6 = *param_3;
    *puVar3 = *param_4;
    puVar3[1] = param_4[1];
    puVar3[2] = param_4[2];
    plVar5 = (long *)param_4[3];
    puVar3[3] = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    puVar3[6] = uVar6;
    puVar3[7] = 0x555555555555555;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    puVar3[0xf] = 0;
    puVar3[0x15] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    *(undefined4 *)(puVar3 + 0x1b) = 0;
    puVar3[0x1c] = 0;
    puVar3[0xc] = 0x555555555555555;
    puVar3[0xd] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x1d) = 0x3f800000;
    puVar3[0x13] = uVar6;
    puVar3[0x14] = 0x3ffffffffffffff;
    puVar3[0x19] = 0x3ffffffffffffff;
    puVar3[0x1a] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = uVar6;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = uVar6;
    *param_1 = (long)puVar3;
    param_1[1] = (long)param_2;
    param_1[2] = 0xf0;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


