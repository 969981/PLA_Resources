/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01311260; name: FUN_01311260
 */


void FUN_01311260(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  void *__s;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x788,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    memset(__s,0,0x788);
    puVar3 = PTR_DAT_0437a0d8;
    puVar2 = PTR_DAT_0437a0d0;
    lVar7 = 8;
    do {
      puVar1 = (undefined4 *)((long)__s + lVar7);
      *puVar1 = 7;
      *(undefined1 **)(puVar1 + 2) = &DAT_cbf29ce484222645;
      *(undefined1 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined1 *)(puVar1 + 9) = 0;
      puVar1[0xe] = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)puVar3;
      *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar3 + 0x10);
      plVar6 = *(long **)(puVar3 + 0x18);
      *(long **)(puVar1 + 0x16) = plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      lVar7 = lVar7 + 0x60;
    } while (puVar1 + 0x18 != (undefined4 *)((long)__s + 0x788));
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x788;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


