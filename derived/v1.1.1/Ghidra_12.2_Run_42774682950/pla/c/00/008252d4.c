/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008252d4; name: FUN_008252d4
 */


ulong FUN_008252d4(MessageQueueType *param_1,int param_2)

{
  ulong uVar1;
  ulong local_8;
  
  if (param_2 == 0) {
    nn::os::ReceiveMessageQueue(&local_8,param_1);
    return local_8;
  }
  uVar1 = nn::os::TryReceiveMessageQueue(&local_8,param_1);
  if ((uVar1 & 1) == 0) {
    local_8 = 0;
  }
  return local_8;
}


