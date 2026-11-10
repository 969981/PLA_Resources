/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0dfcc; name: FUN_02f0dfcc
 */


undefined4 FUN_02f0dfcc(long param_1)

{
  undefined4 uVar1;
  
  if (DAT_0440ab98 == '\0') {
    *(undefined1 *)(param_1 + 0x178) = 0;
    nn::os::InitializeEvent(param_1 + 0x150,0,1);
    FUN_02e717c0(FUN_02f0e21c,param_1,&DAT_0440a4e0,&DAT_0440ab58,"AK::BankManager");
    uVar1 = 1;
    if (DAT_0440ab98 == '\0') {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


