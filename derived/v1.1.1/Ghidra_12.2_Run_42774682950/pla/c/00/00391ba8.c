/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00391ba8; name: thunk_FUN_00391bac
 */


undefined8 * thunk_FUN_00391bac(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_04399b08 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_04399b08), iVar1 == 0)) {
    return DAT_04399b00;
  }
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xe] = 0x3f800000;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    *(undefined2 *)(puVar2 + 6) = 1;
    *(undefined1 *)((long)puVar2 + 0x32) = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_04153f08;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
  }
  FUN_0031f0c0(FUN_00392218,puVar2);
  DAT_04399b00 = puVar2;
  __cxa_guard_release(&DAT_04399b08);
  return DAT_04399b00;
}


