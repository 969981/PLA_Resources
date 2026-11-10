/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8cb6c; name: FUN_02c8cb6c
 */


void FUN_02c8cb6c(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,2);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
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
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    *param_1 = puVar4;
    param_1[1] = param_2;
    param_1[2] = 0x10;
    param_1[3] = 2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar4 = (undefined8 *)*param_1;
  }
  iVar3 = param_3 * 0x41c64e6d + 0x6073;
  iVar1 = iVar3 * 0x41c64e6d + 0x6073;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(short *)puVar4 = (short)((uint)iVar3 >> 0x10);
  iVar3 = iVar1 * 0x41c64e6d + 0x6073;
  *(short *)((long)puVar4 + 2) = (short)((uint)iVar1 >> 0x10);
  iVar1 = iVar3 * 0x41c64e6d + 0x6073;
  *(short *)((long)puVar4 + 4) = (short)((uint)iVar3 >> 0x10);
  iVar3 = iVar1 * 0x41c64e6d + 0x6073;
  *(short *)((long)puVar4 + 6) = (short)((uint)iVar1 >> 0x10);
  iVar1 = iVar3 * 0x41c64e6d + 0x6073;
  *(ushort *)(puVar4 + 1) = *(ushort *)(puVar4 + 1) ^ (ushort)((uint)iVar3 >> 0x10);
  iVar3 = iVar1 * 0x41c64e6d + 0x6073;
  *(ushort *)((long)puVar4 + 10) = *(ushort *)((long)puVar4 + 10) ^ (ushort)((uint)iVar1 >> 0x10);
  *(ushort *)((long)puVar4 + 0xc) = *(ushort *)((long)puVar4 + 0xc) ^ (ushort)((uint)iVar3 >> 0x10);
  *(ushort *)((long)puVar4 + 0xe) =
       *(ushort *)((long)puVar4 + 0xe) ^ (ushort)((uint)(iVar3 * 0x41c64e6d + 0x6073) >> 0x10);
  return;
}


