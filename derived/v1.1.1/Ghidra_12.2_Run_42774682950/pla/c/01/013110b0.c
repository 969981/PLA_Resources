/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013110b0; name: FUN_013110b0
 */


void FUN_013110b0(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  void *__s;
  long lVar4;
  long lVar5;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x2a88,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memset(__s,0,0x2a88);
    lVar5 = 8;
    do {
      puVar1 = (undefined4 *)((long)__s + lVar5);
      lVar5 = lVar5 + 0x110;
      *puVar1 = 7;
      *(undefined1 **)(puVar1 + 2) = &DAT_cbf29ce484222645;
      *(undefined2 *)(puVar1 + 4) = 0;
      puVar1[10] = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      puVar1[0x12] = 0;
      *(undefined2 *)(puVar1 + 0x14) = 0;
      puVar1[0x1a] = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      puVar1[0x22] = 0;
      *(undefined2 *)(puVar1 + 0x24) = 0;
      puVar1[0x2a] = 0;
      puVar1[0x32] = 0;
      *(undefined1 **)(puVar1 + 0x2c) = &DAT_cbf29ce484222645;
      *(undefined2 *)(puVar1 + 0x34) = 0;
      puVar1[0x3a] = 0;
      puVar1[0x42] = 0;
      *(undefined1 **)(puVar1 + 0x3c) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 6) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 8) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 0xc) = &DAT_cbf29ce484222645;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined1 **)(puVar1 + 0x16) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 0x18) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 0x1c) = &DAT_cbf29ce484222645;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      *(undefined1 **)(puVar1 + 0x26) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 0x28) = &DAT_cbf29ce484222645;
      *(undefined8 *)(puVar1 + 0x2e) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined1 **)(puVar1 + 0x36) = &DAT_cbf29ce484222645;
      *(undefined1 **)(puVar1 + 0x38) = &DAT_cbf29ce484222645;
      *(undefined8 *)(puVar1 + 0x3e) = 0;
      *(undefined8 *)(puVar1 + 0x40) = 0;
    } while (puVar1 + 0x44 != (undefined4 *)((long)__s + 0x2a88));
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x2a88;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


