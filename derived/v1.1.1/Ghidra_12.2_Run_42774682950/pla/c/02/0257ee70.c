/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257ee70; name: FUN_0257ee70
 */


void FUN_0257ee70(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xa0,8);
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
    uVar5 = *param_3;
    uVar6 = *param_4;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 *)((long)puVar3 + 0x8c) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined1 *)((long)puVar3 + 0x94) = 0;
    *(undefined1 *)((long)puVar3 + 0x9c) = 0;
    puVar3[0x10] = 0;
    *(undefined1 *)(puVar3 + 0x11) = 0;
    puVar3[2] = uVar6;
    puVar3[3] = 0;
    *puVar3 = &PTR_LAB_0425da18;
    puVar3[1] = uVar5;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *param_1 = puVar3;
    param_1[1] = param_2;
    param_1[2] = 0xa0;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


