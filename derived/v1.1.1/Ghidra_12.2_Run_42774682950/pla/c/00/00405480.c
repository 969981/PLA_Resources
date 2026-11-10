/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405480; name: FUN_00405480
 */


undefined8 FUN_00405480(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  TlsSlot *pTVar2;
  
  pTVar2 = (TlsSlot *)FUN_004002a0(0x10,"external/openssl/crypto/threads_nintendo.cpp",0x39);
  if (pTVar2 != (TlsSlot *)0x0) {
    iVar1 = nn::os::AllocateTlsSlot(pTVar2,(_func_void_ulong *)&LAB_00405500);
    if (iVar1 == 0) {
      *(undefined8 *)(pTVar2 + 8) = param_2;
      *param_1 = pTVar2;
      return 1;
    }
    FUN_00400420(pTVar2,"external/openssl/crypto/threads_nintendo.cpp",0x42);
  }
  return 0;
}


