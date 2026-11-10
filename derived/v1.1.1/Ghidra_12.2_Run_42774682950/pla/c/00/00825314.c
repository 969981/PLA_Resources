/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825314; name: FUN_00825314
 */


undefined8 FUN_00825314(MessageQueueType *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    nn::os::JamMessageQueue(param_1,param_2);
    return 1;
  }
  uVar1 = nn::os::TryJamMessageQueue(param_1,param_2);
  return uVar1;
}


