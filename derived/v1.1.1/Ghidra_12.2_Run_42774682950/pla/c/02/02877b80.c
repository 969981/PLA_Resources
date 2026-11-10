/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02877b80; name: FUN_02877b80
 */


void FUN_02877b80(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x598,8);
  if (plVar4 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    puVar2 = PTR_DAT_04387ee8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar1 = PTR_DAT_04387ef0;
    lVar6 = *param_3;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0;
    plVar4[0x17] = 0;
    plVar4[0x40] = 0;
    plVar4[0x2a] = 0;
    plVar4[0x2b] = 0;
    puVar1 = puVar1 + 0x10;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = lVar6;
    plVar4[0x12] = (long)puVar1;
    plVar4[0x13] = 0;
    plVar4[0x54] = (long)puVar1;
    plVar4[0x6a] = (long)puVar1;
    plVar4[0x80] = (long)puVar1;
    plVar4[0x96] = (long)puVar1;
    plVar4[0xac] = (long)puVar1;
    plVar4[0x41] = 0;
    plVar4[0x42] = 0;
    plVar4[0x43] = 0;
    plVar4[0x59] = 0;
    plVar4[0x58] = 0;
    plVar4[0x57] = 0;
    plVar4[0x56] = 0;
    plVar4[0x55] = 0;
    plVar4[0x6f] = 0;
    plVar4[0x6e] = 0;
    plVar4[0x6d] = 0;
    plVar4[0x6c] = 0;
    plVar4[0x6b] = 0;
    plVar4[0x85] = 0;
    plVar4[0x84] = 0;
    plVar4[0x83] = 0;
    plVar4[0x82] = 0;
    plVar4[0x81] = 0;
    plVar4[0x9b] = 0;
    plVar4[0x9a] = 0;
    plVar4[0x99] = 0;
    plVar4[0x98] = 0;
    plVar4[0x97] = 0;
    plVar4[0xb1] = 0;
    plVar4[0xb0] = 0;
    plVar4[0xaf] = 0;
    plVar4[0xae] = 0;
    plVar4[0xad] = 0;
    *(undefined4 *)(plVar4 + 0xb2) = 0;
    plVar4[0x28] = (long)puVar1;
    plVar4[0x29] = 0;
    plVar4[0x3e] = (long)puVar1;
    plVar4[0x3f] = 0;
    plVar4[0x2c] = 0;
    plVar4[0x2d] = 0;
    *param_1 = plVar4;
    param_1[1] = param_2;
    param_1[2] = 0x598;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


