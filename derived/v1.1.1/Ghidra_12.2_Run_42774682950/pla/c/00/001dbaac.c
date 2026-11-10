/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dbaac; name: FUN_001dbaac
 */


undefined8 FUN_001dbaac(void)

{
  int iVar1;
  undefined8 local_18;
  
  if ((DAT_0438eac8 == 0) && (iVar1 = FUN_001db97c(3,1), iVar1 != 0)) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_001fccdc(&local_18);
    if (iVar1 != 0) {
      local_18 = 0;
    }
  }
  return local_18;
}


