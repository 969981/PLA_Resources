/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008252b8; name: FUN_008252b8
 */


undefined8 FUN_008252b8(MessageQueueType *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    nn::os::SendMessageQueue(param_1,param_2);
    return 1;
  }
  uVar1 = nn::os::TrySendMessageQueue(param_1,param_2);
  return uVar1;
}


