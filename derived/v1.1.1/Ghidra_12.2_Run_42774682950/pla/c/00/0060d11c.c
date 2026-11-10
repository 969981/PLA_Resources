/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060d11c; name: FUN_0060d11c
 */


void FUN_0060d11c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  undefined4 local_24;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar1 == 0) {
    return;
  }
  local_24 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) || (*(ulong *)(param_2 + 0x10) == 0)) {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 <= *(ulong *)(param_2 + 0x10)) {
      __n = 4 - uVar1;
      uVar2 = uVar2 + __n;
      FUN_0060b82c((ulong *)(param_2 + 8),uVar2,1);
      memcpy((void *)(*(long *)(param_2 + 0x18) + *(long *)(param_2 + 8)),&local_24,__n);
      *(ulong *)(param_2 + 8) = uVar2;
      if ((*(ulong *)(param_2 + 0x10) < uVar2) ||
         (*(long *)(param_2 + 0x18) == 0 && *(ulong *)(param_2 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x109,"IsConsistent()",PTR_DAT_043752a0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x103,"IsConsistent()",PTR_DAT_043752a0);
}


