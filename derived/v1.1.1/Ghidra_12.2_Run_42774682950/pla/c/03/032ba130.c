/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba130; name: FUN_032ba130
 */


long FUN_032ba130(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long local_28;
  long local_18;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_28);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      if (local_18 <= local_28) {
        local_18 = local_28;
      }
    }
  }
  else {
    local_18 = local_28;
  }
  return local_18;
}


