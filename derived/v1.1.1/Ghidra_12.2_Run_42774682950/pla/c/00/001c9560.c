/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c9560; name: thunk_FUN_032ba130
 */


long thunk_FUN_032ba130(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lStack_28;
  long lStack_18;
  
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) == 0) {
    nn::time::Initialize();
  }
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&lStack_18);
  iVar2 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&lStack_28);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      if (lStack_18 <= lStack_28) {
        lStack_18 = lStack_28;
      }
    }
  }
  else {
    lStack_18 = lStack_28;
  }
  return lStack_18;
}


