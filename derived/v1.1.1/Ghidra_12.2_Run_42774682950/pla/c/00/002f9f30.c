/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9f30; name: FUN_002f9f30
 */


undefined * FUN_002f9f30(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_002fcba0();
  if (iVar1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x591,2,
                 "Skipping poll because of no wakeup fd.");
    return (undefined *)0x0;
  }
  uVar2 = FUN_002efbc0();
  if ((uVar2 & 1) != 0) {
    DAT_04399800 = 1;
    FUN_002ef6d0(&DAT_04399810);
    FUN_002efcc4(&LAB_002f9fa0);
  }
  return &DAT_04153370;
}


